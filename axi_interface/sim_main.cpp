#include "Vproc_full_axi.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

// 仿真时间单位
#define SIM_TIME 1000

// 内存映射地址
#define REG_START 0x00
#define REG_STAT  0x04
#define INPUT_BASE 0x40
#define OUTPUT_BASE 0x60

// 辅助函数：打印32位数据
void print_data(uint32_t data) {
    std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << data << std::endl;
}

int main(int argc, char** argv) {
    // 初始化Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // 创建模型和波形跟踪
    Vproc_full_axi* top = new Vproc_full_axi;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    // 初始化信号
    top->S_AXI_ACLK = 0;
    top->S_AXI_ARESETN = 0;
    
    // 复位
    for (int i = 0; i < 10; i++) {
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        top->eval();
        tfp->dump(i);
    }
    top->S_AXI_ARESETN = 1;

    // 测试写入输入缓冲区
    std::cout << "Writing test data to input buffer..." << std::endl;
    for (int i = 0; i < 32; i++) {
        // 设置写地址
        top->S_AXI_AWADDR = INPUT_BASE + (i * 4);
        top->S_AXI_AWVALID = 1;
        top->S_AXI_WDATA = 0x12345678 + i;
        top->S_AXI_WVALID = 1;
        top->S_AXI_WSTRB = 0xF;  // 所有字节有效

        // 等待握手
        while (!top->S_AXI_AWREADY || !top->S_AXI_WREADY) {
            top->S_AXI_ACLK = !top->S_AXI_ACLK;
            top->eval();
            tfp->dump(SIM_TIME + i * 2);
            top->S_AXI_ACLK = !top->S_AXI_ACLK;
            top->eval();
            tfp->dump(SIM_TIME + i * 2 + 1);
        }

        // 清除写信号
        top->S_AXI_AWVALID = 0;
        top->S_AXI_WVALID = 0;
    }

    // 启动处理
    std::cout << "Starting processing..." << std::endl;
    top->S_AXI_AWADDR = REG_START;
    top->S_AXI_AWVALID = 1;
    top->S_AXI_WDATA = 1;  // 写1启动
    top->S_AXI_WVALID = 1;
    top->S_AXI_WSTRB = 0xF;

    // 等待握手
    while (!top->S_AXI_AWREADY || !top->S_AXI_WREADY) {
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        top->eval();
        tfp->dump(SIM_TIME + 100);
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        top->eval();
        tfp->dump(SIM_TIME + 101);
    }

    // 清除写信号
    top->S_AXI_AWVALID = 0;
    top->S_AXI_WVALID = 0;

    // 等待处理完成
    std::cout << "Waiting for processing to complete..." << std::endl;
    bool done = false;
    int timeout = 0;
    while (!done && timeout < 1000) {
        // 读取状态寄存器
        top->S_AXI_ARADDR = REG_STAT;
        top->S_AXI_ARVALID = 1;

        // 等待握手
        while (!top->S_AXI_ARREADY) {
            top->S_AXI_ACLK = !top->S_AXI_ACLK;
            top->eval();
            tfp->dump(SIM_TIME + 200 + timeout * 2);
            top->S_AXI_ACLK = !top->S_AXI_ACLK;
            top->eval();
            tfp->dump(SIM_TIME + 200 + timeout * 2 + 1);
        }

        // 检查完成位
        done = (top->S_AXI_RDATA & 1);
        
        // 清除读信号
        top->S_AXI_ARVALID = 0;
        
        timeout++;
    }

    if (done) {
        std::cout << "Processing completed successfully!" << std::endl;
    } else {
        std::cout << "Processing timed out!" << std::endl;
    }

    // 读取输出缓冲区
    std::cout << "Reading output buffer..." << std::endl;
    for (int i = 0; i < 32; i++) {
        // 设置读地址
        top->S_AXI_ARADDR = OUTPUT_BASE + (i * 4);
        top->S_AXI_ARVALID = 1;

        // 等待握手
        while (!top->S_AXI_ARREADY) {
            top->S_AXI_ACLK = !top->S_AXI_ACLK;
            top->eval();
            tfp->dump(SIM_TIME + 300 + i * 2);
            top->S_AXI_ACLK = !top->S_AXI_ACLK;
            top->eval();
            tfp->dump(SIM_TIME + 300 + i * 2 + 1);
        }

        // 等待数据有效
        while (!top->S_AXI_RVALID) {
            top->S_AXI_ACLK = !top->S_AXI_ACLK;
            top->eval();
            tfp->dump(SIM_TIME + 400 + i * 2);
            top->S_AXI_ACLK = !top->S_AXI_ACLK;
            top->eval();
            tfp->dump(SIM_TIME + 400 + i * 2 + 1);
        }

        // 打印数据
        std::cout << "Output[" << i << "]: ";
        print_data(top->S_AXI_RDATA);

        // 清除读信号
        top->S_AXI_ARVALID = 0;
    }

    // 清理
    tfp->close();
    delete top;
    delete tfp;
    
    return 0;
} 