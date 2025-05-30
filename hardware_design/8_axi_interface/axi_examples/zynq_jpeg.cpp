#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xil_io.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "sleep.h"

// JPEG compression processor base address
#define JPEG_BASE     0x43C00000  // Use the appropriate base address for your system

// Register address mapping
#define REG_CTRL      (JPEG_BASE + 0x00)  // Control register
#define REG_STATUS    (JPEG_BASE + 0x04)  // Status register

// RGB data region - 3 components per pixel, total 64 pixels
#define RGB_BASE      (JPEG_BASE + 0x40)  // Start address of RGB data region

// Compressed output region
#define Y_BASE        (JPEG_BASE + 0x240) // Output region for Y component
#define CB_BASE       (JPEG_BASE + 0x2C0) // Output region for Cb component
#define CR_BASE       (JPEG_BASE + 0x340) // Output region for Cr component

// Status register bit definitions
#define STATUS_PROCESSING   0x01  // Processing flag
#define STATUS_DONE         0x02  // Processing complete flag

// Structure for an 8x8 RGB block
typedef struct {
    unsigned char r[64];
    unsigned char g[64];
    unsigned char b[64];
} RgbBlock;

// Structure for JPEG compression output
typedef struct {
    int y[64];
    int cb[64];
    int cr[64];
} JpegOutput;

// Function declarations
void send_rgb_block(RgbBlock *block);
void read_jpeg_output(JpegOutput *output);
void process_block();
void print_results(JpegOutput *jpeg_data);

int main(void) {
    xil_printf("Starting JPEG Compression Test\r\n");
    
    // Create a test RGB block - simple gradient pattern
    RgbBlock rgb_block;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int idx = i*8 + j;
            rgb_block.r[idx] = (i * 32) % 256;     // Red gradient
            rgb_block.g[idx] = (j * 32) % 256;     // Green gradient
            rgb_block.b[idx] = ((i+j) * 16) % 256; // Blue gradient
        }
    }
    
    // Output test pattern
    xil_printf("Input RGB Block (8x8):\r\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int idx = i*8 + j;
            xil_printf("(%3d,%3d,%3d) ", 
                     rgb_block.r[idx], 
                     rgb_block.g[idx], 
                     rgb_block.b[idx]);
        }
        xil_printf("\r\n");
    }
    
    // Send RGB data to the JPEG compression module
    send_rgb_block(&rgb_block);
    
    // Trigger the processing
    process_block();
    
    // Read the compression results
    JpegOutput jpeg_result;
    read_jpeg_output(&jpeg_result);
    
    // Print results
    print_results(&jpeg_result);
    
    xil_printf("JPEG Compression Test Complete\r\n");
    return 0;
}

// Send the RGB data block to the JPEG processor
void send_rgb_block(RgbBlock *block) {
    int offset = 0;
    
    xil_printf("Sending RGB data to JPEG processor...\r\n");
    
    // To simplify, we write all R components first, then G, and finally B
    for (int i = 0; i < 64; i++) {
        // Construct a 32-bit value but only use the lower 8 bits
        Xil_Out32(RGB_BASE + (offset * 4), block->r[i]);
        offset++;
        Xil_Out32(RGB_BASE + (offset * 4), block->g[i]);
        offset++;
        Xil_Out32(RGB_BASE + (offset * 4), block->b[i]);
        offset++;
    }
}

// Read JPEG compression output
void read_jpeg_output(JpegOutput *output) {
    xil_printf("Reading JPEG compression results...\r\n");
    
    // Read Y component
    for (int i = 0; i < 64; i++) {
        output->y[i] = Xil_In32(Y_BASE + (i * 4));
    }
    
    // Read Cb component
    for (int i = 0; i < 64; i++) {
        output->cb[i] = Xil_In32(CB_BASE + (i * 4));
    }
    
    // Read Cr component
    for (int i = 0; i < 64; i++) {
        output->cr[i] = Xil_In32(CR_BASE + (i * 4));
    }
}

// Process RGB data block and wait for completion
void process_block() {
    unsigned int status;
    
    xil_printf("Starting JPEG compression process...\r\n");
    
    // Set the control register to start processing
    Xil_Out32(REG_CTRL, 0x01);
    
    // Wait for processing to complete
    do {
        status = Xil_In32(REG_STATUS);
        // Give the hardware some time to process
        usleep(100);
    } while (!(status & STATUS_DONE));
    
    xil_printf("JPEG compression completed\r\n");
}

// Print the first few values of JPEG output
void print_results(JpegOutput *jpeg_data) {
    xil_printf("JPEG Compression Results (First 16 values of each component):\r\n");
    
    xil_printf("Y Component:\r\n");
    for (int i = 0; i < 16; i++) {
        xil_printf("%8d ", jpeg_data->y[i]);
        if ((i + 1) % 4 == 0) xil_printf("\r\n");
    }
    
    xil_printf("Cb Component:\r\n");
    for (int i = 0; i < 16; i++) {
        xil_printf("%8d ", jpeg_data->cb[i]);
        if ((i + 1) % 4 == 0) xil_printf("\r\n");
    }
    
    xil_printf("Cr Component:\r\n");
    for (int i = 0; i < 16; i++) {
        xil_printf("%8d ", jpeg_data->cr[i]);
        if ((i + 1) % 4 == 0) xil_printf("\r\n");
    }
}
