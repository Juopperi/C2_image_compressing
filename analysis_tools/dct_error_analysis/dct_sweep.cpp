#include "Vdct8x8_chen_2d.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <random>
#include <fstream>
#include "FixedPoint.h"
#include "VerilatorUtils.h"

// 仿真时间单位
#define RESET_PERIOD  50
#define PERIOD        10
#define SIM_PERIOD    500*10000
#define NUM_BLOCKS    200

// 使用Q16.16定点数格式
using Fix = FixedPoint<int32_t, 16>;

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

// 初始化模块
void init_module(Vdct8x8_chen_2d* top) {
    top->clk = 0;
    top->rst_n = 0;
    top->in_valid = 0;
    top->out_ready = 1;
    VerilatorUtils::clearPort<64>(top->in_data);
}

// 复位模块
void reset_module(Vdct8x8_chen_2d* top, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    top->rst_n = 0;
    for (int i = 0; i < RESET_PERIOD; i++) {
        clock_cycle(top, tfp, sim_time);
    }
    top->rst_n = 1;
    clock_cycle(top, tfp, sim_time);
}

// 生成测试数据
std::vector<Fix> generate_test_data(int num_blocks = 1) {
    std::vector<Fix> data;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(-128, 127);
    
    for (int b = 0; b < num_blocks; b++) {
        for (int i = 0; i < 64; i++) {
            data.push_back(Fix(distrib(gen)));
        }
    }
    return data;
}

// 基准DCT实现
void reference_dct_1d(const double input[8], double output[8]) {
    const double pi = 3.14159265358979323846;
    for (int k = 0; k < 8; k++) {
        double sum = 0.0;
        for (int n = 0; n < 8; n++) {
            sum += input[n] * cos((2*n + 1) * k * pi / 16.0);
        }
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
    
    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
            in_buffer[r][c] = input[start_idx + r*8 + c].toDouble();
        }
    }
    
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
    
    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
            output[r*8 + c] = Fix(out_buffer[r][c]);
        }
    }
    
    return output;
}

// 运行一次测试并返回误差统计
struct ErrorStats {
    double avg_error;
    double max_error;
    int mismatches;
};

ErrorStats run_test(Vdct8x8_chen_2d* top, VerilatedVcdC* tfp, vluint64_t& sim_time, 
                   const std::vector<Fix>& input_data, int block) {
    ErrorStats stats = {0.0, 0.0, 0};
    double total_error = 0.0;
    int total_values = 0;
    
    auto expected_output = reference_dct_2d(input_data, block);
    VerilatorUtils::fillPortWithFixedPoint<64, int, 16>(top->in_data, input_data, block);
    
    top->in_valid = 1;
    clock_cycle(top, tfp, sim_time);
    
    int wait_count = 0;
    while (!top->in_ready && wait_count < 100) {
        clock_cycle(top, tfp, sim_time);
        wait_count++;
    }
    
    if (wait_count >= 100) {
        std::cout << "Error: in_ready timeout" << std::endl;
        return stats;
    }
    
    top->in_valid = 0;
    clock_cycles(top, tfp, sim_time, PERIOD*10);
    
    auto actual_output = VerilatorUtils::readPortToFixedPoint<64, int32_t, 16>(top->out_data);
    
    for (int i = 0; i < 64; i++) {
        double error = std::abs(actual_output[i].toDouble() - expected_output[i].toDouble());
        total_error += error;
        total_values++;
        
        if (error > stats.max_error) {
            stats.max_error = error;
        }
        
        if (std::abs(actual_output[i].raw() - expected_output[i].raw()) > 0x00000800) {
            stats.mismatches++;
        }
    }
    
    stats.avg_error = total_error / total_values;
    return stats;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // 创建CSV文件
    std::ofstream csv_file("dct_sweep_results.csv");
    csv_file << "CONST_W,AvgError,MaxError,Mismatches\n";
    
    // 扫描CONST_W从16到5
    for (int const_w = 16; const_w >= 5; const_w--) {
        std::cout << "Testing CONST_W = " << const_w << std::endl;
        
        // 创建模块实例
        Vdct8x8_chen_2d* top = new Vdct8x8_chen_2d;
        VerilatedVcdC* tfp = nullptr;  // 初始化为nullptr
        
        // 只在需要时创建波形文件
        if (const_w == 16) {  // 只为第一个测试创建波形文件
            tfp = new VerilatedVcdC;
            top->trace(tfp, 99);
            tfp->open("dct_wave.vcd");
        }
        
        vluint64_t sim_time = 0;
        init_module(top);
        reset_module(top, tfp, sim_time);
        
        // 生成测试数据
        auto input_data = generate_test_data(NUM_BLOCKS);
        
        // 运行测试并收集统计信息
        double total_avg_error = 0.0;
        double total_max_error = 0.0;
        int total_mismatches = 0;
        
        for (size_t block = 0; block < input_data.size(); block += 64) {
            auto stats = run_test(top, tfp, sim_time, input_data, block);
            total_avg_error += stats.avg_error;
            total_max_error = std::max(total_max_error, stats.max_error);
            total_mismatches += stats.mismatches;
            
            // 每处理10个块打印一次进度
            if ((block / 64) % 10 == 0) {
                std::cout << "  Progress: " << (block / 64) << "/" << NUM_BLOCKS << " blocks" << std::endl;
            }
        }
        
        // 计算平均值
        double avg_error = total_avg_error / NUM_BLOCKS;
        
        // 写入CSV文件
        csv_file << const_w << "," 
                 << avg_error << "," 
                 << total_max_error << "," 
                 << total_mismatches << "\n";
        
        // 清理
        if (tfp) {
            tfp->close();
            delete tfp;
        }
        delete top;
        
        // 强制刷新CSV文件
        csv_file.flush();
        
        std::cout << "  Completed CONST_W = " << const_w 
                  << " (Avg Error: " << avg_error 
                  << ", Max Error: " << total_max_error 
                  << ", Mismatches: " << total_mismatches << ")" << std::endl;
    }
    
    csv_file.close();
    std::cout << "Sweep completed. Results saved to dct_sweep_results.csv" << std::endl;
    return 0;
} 