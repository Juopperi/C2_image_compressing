#include "Vaxi_self_test.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

// 仿真时间单位
#define RESET_PERIOD  5
#define PERIOD        10
#define SIM_PERIOD    1000

// 内存映射地址
#define CONFIG_BASE 0x80
#define CONFIG_AREA 16
#define WRITE_BASE  0x00
#define WRITE_AREA  64
#define READ_BASE   0x40
#define READ_AREA   64

#define CONFIG_WRITE_OUTRANGE 0x88

// AXI响应码
#define AXI_RESP_OKAY    0
#define AXI_RESP_EXOKAY  1
#define AXI_RESP_SLVERR  2
#define AXI_RESP_DECERR  3

// 地址对齐常量
#define ADDR_ALIGN_MASK  0xFFFFFFFC  // 假设32位数据宽度(4字节对齐)

// 初始化AXI总线接口
void axi_init(Vaxi_self_test* top) {
    top->S_AXI_ACLK = 0;
    top->S_AXI_ARESETN = 0;
    top->S_AXI_AWADDR = 0;
    top->S_AXI_AWPROT = 0;
    top->S_AXI_AWVALID = 0;
    top->S_AXI_WDATA = 0;
    top->S_AXI_WSTRB = 0;
    top->S_AXI_WVALID = 0;
    top->S_AXI_BREADY = 0;
    top->S_AXI_ARADDR = 0;
    top->S_AXI_ARPROT = 0;
    top->S_AXI_ARVALID = 0;
    top->S_AXI_RREADY = 0;
}

