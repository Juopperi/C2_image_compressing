#include <xparameters.h>
#include <xil_printf.h>
#include <xil_io.h>
#include <sleep.h>
#include <stdlib.h>  // for rand()

// Define base address for the AXI interface
#define AXI_BASE_ADDR XPAR_STATE_MACHINE_WOINT_0_BASEADDR

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
#define POLL_TIMEOUT_MS 5000

// Data pattern selection
#define DATA_PATTERN_ZERO     0
#define DATA_PATTERN_MAX      1
#define DATA_PATTERN_RANDOM   2
#define DATA_PATTERN_GRADIENT 3
#define DATA_PATTERN_ACCURATE  4

// Select the pattern here:
#define SELECTED_PATTERN DATA_PATTERN_ZERO

// Function to write to a register
int write_register(uint32_t offset, uint32_t value) {
    Xil_Out32(AXI_BASE_ADDR + offset, value);
    usleep(100);
    return 0;
}

// Function to read from a register
uint32_t read_register(uint32_t offset) {
    uint32_t value = Xil_In32(AXI_BASE_ADDR + offset);
    return value;
}

// Generate test image data based on pattern
void generate_test_image(uint32_t r[64], uint32_t g[64], uint32_t b[64], int pattern) {
    for (int i = 0; i < 64; i++) {
        switch (pattern) {
            case DATA_PATTERN_ZERO:
                r[i] = 0;
                g[i] = 0;
                b[i] = 0;
                break;
            case DATA_PATTERN_MAX:
                r[i] = 0xFFFFFFFF;
                g[i] = 0xFFFFFFFF;
                b[i] = 0xFFFFFFFF;
                break;
            case DATA_PATTERN_RANDOM:
                r[i] = rand() % 256;
                g[i] = rand() % 256;
                b[i] = rand() % 256;
                break;
            case DATA_PATTERN_GRADIENT:
                r[i] = ((i / 8) * 32) % 256;         // Red gradient
                g[i] = ((i % 8) * 32) % 256;         // Green gradient
                b[i] = (((i / 8) + (i % 8)) * 16) % 256; // Blue gradient
                break;
            case DATA_PATTERN_ACCURATE:
                r[i] = i*10;
                g[i] = i*10;
                b[i] = i*10;
                break;
            default:
                r[i] = g[i] = b[i] = 0;
        }
    }
}

int main() {
    int status = 0;
    uint32_t timeout_counter = 0;
    uint32_t r_data[64], g_data[64], b_data[64];
    uint32_t y_data[64], cb_data[64], cr_data[64];

    xil_printf("\r\n\r\nJPG Full AXI RGB to YCbCr Converter Test\r\n");
    xil_printf("AXI Base Address: 0x%08x\r\n", AXI_BASE_ADDR);

    // Initialize RGB test data
    xil_printf("Generating RGB data with pattern %d...\r\n", SELECTED_PATTERN);
    generate_test_image(r_data, g_data, b_data, SELECTED_PATTERN);

    // Write RGB data
    xil_printf("Writing RGB data to the module...\r\n");
    for (int i = 0; i < 64; i++) {
        write_register(R_DATA_OFFSET + (i * 4), r_data[i]);
        write_register(G_DATA_OFFSET + (i * 4), g_data[i]);
        write_register(B_DATA_OFFSET + (i * 4), b_data[i]);
    }

    xil_printf("Starting RGB to YCbCr conversion...\r\n");
    write_register(SPECIAL_REG_START_OFFSET, 0x0f0f0f0f);

    // Polling for completion
    xil_printf("Polling for completion...\r\n");
    timeout_counter = 0;
    uint32_t poll_value = 0;
    while ((poll_value = read_register(SPECIAL_REG_COMPLETE_OFFSET)) != 0xFFFFFFFF) {
        usleep(1000);
        if (++timeout_counter >= POLL_TIMEOUT_MS) {
            xil_printf("ERROR: Polling timeout!\r\n");
            break;
        }
    }

    // Read back YCbCr data
    xil_printf("Reading back YCbCr data...\r\n");
    for (int i = 0; i < 64; i++) {
        y_data[i]  = read_register(Y_DATA_OFFSET  + (i * 4));
        cb_data[i] = read_register(CB_DATA_OFFSET + (i * 4));
        cr_data[i] = read_register(CR_DATA_OFFSET + (i * 4));
    }

    // Print sample results
    xil_printf("\r\nSample RGB and YCbCr values:\r\n");
    for (int i = 0; i < 8; i++) {
        xil_printf("Pixel %d: RGB(%3d,%3d,%3d) -> YCbCr(0x%08x,0x%08x,0x%08x)\r\n", 
                   i, r_data[i], g_data[i], b_data[i], 
                   cb_data[i], cr_data[i], y_data[i]);
    }

    xil_printf("RGB to YCbCr conversion test completed.\r\n");
    return 0;
}
