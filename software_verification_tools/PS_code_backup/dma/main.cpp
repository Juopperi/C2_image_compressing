#include "xaxidma.h"
#include "xparameters.h"
#include "xil_cache.h"
#include "xil_printf.h"
#include <stdio.h>

/********************************************************************************
 * DMA BASICS FOR BEGINNERS
 * ========================
 * 
 * What is DMA?
 * -----------
 * Direct Memory Access (DMA) allows hardware to access memory independently of
 * the CPU. This offloads data transfer tasks from the CPU, improving system
 * performance by allowing the CPU to perform other operations while data
 * transfers occur in parallel.
 * 
 * Why Use DMA?
 * -----------
 * 1. Reduces CPU overhead for data transfers
 * 2. Increases system throughput
 * 3. Essential for applications requiring high-speed data movement
 * 
 * AXI DMA Architecture
 * -------------------
 * The Xilinx AXI DMA IP consists of two main channels:
 * - MM2S (Memory-Mapped to Stream): Reads from memory and sends to a stream interface
 * - S2MM (Stream to Memory-Mapped): Receives from a stream interface and writes to memory
 * 
 * Each channel operates independently and has its own set of control/status registers.
 ********************************************************************************/

#define XPAR_AXIDMA_0_DEVICE_ID        0

#define DMA_DEV_ID        XPAR_AXIDMA_0_DEVICE_ID
#define MEM_BASE_ADDR     0x10000000
#define TX_BUFFER_BASE    (MEM_BASE_ADDR + 0x00100000)
#define RX_BUFFER_BASE    (MEM_BASE_ADDR + 0x00300000)
#define MAX_PKT_LEN       0x100  // Reduced to 256 bytes

// Timeout parameters
#define TIMEOUT_LIMIT     10000000

/********************************************************************************
 * DMA SETUP GUIDELINES
 * ====================
 * 
 * DMA Buffer Considerations:
 * -------------------------
 * 1. Buffers must be properly aligned (typically to cache line boundaries)
 * 2. For high performance, buffers should be in non-cached memory or cache-coherent
 * 3. Buffer addresses must be physical addresses the DMA hardware can access
 * 
 * Memory Organization:
 * -------------------
 * In this example:
 * - MEM_BASE_ADDR (0x10000000): Base memory address accessible by DMA
 * - TX_BUFFER_BASE: Source buffer for data being sent to device
 * - RX_BUFFER_BASE: Destination buffer for data coming from device
 * - The buffers are placed at specific offsets to ensure proper alignment
 ********************************************************************************/

XAxiDma AxiDma;

// Helper function to manually read DMA registers
u32 ReadDmaReg(u32 BaseAddress, u32 RegOffset) {
    return *(volatile u32 *)(BaseAddress + RegOffset);
}

