#include <stdio.h>
#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#include <random>

#define ADDER_BASE      0x40000000  // AXI4-Lite 基地址

// 写入区域地址映射
#define ADDR_WR_A       (ADDER_BASE + 0x00)    // 操作数A的写入地址
#define ADDR_WR_B       (ADDER_BASE + 0x04)    // 操作数B的写入地址

// 读取区域地址映射
#define ADDR_RD_A       (ADDER_BASE + 0x40)    // 操作数A的读取地址
#define ADDR_RD_B       (ADDER_BASE + 0x44)    // 操作数B的读取地址
#define ADDR_RESULT     (ADDER_BASE + 0x48)    // 结果寄存器的读取地址

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
            // 更新操作数，使用随机数
            a = rand() % 100;
            b = rand() % 100;

        }
    }
    return 0;
}

int get_result_adder(int a, int b){
    // 写入操作数到写入区域
    Xil_Out32(ADDR_WR_A, a);
    Xil_Out32(ADDR_WR_B, b);
    
    // 直接读取结果 - 无需等待状态，读取操作会触发计算
    int result = Xil_In32(ADDR_RESULT);
    
    return result;
}
