#include <stdio.h>
#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#define ADDER_BASE      0x40000000  // The address of the 32-bit adder 
// #include "sleep.h"  // 用于 `usleep()` 延迟

#define MAX_I 100*1000*1000

int get_result(int, int);

int main() {

    int i = 0;
    int a = 1;
    int b = 1;

    while (1) {
        i ++;
        // xil_printf("Hello, World!\r\n");  // 通过 UART 串口打印        
        if (i == MAX_I){
            //  xil_printf("Hello, World!\r\n");
             i = 0;
            int result_PS, result_PL;
            xil_printf("Starting AXI4 Adder Test...\r\n");
            result_PS = a+b;
            result_PL = get_result(a, b);
            xil_printf("Add Result by PS adder: %d + %d = %d\r\n", a, b, result_PS);
            xil_printf("Add Result by PL adder: %d + %d = %d\r\n", a, b, result_PL);
            if (result_PL == result_PS ) {
                xil_printf("Correct:    The results of PL and PS are consistent.\r\n");
            }
            else {
                xil_printf("Error:      The results of PL and PS are Inconsistent.\r\n");
            }
            a++;
            b++;
        }
    }
    return 0;
}


int get_result_adder(int a, int b){
    int result = 0;

    Xil_Out32(ADDER_BASE, a);
    Xil_Out32(ADDER_BASE + 4, b);
    result = Xil_In32(ADDER_BASE + 8);
    
    return result;
}
