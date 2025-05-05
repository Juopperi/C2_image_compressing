#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xil_io.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "sleep.h"

// --- AXI Peripheral Base Address ---
// IMPORTANT: Verify this matches the address assigned in your Vivado design
#define AXI_BASE_ADDR       0x43C00000

// --- Address Map Definitions based on axi_self_test.sv ---

// Sizes from SV parameters (in 32-bit words)
#define SV_WRITE_AREA_WORDS 64
#define SV_READ_AREA_WORDS  64
#define SV_CONFIG_AREA_WORDS 16 // Mapped to addr[7]=1

// Word indices from SV defines (relative to Config Area start)
#define SV_CONFIG_PROCESS_BEGIN_IDX 1
#define SV_CONFIG_PROCESS_DONE_IDX  9

// Calculate Byte Addresses
#define BYTES_PER_WORD      4

// Write Area (Starts at Base Address)
#define WRITE_AREA_BASE     (AXI_BASE_ADDR + 0x000) // Word indices 0 to 63
#define WRITE_AREA_WORDS    SV_WRITE_AREA_WORDS

// Read Area (Starts after Write Area in axi_reg_rw)
#define READ_AREA_BASE      (AXI_BASE_ADDR + (SV_WRITE_AREA_WORDS * BYTES_PER_WORD)) // Word indices 64 to 127 -> Offset 64*4 = 0x100
#define READ_AREA_WORDS     SV_READ_AREA_WORDS

// Config Area (Starts at offset corresponding to addr[7]=1, typically 0x80 * 4 = 0x200)
#define CONFIG_AREA_BASE    (AXI_BASE_ADDR + 0x200) // Word indices 0x80 to 0x8F
#define CONFIG_AREA_WORDS   SV_CONFIG_AREA_WORDS

// Control/Status Register Addresses (Absolute Byte Addresses)
#define CTRL_START_ADDR     (CONFIG_AREA_BASE + (SV_CONFIG_PROCESS_BEGIN_IDX * BYTES_PER_WORD)) // ConfigBase + 1*4 = Base + 0x204
#define STATUS_DONE_ADDR    (CONFIG_AREA_BASE + (SV_CONFIG_PROCESS_DONE_IDX * BYTES_PER_WORD))  // ConfigBase + 9*4 = Base + 0x224

// --- Polling Parameters ---
#define DONE_FLAG           1          // Expected value in the done register
#define POLLING_TIMEOUT_US  5000000    // Timeout for polling (5 seconds)
#define POLLING_DELAY_US    100        // Delay between polls

// Function Declarations
void write_data_area(u32 base_addr, int num_words);
void read_and_print_area(const char* area_name, u32 base_addr, int num_words);
int trigger_and_wait_for_done(u32 ctrl_addr, u32 status_addr, u32 done_flag_value);


int main(void) {
    xil_printf("--- Starting Vitis AXI Test based on sim_main logic ---\\r\\n");

    // 1. Write data to the WRITE_AREA
    xil_printf("Step 1: Writing data to WRITE_AREA (Base: 0x%08X, Words: %d)\\r\\n", WRITE_AREA_BASE, WRITE_AREA_WORDS);
    write_data_area(WRITE_AREA_BASE, WRITE_AREA_WORDS);

    // 2. Trigger the process and wait for completion
    xil_printf("Step 2: Triggering process (writing 1 to 0x%08X) and waiting for done flag (at 0x%08X)...\\r\\n", CTRL_START_ADDR, STATUS_DONE_ADDR);
    int success = trigger_and_wait_for_done(CTRL_START_ADDR, STATUS_DONE_ADDR, DONE_FLAG);

    if (success) {
        xil_printf("   ...Process completed successfully.\\r\\n");

        // 3. Read data from the READ_AREA
        xil_printf("Step 3: Reading data from READ_AREA (Base: 0x%08X, Words: %d)\\r\\n", READ_AREA_BASE, READ_AREA_WORDS);
        read_and_print_area("READ_AREA", READ_AREA_BASE, READ_AREA_WORDS);

        // 4. Read data from the CONFIG_AREA
        xil_printf("Step 4: Reading data from CONFIG_AREA (Base: 0x%08X, Words: %d)\\r\\n", CONFIG_AREA_BASE, CONFIG_AREA_WORDS);
        read_and_print_area("CONFIG_AREA", CONFIG_AREA_BASE, CONFIG_AREA_WORDS);

    } else {
        xil_printf("   ...Error: Timed out waiting for completion signal.\\r\\n");
    }

    xil_printf("--- Vitis AXI Test Complete ---\\r\\n");
    return 0;
}

// Function to write sequential data to a memory area
void write_data_area(u32 base_addr, int num_words) {
    for (int i = 0; i < num_words; i++) {
        // Write incrementing data values (or any other pattern)
        Xil_Out32(base_addr + (i * 4), i);
    }
    xil_printf("   Finished writing %d words starting from 0x%08X\\r\\n", num_words, base_addr);
}

// Function to read data from a memory area and print it
void read_and_print_area(const char* area_name, u32 base_addr, int num_words) {
    xil_printf("   Reading %s (Base: 0x%08X):\\r\\n", area_name, base_addr);
    u32 data;
    int values_to_print = (num_words < 16) ? num_words : 16; // Print first 16 values or less

    for (int i = 0; i < num_words; i++) {
        data = Xil_In32(base_addr + (i * 4));
        if (i < values_to_print) {
            xil_printf("      Addr 0x%08X: Data 0x%08X (%d)\\r\\n", base_addr + (i*4), data, data);
        } else if (i == values_to_print) {
             xil_printf("      ... (omitting remaining %d values)\\r\\n", num_words - values_to_print);
        }
    }
     if (num_words == 0) {
         xil_printf("      (Area size is zero)\\r\\n");
     }
    xil_printf("   Finished reading %s.\\r\\n", area_name);
}

// Function to write start signal and poll for done signal
// Returns 1 on success, 0 on timeout
int trigger_and_wait_for_done(u32 ctrl_addr, u32 status_addr, u32 done_flag_value) {
    u32 status = 0;
    u32 elapsed_time_us = 0;

    // Write '1' to the control register to start
    Xil_Out32(ctrl_addr, 1);
    xil_printf("   Start signal sent (wrote 1 to 0x%08X).\\r\\n", ctrl_addr);

    // Poll the status register
    xil_printf("   Polling status register 0x%08X for value 0x%X...\\r\\n", status_addr, done_flag_value);
    do {
        status = Xil_In32(status_addr);
        if (status == done_flag_value) {
            xil_printf("   Done flag detected (Read 0x%X).\\r\\n", status);
            // Optional: Clear the start signal? Depends on HW behavior.
            // Xil_Out32(ctrl_addr, 0);
            return 1; // Success
        }

        usleep(POLLING_DELAY_US);
        elapsed_time_us += POLLING_DELAY_US;

        if (elapsed_time_us >= POLLING_TIMEOUT_US) {
            xil_printf("   Timeout! Elapsed time: %d us.\\r\\n", elapsed_time_us);
            return 0; // Timeout
        }

        // Print status periodically for debugging
        if ((elapsed_time_us / POLLING_DELAY_US) % 100 == 0) { // Print every 100 polls
             xil_printf("   ... still waiting (status = 0x%X)\\r\\n", status);
        }


    } while (1); // Loop broken by return or timeout check

    // Should not reach here, but added for completeness
    return 0;
}