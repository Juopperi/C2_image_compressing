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

vluint64_t sim_time = 0;  // 仿真时间计数器

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Verilated::traceEverOn(true);  // 开启追踪功能

    // 创建模块实例
    Vaxi_self_test* top = new Vaxi_self_test;

    // 创建波形文件
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave.vcd");

    // 初始化
    top->S_AXI_ACLK = 0;
    top->S_AXI_ARESETN = 0;
    top->S_AXI_AWVALID = 0;
    top->S_AXI_WVALID = 0;
    top->S_AXI_ARVALID = 0;
    top->S_AXI_RREADY = 0;
    
    // 记录初始状态
    top->eval();
    tfp->dump(sim_time);
    sim_time++;

    // 主仿真循环
    for (int i = 0; i < SIM_PERIOD; i++) {
        // 翻转时钟 - 只翻转一次!
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        
        // 复位阶段处理
        if (i < RESET_PERIOD) {
            top->S_AXI_ARESETN = 0;
            top->S_AXI_AWVALID = 0;
            top->S_AXI_WVALID = 0;
            top->S_AXI_ARVALID = 0;
        }
        else {
            top->S_AXI_ARESETN = 1;
        }

        // 写入测试
        if (i >= RESET_PERIOD) {
            // 只在AWREADY和WREADY为1时才发送新的写请求
            if (!top->S_AXI_AWVALID || (top->S_AXI_AWVALID && top->S_AXI_AWREADY)) {
                top->S_AXI_AWVALID = 1;
                top->S_AXI_AWADDR = 0x00;
            }
            
            if (!top->S_AXI_WVALID || (top->S_AXI_WVALID && top->S_AXI_WREADY)) {
                top->S_AXI_WVALID = 1;
                top->S_AXI_WDATA = 127;
            }
            
            // 在READY信号有效时撤销VALID信号 (正确的AXI握手协议)
            if (top->S_AXI_AWVALID && top->S_AXI_AWREADY) {
                // 可以打印输出以确认握手成功
                if (top->S_AXI_ACLK) {  // 只在时钟上升沿输出
                    std::cout << "AWADDR握手成功，时间: " << sim_time << std::endl;
                }
            }
            
            if (top->S_AXI_WVALID && top->S_AXI_WREADY) {
                // 可以打印输出以确认握手成功
                if (top->S_AXI_ACLK) {  // 只在时钟上升沿输出
                    std::cout << "WDATA握手成功，时间: " << sim_time << std::endl;
                }
            }
        }
        
        // 运行仿真，递增时间
        top->eval();
        tfp->dump(sim_time);
        sim_time++;
        
        // 每10个周期刷新一次波形文件
        if (i % 10 == 0) {
            tfp->flush();
        }
    }

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