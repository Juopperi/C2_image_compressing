#include "Vmyip.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

// 仿真时间单位
#define RESET_PERIOD  5
#define PERIOD        10
#define SIM_PERIOD    4000  // Increased simulation time for extended testing

// AXI响应码
#define AXI_RESP_OKAY    0
#define AXI_RESP_EXOKAY  1
#define AXI_RESP_SLVERR  2
#define AXI_RESP_DECERR  3

// Memory Region Addresses
#define WRITE_BASE_ADDR  0x00  // 0x00-0x3F
#define READ_BASE_ADDR   0x40  // 0x40-0x7F
#define CONFIG_BASE_ADDR 128   // 0x80-0x8F

// Configuration Register Bits
#define CONFIG_PROCESS_BEGIN  0x01  // Bit 0 of config register
#define CONFIG_PROCESS_DONE   0x01  // Bit 9 of config register

// 初始化AXI总线接口
void axi_init(Vmyip* top) {
    top->s00_axi_aclk = 0;
    top->s00_axi_aresetn = 0;
    top->s00_axi_awaddr = 0;
    top->s00_axi_awprot = 0;
    top->s00_axi_awvalid = 0;
    top->s00_axi_wdata = 0;
    top->s00_axi_wstrb = 0;
    top->s00_axi_wvalid = 0;
    top->s00_axi_bready = 0;
    top->s00_axi_araddr = 0;
    top->s00_axi_arprot = 0;
    top->s00_axi_arvalid = 0;
    top->s00_axi_rready = 0;
}

