#include <stdio.h>
#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"

#define ADDER_BASE      0x40000000  // AXI4-Lite base address

// Register addresses - exactly as in Verilog testbench
#define ADDR_REG_A      (ADDER_BASE + 0x00)
#define ADDR_REG_B      (ADDER_BASE + 0x04)
#define ADDR_REG_CTRL   (ADDER_BASE + 0x08)
#define ADDR_REG_STAT   (ADDER_BASE + 0x0C)
#define ADDR_REG_RES    (ADDER_BASE + 0x10)

#define MAX_I           (100*1000*1000)
#define TIMEOUT_LIMIT   1000000     // Maximum poll count to prevent waiting indefinitely

// Debug function to scan register values
void scan_registers(int a, int b, int result_pl) {
    xil_printf("===== DEBUG: Register Scan =====\r\n");
    xil_printf("Expected input: A=%d, B=%d, Expected result=%d\r\n", a, b, a + b);
    xil_printf("Actual read: A register [0x%08x] = 0x%08x (%d)\r\n", ADDR_REG_A, Xil_In32(ADDR_REG_A), Xil_In32(ADDR_REG_A));
    xil_printf("Actual read: B register [0x%08x] = 0x%08x (%d)\r\n", ADDR_REG_B, Xil_In32(ADDR_REG_B), Xil_In32(ADDR_REG_B));
    xil_printf("Actual read: CTRL register [0x%08x] = 0x%08x\r\n", ADDR_REG_CTRL, Xil_In32(ADDR_REG_CTRL));
    xil_printf("Actual read: STAT register [0x%08x] = 0x%08x\r\n", ADDR_REG_STAT, Xil_In32(ADDR_REG_STAT));
    xil_printf("Actual read: Result register [0x%08x] = 0x%08x (%d)\r\n", ADDR_REG_RES, Xil_In32(ADDR_REG_RES), Xil_In32(ADDR_REG_RES));
    xil_printf("PL adder result: %d, Correct: %s\r\n", result_pl, (result_pl == a + b) ? "YES" : "NO");
    
    // Add a small delay to allow the module to process - important given the module's 2-cycle behavior
    for (int delay = 0; delay < 1000; delay++);
    
    xil_printf("============================\r\n\n");
}

// Get result from PL adder, using the same stimulus logic as the testbench
int get_result_adder(int a, int b) {
    int result = 0;
    int status = 0;
    int timeout_counter = 0;
    
    xil_printf("\n===== Starting PL Adder Operation =====\r\n");
    

    // 2. Write to B register
    Xil_Out32(ADDR_REG_B, b);
    xil_printf("Wrote to REG_B: %d\r\n", b);
    
    for (int delay = 0; delay < 1000; delay++);


    // 1. Write to A register
    Xil_Out32(ADDR_REG_A, a);
    xil_printf("Wrote to REG_A: %d\r\n", a);

    for (int delay = 0; delay < 1000; delay++);

    
    // 3. Read back A and B to verify (optional, but good for debug)
    int read_b = Xil_In32(ADDR_REG_B);
    int read_a = Xil_In32(ADDR_REG_A);
    int read_invalid = Xil_In32(ADDR_REG_A + 0xff);

    xil_printf("Read from REG_A: %d\r\n", read_a);
    xil_printf("Read from REG_B: %d\r\n", read_b);
    xil_printf("Read from invalid: %d\r\n", read_invalid);

    
    for (int delay = 0; delay < 1000; delay++);


    // 4. Start addition by writing 0xFFFFFFFF to control register (as per module implementation)
    Xil_Out32(ADDR_REG_CTRL, 0xFFFFFFFF);
    xil_printf("Started addition operation (CTRL=0xFFFFFFFF)\r\n");

    for (int delay = 0; delay < 1000; delay++);

    
    // 5. Wait for status to become 0xFFFFFFFF
    while ((status & 0x0FFFFFFF) != 0x0FFFFFFF) {
        status = Xil_In32(ADDR_REG_STAT);
        
        timeout_counter++;
        if (timeout_counter % 100000 == 0) {
            xil_printf("Waiting for completion... (STATUS=0x%08x)\r\n", status);
        }
        if (timeout_counter > TIMEOUT_LIMIT) {
            xil_printf("Timeout waiting for PL adder to complete!\r\n");
            break;
        }
    }
    xil_printf("Addition completed (STATUS=0x%08x)\r\n", status);
    
    // 6. Read result
    result = Xil_In32(ADDR_REG_RES);
    xil_printf("Result: %d\r\n", result);
    
    return result;
}

int main() {
    int i = 0;
    int a = 10;  // Starting with testbench test case 1
    int b = 20;

    // Initialize by writing 0 to control and status registers
    Xil_Out32(ADDR_REG_CTRL, 0);
    
    // Give the hardware a moment to initialize
    for (int delay = 0; delay < 1000; delay++);
    
    while (1) {
        i++;
        if (i == MAX_I) {
            i = 0;
            int result_PS, result_PL;
            
            xil_printf("\n\n=========================================\r\n");
            xil_printf("Starting AXI4 Adder Test: %d + %d\r\n", a, b);
            xil_printf("=========================================\r\n");

            // Calculate expected result
            result_PS = a + b;
            
            // Get result from PL adder
            result_PL = get_result_adder(a, b);

            // Compare results
            xil_printf("\nAdd Result by PS adder: %d + %d = %d\r\n", a, b, result_PS);
            xil_printf("Add Result by PL adder: %d + %d = %d\r\n", a, b, result_PL);

            if (result_PL == result_PS) {
                xil_printf("TEST PASSED: %d + %d = %d\r\n", a, b, result_PL);
            } else {
                xil_printf("TEST FAILED: Expected %d, got %d\r\n", result_PS, result_PL);
                // Additional debug
                scan_registers(a, b, result_PL);
            }

            // Change test values for next iteration
            // Use test cases similar to the testbench
            if (a == 10 && b == 20) {
                // Switch to test case 2
                a = 100;
                b = 200;
            } else if (a == 100 && b == 200) {
                // Switch to test case 3 (overflow test)
                a = 0xFFFFFFFF;
                b = 0x00000001;
            } else {
                // Back to test case 1
                a = 10;
                b = 20;
            }
        }
    }
    
    return 0;
}