#include "Vdct8x8_chen_2d.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <random>
#include "FixedPoint.h"
#include "VerilatorUtils.h"

// 仿真时间单位
#define RESET_PERIOD  50
#define PERIOD        10
#define SIM_PERIOD    500*1000
#define NUM_BLOCKS    200
// 使用Q16.16定点数格式
using Fix = FixedPoint<int32_t, 16>;

// 初始化模块
void init_module(Vdct8x8_chen_2d* top) {
    top->clk = 0;
    top->rst_n = 0;
    top->in_valid = 0;
    top->out_ready = 1;
    
    // 使用工具函数初始化宽位数据
    VerilatorUtils::clearPort<64>(top->in_data);
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
    if (tfp) tfp->dump(sim_time++);
    top->clk = 1;
    top->eval();
    if (tfp) tfp->dump(sim_time++);
}

// 发送指定数量的时钟周期
void clock_cycles(Vdct8x8_chen_2d* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int cycles) {
    for (int i = 0; i < cycles; i++) {
        clock_cycle(top, tfp, sim_time);
    }
}

// 生成测试数据
std::vector<Fix> generate_test_data(int num_blocks = 1) {
    std::vector<Fix> data;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(-128, 127);
    
    // 生成num_blocks个8x8块的数据
    for (int b = 0; b < num_blocks; b++) {
        for (int i = 0; i < 64; i++) {
            data.push_back(Fix(distrib(gen)));
        }
    }
    
    return data;
}

// 基准DCT实现（用于验证）
void reference_dct_1d(const double input[8], double output[8]) {
    const double pi = 3.14159265358979323846;
    
    for (int k = 0; k < 8; k++) {
        double sum = 0.0;
        for (int n = 0; n < 8; n++) {
            sum += input[n] * cos((2*n + 1) * k * pi / 16.0);
        }
        
        // 归一化系数
        double alpha = (k == 0) ? 1.0 / sqrt(2) : 1.0;
        output[k] = alpha * sum * 0.5;
    }
}

// 2D DCT参考实现
std::vector<Fix> reference_dct_2d(const std::vector<Fix>& input, int start_idx) {
    std::vector<Fix> output(64);
    double temp_buff[8][8] = {0};
    double temp_row[8] = {0};
    double temp_col[8] = {0};
    double in_buffer[8][8] = {0};
    double out_buffer[8][8] = {0};
    
    // 将输入数据加载到2D数组
    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
            in_buffer[r][c] = input[start_idx + r*8 + c].toDouble();
        }
    }
    
    // 行DCT
    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
            temp_row[c] = in_buffer[r][c];
        }
        
        double row_result[8] = {0};
        reference_dct_1d(temp_row, row_result);
        
        for (int c = 0; c < 8; c++) {
            temp_buff[r][c] = row_result[c];
        }
    }
    
    // 列DCT
    for (int c = 0; c < 8; c++) {
        for (int r = 0; r < 8; r++) {
            temp_col[r] = temp_buff[r][c];
        }
        
        double col_result[8] = {0};
        reference_dct_1d(temp_col, col_result);
        
        for (int r = 0; r < 8; r++) {
            out_buffer[r][c] = col_result[r];
        }
    }
    
    // 将结果转换回定点数格式
    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
            output[r*8 + c] = Fix(out_buffer[r][c]);
        }
    }
    
    return output;
}

// 打印比较结果
void print_comparison(const Fix& actual, const Fix& expected, int index) {
    std::cout << "Index " << std::setw(2) << std::setfill('0') << index << ": "
              << "Actual = " << std::hex << std::setw(8) << std::setfill('0') << actual.raw()
              << ", Expected = " << std::hex << std::setw(8) << std::setfill('0') << expected.raw()
              << ", Diff = " << std::dec << (actual.toDouble() - expected.toDouble())
              << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // 创建模块实例
    Vdct8x8_chen_2d* top = new Vdct8x8_chen_2d;
    
    // 创建波形文件
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // 修改为只记录关键信号
    tfp->set_time_unit("1ns");
    tfp->set_time_resolution("1ps");
    // tfp->open("dct_wave.vcd");
    
    vluint64_t sim_time = 0;
    
    // 初始化
    init_module(top);
    
    // 复位
    reset_module(top, tfp, sim_time);
    
    // 生成输入数据
    int num_blocks = NUM_BLOCKS;  // 测试2个8x8块
    auto input_data = generate_test_data(num_blocks);
    
    // 处理每个8x8块
    for (size_t block = 0; block < input_data.size(); block += 64) {
        std::cout << "处理块 " << block/64 << std::endl;
        
        // 计算参考DCT结果
        auto expected_output = reference_dct_2d(input_data, block);
        
        // 使用工具函数设置输入数据
        VerilatorUtils::fillPortWithFixedPoint<64, int, 16>(top->in_data, input_data, block);
        
        // 发送输入数据
        top->in_valid = 1;
        clock_cycle(top, tfp, sim_time);
        
        // 等待设计准备好接收输入
        int wait_count = 0;
        while (!top->in_ready && wait_count < 100) {
            std::cout << "等待in_ready, 当前状态: in_ready=" << top->in_ready 
                      << ", in_valid=" << top->in_valid 
                      << ", out_valid=" << top->out_valid << std::endl;
            clock_cycle(top, tfp, sim_time);
            wait_count++;
        }
        
        if (wait_count >= 100) {
            std::cout << "错误：等待in_ready超时" << std::endl;
            break;
        }
        
        // 输入被接受后，将in_valid置低
        top->in_valid = 0;
        
        // 运行固定数量的时钟周期（根据DCT计算所需的时间）
        const int DCT_CYCLES = PERIOD*10;  // 根据实际DCT计算所需的时间调整这个值
        std::cout << "运行 " << DCT_CYCLES << " 个时钟周期..." << std::endl;
        clock_cycles(top, tfp, sim_time, DCT_CYCLES);
        
        // 使用工具函数读取输出数据
        auto actual_output = VerilatorUtils::readPortToFixedPoint<64, int32_t, 16>(top->out_data);
        
        // 比较结果
        int mismatches = 0;
        for (int i = 0; i < 64; i++) {
            // 允许有小误差（由于定点数和浮点计算的差异）
            if (std::abs(actual_output[i].raw() - expected_output[i].raw()) > 0x00000800) {
                mismatches++;
                print_comparison(actual_output[i], expected_output[i], i);
            }
        }
        
        std::cout << "块 " << block/64 << ": " 
                  << mismatches << " 个不匹配，共64个值" << std::endl;
        
        // 清除out_valid
        top->out_ready = 0;
        clock_cycle(top, tfp, sim_time);
        top->out_ready = 1;
        clock_cycle(top, tfp, sim_time);
        
        // 每个块处理完后，关闭并重新打开波形文件以减小文件大小
        if (block + 64 < input_data.size()) {
            // tfp->close();
            // tfp->open("dct_wave.vcd", true);  // 追加模式
        }
    }
    
    // 清理
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    std::cout << "仿真完成。" << std::endl;
    return 0;
} 