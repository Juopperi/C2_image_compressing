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


// AXI写函数 - 向指定地址写入数据
bool axi_write(Vaxi_self_test* top, uint32_t addr, uint32_t data, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    bool write_addr_done = false;
    bool write_data_done = false;
    int timeout = 20; // 超时设置（时钟周期数）
    int count = 0;
    
    // 设置写地址通道
    top->S_AXI_AWVALID = 1;
    top->S_AXI_AWADDR = addr;
    
    // 设置写数据通道
    top->S_AXI_WVALID = 1;
    top->S_AXI_WDATA = data;
    
    // 记住初始时钟状态
    bool initial_clock = top->S_AXI_ACLK;
    
    // 等待握手完成或超时
    while ((!write_addr_done || !write_data_done) && count < timeout) {
        // 时钟上升沿
        top->S_AXI_ACLK = 1;
        top->eval();
        tfp->dump(sim_time++);
        
        // 检查握手完成情况
        if (top->S_AXI_AWVALID && top->S_AXI_AWREADY) {
            write_addr_done = true;
            // std::cout << "AWADDR握手成功，时间: " << sim_time << ", 地址: 0x" 
            //           << std::hex << addr << std::dec << std::endl;
            top->S_AXI_AWVALID = 0; // 握手完成后撤销VALID
        }
        
        if (top->S_AXI_WVALID && top->S_AXI_WREADY) {
            write_data_done = true;
            // std::cout << "WDATA握手成功，时间: " << sim_time << ", 数据: " 
                    //   << data << std::endl;
            top->S_AXI_WVALID = 0; // 握手完成后撤销VALID
        }
        
        // 时钟下降沿
        top->S_AXI_ACLK = 0;
        top->eval();
        tfp->dump(sim_time++);
        
        count++;
    }
    
    // 超时处理
    if (!write_addr_done || !write_data_done) {
        std::cerr << "AXI写操作超时!" << std::endl;
        top->S_AXI_AWVALID = 0;
        top->S_AXI_WVALID = 0;
        return false;
    }
    
    // 确保结束时钟状态与开始时一致
    if (top->S_AXI_ACLK != initial_clock) {
        top->S_AXI_ACLK = initial_clock;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    return true;
}

// AXI读函数 - 从指定地址读取数据
uint32_t axi_read(Vaxi_self_test* top, uint32_t addr, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    bool read_addr_done = false;
    bool read_data_done = false;
    int timeout = 20; // 超时设置（时钟周期数）
    int count = 0;
    uint32_t read_data = 0;
    
    // 设置读地址通道
    top->S_AXI_ARVALID = 1;
    top->S_AXI_ARADDR = addr;
    top->S_AXI_RREADY = 1;
    
    // 记住初始时钟状态
    bool initial_clock = top->S_AXI_ACLK;
    
    // 等待握手完成或超时
    while ((!read_addr_done || !read_data_done) && count < timeout) {
        // 时钟上升沿
        top->S_AXI_ACLK = 1;
        top->eval();
        tfp->dump(sim_time++);
        
        // 检查握手完成情况
        if (top->S_AXI_ARVALID && top->S_AXI_ARREADY) {
            read_addr_done = true;
            // std::cout << "ARADDR握手成功，时间: " << sim_time << ", 地址: 0x" 
            //           << std::hex << addr << std::dec << std::endl;
            top->S_AXI_ARVALID = 0; // 握手完成后撤销VALID
        }
        
        if (top->S_AXI_RVALID && top->S_AXI_RREADY) {
            read_data_done = true;
            read_data = top->S_AXI_RDATA;
            // std::cout << "RDATA握手成功，时间: " << sim_time << ", 数据: " 
            //           << read_data << std::endl;
            top->S_AXI_RREADY = 0; // 握手完成后撤销READY
        }
        
        // 时钟下降沿
        top->S_AXI_ACLK = 0;
        top->eval();
        tfp->dump(sim_time++);
        
        count++;
    }
    
    // 超时处理
    if (!read_addr_done || !read_data_done) {
        std::cerr << "AXI读操作超时!" << std::endl;
        top->S_AXI_ARVALID = 0;
        top->S_AXI_RREADY = 0;
        return 0xFFFFFFFF; // 返回一个特殊值表示读取失败
    }
    
    // 确保结束时钟状态与开始时一致
    if (top->S_AXI_ACLK != initial_clock) {
        top->S_AXI_ACLK = initial_clock;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    return read_data;
}

void sweep_read(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int read_begin, int read_range) {
    for (int i = read_begin; i < read_begin + read_range; i++) {
        uint32_t read_data = axi_read(top, i, tfp, sim_time);
        std::cout << "Address: 0x" << std::setw(2) << std::hex << i << " Data: 0x" << std::setw(8) << std::setfill('0') << std::hex << read_data << std::dec << std::endl;
    }
}

void sweep_write(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int write_begin, int write_range) {
    for (int i = write_begin; i < write_begin + write_range; i++) {
        bool write_success = axi_write(top, i, i, tfp, sim_time);
        std::cout << "Address: 0x" << std::setw(2) << std::hex << i << " Data: 0x" << std::setw(8) << std::setfill('0') << std::hex << i << std::dec << std::endl;
        if (!write_success) {
            std::cerr << "Address: 0x" << std::setw(2) << std::hex << i << " Write Failed" << std::endl;
        }
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
    top->S_AXI_ACLK = 0;
    top->S_AXI_ARESETN = 0;
    top->S_AXI_AWVALID = 0;
    top->S_AXI_WVALID = 0;
    top->S_AXI_ARVALID = 0;
    top->S_AXI_RREADY = 0;
    
    // 记录初始状态
    top->eval();
    tfp->dump(sim_time++);
    
    // 复位阶段
    for (int i = 0; i < RESET_PERIOD * 2; i++) { // *2因为每个周期有上升沿和下降沿
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    // 复位结束
    top->S_AXI_ARESETN = 1;
    top->eval();
    
    // 测试写入
    std::cout << "========= Start AXI Write Test =========" << std::endl;
    std::cout << "Write Area test: from 0x00 to 0x" << std::setw(2) << std::hex << WRITE_AREA << std::endl;
    sweep_write(top, tfp, sim_time, WRITE_BASE, WRITE_AREA);
    std::cout << "Undefine behavior test" << std::endl;
    std::cout << "Write to Read Area test: from 0x" << std::setw(2) << std::hex << READ_BASE << " to 0x" << std::setw(2) << std::hex << READ_AREA << std::endl;
    sweep_write(top, tfp, sim_time, READ_BASE, READ_AREA);
    std::cout << "Write config area test" << std::endl;
    std::cout << "Write to config area: from 0x" << std::setw(2) << std::hex << CONFIG_BASE << " to 0x" << std::setw(2) << std::hex << CONFIG_AREA << std::endl;
    sweep_write(top, tfp, sim_time, CONFIG_BASE, CONFIG_AREA);

    std::cout << "Check the error message from config area" << std::endl;
    uint32_t error_message = axi_read(top, CONFIG_WRITE_OUTRANGE, tfp, sim_time);
    std::cout << "Error message: 0x" << std::setw(8) << std::setfill('0') << std::hex << error_message << std::dec << std::endl;
    
    // 延迟几个时钟周期
    for (int i = 0; i < 4; i++) {
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    // 测试读取
    std::cout << "========= Start AXI Read Test =========" << std::endl;
    std::cout << "Read Area test: from 0x00 to 0x" << std::setw(2) << std::hex << READ_AREA << std::endl;
    sweep_read(top, tfp, sim_time, READ_BASE, READ_AREA);
    std::cout << "Read write area, it is legal but seems strange" << std::endl;
    sweep_read(top, tfp, sim_time, WRITE_BASE, WRITE_AREA);
    std::cout << "Read config area, it is necessary to check the error message" << std::endl;
    sweep_read(top, tfp, sim_time, CONFIG_BASE, CONFIG_AREA);
    
    // 再执行一些时钟周期
    for (int i = 0; i < 10; i++) {
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        top->eval();
        tfp->dump(sim_time++);
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