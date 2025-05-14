#include "Vdct8x8_chen_2d.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "FixedPoint.h"

// 仿真时间单位
#define RESET_PERIOD  5
#define PERIOD        10
#define SIM_PERIOD    1000

// 使用Q16.16定点数格式
using Fix = FixedPoint<int32_t, 16>;

// 初始化模块
void init_module(Vdct8x8_chen_2d* top) {
    top->clk = 0;
    top->rst_n = 0;
    top->in_valid = 0;
    top->out_ready = 1;
    top->in_data = 0;
}

// 复位模块
void reset_module(Vdct8x8_chen_2d* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    top->rst_n = 0;
    
    for (int i = 0; i < RESET_PERIOD; i++) {
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    top->rst_n = 1;
    top->clk = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->clk = 1;
    top->eval();
    tfp->dump(sim_time++);
}

// 发送一个时钟周期
void clock_cycle(Vdct8x8_chen_2d* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    top->clk = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->clk = 1;
    top->eval();
    tfp->dump(sim_time++);
}

// 从文件读取输入数据
std::vector<Fix> read_input_file(const std::string& filename) {
    std::vector<Fix> data;
    std::ifstream file(filename);
    std::string line;
    
    while (std::getline(file, line)) {
        uint32_t raw_value = std::stoul(line, nullptr, 16);
        data.push_back(Fix::fromRaw(raw_value));
    }
    
    return data;
}

// 从文件读取预期输出数据
std::vector<Fix> read_expected_output(const std::string& filename) {
    return read_input_file(filename);
}

// 打印比较结果
void print_comparison(const Fix& actual, const Fix& expected, int index) {
    std::cout << "Index " << index << ": "
              << "Actual = " << std::hex << actual.raw()
              << ", Expected = " << expected.raw()
              << ", Diff = " << std::dec << std::abs(actual.raw() - expected.raw())
              << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // 创建模块实例
    Vdct8x8_chen_2d* top = new Vdct8x8_chen_2d;
    
    // 创建波形文件
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dct_wave.vcd");
    
    vluint64_t sim_time = 0;
    
    // 初始化
    init_module(top);
    
    // 复位
    reset_module(top, tfp, sim_time);
    
    // 读取输入数据和预期输出
    auto input_data = read_input_file("chen_2d_dct_input.mem");
    auto expected_output = read_expected_output("expected_chen_2d_dct_output.mem");
    
    // 验证数据大小
    if (input_data.size() != expected_output.size()) {
        std::cerr << "Input and expected output sizes do not match!" << std::endl;
        return 1;
    }
    
    // 处理每个8x8块
    for (size_t block = 0; block < input_data.size(); block += 64) {
        // 准备输入数据
        uint64_t input_block = 0;
        for (int i = 0; i < 64; i++) {
            input_block |= (static_cast<uint64_t>(input_data[block + i].raw()) << (i * 32));
        }
        
        // 发送输入数据
        top->in_valid = 1;
        top->in_data = input_block;
        
        // 等待模块处理完成
        while (!top->out_valid) {
            clock_cycle(top, tfp, sim_time);
        }
        
        // 读取输出数据
        uint64_t output_block = top->out_data;
        std::vector<Fix> actual_output;
        for (int i = 0; i < 64; i++) {
            uint32_t raw_value = (output_block >> (i * 32)) & 0xFFFFFFFF;
            actual_output.push_back(Fix::fromRaw(raw_value));
        }
        
        // 比较结果
        int mismatches = 0;
        for (int i = 0; i < 64; i++) {
            if (std::abs(actual_output[i].raw() - expected_output[block + i].raw()) > 1) {
                mismatches++;
                print_comparison(actual_output[i], expected_output[block + i], block + i);
            }
        }
        
        std::cout << "Block " << block/64 << ": " 
                  << mismatches << " mismatches out of 64 values" << std::endl;
        
        // 准备下一个块
        top->in_valid = 0;
        clock_cycle(top, tfp, sim_time);
    }
    
    // 清理
    tfp->close();
    delete top;
    delete tfp;
    
    std::cout << "Simulation completed." << std::endl;
    return 0;
} 