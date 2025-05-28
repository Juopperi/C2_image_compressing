#include "xaxidma.h"
#include "xparameters.h"
#include "xil_cache.h"
#include "xil_printf.h"
#include <stdio.h>

/********************************************************************************
 * Simplified DMA Operation Program
 * ===============================
 * This program demonstrates the basic process of DMA operations, focusing on data sending and receiving
 ********************************************************************************/

// DMA device ID and memory address definitions
#define DMA_DEV_ID          0
#define MEM_BASE_ADDR       0x10000000
#define TX_BUFFER_BASE      (MEM_BASE_ADDR + 0x00100000)
#define RX_BUFFER_BASE      (MEM_BASE_ADDR + 0x00300000)
#define BUFFER_SIZE         0x100  // 256 bytes

// DMA operation structure
XAxiDma AxiDma;

int main(void) {
    int Status;
    XAxiDma_Config *CfgPtr;
    int i;
    u32 *TxBufferPtr = (u32 *)TX_BUFFER_BASE;
    u32 *RxBufferPtr = (u32 *)RX_BUFFER_BASE;
    
    xil_printf("Simple DMA Data Transfer Example Started\r\n");

    /********************************************************************************
     * Step 1: Initialize the transmit and receive buffers
     * =================================================
     * For testing, we fill the transmit buffer with incremental values and clear the receive buffer
     ********************************************************************************/
    
    xil_printf("Initializing buffers...\r\n");
    // Fill transmit buffer with test data
    for(i = 0; i < BUFFER_SIZE/4; i++) {
        TxBufferPtr[i] = i;             // Fill transmit buffer
        RxBufferPtr[i] = 0;             // Clear receive buffer
    }
    
    /********************************************************************************
     * Step 2: Cache Management
     * ======================
     * Flush cache to ensure DMA can access the latest data
     ********************************************************************************/
    
    // Flush cache for transmit and receive buffers
    Xil_DCacheFlushRange((u32)TxBufferPtr, BUFFER_SIZE);
    Xil_DCacheFlushRange((u32)RxBufferPtr, BUFFER_SIZE);
    
    /********************************************************************************
     * Step 3: Configure and Initialize DMA
     * ==================================
     * Look up DMA configuration and initialize DMA controller
     ********************************************************************************/
    
    // Look up DMA configuration
    CfgPtr = XAxiDma_LookupConfig(DMA_DEV_ID);
    if (!CfgPtr) {
        xil_printf("DMA configuration lookup failed\r\n");
        return XST_FAILURE;
    }
    
    // Initialize DMA
    Status = XAxiDma_CfgInitialize(&AxiDma, CfgPtr);
    if (Status != XST_SUCCESS) {
        xil_printf("DMA initialization failed: %d\r\n", Status);
        return XST_FAILURE;
    }
    
    // Confirm using simple DMA mode (not scatter-gather mode)
    if (XAxiDma_HasSg(&AxiDma)) {
        xil_printf("Simple DMA mode required\r\n");
        return XST_FAILURE;
    }
    
    // Disable DMA interrupts (using polling method)
    XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
    XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
    
    /********************************************************************************
     * Step 4: Start DMA Transfer
     * ========================
     * Start MM2S (transmit) and S2MM (receive) transfers
     ********************************************************************************/
    
    // Start receive channel - prepare to receive data to RX buffer
    xil_printf("Starting S2MM receive channel\r\n");
    Status = XAxiDma_SimpleTransfer(&AxiDma, (u32)RxBufferPtr, BUFFER_SIZE, XAXIDMA_DEVICE_TO_DMA);
    if (Status != XST_SUCCESS) {
        xil_printf("Starting receive channel failed: %d\r\n", Status);
        return XST_FAILURE;
    }
    
    // Start transmit channel - send TX buffer data
    xil_printf("Starting MM2S transmit channel\r\n");
    Status = XAxiDma_SimpleTransfer(&AxiDma, (u32)TxBufferPtr, BUFFER_SIZE, XAXIDMA_DMA_TO_DEVICE);
    if (Status != XST_SUCCESS) {
        xil_printf("Starting transmit channel failed: %d\r\n", Status);
        return XST_FAILURE;
    }
    
    /********************************************************************************
     * Step 5: Wait for Transfer Completion
     * ==================================
     * Confirm transfer completion by polling DMA status
     ********************************************************************************/
    
    xil_printf("Waiting for DMA transfer to complete...\r\n");
    
    // Wait for transmit to complete
    while (XAxiDma_Busy(&AxiDma, XAXIDMA_DMA_TO_DEVICE)) {
        // Wait for transmit completion, timeout detection can be added
    }
    
    // Wait for receive to complete
    while (XAxiDma_Busy(&AxiDma, XAXIDMA_DEVICE_TO_DMA)) {
        // Wait for receive completion, timeout detection can be added
    }
    
    xil_printf("DMA transfer complete\r\n");
    
    /********************************************************************************
     * Step 6: Refresh Cache and Verify Data
     * ===================================
     * Invalidate receive buffer cache to ensure reading the latest data written by DMA
     ********************************************************************************/
    
    // Invalidate receive buffer cache
    Xil_DCacheInvalidateRange((u32)RxBufferPtr, BUFFER_SIZE);
    
    // Verify received data
    xil_printf("Verifying received data:\r\n");
    for (i = 0; i < 16; i++) {  // Only print first 16 words (64 bytes) as example
        xil_printf("[%02d]: 0x%08x\r\n", i, RxBufferPtr[i]);
    }
    
    // Compare sent and received data for consistency
    for (i = 0; i < BUFFER_SIZE/4; i++) {
        if (RxBufferPtr[i] != TxBufferPtr[i]) {
            xil_printf("Data mismatch @ %d: Sent=0x%08x, Received=0x%08x\r\n", 
                      i, TxBufferPtr[i], RxBufferPtr[i]);
            return XST_FAILURE;
        }
    }
    
    xil_printf("DMA data transfer verification successful!\r\n");
    
    /********************************************************************************
     * DMA Usage Summary
     * ===============
     * 
     * 1. Initialize buffers: Prepare transmit data, clear receive area
     * 2. Manage cache: Flush transmit area to ensure DMA reads latest data
     * 3. Configure DMA: Initialize DMA controller
     * 4. Start transfer: Start receive and transmit channels
     * 5. Wait for completion: Wait for both channels to complete transfer
     * 6. Data verification: Invalidate receive cache, verify received data
     * 
     * Note: In actual applications, timeout settings, error handling,
     * and interrupt configuration may need to be adjusted based on specific scenarios.
     ********************************************************************************/
    
    return XST_SUCCESS;
} 