#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xil_io.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "sleep.h"

// 定义常量，与仿真程序保持一致
#define RESET_PERIOD    5
#define PERIOD          10
#define SIM_PERIOD      4000

// AXI响应码
#define AXI_RESP_OKAY   0
#define AXI_RESP_EXOKAY 1
#define AXI_RESP_SLVERR 2
#define AXI_RESP_DECERR 3

// 内存区域地址 - 使用与仿真程序相同的相对偏移
#define WRITE_BASE_ADDR  0x00  // 0x00-0x3F
#define READ_BASE_ADDR   0x40  // 0x40-0x7F
#define CONFIG_BASE_ADDR 128   // 0x80-0x8F，关键修改点

// 配置寄存器位
#define CONFIG_PROCESS_BEGIN  0x01  // Bit 0 控制位
#define CONFIG_PROCESS_DONE   0x01  // Bit 0 状态位，此处根据仿真程序使用

// AXI Peripheral 基地址
#define AXI_BASEADDR XPAR_MYIP_0_BASEADDR  

// 轮询参数
#define POLLING_TIMEOUT_MS    5000    // 5秒超时
#define POLLING_DELAY_MS      10      // 10ms轮询间隔

// 获取完整物理地址 - 包含左移2位的地址对齐操作
#define GET_REG_ADDR(offset) (AXI_BASEADDR + (((offset) << 2)))

// 函数声明
void axi_reset(void);
void delay(int ms);
bool axi_write(uint32_t addr, uint32_t data);
uint32_t axi_read(uint32_t addr, bool print = true);
bool start_processing(void);
bool wait_for_processing_done(int max_timeout);
bool stop_processing(void);
bool verify_data(uint32_t write_addr, uint32_t read_addr);

// 主函数
int main(void) {
    xil_printf("\r\n========= MYIP测试程序开始 =========\r\n");
    bool test_success = true;
    bool all_verified = true;
    
    // 复位IP核
    xil_printf("执行IP核复位...\r\n");
    axi_reset();
    delay(RESET_PERIOD * 10);  // 对应仿真程序的时钟周期延迟
    
    // 测试 1: 基础写入测试
    xil_printf("\r\n========= 测试 1: 基础写入测试 =========\r\n");
    for (uint32_t addr = 0; addr < 0x40; addr += 4) {
        // 写入地址对应的数据（与仿真程序保持一致）
        axi_write(addr, addr + 0x12345678);
        delay(20);  // 对应仿真程序的时钟周期延迟
    }
    
    // 测试 2: 启动处理功能
    xil_printf("\r\n========= 测试 2: 启动处理功能 =========\r\n");
    if (!start_processing()) {
        xil_printf("启动处理功能失败, 测试中止!\r\n");
        test_success = false;
        goto cleanup;
    }
    delay(100);
    
    // 测试 3: 等待处理完成
    xil_printf("\r\n========= 测试 3: 等待处理完成 =========\r\n");
    if (!wait_for_processing_done(2000)) {  // 2000ms超时
        xil_printf("等待处理完成失败, 测试继续!\r\n");
    }
    delay(100);
    
    // 测试 4: 验证处理结果
    xil_printf("\r\n========= 测试 4: 验证处理结果 =========\r\n");
    all_verified = true;
    for (uint32_t i = 0; i < 0x40; i += 4) {
        uint32_t write_addr = WRITE_BASE_ADDR + i;
        uint32_t read_addr = READ_BASE_ADDR + i;
        
        if (!verify_data(write_addr, read_addr)) {
            all_verified = false;
        }
        delay(20);
    }
    
    if (all_verified) {
        xil_printf("所有数据验证成功!\r\n");
    } else {
        xil_printf("部分数据验证失败!\r\n");
    }
    
    // 测试 5: 停止处理功能
    xil_printf("\r\n========= 测试 5: 停止处理功能 =========\r\n");
    if (!stop_processing()) {
        xil_printf("停止处理功能失败, 测试中止!\r\n");
        test_success = false;
        goto cleanup;
    }
    delay(100);
    
    // 测试 6: 再次启动处理功能
    xil_printf("\r\n========= 测试 6: 再次启动处理功能 =========\r\n");
    
    // 先修改部分写入区域的数据
    for (uint32_t addr = 0; addr < 0x40; addr += 8) {
        axi_write(addr, 0xDEADBEEF);
        delay(20);
    }
    
    // 启动处理
    if (!start_processing()) {
        xil_printf("再次启动处理功能失败, 测试中止!\r\n");
        test_success = false;
        goto cleanup;
    }
    delay(100);
    
    // 等待处理完成
    if (!wait_for_processing_done(2000)) {
        xil_printf("等待处理完成失败, 测试继续!\r\n");
    }
    delay(100);
    
    // 验证修改过的数据
    xil_printf("验证修改过的数据:\r\n");
    all_verified = true;
    for (uint32_t i = 0; i < 0x40; i += 8) {
        uint32_t write_addr = WRITE_BASE_ADDR + i;
        uint32_t read_addr = READ_BASE_ADDR + i;
        
        if (!verify_data(write_addr, read_addr)) {
            all_verified = false;
        }
        delay(20);
    }
    
    if (all_verified) {
        xil_printf("所有修改的数据验证成功!\r\n");
    } else {
        xil_printf("部分修改的数据验证失败!\r\n");
    }
    
    // 停止处理功能
    stop_processing();
    delay(100);
    
cleanup:
    xil_printf("\r\n测试完成，结果: %s\r\n", test_success ? "成功" : "失败");
    return test_success ? 0 : 1;
}

