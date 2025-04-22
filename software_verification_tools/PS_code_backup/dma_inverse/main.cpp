#include "xaxidma.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "xil_cache.h"

/************************** Constant Definitions *****************************/

// Device related constants
#define DMA_DEV_ID              0

// Memory related constants
#define DDR_BASE_ADDR           0x00100000
#define MEM_BASE_ADDR           (DDR_BASE_ADDR + 0x1000000)
#define TX_BUFFER_BASE          (MEM_BASE_ADDR + 0x00100000)
#define RX_BUFFER_BASE          (MEM_BASE_ADDR + 0x00300000)
#define RESET_TIMEOUT_COUNTER   10000

// Data size constants
#define MAX_PKT_LEN             1024

// Polling timeout
#define POLL_TIMEOUT            1000000

// Display constants
#define DATA_DISPLAY_COUNT      16  // Number of data bytes to display in success case

/************************** Function Prototypes ******************************/

static int verify_data(int length);
static int check_dma_done(XAxiDma *axidma_ptr, int direction);
static void display_data(u8 *tx_buffer, u8 *rx_buffer, int count);

/************************** Variable Definitions *****************************/

static XAxiDma axidma;          // XAxiDma instance

/************************** Function Definitions *****************************/

int main(void)
{
    int status;
    u8 *tx_buffer_ptr;
    u8 *rx_buffer_ptr;
    XAxiDma_Config *config;
    
    tx_buffer_ptr = (u8 *)TX_BUFFER_BASE;
    rx_buffer_ptr = (u8 *)RX_BUFFER_BASE;
    
    xil_printf("\r\n--- Bit-Flip Test Program Started --- \r\n");
    
    // Look up DMA configuration
    config = XAxiDma_LookupConfig(DMA_DEV_ID);
    if (!config) {
        xil_printf("No configuration found for device %d\r\n", DMA_DEV_ID);
        return XST_FAILURE;
    }
    
    // Initialize DMA engine
    status = XAxiDma_CfgInitialize(&axidma, config);
    if (status != XST_SUCCESS) {
        xil_printf("DMA initialization failed %d\r\n", status);
        return XST_FAILURE;
    }
    
    // Ensure not in SG mode
    if (XAxiDma_HasSg(&axidma)) {
        xil_printf("Device configured in SG mode, simple mode required for this example \r\n");
        return XST_FAILURE;
    }
    
    // Disable interrupts, we will use polling
    XAxiDma_IntrDisable(&axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
    XAxiDma_IntrDisable(&axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
    
    // Prepare transmission data - cycling pattern from 0 to 255
    xil_printf("Preparing transmit buffer...\r\n");
    for (int i = 0; i < MAX_PKT_LEN; i++) {
        tx_buffer_ptr[i] = (u8)(i & 0xFF);
    }
    
    xil_printf("Transmit buffer initialized with %d bytes of incremental data\r\n", MAX_PKT_LEN);
    xil_printf("Sample data (first %d bytes):\r\n", DATA_DISPLAY_COUNT);
    for (int i = 0; i < DATA_DISPLAY_COUNT; i++) {
        xil_printf("TX[%3d] = 0x%02X\r\n", i, tx_buffer_ptr[i]);
    }
    
    // Flush data cache
    Xil_DCacheFlushRange((UINTPTR)tx_buffer_ptr, MAX_PKT_LEN);
    
    // Start receive DMA transfer, preparing to receive data
    xil_printf("\r\nStarting receive transfer...\r\n");
    status = XAxiDma_SimpleTransfer(&axidma, (UINTPTR)rx_buffer_ptr,
                                    MAX_PKT_LEN, XAXIDMA_DEVICE_TO_DMA);
    if (status != XST_SUCCESS) {
        xil_printf("Failed to set up receive transfer %d\r\n", status);
        goto Done;
    }
    
    // Start transmit DMA transfer, sending data to bit-flip module
    xil_printf("Starting transmit transfer...\r\n");
    status = XAxiDma_SimpleTransfer(&axidma, (UINTPTR)tx_buffer_ptr,
                                    MAX_PKT_LEN, XAXIDMA_DMA_TO_DEVICE);
    if (status != XST_SUCCESS) {
        xil_printf("Failed to set up transmit transfer %d\r\n", status);
        goto Done;
    }
    
    // Poll waiting for transmit to complete
    xil_printf("Waiting for transmit to complete...\r\n");
    status = check_dma_done(&axidma, XAXIDMA_DMA_TO_DEVICE);
    if (status != XST_SUCCESS) {
        xil_printf("Transmit transfer timed out or failed\r\n");
        goto Done;
    }
    
    xil_printf("Transmit transfer completed\r\n");
    
    // Poll waiting for receive to complete
    xil_printf("Waiting for receive to complete...\r\n");
    status = check_dma_done(&axidma, XAXIDMA_DEVICE_TO_DMA);
    if (status != XST_SUCCESS) {
        xil_printf("Receive transfer timed out or failed\r\n");
        goto Done;
    }
    
    xil_printf("Receive transfer completed\r\n");
    
    // Invalidate data cache to ensure we read the latest data
    Xil_DCacheInvalidateRange((UINTPTR)rx_buffer_ptr, MAX_PKT_LEN);
    
    // Display sample of received data
    xil_printf("\r\nSample of received data (first %d bytes):\r\n", DATA_DISPLAY_COUNT);
    for (int i = 0; i < DATA_DISPLAY_COUNT; i++) {
        xil_printf("RX[%3d] = 0x%02X\r\n", i, rx_buffer_ptr[i]);
    }
    
    // Verify received data - should be bit-flipped from original data
    status = verify_data(MAX_PKT_LEN);
    if (status != XST_SUCCESS) {
        xil_printf("Data verification failed\r\n");
        goto Done;
    }
    
    xil_printf("Bit-flip test successfully completed!\r\n");
    
Done:
    xil_printf("--- Test Program Ended --- \r\n");
    return XST_SUCCESS;
}

/**
 * Verify received data was correctly bit-flipped
 */
static int verify_data(int length)
{
    u8 *tx_buffer = (u8 *)TX_BUFFER_BASE;
    u8 *rx_buffer = (u8 *)RX_BUFFER_BASE;
    int error_count = 0;
    int correct_count = 0;
    
    xil_printf("\r\nVerifying received data...\r\n");
    
    for (int i = 0; i < length; i++) {
        u8 expected = ~tx_buffer[i]; // Bit-flip of original data
        
        if (rx_buffer[i] != expected) {
            error_count++;
            if (error_count <= 10) { // Only print first 10 errors to avoid console overflow
                xil_printf("Data error [%d]: Sent=0x%02X, Expected=0x%02X, Received=0x%02X\r\n", 
                           i, tx_buffer[i], expected, rx_buffer[i]);
            }
        } else {
            correct_count++;
        }
    }
    
    if (error_count > 0) {
        xil_printf("Total of %d bytes had errors out of %d\r\n", error_count, length);
        return XST_FAILURE;
    }
    
    // Display side-by-side comparison of sample data
    xil_printf("\r\nDetailed verification results:\r\n");
    xil_printf("All %d bytes verified correct - Bit-flip function working properly!\r\n", correct_count);
    
    // Display side-by-side comparison
    display_data(tx_buffer, rx_buffer, DATA_DISPLAY_COUNT);
    
    return XST_SUCCESS;
}

/**
 * Display side-by-side comparison of original and bit-flipped data
 */
static void display_data(u8 *tx_buffer, u8 *rx_buffer, int count)
{
    xil_printf("\r\nData comparison (first %d bytes):\r\n", count);
    xil_printf("Index | Original | Bit-Flipped | Expected | Status\r\n");
    xil_printf("------+----------+-------------+----------+--------\r\n");
    
    for (int i = 0; i < count; i++) {
        u8 expected = ~tx_buffer[i];
        xil_printf("%4d  | 0x%02X     | 0x%02X        | 0x%02X     | %s\r\n", 
                  i, tx_buffer[i], rx_buffer[i], expected, 
                  (rx_buffer[i] == expected) ? "CORRECT" : "ERROR");
    }
}

/**
 * Check if DMA transfer is complete using polling
 */
static int check_dma_done(XAxiDma *axidma_ptr, int direction)
{
    int timeout = POLL_TIMEOUT;
    
    // Poll until transfer completes or timeout
    while (timeout > 0) {
        if (direction == XAXIDMA_DMA_TO_DEVICE) {
            // Check if MM2S channel is idle
            if (XAxiDma_Busy(axidma_ptr, XAXIDMA_DMA_TO_DEVICE) == 0) {
                return XST_SUCCESS;
            }
        } else {
            // Check if S2MM channel is idle
            if (XAxiDma_Busy(axidma_ptr, XAXIDMA_DEVICE_TO_DMA) == 0) {
                return XST_SUCCESS;
            }
        }
        
        timeout--;
    }
    
    // If we got here, we timed out
    if (direction == XAXIDMA_DMA_TO_DEVICE) {
        xil_printf("Transmit transfer timed out\r\n");
    } else {
        xil_printf("Receive transfer timed out\r\n");
    }
    
    // Try to reset DMA after timeout
    XAxiDma_Reset(axidma_ptr);
    int reset_timeout = RESET_TIMEOUT_COUNTER;
    while (reset_timeout > 0) {
        if (XAxiDma_ResetIsDone(axidma_ptr)) {
            break;
        }
        reset_timeout--;
    }
    
    return XST_FAILURE;
}