int main(void) {
    int Status;
    XAxiDma_Config *CfgPtr;
    int i;
    u32 *TxBufferPtr = (u32 *)TX_BUFFER_BASE;
    u32 *RxBufferPtr = (u32 *)RX_BUFFER_BASE;
    u32 timeout_counter = 0;
    
    xil_printf("AXI DMA Loopback Test Started\r\n");

    /********************************************************************************
     * STEP 1: BUFFER INITIALIZATION
     * =============================
     * 
     * Why Initialize Buffers?
     * ----------------------
     * - The transmit buffer must contain the data you want to send
     * - The receive buffer should be cleared to easily verify received data
     * 
     * Buffer Initialization Pattern:
     * ----------------------------
     * - This example initializes the TX buffer with incrementing values (0,1,2,...)
     * - The RX buffer is initialized to zeros
     * - This pattern makes it easy to verify data integrity after transfer
     ********************************************************************************/
    
    // Initialize buffers
    xil_printf("Initializing buffers...\r\n");
    for(i = 0; i < MAX_PKT_LEN/4; i++) {
        TxBufferPtr[i] = i;
        RxBufferPtr[i] = 0;
    }
    xil_printf("Buffer initialization complete\r\n");

    /********************************************************************************
     * STEP 2: CACHE MANAGEMENT
     * =======================
     * 
     * Why Cache Management is Critical for DMA:
     * ---------------------------------------
     * DMA operates on physical memory, while CPU accesses memory through the cache.
     * This can create coherency issues if not properly managed:
     * 
     * 1. For TX buffers (data from CPU to DMA):
     *    - CPU writes data to TX buffer (may be cached)
     *    - Need to flush cache to ensure DMA sees the latest data
     * 
     * 2. For RX buffers (data from DMA to CPU):
     *    - DMA writes directly to physical memory
     *    - Need to invalidate cache so CPU reads the latest data
     * 
     * Common Cache Functions:
     * ---------------------
     * - Xil_DCacheFlushRange(): Writes cached data to memory
     * - Xil_DCacheInvalidateRange(): Marks cache data as invalid so next read comes from memory
     ********************************************************************************/
    
    // Flush data cache
    xil_printf("Flushing cache...\r\n");
    Xil_DCacheFlushRange((u32)TxBufferPtr, MAX_PKT_LEN);
    Xil_DCacheFlushRange((u32)RxBufferPtr, MAX_PKT_LEN);
    xil_printf("Cache flush complete\r\n");

    /********************************************************************************
     * STEP 3: DMA INITIALIZATION
     * =========================
     * 
     * DMA Initialization Process:
     * --------------------------
     * 1. Lookup Configuration: Find hardware configuration for specific DMA instance
     * 2. Reset DMA Channels: Clear any previous state
     * 3. Initialize DMA: Set up software driver with hardware configuration
     * 4. Configure DMA Settings: Set operating mode, interrupts, etc.
     * 
     * Important Initialization Checks:
     * ------------------------------
     * - Verify configuration lookup succeeds (hardware exists)
     * - Check that reset operations complete (not stuck in reset)
     * - Confirm initialization status is successful
     * - Verify DMA mode matches your requirements (SG vs Simple)
     ********************************************************************************/
    
    // Initialize DMA engine
    xil_printf("Looking up DMA configuration, DEVICE_ID = %d...\r\n", DMA_DEV_ID);
    CfgPtr = XAxiDma_LookupConfig(DMA_DEV_ID);
    if (!CfgPtr) {
        xil_printf("Configuration not found\r\n");
        return XST_FAILURE;
    }
    xil_printf("Found DMA configuration, BASEADDR = 0x%x\r\n", CfgPtr->BaseAddr);
    
    // Check DMA register accessibility
    xil_printf("Attempting to read DMA control register...\r\n");
    u32 control_reg = ReadDmaReg(CfgPtr->BaseAddr, 0x00);  // MM2S control register
    xil_printf("MM2S control register value: 0x%08x\r\n", control_reg);
    
    /********************************************************************************
     * STEP 4: DMA RESET
     * ================
     * 
     * Why Reset DMA Channels?
     * ---------------------
     * - Ensures DMA is in a known clean state before configuration
     * - Clears any previous errors or incomplete transfers
     * - Required when initializing DMA after system power-up
     * 
     * Reset Process:
     * ------------
     * 1. Write reset bit to control register of each channel
     * 2. Wait for reset bit to clear (hardware automatically clears it)
     * 3. Implement timeout to avoid infinite loops if hardware fails
     * 
     * Register Locations:
     * -----------------
     * - MM2S Control Register: BaseAddr + 0x00
     * - S2MM Control Register: BaseAddr + 0x30
     * - Reset Bit: Bit 2 (0x00000004)
     ********************************************************************************/
    
    // Manually reset DMA
    xil_printf("Manually resetting DMA...\r\n");
    // Reset MM2S channel
    *(volatile u32 *)(CfgPtr->BaseAddr + 0x00) = 0x00000004; // Set reset bit
    // Reset S2MM channel
    *(volatile u32 *)(CfgPtr->BaseAddr + 0x30) = 0x00000004; // Set reset bit
    
    // Wait for reset to complete
    xil_printf("Waiting for MM2S reset to complete...\r\n");
    timeout_counter = 0;
    while ((ReadDmaReg(CfgPtr->BaseAddr, 0x00) & 0x00000004) && 
           (timeout_counter < TIMEOUT_LIMIT)) {
        timeout_counter++;
        if (timeout_counter >= TIMEOUT_LIMIT) {
            xil_printf("MM2S reset timeout!\r\n");
            return XST_FAILURE;
        }
    }
    xil_printf("MM2S reset complete\r\n");
    
    xil_printf("Waiting for S2MM reset to complete...\r\n");
    timeout_counter = 0;
    while ((ReadDmaReg(CfgPtr->BaseAddr + 0x30, 0x00) & 0x00000004) && 
           (timeout_counter < TIMEOUT_LIMIT)) {
        timeout_counter++;
        if (timeout_counter >= TIMEOUT_LIMIT) {
            xil_printf("S2MM reset timeout!\r\n");
            return XST_FAILURE;
        }
    }
    xil_printf("S2MM reset complete\r\n");
    
    /********************************************************************************
     * STEP 5: DMA DRIVER INITIALIZATION
     * ================================
     * 
     * Driver Initialization:
     * --------------------
     * The XAxiDma_CfgInitialize() function:
     * 1. Sets up driver data structures based on hardware configuration
     * 2. Verifies hardware is in proper state after reset
     * 3. Prepares software interface for DMA operations
     * 
     * DMA Operating Modes:
     * ------------------
     * 1. Simple DMA Mode:
     *    - Single continuous buffer for transfer
     *    - Simpler to use but less flexible
     *    - Used in this example
     * 
     * 2. Scatter-Gather (SG) Mode:
     *    - Uses buffer descriptors to transfer multiple discontinuous buffers
     *    - More complex but allows efficient transfer of fragmented data
     *    - Requires more setup (buffer descriptor chains)
     ********************************************************************************/
    
    xil_printf("Preparing to initialize DMA...\r\n");
    Status = XAxiDma_CfgInitialize(&AxiDma, CfgPtr);
    if (Status != XST_SUCCESS) {
        xil_printf("DMA initialization failed %d\r\n", Status);
        return XST_FAILURE;
    }
    xil_printf("DMA initialization successful\r\n");
    
    // Check if SG mode is supported
    if (XAxiDma_HasSg(&AxiDma)) {
        xil_printf("Scatter/Gather mode needs to be disabled\r\n");
        return XST_FAILURE;
    }
    xil_printf("Simple mode DMA confirmed\r\n");
    
    /********************************************************************************
     * STEP 6: DMA INTERRUPT CONFIGURATION
     * ==================================
     * 
     * DMA Operation Methods:
     * --------------------
     * 1. Polling Mode (used in this example):
     *    - Continuously check DMA status registers to detect completion
     *    - Simpler but can waste CPU cycles during long transfers
     *    - Good for short/predictable transfers or systems without interrupts
     * 
     * 2. Interrupt Mode:
     *    - DMA triggers interrupt when transfer completes or error occurs
     *    - More efficient for CPU usage but requires interrupt setup
     *    - Better for long or unpredictable duration transfers
     * 
     * Interrupt Types:
     * --------------
     * - Completion Interrupt: Transfer finished successfully
     * - Error Interrupt: Transfer encountered problem
     * - Delay Interrupt: Partial completion (for scatter-gather mode)
     ********************************************************************************/
    
    // Disable DMA interrupts
    xil_printf("Disabling DMA interrupts...\r\n");
    XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
    XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
    xil_printf("DMA interrupts disabled\r\n");
    
    /********************************************************************************
     * STEP 7: DMA TRANSFER INITIATION
     * ==============================
     * 
     * Transfer Direction:
     * -----------------
     * 1. MM2S (Memory to Stream / DMA_TO_DEVICE):
     *    - Reads from system memory (TX buffer)
     *    - Sends data to hardware through stream interface
     * 
     * 2. S2MM (Stream to Memory / DEVICE_TO_DMA):
     *    - Receives data from hardware through stream interface
     *    - Writes to system memory (RX buffer)
     * 
     * Transfer Parameters:
     * ------------------
     * - Buffer Address: Physical address of source/destination buffer
     * - Transfer Length: Number of bytes to transfer (must match on both sides for loopback)
     * - Transfer Direction: MM2S or S2MM
     * 
     * Note: For loopback testing, both transfers must be initiated
     ********************************************************************************/
    
    // Execute DMA transfer
    xil_printf("Starting MM2S transfer\r\n");
    Status = XAxiDma_SimpleTransfer(&AxiDma, (u32)TxBufferPtr, MAX_PKT_LEN, XAXIDMA_DMA_TO_DEVICE);
    if (Status != XST_SUCCESS) {
        xil_printf("MM2S transfer failed %d\r\n", Status);
        return XST_FAILURE;
    }
    
    xil_printf("Starting S2MM transfer\r\n");
    Status = XAxiDma_SimpleTransfer(&AxiDma, (u32)RxBufferPtr, MAX_PKT_LEN, XAXIDMA_DEVICE_TO_DMA);
    if (Status != XST_SUCCESS) {
        xil_printf("S2MM transfer failed %d\r\n", Status);
        return XST_FAILURE;
    }
    
    /********************************************************************************
     * STEP 8: TRANSFER COMPLETION DETECTION
     * ====================================
     * 
     * Polling for Completion:
     * ---------------------
     * 1. Use XAxiDma_Busy() to check if channel is still busy
     * 2. Implement timeout to prevent infinite waiting
     * 3. Periodically display status for debugging
     * 
     * Completion Status Registers:
     * --------------------------
     * - MM2S Status Register (SR): Shows transmit channel status
     * - S2MM Status Register (SR): Shows receive channel status
     * 
     * Common Status Bits:
     * -----------------
     * - Idle Bit: Indicates channel not busy
     * - Error Bits: Various error conditions (decode depending on hardware)
     * 
     * Both channels must complete for a successful loopback transfer
     ********************************************************************************/
    
    // Wait for transfer to complete, add timeout protection
    xil_printf("Waiting for transfer to complete...\r\n");
    timeout_counter = 0;
    while ((XAxiDma_Busy(&AxiDma, XAXIDMA_DMA_TO_DEVICE) ||
           XAxiDma_Busy(&AxiDma, XAXIDMA_DEVICE_TO_DMA)) &&
           (timeout_counter < TIMEOUT_LIMIT)) {
        timeout_counter++;
        
        // Output status periodically
        if (timeout_counter % 1000000 == 0) {
            u32 mm2s_status = XAxiDma_ReadReg(CfgPtr->BaseAddr, XAXIDMA_SR_OFFSET);
            u32 s2mm_status = XAxiDma_ReadReg(CfgPtr->BaseAddr + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
            xil_printf("Waiting... MM2S status: 0x%x, S2MM status: 0x%x\r\n", mm2s_status, s2mm_status);
        }
    }
    
    if (timeout_counter >= TIMEOUT_LIMIT) {
        xil_printf("DMA transfer timeout!\r\n");
        u32 mm2s_status = XAxiDma_ReadReg(CfgPtr->BaseAddr, XAXIDMA_SR_OFFSET);
        u32 s2mm_status = XAxiDma_ReadReg(CfgPtr->BaseAddr + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
        xil_printf("Final MM2S status: 0x%x, S2MM status: 0x%x\r\n", mm2s_status, s2mm_status);
        return XST_FAILURE;
    }
    xil_printf("DMA transfer complete\r\n");
    
    /********************************************************************************
     * STEP 9: POST-TRANSFER CACHE MANAGEMENT
     * =====================================
     * 
     * Cache Invalidation:
     * -----------------
     * After DMA writes to memory (S2MM transfer), the CPU's cache may contain stale data.
     * Cache invalidation ensures the CPU reads fresh data from memory that was written by DMA.
     * 
     * When to Invalidate:
     * -----------------
     * - After DMA writes to memory (S2MM/DEVICE_TO_DMA transfers)
     * - Before reading data that DMA has written
     * - Only invalidate the specific memory range that DMA accessed
     * 
     * Note: Invalidating too much memory or at wrong times can cause performance issues
     ********************************************************************************/
    
    // Invalidate receive buffer to ensure reading the latest data from memory
    Xil_DCacheInvalidateRange((u32)RxBufferPtr, MAX_PKT_LEN);
    
    /********************************************************************************
     * STEP 10: DATA VERIFICATION
     * =========================
     * 
     * Verifying Transfer Success:
     * -------------------------
     * 1. Compare source (TX) and destination (RX) buffers
     * 2. Data should match exactly for successful loopback
     * 3. Report any mismatches indicating transfer corruption
     * 
     * Common Data Verification Issues:
     * -----------------------------
     * - Buffer alignment problems
     * - Cache coherency issues
     * - DMA configuration errors
     * - Hardware connectivity problems
     * - Buffer overruns
     ********************************************************************************/
    
    // Verify received data
    xil_printf("Verifying data...\r\n");
    for (i = 0; i < MAX_PKT_LEN/4; i++) {
        if (RxBufferPtr[i] != TxBufferPtr[i]) {
            xil_printf("Data mismatch @ %d: 0x%08x/0x%08x\r\n", i, RxBufferPtr[i], TxBufferPtr[i]);
            return XST_FAILURE;
        }
    }
    
    xil_printf("DMA loopback test successfully completed!\r\n");
    
    /********************************************************************************
     * DMA TROUBLESHOOTING TIPS
     * =======================
     * 
     * Common DMA Issues and Solutions:
     * ------------------------------
     * 1. Transfer Timeout:
     *    - Check hardware connectivity
     *    - Verify stream protocol compatibility
     *    - Check status registers for specific errors
     * 
     * 2. Data Corruption:
     *    - Ensure proper cache management
     *    - Check buffer alignment
     *    - Verify DMA hardware is properly reset before use
     * 
     * 3. Address Errors:
     *    - Ensure buffer addresses are physical addresses accessible by DMA
     *    - Check address translations if using MMU/SMMU
     * 
     * 4. Performance Issues:
     *    - Consider buffer alignment to cache lines
     *    - Use burst transfers when possible
     *    - Optimize buffer sizes for hardware capabilities
     ********************************************************************************/
    
    return XST_SUCCESS;
}
