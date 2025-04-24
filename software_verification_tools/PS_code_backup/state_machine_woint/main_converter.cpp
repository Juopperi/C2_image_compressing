#include <xparameters.h>
#include <xil_printf.h>
#include <xil_io.h>
#include <sleep.h>

// Define base address for the AXI interface
#define AXI_BASE_ADDR XPAR_JPG_FULL_AXI_0_BASEADDR

// Define offsets for special registers and data regions
#define SPECIAL_REG_START_OFFSET 0x00
#define SPECIAL_REG_COMPLETE_OFFSET 0x00
#define R_DATA_OFFSET 0x10
#define G_DATA_OFFSET 0x30
#define B_DATA_OFFSET 0x50
#define Y_DATA_OFFSET 0x10
#define CB_DATA_OFFSET 0x30
#define CR_DATA_OFFSET 0x50

// Timeout values
#define WRITE_TIMEOUT_MS 1000
#define POLL_TIMEOUT_MS 5000

// Function to write to a register with timeout
int write_register(uint32_t offset, uint32_t value) {
    xil_printf("Writing: Address = 0x%08x, Data = 0x%08x\r\n", (AXI_BASE_ADDR + offset), value);
    
    // Write to the register using Xilinx IO functions
    Xil_Out32(AXI_BASE_ADDR + offset, value);
    
    // Verify the write by reading back
    // uint32_t readback = Xil_In32(AXI_BASE_ADDR + offset);
    // if (readback != value) {
    //     xil_printf("ERROR: Write verification failed! Read: 0x%08x, Expected: 0x%08x\r\n", readback, value);
    //     return -1;
    // }
    
    // Small delay to ensure hardware has time to process
    usleep(100);
    return 0;
}

// Function to read from a register
uint32_t read_register(uint32_t offset) {
    xil_printf("Reading: Address = 0x%08x\r\n", (AXI_BASE_ADDR + offset));
    
    // Read from the register using Xilinx IO functions
    uint32_t value = Xil_In32(AXI_BASE_ADDR + offset);
    
    xil_printf("Read value: 0x%08x\r\n", value);
    return value;
}

// Generate a simple 8x8 test image with gradients
void generate_test_image(uint8_t r[64], uint8_t g[64], uint8_t b[64]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int idx = i * 8 + j;
            r[idx] = (i * 32) % 256;         // Red gradient
            g[idx] = (j * 32) % 256;         // Green gradient
            b[idx] = ((i + j) * 16) % 256;   // Blue gradient
        }
    }
}

int main() {
    int status = 0;
    uint32_t timeout_counter = 0;
    
    // Print base address and register information
    xil_printf("\r\n\r\nJPG Full AXI RGB to YCbCr Converter Test\r\n");
    xil_printf("AXI Base Address: 0x%08x\r\n", AXI_BASE_ADDR);
    
    // Initialize test RGB data (8x8 block = 64 bytes)
    uint8_t r_data[64], g_data[64], b_data[64];
    generate_test_image(r_data, g_data, b_data);
    
    xil_printf("Writing RGB data to the module...\r\n");
    
    // Write R data to the module
    for (int i = 0; i < 64; i++) {
        uint32_t reg_offset = R_DATA_OFFSET + (i * 4);
        status = write_register(reg_offset, r_data[i]);
        if (status != 0) {
            xil_printf("ERROR: Failed to write R data[%d]. Continuing...\r\n", i);
        }
    }
    
    // Write G data to the module
    for (int i = 0; i < 64; i++) {
        uint32_t reg_offset = G_DATA_OFFSET + (i * 4);
        status = write_register(reg_offset, g_data[i]);
        if (status != 0) {
            xil_printf("ERROR: Failed to write G data[%d]. Continuing...\r\n", i);
        }
    }
    
    // Write B data to the module
    for (int i = 0; i < 64; i++) {
        uint32_t reg_offset = B_DATA_OFFSET + (i * 4);
        status = write_register(reg_offset, b_data[i]);
        if (status != 0) {
            xil_printf("ERROR: Failed to write B data[%d]. Continuing...\r\n", i);
        }
    }

    xil_printf("Setting the start register to begin RGB to YCbCr conversion...\r\n");
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
        xil_printf("Waiting for RGB to YCbCr conversion to complete... Current value: 0x%08x\r\n", poll_value);
        
        usleep(1000); // Sleep 1ms between polls
        timeout_counter++;
        
        if (timeout_counter >= POLL_TIMEOUT_MS) {
            xil_printf("ERROR: Polling timeout! Moving on.\r\n");
            break;
        }
    }

    // Arrays to store YCbCr results
    uint32_t y_data[64], cb_data[64], cr_data[64];
    
    xil_printf("Reading back YCbCr data...\r\n");
    
    // Read Y component data
    for (int i = 0; i < 64; i++) {
        y_data[i] = read_register(Y_DATA_OFFSET + (i * 4));
    }
    
    // Read Cb component data
    for (int i = 0; i < 64; i++) {
        cb_data[i] = read_register(CB_DATA_OFFSET + (i * 4));
    }
    
    // Read Cr component data
    for (int i = 0; i < 64; i++) {
        cr_data[i] = read_register(CR_DATA_OFFSET + (i * 4));
    }
    
    // Print some sample values for verification
    xil_printf("\r\nSample RGB and YCbCr values:\r\n");
    for (int i = 0; i < 8; i++) {
        xil_printf("Pixel %d: RGB(%d,%d,%d) -> YCbCr(0x%08x,0x%08x,0x%08x)\r\n", 
                   i, r_data[i], g_data[i], b_data[i], 
                   y_data[i], cb_data[i], cr_data[i]);
    }

    xil_printf("RGB to YCbCr conversion test completed.\r\n");

    return 0;
} 