// 复位功能
void axi_reset(void) {
    // 在实际硬件上，可以通过写入复位寄存器或特定控制位来复位IP核
    xil_printf("执行IP核复位 (写入复位控制寄存器)\r\n");
    // 这里假设复位是通过向配置寄存器写0实现的
    Xil_Out32(GET_REG_ADDR(CONFIG_BASE_ADDR), 0);
    delay(50);  // 等待复位完成
}

// 延迟函数
void delay(int ms) {
    usleep(ms * 1000);
}

// AXI写函数
bool axi_write(uint32_t addr, uint32_t data) {
    xil_printf("开始写入地址: 0x%08x, 数据: 0x%08x\r\n", addr, data);
    
    // 使用Xilinx提供的API进行写操作
    Xil_Out32(GET_REG_ADDR(addr), data);
    
    // 读回验证（可选）
    uint32_t readback = Xil_In32(GET_REG_ADDR(addr));
    if (readback != data) {
        xil_printf("写入验证失败: 期望 0x%08x, 读取到 0x%08x\r\n", data, readback);
        return false;
    }
    
    xil_printf("写入成功!\r\n");
    return true;
}

// AXI读函数
uint32_t axi_read(uint32_t addr, bool print) {
    if (print) {
        xil_printf("开始读取地址: 0x%08x\r\n", addr);
    }
    
    // 使用Xilinx提供的API进行读操作
    uint32_t data = Xil_In32(GET_REG_ADDR(addr));
    
    if (print) {
        xil_printf("读取成功: 数据 = 0x%08x\r\n", data);
    }
    return data;
}

// 启动模块处理功能
bool start_processing(void) {
    xil_printf("========= 启动处理功能 =========\r\n");
    
    // 写入启动位
    if (!axi_write(CONFIG_BASE_ADDR, CONFIG_PROCESS_BEGIN)) {
        xil_printf("设置启动位失败!\r\n");
        return false;
    }
    
    xil_printf("启动处理功能成功!\r\n");
    return true;
}

// 等待处理完成
bool wait_for_processing_done(int max_timeout_ms) {
    xil_printf("========= 等待处理完成 =========\r\n");
    
    uint32_t config_reg;
    int elapsed_time = 0;
    
    // 循环检查处理完成位
    while (elapsed_time < max_timeout_ms) {
        // 读取配置寄存器中的状态位
        config_reg = axi_read(CONFIG_BASE_ADDR + 1, false);  // 与仿真程序保持一致，检查第1个寄存器
        
        // 检查处理完成位
        if (config_reg == CONFIG_PROCESS_DONE) {
            xil_printf("处理完成位已设置!\r\n");
            return true;
        }
        
        // 等待
        delay(POLLING_DELAY_MS);
        elapsed_time += POLLING_DELAY_MS;
        
        // 每500ms打印一次等待状态
        if (elapsed_time % 500 == 0) {
            xil_printf("仍在等待处理完成... 已等待 %d ms\r\n", elapsed_time);
        }
    }
    
    xil_printf("等待处理完成超时!\r\n");
    return false;
}

// 停止处理功能
bool stop_processing(void) {
    xil_printf("========= 停止处理功能 =========\r\n");
    
    // 清除启动位
    if (!axi_write(CONFIG_BASE_ADDR, 0)) {
        xil_printf("清除启动位失败!\r\n");
        return false;
    }
    
    xil_printf("停止处理功能成功!\r\n");
    return true;
}

// 验证数据
bool verify_data(uint32_t write_addr, uint32_t read_addr) {
    uint32_t original_data, processed_data, expected_data;
    
    // 读取原始数据
    original_data = axi_read(write_addr, true);
    
    // 读取处理后的数据
    processed_data = axi_read(read_addr, true);
    
    // 计算期望数据 (按照inverter模块的功能，输出应该是输入的按位取反)
    expected_data = ~original_data;
    
    // 验证处理后的数据是否符合预期
    if (processed_data == expected_data) {
        xil_printf("验证成功: 原始数据=0x%08x, 处理后数据=0x%08x, 期望数据=0x%08x\r\n", 
                  original_data, processed_data, expected_data);
        return true;
    } else {
        xil_printf("验证失败: 原始数据=0x%08x, 处理后数据=0x%08x, 期望数据=0x%08x\r\n", 
                  original_data, processed_data, expected_data);
        return false;
    }
}