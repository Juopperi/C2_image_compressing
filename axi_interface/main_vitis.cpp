#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xil_io.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "sleep.h"

// --- AXI Peripheral Base Address ---
// IMPORTANT: Verify this matches the address assigned in your Vivado design
#define AXI_BASE_ADDR       XPAR_AXI_SELF_TEST_0_BASEADDR

// --- AXI-Lite Protocol Constants ---
#define AXI_DATA_WIDTH      32      // AXI-Lite data width in bits
#define AXI_ADDR_ALIGN      1       // AXI-Lite address alignment (32-bit word)

// --- Address Map Definitions based on axi_self_test.sv ---
// Sizes from SV parameters (in 32-bit words)
#define SV_WRITE_AREA_WORDS 64
#define SV_READ_AREA_WORDS  64
#define SV_CONFIG_AREA_WORDS 16 // Mapped to addr[7]=1

// Word indices from SV defines (relative to Config Area start)
#define SV_CONFIG_PROCESS_BEGIN_IDX 1
#define SV_CONFIG_PROCESS_DONE_IDX  9

// Write Area (Starts at Base Address)
#define WRITE_AREA_BASE     (AXI_BASE_ADDR)  // Word indices 0 to 63
#define WRITE_AREA_WORDS    SV_WRITE_AREA_WORDS

// Read Area (Starts after Write Area in axi_reg_rw)
#define READ_AREA_BASE      (AXI_BASE_ADDR + (SV_WRITE_AREA_WORDS * AXI_ADDR_ALIGN))  // Word indices 64 to 127
#define READ_AREA_WORDS     SV_READ_AREA_WORDS

// Config Area (Starts at offset corresponding to addr[7]=1)
#define CONFIG_AREA_BASE    (AXI_BASE_ADDR + 0x200)  // Word indices 0x80 to 0x8F
#define CONFIG_AREA_WORDS   SV_CONFIG_AREA_WORDS

// Control/Status Register Addresses
#define CTRL_START_ADDR     (CONFIG_AREA_BASE + (SV_CONFIG_PROCESS_BEGIN_IDX * AXI_ADDR_ALIGN))
#define STATUS_DONE_ADDR    (CONFIG_AREA_BASE + (SV_CONFIG_PROCESS_DONE_IDX * AXI_ADDR_ALIGN))

// --- Polling Parameters ---
#define DONE_FLAG           1
#define POLLING_TIMEOUT_US  5000000    // 5 seconds timeout
#define POLLING_DELAY_US    100        // 100us between polls

// Function Declarations
void write_data_area(u32 base_addr, int num_words);
void read_and_print_area(const char* area_name, u32 base_addr, int num_words);
int trigger_and_wait_for_done(u32 ctrl_addr, u32 status_addr, u32 done_flag_value);

int main(void) {
    xil_printf("--- Starting Vitis AXI Test ---\r\n");

    // 1. Write test data to WRITE_AREA
    xil_printf("Step 1: Writing test data to WRITE_AREA\r\n");
    write_data_area(WRITE_AREA_BASE, WRITE_AREA_WORDS);

    // 2. Trigger processing and wait for completion
    xil_printf("Step 2: Starting processing\r\n");
    int success = trigger_and_wait_for_done(CTRL_START_ADDR, STATUS_DONE_ADDR, DONE_FLAG);

    if (success) {
        xil_printf("Processing completed successfully\r\n");

        // 3. Read and verify results from READ_AREA
        xil_printf("Step 3: Reading results from READ_AREA\r\n");
        read_and_print_area("READ_AREA", READ_AREA_BASE, READ_AREA_WORDS);

        // 4. Read configuration area
        xil_printf("Step 4: Reading CONFIG_AREA\r\n");
        read_and_print_area("CONFIG_AREA", CONFIG_AREA_BASE, CONFIG_AREA_WORDS);
    } else {
        xil_printf("Error: Processing timeout\r\n");
    }

    return 0;
}

// Write test data to specified area
void write_data_area(u32 base_addr, int num_words) {
    for (int i = 0; i < num_words; i++) {
        // Write incrementing test pattern
        Xil_Out32(base_addr + (i * AXI_ADDR_ALIGN), i);
    }
    xil_printf("Wrote %d words to 0x%08X\r\n", num_words, base_addr);
}

// Read and print data from specified area
void read_and_print_area(const char* area_name, u32 base_addr, int num_words) {
    xil_printf("Reading %s:\r\n", area_name);
    for (int i = 0; i < num_words; i++) {
        u32 data = Xil_In32(base_addr + (i * AXI_ADDR_ALIGN));
        xil_printf("Addr 0x%08X: 0x%08X\r\n", base_addr + (i * AXI_ADDR_ALIGN), data);
    }
}

// Trigger processing and wait for completion
int trigger_and_wait_for_done(u32 ctrl_addr, u32 status_addr, u32 done_flag_value) {
    u32 status = 0;
    u32 elapsed_time_us = 0;

    // Start processing
    Xil_Out32(ctrl_addr, 1);
    xil_printf("Started processing\r\n");

    // Poll for completion
    while (elapsed_time_us < POLLING_TIMEOUT_US) {
        status = Xil_In32(status_addr);
        if (status == done_flag_value) {
            xil_printf("Processing completed\r\n");
            return 1;
        }

        usleep(POLLING_DELAY_US);
        elapsed_time_us += POLLING_DELAY_US;

        // Print status every second
        if (elapsed_time_us % 1000000 == 0) {
            xil_printf("Waiting... %d seconds elapsed\r\n", elapsed_time_us / 1000000);
        }
    }

    xil_printf("Timeout after %d seconds\r\n", POLLING_TIMEOUT_US / 1000000);
    return 0;
}