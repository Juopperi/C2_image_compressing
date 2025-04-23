#include <stdio.h>
#include <stdlib.h>
#include "xil_printf.h"
#include "xil_io.h"
#include "xil_exception.h"
#include "xscugic.h"
#include "sleep.h"
#include "xparameters.h"

// AXI 寄存器基地址（从地址编辑器中获取，确认这些地址与你的系统匹配）
#define S00_AXI_BASEADDR    XPAR_AXI_INT_0_BASEADDR  // 使用xparameters.h中定义的基址
#define S_AXI_INTR_BASEADDR (XPAR_AXI_INT_0_BASEADDR + 0x10000)  // 中断控制器通常是偏移0x10000

// 寄存器地址偏移量
#define DATA_REG_OFFSET     0x0  // 数据寄存器
#define CTRL_REG_OFFSET     0x4  // 控制寄存器
#define STATUS_REG_OFFSET   0x8  // 状态寄存器
#define INT_ENABLE_OFFSET   0xC  // 中断使能寄存器

// 控制寄存器位定义
#define CTRL_INT_CLEAR      0x1  // 中断清除位 (bit 0)
#define CTRL_RESET_STATE    0x2  // 状态机复位位 (bit 1)

// 中断相关定义 
#define INTR_ENABLE_BIT     0x1  // 中断使能位

// 中断控制器ID
#define INTC_DEVICE_ID      XPAR_SCUGIC_SINGLE_DEVICE_ID
// 请根据您的系统配置选择正确的中断ID
// 在Vitis中可以查看xparameters.h或运行以下命令获取完整的中断ID列表:
// grep -r "XPAR_FABRIC" --include="*.h" <BSP路径>
#define AXI_INT_IRQ_ID      91  // 直接使用数字ID - 需要根据您的系统配置修改这个值!

// GIC中断控制器实例
static XScuGic IntcInstance;
static XScuGic_Config *IntcConfig;

// 中断标志
volatile int interrupt_received = 0;

// 中断处理函数
void interrupt_handler(void *CallbackRef) {
    xil_printf("Interrupt received!\r\n");
    interrupt_received = 1;
}

// 初始化中断控制器
int setup_interrupt_system() {
    int Status;
    
    // 初始化GIC控制器
    IntcConfig = XScuGic_LookupConfig(INTC_DEVICE_ID);
    if (NULL == IntcConfig) {
        return XST_FAILURE;
    }
    
    Status = XScuGic_CfgInitialize(&IntcInstance, IntcConfig, IntcConfig->CpuBaseAddress);
    if (Status != XST_SUCCESS) {
        return XST_FAILURE;
    }
    
    // 设置和启用中断异常
    Xil_ExceptionInit();
    Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT, 
                                (Xil_ExceptionHandler)XScuGic_InterruptHandler, 
                                &IntcInstance);
    Xil_ExceptionEnable();
    
    // 为自定义AXI设备注册中断处理函数
    Status = XScuGic_Connect(&IntcInstance, AXI_INT_IRQ_ID, 
                            (Xil_ExceptionHandler)interrupt_handler, 
                            NULL);
    if (Status != XST_SUCCESS) {
        return XST_FAILURE;
    }
    
    // 使能中断
    XScuGic_Enable(&IntcInstance, AXI_INT_IRQ_ID);
    
    return XST_SUCCESS;
}

// 等待中断或超时
int wait_for_interrupt(int timeout_ms) {
    int i;
    interrupt_received = 0;
    
    for (i = 0; i < timeout_ms; i++) {
        // 检查状态寄存器中的中断状态位
        u32 status = Xil_In32(S00_AXI_BASEADDR + STATUS_REG_OFFSET);
        if (status & 0x1) {
            // 实际系统中，中断处理函数将被GIC自动调用，无需轮询
            xil_printf("状态寄存器显示中断已触发 (0x%08x)\r\n", status);
        }
        
        if (interrupt_received) {
            return XST_SUCCESS;
        }
        
        // 延时1毫秒
        usleep(1000);
    }
    
    xil_printf("等待中断超时!\r\n");
    return XST_FAILURE;
}

int main() {
    int Status;
    u32 test_data = 0xA5A5A5A5;
    u32 read_data;
    
    xil_printf("\r\n--- AXI 中断测试程序开始 ---\r\n");
    xil_printf("AXI基地址: 0x%08x\r\n", S00_AXI_BASEADDR);
    xil_printf("中断IRQ ID: %d\r\n", AXI_INT_IRQ_ID);
    
    // 初始化中断系统
    Status = setup_interrupt_system();
    if (Status != XST_SUCCESS) {
        xil_printf("中断系统初始化失败\r\n");
        return XST_FAILURE;
    }
    
    // 使能AXI中断控制器
    xil_printf("使能中断...\r\n");
    Xil_Out32(S00_AXI_BASEADDR + INT_ENABLE_OFFSET, INTR_ENABLE_BIT);
    Xil_Out32(S_AXI_INTR_BASEADDR, INTR_ENABLE_BIT);
    
    // 读取初始状态
    read_data = Xil_In32(S00_AXI_BASEADDR + STATUS_REG_OFFSET);
    xil_printf("初始状态: 0x%08x\r\n", read_data);
    
    // 写入测试数据
    xil_printf("写入测试数据: 0x%08x\r\n", test_data);
    Xil_Out32(S00_AXI_BASEADDR + DATA_REG_OFFSET, test_data);
    
    // 等待中断
    xil_printf("等待中断触发（1秒延时后）...\r\n");
    if (wait_for_interrupt(5000) != XST_SUCCESS) {  // 等待最多5秒(5000毫秒)
        xil_printf("等待中断失败\r\n");
        return XST_FAILURE;
    }
    
    // 读取状态
    read_data = Xil_In32(S00_AXI_BASEADDR + STATUS_REG_OFFSET);
    xil_printf("中断触发后状态: 0x%08x\r\n", read_data);
    
    // 读取数据
    read_data = Xil_In32(S00_AXI_BASEADDR + DATA_REG_OFFSET);
    xil_printf("读取数据: 0x%08x\r\n", read_data);
    
    // 验证数据
    if (read_data == test_data) {
        xil_printf("数据验证成功!\r\n");
    } else {
        xil_printf("数据验证失败! 预期: 0x%08x, 实际: 0x%08x\r\n", test_data, read_data);
    }
    
    // 清除中断
    xil_printf("清除中断...\r\n");
    Xil_Out32(S00_AXI_BASEADDR + CTRL_REG_OFFSET, CTRL_INT_CLEAR);
    
    // 等待中断清除
    usleep(100000);  // 等待100毫秒
    
    // 读取清除后状态
    read_data = Xil_In32(S00_AXI_BASEADDR + STATUS_REG_OFFSET);
    xil_printf("中断清除后状态: 0x%08x\r\n", read_data);
    
    // 复位状态机，准备下一次测试
    xil_printf("复位状态机...\r\n");
    Xil_Out32(S00_AXI_BASEADDR + CTRL_REG_OFFSET, CTRL_RESET_STATE);
    
    xil_printf("--- AXI 中断测试程序结束 ---\r\n");
    return XST_SUCCESS;
} 