// 复位AXI总线接口
void axi_reset(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // 发送复位信号
    top->S_AXI_ARESETN = 0;
    
    // 等待几个时钟周期
    for (int i = 0; i < RESET_PERIOD; i++) {
        top->S_AXI_ACLK = 0;
        top->eval();
        tfp->dump(sim_time++);
        top->S_AXI_ACLK = 1;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    // 释放复位
    top->S_AXI_ARESETN = 1;
    top->S_AXI_ACLK = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->S_AXI_ACLK = 1;
    top->eval();
    tfp->dump(sim_time++);
}

// 发送一个时钟周期
void clock_cycle(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    top->S_AXI_ACLK = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->S_AXI_ACLK = 1;
    top->eval();
    tfp->dump(sim_time++);
}

// 延迟指定的时钟周期数
void delay_clock(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int delay) {
    for (int i = 0; i < delay; i++) {
        clock_cycle(top, tfp, sim_time);
    }
}

// 打印AXI传输结果
void print_axi_result(const char* operation, uint32_t addr, uint32_t data, bool success) {
    std::cout << operation << ": 地址: 0x" << std::hex << addr << ", 数据: 0x" << data
              << " " << (success ? "成功" : "失败") << std::dec << std::endl;
}

// 打印地址区域信息
void print_region_info(const char* region_name, int base, int size) {
    std::cout << region_name << " - 基地址: 0x" << std::hex << base
              << ", 大小: " << std::dec << size << " 字节" << std::endl;
}

// 对齐地址
uint32_t align_address(uint32_t addr) {
    return addr & ADDR_ALIGN_MASK;
}

// AXI写函数 - 向指定地址写入数据，实现完整握手流程
bool axi_write(Vaxi_self_test* top, uint32_t addr, uint32_t data, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    bool success = false;
    
    // 对地址进行对齐处理
    uint32_t aligned_addr = align_address(addr);
    
    std::cout << "开始写入地址: 0x" << std::hex << addr 
              << " (对齐后: 0x" << aligned_addr << "), 数据: 0x" 
              << data << std::dec << std::endl;
    
    // 第1步: 地址写通道握手 - 设置地址和控制信号
    top->S_AXI_AWADDR = aligned_addr;
    top->S_AXI_AWPROT = 0;
    top->S_AXI_AWVALID = 1;
    
    // 等待从设备准备好接收地址 (awready = 1)
    int timeout = 20;
    while (timeout > 0 && !top->S_AXI_AWREADY) {
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查地址写通道超时
    if (timeout == 0) {
        std::cout << "AXI地址写通道超时，地址: 0x" << std::hex << aligned_addr << std::dec << std::endl;
        top->S_AXI_AWVALID = 0;
        return false;
    }
    
    // 地址传输完成，可以撤销awvalid
    std::cout << "地址写通道握手成功!" << std::endl;
    clock_cycle(top, tfp, sim_time);
    top->S_AXI_AWVALID = 0;
    
    // 第2步: 数据写通道握手 - 设置数据和控制信号
    top->S_AXI_WDATA = data;
    top->S_AXI_WSTRB = 0xF;  // 所有字节使能
    top->S_AXI_WVALID = 1;
    
    // 等待从设备准备好接收数据 (wready = 1)
    timeout = 20;
    while (timeout > 0 && !top->S_AXI_WREADY) {
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查数据写通道超时
    if (timeout == 0) {
        std::cout << "AXI数据写通道超时，地址: 0x" << std::hex << aligned_addr << std::dec << std::endl;
        top->S_AXI_WVALID = 0;
        return false;
    }
    
    // 数据传输完成，可以撤销wvalid
    std::cout << "数据写通道握手成功!" << std::endl;
    clock_cycle(top, tfp, sim_time);
    top->S_AXI_WVALID = 0;
    
    // 第3步: 响应通道握手 - 设置bready，等待从设备的bvalid和bresp
    top->S_AXI_BREADY = 1;
    
    // 等待从设备响应 (bvalid = 1)
    timeout = 20;
    while (timeout > 0 && !top->S_AXI_BVALID) {
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查响应通道超时
    if (timeout == 0) {
        std::cout << "AXI响应通道超时，地址: 0x" << std::hex << aligned_addr << std::dec << std::endl;
        top->S_AXI_BREADY = 0;
        return false;
    }
    
    // 检查响应状态码
    if (top->S_AXI_BRESP == AXI_RESP_OKAY) {
        success = true;
        std::cout << "写入成功!" << std::endl;
    } else {
        std::cout << "AXI写入错误，地址: 0x" << std::hex << aligned_addr 
                 << ", 响应: " << top->S_AXI_BRESP << std::dec << std::endl;
    }
    
    // 响应接收完成，可以撤销bready
    clock_cycle(top, tfp, sim_time);
    top->S_AXI_BREADY = 0;
    
    // 打印写入结果
    print_axi_result("写入完成", aligned_addr, data, success);
    
    // 延迟一个时钟周期，让系统稳定
    clock_cycle(top, tfp, sim_time);
    
    return success;
}

// AXI读函数 - 从指定地址读取数据，实现完整握手流程
uint32_t axi_read(Vaxi_self_test* top, uint32_t addr, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    uint32_t read_data = 0;
    bool success = false;
    
    // 对地址进行对齐处理
    uint32_t aligned_addr = align_address(addr);
    
    std::cout << "开始读取地址: 0x" << std::hex << addr 
              << " (对齐后: 0x" << aligned_addr << ")" << std::dec << std::endl;
    
    // 第1步: 地址读通道握手 - 设置地址和控制信号
    top->S_AXI_ARADDR = aligned_addr;
    top->S_AXI_ARPROT = 0;
    top->S_AXI_ARVALID = 1;
    
    // 等待从设备准备好接收地址 (arready = 1)
    int timeout = 20;
    while (timeout > 0 && !top->S_AXI_ARREADY) {
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查地址读通道超时
    if (timeout == 0) {
        std::cout << "AXI地址读通道超时，地址: 0x" << std::hex << aligned_addr << std::dec << std::endl;
        top->S_AXI_ARVALID = 0;
        return 0;
    }
    
    // 地址传输完成，可以撤销arvalid
    std::cout << "地址读通道握手成功!" << std::endl;
    clock_cycle(top, tfp, sim_time);
    top->S_AXI_ARVALID = 0;
    
    // 第2步: 数据读通道握手 - 设置rready，等待从设备的rvalid、rdata和rresp
    top->S_AXI_RREADY = 1;
    
    // 等待从设备发送数据 (rvalid = 1)
    timeout = 20;
    while (timeout > 0 && !top->S_AXI_RVALID) {
        clock_cycle(top, tfp, sim_time);
        timeout--;
    }
    
    // 检查数据读通道超时
    if (timeout == 0) {
        std::cout << "AXI数据读通道超时，地址: 0x" << std::hex << aligned_addr << std::dec << std::endl;
        top->S_AXI_RREADY = 0;
        return 0;
    }
    
    // 检查响应状态码并获取数据
    if (top->S_AXI_RRESP == AXI_RESP_OKAY) {
        read_data = top->S_AXI_RDATA;
        success = true;
        std::cout << "读取成功: 数据 = 0x" << std::hex << read_data << std::dec << std::endl;
    } else {
        std::cout << "AXI读取错误，地址: 0x" << std::hex << aligned_addr 
                 << ", 响应: " << top->S_AXI_RRESP << std::dec << std::endl;
    }
    
    // 数据接收完成，可以撤销rready
    clock_cycle(top, tfp, sim_time);
    top->S_AXI_RREADY = 0;
    
    // 打印读取结果
    print_axi_result("读取完成", aligned_addr, read_data, success);
    
    // 延迟一个时钟周期，让系统稳定
    clock_cycle(top, tfp, sim_time);
    
    return read_data;
}

// 扫描并写入一段连续的地址空间，确保地址始终是对齐的
void sweep_write(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int write_begin, int write_range) {
    // 确保起始地址对齐
    int aligned_begin = align_address(write_begin);
    
    for (int addr = aligned_begin; addr < write_begin + write_range; addr += 4) {
        // 写入地址值作为数据，方便验证
        axi_write(top, addr, addr, tfp, sim_time);
        // 每次写入后延迟2个时钟周期
        delay_clock(top, tfp, sim_time, 2);
    }
}

// 扫描并读取一段连续的地址空间，确保地址始终是对齐的
void sweep_read(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int read_begin, int read_range) {
    // 确保起始地址对齐
    int aligned_begin = align_address(read_begin);
    
    for (int addr = aligned_begin; addr < read_begin + read_range; addr += 4) {
        uint32_t read_data = axi_read(top, addr, tfp, sim_time);
        // 验证读取的数据是否与地址值一致
        if (read_data != addr && addr < read_begin + read_range) {
            std::cout << "数据不匹配 - 地址: 0x" << std::hex << addr 
                     << ", 期望: 0x" << addr 
                     << ", 实际: 0x" << read_data << std::dec << std::endl;
        }
        // 每次读取后延迟2个时钟周期
        delay_clock(top, tfp, sim_time, 2);
    }
}

// 主函数示例 - 展示如何使用AXI读写函数
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // 创建模块实例
    Vaxi_self_test* top = new Vaxi_self_test;
    
    // 创建波形文件
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave.vcd");
    
    vluint64_t sim_time = 0;
    
    // 初始化
    axi_init(top);
    
    // 记录初始状态
    top->eval();
    tfp->dump(sim_time++);
    
    // 复位
    axi_reset(top, tfp, sim_time);
    
    // 测试写入
    std::cout << "========= 开始AXI写入测试 =========" << std::endl;
    print_region_info("Write Area测试", WRITE_BASE, WRITE_AREA);
    
    // 先测试几个特定地址
    axi_write(top, WRITE_BASE, 0x12345678, tfp, sim_time);
    delay_clock(top, tfp, sim_time, 2);
    
    axi_write(top, WRITE_BASE + 4, 0xAABBCCDD, tfp, sim_time);
    delay_clock(top, tfp, sim_time, 2);
    
    axi_write(top, WRITE_BASE + 8, 0x87654321, tfp, sim_time);
    delay_clock(top, tfp, sim_time, 2);
    
    // 然后扫描剩余地址
    sweep_write(top, tfp, sim_time, WRITE_BASE + 12, WRITE_AREA - 12);
    
    // 设置开始信号
    std::cout << "设置开始信号" << std::endl;
    axi_write(top, CONFIG_BASE + 1, 1, tfp, sim_time);
    
    // 等待处理完成
    std::cout << "等待处理完成..." << std::endl;
    delay_clock(top, tfp, sim_time, 20);
    
    uint32_t config_area_data = axi_read(top, CONFIG_BASE + 9, tfp, sim_time);
    int wait_cycles = 0;
    const int max_wait = 100;
    
    while (config_area_data != 1 && wait_cycles < max_wait) {
        delay_clock(top, tfp, sim_time, 10);
        wait_cycles += 10;
        config_area_data = axi_read(top, CONFIG_BASE + 9, tfp, sim_time);
    }
    
    if (wait_cycles >= max_wait) {
        std::cout << "等待超时" << std::endl;
    } else {
        std::cout << "处理完成，总等待周期: " << wait_cycles << std::endl;
    }
    
    // 测试读取
    std::cout << "========= 开始AXI读取测试 =========" << std::endl;
    print_region_info("Read Area测试", READ_BASE, READ_AREA);
    
    // 先测试几个特定地址
    axi_read(top, READ_BASE, tfp, sim_time);
    delay_clock(top, tfp, sim_time, 2);
    
    axi_read(top, READ_BASE + 4, tfp, sim_time);
    delay_clock(top, tfp, sim_time, 2);
    
    axi_read(top, READ_BASE + 8, tfp, sim_time);
    delay_clock(top, tfp, sim_time, 2);
    
    // 然后扫描剩余地址
    sweep_read(top, tfp, sim_time, READ_BASE + 12, READ_AREA - 12);
    
    std::cout << "========= 读取配置区域 =========" << std::endl;
    print_region_info("配置区域测试", CONFIG_BASE, CONFIG_AREA);
    sweep_read(top, tfp, sim_time, CONFIG_BASE, CONFIG_AREA);
    
    // 再执行一些时钟周期
    delay_clock(top, tfp, sim_time, 10);
    
    // 确保最后的状态被记录
    top->eval();
    tfp->dump(sim_time);
    tfp->flush();
    
    // 清理
    tfp->close();
    delete top;
    delete tfp;
    
    std::cout << "仿真完成，总时间: " << sim_time << std::endl;
    return 0;
}