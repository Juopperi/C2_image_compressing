#include <stdio.h>
#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#include <random>

#define ADDER_BASE      0x40000000  // AXI4-Lite base address

// Write region address mapping
#define ADDR_WR_A       (ADDER_BASE + 0x00)    // Write address for operand A
#define ADDR_WR_B       (ADDER_BASE + 0x04)    // Write address for operand B

// Read region address mapping
#define ADDR_RD_A       (ADDER_BASE + 0x40)    // Read address for operand A
#define ADDR_RD_B       (ADDER_BASE + 0x44)    // Read address for operand B
#define ADDR_RESULT     (ADDER_BASE + 0x48)    // Read address for result register

#define MAX_I           (100*1000*1000)

int get_result_adder(int a, int b);

int main() {
    int i = 0;
    int a = 0; // random    
    int b = 0; // random

    while (1) {
        i++;
        if (i == MAX_I){
            i = 0;
            int result_PS, result_PL;
            xil_printf("Starting AXI4 Adder Test...\r\n");

            result_PS = a + b;
            result_PL = get_result_adder(a, b);

            xil_printf("Add Result by PS adder: %d + %d = %d\r\n", a, b, result_PS);
            xil_printf("Add Result by PL adder: %d + %d = %d\r\n", a, b, result_PL);

            if (result_PL == result_PS) {
                xil_printf("Correct:    The results of PL and PS are consistent.\r\n");
            } else {
                xil_printf("Error:      The results of PL and PS are Inconsistent.\r\n");
            }
            // Update operands using random numbers
            a = rand() % 100;
            b = rand() % 100;
        }
    }
    return 0;
}

int get_result_adder(int a, int b){
    // Write operands to write region
    Xil_Out32(ADDR_WR_A, a);
    Xil_Out32(ADDR_WR_B, b);
    
    // Directly read result - no need to wait for status; read triggers computation
    int result = Xil_In32(ADDR_RESULT);
    
    return result;
}
