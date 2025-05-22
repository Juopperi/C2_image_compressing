#include "axi_helper.h"

// 初始化AXI总线接口
void axi_init(Vaxi_self_test* top) {
    top->S_AXI_ACLK = 0;
    top->S_AXI_ARESETN = 0;
    top->S_AXI_AWVALID = 0;
    top->S_AXI_WVALID = 0;
    top->S_AXI_BREADY = 0;
    top->S_AXI_ARVALID = 0;
    top->S_AXI_RREADY = 0;
}

// 复位AXI总线接口
void axi_reset(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // 复位阶段
    top->S_AXI_ARESETN = 0;
    
    for (int i = 0; i < RESET_PERIOD * 2; i++) { // *2因为每个周期有上升沿和下降沿
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    // 复位结束
    top->S_AXI_ARESETN = 1;
    top->eval();
}

// 延迟指定的时钟周期数
void delay_clock(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int delay) {
    for (int i = 0; i < delay; i++) {
        top->S_AXI_ACLK = !top->S_AXI_ACLK;
        top->eval();
        tfp->dump(sim_time++);
    }
}

// AXI写函数 - 向指定地址写入数据
bool axi_write(Vaxi_self_test* top, uint32_t addr, uint32_t data, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    bool write_addr_done = false;
    bool write_data_done = false;
    bool write_resp_done = false;
    int timeout = 30; // 超时设置（时钟周期数）
    int count = 0;
    uint32_t resp_code = 0;
    
    // 设置写地址通道
    top->S_AXI_AWVALID = 1;
    top->S_AXI_AWADDR = addr;
    
    // 设置写数据通道
    top->S_AXI_WVALID = 1;
    top->S_AXI_WDATA = data;
    
    // 设置写响应通道
    top->S_AXI_BREADY = 1;
    
    // 记住初始时钟状态
    bool initial_clock = top->S_AXI_ACLK;
    
    // 等待握手完成或超时
    while ((!write_addr_done || !write_data_done || !write_resp_done) && count < timeout) {
        // 时钟上升沿
        top->S_AXI_ACLK = 1;
        top->eval();
        tfp->dump(sim_time++);
        
        // 检查握手完成情况
        if (top->S_AXI_AWVALID && top->S_AXI_AWREADY) {
            write_addr_done = true;
            // 握手完成后撤销VALID
            top->S_AXI_AWVALID = 0;
        }
        
        if (top->S_AXI_WVALID && top->S_AXI_WREADY) {
            write_data_done = true;
            // 握手完成后撤销VALID
            top->S_AXI_WVALID = 0;
        }
        
        if (top->S_AXI_BVALID && top->S_AXI_BREADY) {
            write_resp_done = true;
            resp_code = top->S_AXI_BRESP;
            // 握手完成后撤销READY
            top->S_AXI_BREADY = 0;
        }
        
        // 时钟下降沿
        top->S_AXI_ACLK = 0;
        top->eval();
        tfp->dump(sim_time++);
        
        count++;
    }
    
    // 超时处理
    if (!write_addr_done || !write_data_done || !write_resp_done) {
        std::cerr << "AXI写操作超时!" << std::endl;
        if (!write_addr_done) std::cerr << "  地址通道握手失败" << std::endl;
        if (!write_data_done) std::cerr << "  数据通道握手失败" << std::endl;
        if (!write_resp_done) std::cerr << "  响应通道握手失败" << std::endl;
        
        top->S_AXI_AWVALID = 0;
        top->S_AXI_WVALID = 0;
        top->S_AXI_BREADY = 0;
        return false;
    }
    
    // 检查响应码
    if (resp_code != AXI_RESP_OKAY) {
        std::cerr << "AXI写操作错误! 响应码: " << resp_code << std::endl;
        if (resp_code == AXI_RESP_SLVERR) {
            std::cerr << "  从设备错误 (SLVERR)" << std::endl;
        } else if (resp_code == AXI_RESP_DECERR) {
            std::cerr << "  解码错误 (DECERR)" << std::endl;
        }
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
    uint32_t resp_code = 0;
    
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
            top->S_AXI_ARVALID = 0; // 握手完成后撤销VALID
        }
        
        if (top->S_AXI_RVALID && top->S_AXI_RREADY) {
            read_data_done = true;
            read_data = top->S_AXI_RDATA;
            resp_code = top->S_AXI_RRESP;
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
    
    // 检查响应码
    if (resp_code != AXI_RESP_OKAY) {
        std::cerr << "AXI读操作错误! 响应码: " << resp_code << std::endl;
        if (resp_code == AXI_RESP_SLVERR) {
            std::cerr << "  从设备错误 (SLVERR)" << std::endl;
        } else if (resp_code == AXI_RESP_DECERR) {
            std::cerr << "  解码错误 (DECERR)" << std::endl;
        }
        // 对于读错误，我们仍然返回读取的数据，让调用者决定如何处理
    }
    
    // 确保结束时钟状态与开始时一致
    if (top->S_AXI_ACLK != initial_clock) {
        top->S_AXI_ACLK = initial_clock;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    return read_data;
}

// 扫描并写入一段连续的地址空间
void sweep_write(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int write_begin, int write_range) {
    for (int i = write_begin; i < write_begin + write_range; i++) {
        bool write_success = axi_write(top, i, i, tfp, sim_time);
        std::cout << "Address: 0x" << std::setw(2) << std::hex << i 
                  << " Data: 0x" << std::setw(8) << std::setfill('0') << std::hex << i << std::dec << std::endl;
        if (!write_success) {
            std::cerr << "[ERROR] Write Failed: Address: 0x" << std::setw(2) << std::hex << i << std::endl;
        }
    }
}

// 扫描并读取一段连续的地址空间
void sweep_read(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int read_begin, int read_range) {
    for (int i = read_begin; i < read_begin + read_range; i++) {
        uint32_t read_data = axi_read(top, i, tfp, sim_time);
        std::cout << "Address: 0x" << std::setw(2) << std::hex << i 
                  << " Data: 0x" << std::setw(8) << std::setfill('0') << std::hex << read_data << std::dec << std::endl;
        if (read_data == 0xFFFFFFFF) {
            std::cerr << "[ERROR] Read Failed: Address: 0x" << std::setw(2) << std::hex << i << std::endl;
        }
    }
}

// 打印AXI传输结果
void print_axi_result(const char* operation, uint32_t addr, uint32_t data, bool success) {
    std::cout << operation << " - Address: 0x" << std::setw(2) << std::hex << addr 
              << " Data: 0x" << std::setw(8) << std::setfill('0') << std::hex << data 
              << (success ? " [成功]" : " [失败]") << std::dec << std::endl;
}

// 打印地址区域信息
void print_region_info(const char* region_name, int base, int size) {
    std::cout << region_name << ": 从 0x" << std::setw(2) << std::hex << base 
              << " 到 0x" << std::setw(2) << std::hex << (base + size - 1) << std::dec << std::endl;
} 