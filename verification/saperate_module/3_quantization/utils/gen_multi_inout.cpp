#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <cmath>
#include <string>
#include <cstdint>
#include <cstring>

#include "FixedPoint.h"
constexpr int N = 8;

#include "QuantizationTable.h"

using Fix = FixedPoint<int32_t, 16>;  // Q16.16

// 写入 Q16.16 定点数为 8 位 hex 字符串
void write_fixed(std::ofstream& fout, Fix value) {
    uint32_t raw = static_cast<uint32_t>(value.raw());
    fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << raw << std::endl;
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

    for (int blk = 0; blk < num_blocks; ++blk) {
        for (int i = 0; i < N * N; ++i) {
            float coeff_f = dct_dist(gen);
            Fix coeff(coeff_f);  // 原始 DCT 系数（Q16.16）

            int row = i / N;
            int col = i % N;

            Fix luma_inv(1.0f / luma_table[row][col]);
            Fix chroma_inv(1.0f / chroma_table[row][col]);

            Fix q_luma = coeff * luma_inv;
            Fix q_chroma = coeff * chroma_inv;

            write_fixed(fin, coeff);
            write_fixed(fout_luma, q_luma);
            write_fixed(fout_chroma, q_chroma);
        }
    }

    std::cout << "✅ Generated " << num_blocks << " blocks using FixedPoint Q16.16." << std::endl;
    return 0;
}
