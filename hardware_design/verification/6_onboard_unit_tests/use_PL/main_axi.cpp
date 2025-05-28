#include <stdio.h>
#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"

#define ADDER_BASE      0x40000000  // AXI4-Lite 基地址

#define ADDR_A          (ADDER_BASE + 0x00)
#define ADDR_B          (ADDER_BASE + 0x04)
#define ADDR_CTRL       (ADDER_BASE + 0x08)
#define ADDR_STAT       (ADDER_BASE + 0x0C)
#define ADDR_RESULT     (ADDER_BASE + 0x10)

#define MAX_I           (100*1000*1000)
#define TIMEOUT_LIMIT   1000000     // 防止死等状态的最大轮询次数

int get_result_adder(int a, int b);

int main() {
    int i = 0;
    int a = 1;
    int b = 1;

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

            a++;
            b++;
        }
    }
    return 0;
}

int get_result_adder(int a, int b){
    int result = 0;
    int timeout_counter = 0;

    // 写入操作数
    Xil_Out32(ADDR_A, a);
    Xil_Out32(ADDR_B, b);

    // 写入启动控制寄存器
    Xil_Out32(ADDR_CTRL, 1);

    // 等待 status 寄存器置位（表示完成）
    while ((Xil_In32(ADDR_STAT) & 0x1) == 0) {
        timeout_counter++;
        if (timeout_counter > TIMEOUT_LIMIT) {
            xil_printf("Timeout waiting for PL adder to complete!\r\n");
            return -1;
        }
    }

    // 读取结果
    result = Xil_In32(ADDR_RESULT);

    return result;
}
