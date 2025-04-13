#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <cstdint>
#include <string>
#include <cmath>
#include <regex>
#include "FixedPoint.h"

using Fix = FixedPoint<int32_t, 16>; // Q16.16

constexpr int N = 8;

#include "QuantizationTable.h"

void write_mem(std::ofstream& fout, uint32_t value) {
    fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << value << std::endl;
}

std::vector<Fix> load_inverse_table_and_negate(const std::string& filename, const std::string& var_name) {
    std::ifstream fin(filename);
    std::vector<Fix> result;

    if (!fin.is_open()) {
        throw std::runtime_error("Failed to open " + filename);
    }

    std::string line;
    std::regex hex_regex("32'h([0-9A-Fa-f]{8})");
    std::regex target_var_regex("\\b" + var_name + "\\b");

    bool in_target = false;
    while (std::getline(fin, line)) {
        if (!in_target) {
            // 寻找变量定义起始行
            if (std::regex_search(line, target_var_regex)) {
                in_target = true;
            }
            continue;
        }

        // 如果到了结束括号就退出
        if (line.find("};") != std::string::npos) break;

        // 提取每行中的 32'hXXXXXXXX
        std::smatch match;
        if (std::regex_search(line, match, hex_regex)) {
            uint32_t raw_val = std::stoul(match[1], nullptr, 16);
            Fix val = Fix::fromRaw(static_cast<int32_t>(raw_val));
            result.push_back(-val);  // 取反
        }
    }

    if (result.size() != 64) {
        throw std::runtime_error("Expected 64 values in " + var_name + ", got " + std::to_string(result.size()));
    }

    return result;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <num_blocks>" << std::endl;
        return 1;
    }

    int num_blocks = std::stoi(argv[1]);

    std::ofstream fin("input.mem");
    std::ofstream fout_luma("expected_luma_output.mem");
    std::ofstream fout_chroma("expected_chroma_output.mem");

    if (!fin || !fout_luma || !fout_chroma) {
        std::cerr << "Failed to open one or more output files." << std::endl;
        return 1;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dct_dist(-1024.0f, 1024.0f);  // 模拟 DCT 系数

    // 预先生成倒数表（使用 float → FixedPoint）
    std::vector<Fix> luma_inv_flat = load_inverse_table_and_negate("inverse_qtables.vh", "luma_qtable_inv");

    Fix luma_inv[N][N];
    for (int i = 0; i < 64; ++i) {
        int row = i / N;
        int col = i % N;
        luma_inv[row][col] = luma_inv_flat[i];
    }

    // chroma 仍然动态生成（如不需要可以照样从文件加载）
    Fix chroma_inv[N][N];
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            chroma_inv[i][j] = Fix(1.0f / chroma_table[i][j]);


    for (int blk = 0; blk < num_blocks; ++blk) {
        for (int i = 0; i < N * N; ++i) {
            float coeff_f = dct_dist(gen); // float 生成后转为定点
            Fix coeff(coeff_f);

            int row = i / N;
            int col = i % N;

            Fix q_luma   = coeff * luma_inv[row][col];
            Fix q_chroma = coeff * chroma_inv[row][col];

            write_mem(fin, static_cast<uint32_t>(coeff.raw()));
            write_mem(fout_luma, static_cast<uint32_t>(q_luma.raw()));
            write_mem(fout_chroma, static_cast<uint32_t>(q_chroma.raw()));
        }
    }

    fin.close();
    fout_luma.close();
    fout_chroma.close();

    std::cout << "✅ Generated " << num_blocks << " blocks using fixed-point only (no /)." << std::endl;
    return 0;
}
