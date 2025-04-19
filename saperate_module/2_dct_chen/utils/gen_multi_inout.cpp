#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdint>
#include <random>
#include "FixedPoint.h"

constexpr int N = 8;
using Fix = FixedPoint<int32_t, 16>;

// 浮点一维 DCT
void dct_1d_float(const float in[N], float out[N]) {
    // 使用 Chen 算法计算 1D DCT
    // 类似于 chen_1d_dct.v 中的系数
    constexpr double PI = 3.1415926535897932;
    constexpr double C0 = 1.0;                 // cos(0*π/16)
    constexpr double C1 = 0.9807852804032304;  // cos(1*π/16)
    constexpr double C2 = 0.9238795325112867;  // cos(2*π/16)
    constexpr double C3 = 0.8314696123025452;  // cos(3*π/16)
    constexpr double C4 = 0.7071067811865476;  // cos(4*π/16)
    constexpr double C5 = 0.5555702330196022;  // cos(5*π/16)
    constexpr double C6 = 0.38268343236508984; // cos(6*π/16)
    constexpr double C7 = 0.19509032201612833; // cos(7*π/16)

    // 蝶形运算 - 类似于chen_1d_dct.v中的计算过程
    float a0 = in[0] + in[7];
    float a1 = in[1] + in[6];
    float a2 = in[2] + in[5];
    float a3 = in[3] + in[4];
    float a4 = in[3] - in[4];
    float a5 = in[2] - in[5];
    float a6 = in[1] - in[6];
    float a7 = in[0] - in[7];

    float b0 = a0 + a3;
    float b1 = a1 + a2;
    float b2 = a1 - a2;
    float b3 = a0 - a3;
    float b4 = C4 * (a4 + a7);
    float b5 = (C1 * a5) - (C7 * a6);
    float b6 = (C5 * a5) + (C3 * a6);
    float b7 = (C3 * a4) - (C5 * a7);

    out[0] = b0 + b1;
    out[4] = C4 * (b0 - b1);
    out[2] = (C2 * b2) + (C6 * b3);
    out[6] = (C6 * b2) - (C2 * b3);
    out[1] = b4 + b6;
    out[3] = b7 - b5;
    out[5] = b4 - b6;
    out[7] = b5 + b7;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <lower> <upper> <num_samples>" << std::endl;
        return 1;
    }

    int lower = std::stoi(argv[1]);
    int upper = std::stoi(argv[2]);
    int num_samples = std::stoi(argv[3]);

    std::ofstream fin("chen_1d_dct_input.mem"), fout("chen_1d_dct_golden.mem");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    for (int s = 0; s < num_samples; ++s) {
        float input[N], output[N];

        // 生成随机输入向量
        for (int i = 0; i < N; ++i)
            input[i] = static_cast<float>(dist(gen));

        // 计算1D DCT
        dct_1d_float(input, output);

        // 将输入写入输入文件
        for (int i = 0; i < N; ++i)
            fin << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                << static_cast<uint32_t>(Fix(static_cast<double>(input[i])).raw()) << std::endl;

        // 将输出写入黄金参考文件
        for (int i = 0; i < N; ++i)
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                 << static_cast<uint32_t>(Fix(static_cast<double>(output[i])).raw()) << std::endl;
    }

    fin.close();
    fout.close();

    std::cout << "Generated " << num_samples << " 1D DCT samples using float, saved as fixed-point hex." << std::endl;
    return 0;
} 