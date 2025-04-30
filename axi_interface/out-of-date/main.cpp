#include <xparameters.h>
#include <xil_printf.h>
#include <xil_io.h>
#include <sleep.h>

// Define base address for the AXI interface
#define AXI_BASE_ADDR XPAR_STATE_MACHINE_WOINT_0_BASEADDR

// Define offsets for special registers
#define SPECIAL_REG_START_OFFSET 0x00
#define SPECIAL_REG_COMPLETE_OFFSET 0x00
#define DATA_REG_OFFSET 0x10

// Timeout values
#define WRITE_TIMEOUT_MS 1000
#define POLL_TIMEOUT_MS 5000

// Function to write to a register with timeout
int write_register(uint32_t offset, uint32_t value) {
    volatile uint32_t *reg = (uint32_t *)(AXI_BASE_ADDR + offset);
    xil_printf("About to write: Address = 0x%08x, Data = 0x%08x\r\n", (AXI_BASE_ADDR + offset), value);
    
    // Try using Xilinx IO functions instead of direct memory access
    xil_printf("DEBUG: Before Xil_Out32\r\n");
    Xil_Out32(AXI_BASE_ADDR + offset, value);
    xil_printf("DEBUG: After Xil_Out32\r\n");
    
    xil_printf("Write completed: Address = 0x%08x, Data = 0x%08x\r\n", (AXI_BASE_ADDR + offset), value);
    
    // Verify the write by reading back
    uint32_t readback = Xil_In32(AXI_BASE_ADDR + offset);
    if (readback != value) {
        xil_printf("ERROR: Write verification failed! Read: 0x%08x, Expected: 0x%08x\r\n", readback, value);
        return -1;
    }
    
    // Small delay to ensure hardware has time to process
    usleep(100);
    return 0;
}

// Function to read from a register
uint32_t read_register(uint32_t offset) {
    xil_printf("About to read: Address = 0x%08x\r\n", (AXI_BASE_ADDR + offset));
    
    // Try using Xilinx IO functions
    uint32_t value = Xil_In32(AXI_BASE_ADDR + offset);
    
    xil_printf("Read completed: Address = 0x%08x, Data = 0x%08x\r\n", (AXI_BASE_ADDR + offset), value);
    return value;
}

int main() {
    int status = 0;
    uint32_t timeout_counter = 0;
    
    // Print base address and register information
    xil_printf("AXI Base Address: 0x%08x\r\n", AXI_BASE_ADDR);
    xil_printf("Start Register Offset: 0x%08x\r\n", SPECIAL_REG_START_OFFSET);
    xil_printf("Data Register Offset: 0x%08x\r\n", DATA_REG_OFFSET);
    
    // Initialize 64-byte data
    uint32_t data[16];
    for (int i = 0; i < 16; i++) {
        data[i] = 0x01010101; // Example data
    }

    xil_printf("Writing data to the module...\r\n");
    // Write data to the module with timeout handling
    for (int i = 0; i < 16; i++) {
        xil_printf("Writing data[%d] = 0x%08x\r\n", i, data[i]);
        status = write_register(DATA_REG_OFFSET + i * 4, data[i]);
        
        if (status != 0) {
            xil_printf("ERROR: Failed to write data[%d]. Skipping to next item.\r\n", i);
            // Continue anyway to see if other registers work
        }
    }

    xil_printf("Setting the special register to start the operation...\r\n");
    // Set the special register to start the operation
    status = write_register(SPECIAL_REG_START_OFFSET, 0x0f0f0f0f);
    if (status != 0) {
        xil_printf("ERROR: Failed to write start register. Continuing anyway...\r\n");
    }

    xil_printf("Polling the completion register...\r\n");
    // Poll the completion register with timeout
    timeout_counter = 0;
    uint32_t poll_value = 0;
    while ((poll_value = read_register(SPECIAL_REG_COMPLETE_OFFSET)) != 0xFFFFFFFF) {
        xil_printf("Waiting for operation to complete... Current value: 0x%08x\r\n", poll_value);
        
        usleep(1000); // Sleep 1ms between polls
        timeout_counter++;
        
        if (timeout_counter >= POLL_TIMEOUT_MS) {
            xil_printf("ERROR: Polling timeout! Moving on.\r\n");
            break;
        }
    }

    xil_printf("Reading back the modified data...\r\n");
    // Read back the modified data
    for (int i = 0; i < 16; i++) {
        data[i] = read_register(DATA_REG_OFFSET + i * 4);
        xil_printf("Data[%d]: %08x\r\n", i, data[i]);
    }

    xil_printf("Operation completed.\r\n");

    return 0;
} 