// 复位AXI总线接口
void axi_reset(Vmyip* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // 发送复位信号
    top->s00_axi_aresetn = 0;
    
    // 等待几个时钟周期
    for (int i = 0; i < RESET_PERIOD; i++) {
        top->s00_axi_aclk = 0;
        top->eval();
        tfp->dump(sim_time++);
        top->s00_axi_aclk = 1;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    // 释放复位
    top->s00_axi_aresetn = 1;
    top->s00_axi_aclk = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->s00_axi_aclk = 1;
    top->eval();
    tfp->dump(sim_time++);
}

// 发送一个时钟周期
void clock_cycle(Vmyip* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    top->s00_axi_aclk = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->s00_axi_aclk = 1;
    top->eval();
    tfp->dump(sim_time++);
}

// 延迟指定的时钟周期数
void delay_clock(Vmyip* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int delay) {
    for (int i = 0; i < delay; i++) {
        clock_cycle(top, tfp, sim_time);
    }
}

// AXI写函数 - 向指定地址写入数据，实现完整握手流程
bool axi_write(Vmyip* top, uint32_t addr, uint32_t data, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    bool success = false;
    
    std::cout << "开始写入地址: 0x" << std::hex << addr << ", 数据: 0x" << data << std::dec << std::endl;
    
    // 第1步: 地址写通道握手 - 设置地址和控制信号
    top->s00_axi_awaddr = addr << 2;  // 左移2位实现地址对齐
    top->s00_axi_awprot = 0;
    top->s00_axi_awvalid = 1;
    
    // 等待从设备准备好接收地址 (awready = 1)
    int timeout = 20;
    while (timeout > 0 && !top->s00_axi_awready) {
        std::cout << "等待awready信号..." << std::endl;
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查地址写通道超时
    if (timeout == 0) {
        std::cout << "AXI地址写通道超时，地址: 0x" << std::hex << addr << std::dec << std::endl;
        top->s00_axi_awvalid = 0;
        return false;
    }
    
    // 地址传输完成，可以撤销awvalid
    std::cout << "地址写通道握手成功!" << std::endl;
    clock_cycle(top, tfp, sim_time);
    top->s00_axi_awvalid = 0;
    
    // 第2步: 数据写通道握手 - 设置数据和控制信号
    top->s00_axi_wdata = data;
    top->s00_axi_wstrb = 0xF;  // 所有字节使能
    top->s00_axi_wvalid = 1;
    
    // 等待从设备准备好接收数据 (wready = 1)
    timeout = 20;
    while (timeout > 0 && !top->s00_axi_wready) {
        std::cout << "等待wready信号..." << std::endl;
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查数据写通道超时
    if (timeout == 0) {
        std::cout << "AXI数据写通道超时，地址: 0x" << std::hex << addr << std::dec << std::endl;
        top->s00_axi_wvalid = 0;
        return false;
    }
    
    // 数据传输完成，可以撤销wvalid
    std::cout << "数据写通道握手成功!" << std::endl;
    clock_cycle(top, tfp, sim_time);
    top->s00_axi_wvalid = 0;
    
    // 第3步: 响应通道握手 - 设置bready，等待从设备的bvalid和bresp
    top->s00_axi_bready = 1;
    
    // 等待从设备响应 (bvalid = 1)
    timeout = 20;
    while (timeout > 0 && !top->s00_axi_bvalid) {
        std::cout << "等待bvalid信号..." << std::endl;
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查响应通道超时
    if (timeout == 0) {
        std::cout << "AXI响应通道超时，地址: 0x" << std::hex << addr << std::dec << std::endl;
        top->s00_axi_bready = 0;
        return false;
    }
    
    // 检查响应状态码
    if (top->s00_axi_bresp == AXI_RESP_OKAY) {
        success = true;
        std::cout << "写入成功!" << std::endl;
    } else {
        std::cout << "AXI写入错误，地址: 0x" << std::hex << addr << ", 响应: " << top->s00_axi_bresp << std::dec << std::endl;
    }
    
    // 响应接收完成，可以撤销bready
    clock_cycle(top, tfp, sim_time);
    top->s00_axi_bready = 0;
    
    // 打印写入结果
    std::cout << "写入完成: 地址: 0x" << std::hex << addr << ", 数据: 0x" << data << (success ? " 成功" : " 失败") << std::dec << std::endl;
    
    // 延迟一个时钟周期，让系统稳定
    clock_cycle(top, tfp, sim_time);
    
    return success;
}

// AXI读函数 - 从指定地址读取数据，实现完整握手流程
uint32_t axi_read(Vmyip* top, uint32_t addr, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    uint32_t read_data = 0;
    bool success = false;
    
    std::cout << "开始读取地址: 0x" << std::hex << addr << std::dec << std::endl;
    
    // 第1步: 地址读通道握手 - 设置地址和控制信号
    top->s00_axi_araddr = addr << 2;  // 左移2位实现地址对齐
    top->s00_axi_arprot = 0;
    top->s00_axi_arvalid = 1;
    
    // 等待从设备准备好接收地址 (arready = 1)
    int timeout = 20;
    while (timeout > 0 && !top->s00_axi_arready) {
        std::cout << "等待arready信号..." << std::endl;
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查地址读通道超时
    if (timeout == 0) {
        std::cout << "AXI地址读通道超时，地址: 0x" << std::hex << addr << std::dec << std::endl;
        top->s00_axi_arvalid = 0;
        return 0;
    }
    
    // 地址传输完成，可以撤销arvalid
    std::cout << "地址读通道握手成功!" << std::endl;
    clock_cycle(top, tfp, sim_time);
    top->s00_axi_arvalid = 0;
    
    // 第2步: 数据读通道握手 - 设置rready，等待从设备的rvalid、rdata和rresp
    top->s00_axi_rready = 1;
    
    // 等待从设备发送数据 (rvalid = 1)
    timeout = 20;
    while (timeout > 0 && !top->s00_axi_rvalid) {
        std::cout << "等待rvalid信号..." << std::endl;
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查数据读通道超时
    if (timeout == 0) {
        std::cout << "AXI数据读通道超时，地址: 0x" << std::hex << addr << std::dec << std::endl;
        top->s00_axi_rready = 0;
        return 0;
    }
    
    // 检查响应状态码并获取数据
    if (top->s00_axi_rresp == AXI_RESP_OKAY) {
        read_data = top->s00_axi_rdata;
        success = true;
        std::cout << "读取成功: 数据 = 0x" << std::hex << read_data << std::dec << std::endl;
    } else {
        std::cout << "AXI读取错误，地址: 0x" << std::hex << addr << ", 响应: " << top->s00_axi_rresp << std::dec << std::endl;
    }
    
    // 数据接收完成，可以撤销rready
    clock_cycle(top, tfp, sim_time);
    top->s00_axi_rready = 0;
    
    // 打印读取结果
    std::cout << "读取完成: 地址: 0x" << std::hex << addr << ", 数据: 0x" << read_data << (success ? " 成功" : " 失败") << std::dec << std::endl;
    
    // 延迟一个时钟周期，让系统稳定
    clock_cycle(top, tfp, sim_time);
    
    return read_data;
}

// 启动模块处理功能
bool start_processing(Vmyip* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    std::cout << "========= 启动处理功能 =========" << std::endl;
    
    // 写入启动位
    if (!axi_write(top, CONFIG_BASE_ADDR, CONFIG_PROCESS_BEGIN, tfp, sim_time)) {
        std::cout << "设置启动位失败!" << std::endl;
        return false;
    }
    
    std::cout << "启动处理功能成功!" << std::endl;
    return true;
}

// 等待处理完成
bool wait_for_processing_done(Vmyip* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int max_timeout) {
    std::cout << "========= 等待处理完成 =========" << std::endl;
    
    uint32_t config_reg;
    int timeout = max_timeout;
    
    // 循环检查处理完成位
    while (timeout > 0) {
        // 读取配置寄存器
        config_reg = axi_read(top, CONFIG_BASE_ADDR+CONFIG_PROCESS_DONE, tfp, sim_time);
        
        // 检查处理完成位
        // if (config_reg & (1 << (CONFIG_PROCESS_DONE & 0xF))) {
        if (config_reg == 1) {
            std::cout << "处理完成位已设置!" << std::endl;
            return true;
        }
        
        // 等待几个时钟周期
        delay_clock(top, tfp, sim_time, 5);
        timeout--;
    }
    
    std::cout << "等待处理完成超时!" << std::endl;
    return false;
}

// 停止处理功能
bool stop_processing(Vmyip* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    std::cout << "========= 停止处理功能 =========" << std::endl;
    
    // 清除启动位
    if (!axi_write(top, CONFIG_BASE_ADDR, 0, tfp, sim_time)) {
        std::cout << "清除启动位失败!" << std::endl;
        return false;
    }
    
    std::cout << "停止处理功能成功!" << std::endl;
    return true;
}

// 验证数据
bool verify_data(Vmyip* top, VerilatedVcdC* tfp, vluint64_t& sim_time, uint32_t write_addr, uint32_t read_addr) {
    uint32_t original_data, processed_data, expected_data;
    
    // 读取原始数据
    original_data = axi_read(top, write_addr, tfp, sim_time);
    
    // 读取处理后的数据
    processed_data = axi_read(top, read_addr, tfp, sim_time);
    
    // 计算期望数据 (按照inverter模块的功能，输出应该是输入的按位取反)
    expected_data = ~original_data;
    
    // 验证处理后的数据是否符合预期
    if (processed_data == expected_data) {
        std::cout << "验证成功: 原始数据=0x" << std::hex << original_data 
                  << ", 处理后数据=0x" << processed_data 
                  << ", 期望数据=0x" << expected_data << std::dec << std::endl;
        return true;
    } else {
        std::cout << "验证失败: 原始数据=0x" << std::hex << original_data 
                  << ", 处理后数据=0x" << processed_data 
                  << ", 期望数据=0x" << expected_data << std::dec << std::endl;
        return false;
    }
}

// 主函数 - 展示如何测试myip模块的读写功能
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // 创建模块实例
    Vmyip* top = new Vmyip;
    
    // 创建波形文件
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("myip_test.vcd");
    
    vluint64_t sim_time = 0;
    bool test_success = true;
    bool all_verified = true;  // 移到这里，避免goto跳过初始化
    
    // 初始化
    axi_init(top);
    
    // 记录初始状态
    top->eval();
    tfp->dump(sim_time++);
    
    // 复位
    axi_reset(top, tfp, sim_time);
    
    // 延迟一段时间让系统稳定
    delay_clock(top, tfp, sim_time, 5);
    
    // 测试 1: 基础写入测试
    std::cout << "========= 测试 1: 基础写入测试 =========" << std::endl;
    for (uint32_t addr = 0; addr < 0x40; addr += 4) {
        // 写入地址对应的数据（便于验证）
        axi_write(top, addr, addr + 0x12345678, tfp, sim_time);
        delay_clock(top, tfp, sim_time, 2);
    }
    
    // 测试 2: 启动处理功能
    std::cout << "========= 测试 2: 启动处理功能 =========" << std::endl;
    if (!start_processing(top, tfp, sim_time)) {
        std::cout << "启动处理功能失败, 测试中止!" << std::endl;
        test_success = false;
        goto cleanup;  // 现在这个goto可以正确工作，因为不会跳过变量初始化
    }
    delay_clock(top, tfp, sim_time, 10);
    
    // 测试 3: 等待处理完成
    std::cout << "========= 测试 3: 等待处理完成 =========" << std::endl;
    if (!wait_for_processing_done(top, tfp, sim_time, 200)) {
        std::cout << "等待处理完成失败, 测试继续!" << std::endl;
    }
    delay_clock(top, tfp, sim_time, 10);
    
    // 测试 4: 验证处理结果
    std::cout << "========= 测试 4: 验证处理结果 =========" << std::endl;
    all_verified = true;  // 重置验证标志
    for (uint32_t i = 0; i < 0x40; i += 4) {
        uint32_t write_addr = WRITE_BASE_ADDR + i;
        uint32_t read_addr = READ_BASE_ADDR + i;
        
        if (!verify_data(top, tfp, sim_time, write_addr, read_addr)) {
            all_verified = false;
        }
        delay_clock(top, tfp, sim_time, 2);
    }
    
    if (all_verified) {
        std::cout << "所有数据验证成功!" << std::endl;
    } else {
        std::cout << "部分数据验证失败!" << std::endl;
    }
    
    // 测试 5: 停止处理功能
    std::cout << "========= 测试 5: 停止处理功能 =========" << std::endl;
    if (!stop_processing(top, tfp, sim_time)) {
        std::cout << "停止处理功能失败, 测试中止!" << std::endl;
        test_success = false;
        goto cleanup;
    }
    delay_clock(top, tfp, sim_time, 10);
    
    // 测试 6: 再次启动处理功能
    std::cout << "========= 测试 6: 再次启动处理功能 =========" << std::endl;
    
    // 先修改部分写入区域的数据
    for (uint32_t addr = 0; addr < 0x40; addr += 8) {
        axi_write(top, addr, 0xDEADBEEF, tfp, sim_time);
        delay_clock(top, tfp, sim_time, 2);
    }
    
    // 启动处理
    if (!start_processing(top, tfp, sim_time)) {
        std::cout << "再次启动处理功能失败, 测试中止!" << std::endl;
        test_success = false;
        goto cleanup;
    }
    delay_clock(top, tfp, sim_time, 10);
    
    // 等待处理完成
    if (!wait_for_processing_done(top, tfp, sim_time, 200)) {
        std::cout << "等待处理完成失败, 测试继续!" << std::endl;
    }
    delay_clock(top, tfp, sim_time, 10);
    
    // 验证修改过的数据
    std::cout << "验证修改过的数据:" << std::endl;
    all_verified = true;  // 重置验证标志
    for (uint32_t i = 0; i < 0x40; i += 8) {
        uint32_t write_addr = WRITE_BASE_ADDR + i;
        uint32_t read_addr = READ_BASE_ADDR + i;
        
        if (!verify_data(top, tfp, sim_time, write_addr, read_addr)) {
            all_verified = false;
        }
        delay_clock(top, tfp, sim_time, 2);
    }
    
    if (all_verified) {
        std::cout << "所有修改的数据验证成功!" << std::endl;
    } else {
        std::cout << "部分修改的数据验证失败!" << std::endl;
    }
    
    // 停止处理功能
    stop_processing(top, tfp, sim_time);
    
    // 再执行一些时钟周期，让系统稳定
    delay_clock(top, tfp, sim_time, 10);
    
cleanup:
    // 确保最后的状态被记录
    top->eval();
    tfp->dump(sim_time);
    tfp->flush();
    
    // 清理
    tfp->close();
    delete top;
    delete tfp;
    
    std::cout << "测试完成，总时间: " << sim_time << std::endl;
    return test_success ? 0 : 1;
}