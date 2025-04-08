#include <iostream>
#include <fstream>
#include <cmath>
#include <array>
#include <random>
#include <chrono>  // 放在开头
#include "FixedPoint.h"

constexpr int N = 8;
using Block = std::array<std::array<float, N>, N>;
using Fixed = FixedPoint<int32_t, 16>;

// 生成 8×8 随机浮点图像块
Block generate_input(std::mt19937& rng) {
    Block block;
    std::uniform_real_distribution<float> dist(-127.0f, 128.0f);
    for (auto& row : block)
        for (auto& val : row)
            val = dist(rng);
    return block;
}

// 浮点 DCT
Block dct_float(const Block& input) {
    Block output = {};
    for (int u = 0; u < N; ++u)
        for (int v = 0; v < N; ++v) {
            float sum = 0;
            for (int x = 0; x < N; ++x)
                for (int y = 0; y < N; ++y)
                    sum += input[x][y] *
                           std::cos((2 * x + 1) * u * M_PI / (2 * N)) *
                           std::cos((2 * y + 1) * v * M_PI / (2 * N));
            float cu = (u == 0) ? std::sqrt(0.5f) : 1.0f;
            float cv = (v == 0) ? std::sqrt(0.5f) : 1.0f;
            output[u][v] = 0.25f * cu * cv * sum;
        }
    return output;
}

// 定点 DCT
std::array<std::array<Fixed, N>, N> dct_fixed(const std::array<std::array<Fixed, N>, N>& input) {
    std::array<std::array<Fixed, N>, N> output = {};
    for (int u = 0; u < N; ++u)
        for (int v = 0; v < N; ++v) {
            Fixed sum = 0;
            for (int x = 0; x < N; ++x)
                for (int y = 0; y < N; ++y) {
                    Fixed cx = std::cos((2 * x + 1) * u * M_PI / (2 * N));
                    Fixed cy = std::cos((2 * y + 1) * v * M_PI / (2 * N));
                    sum = sum + input[x][y] * cx * cy;
                }
            Fixed cu = (u == 0) ? std::sqrt(0.5f) : 1.0f;
            Fixed cv = (v == 0) ? std::sqrt(0.5f) : 1.0f;
            Fixed scale = Fixed(0.25f);
            output[u][v] = scale * cu * cv * sum;
        }
    return output;
}

int main() {
    std::ofstream csv("dct_100_trials.csv");
    csv << "trial,MSE,max_error\n";

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);  // 每次运行生成不同的随机数

    int times = 1000;

    for (int trial = 1; trial <= times; ++trial) {
        Block input = generate_input(rng);
        Block float_dct = dct_float(input);

        // 转换输入为定点
        std::array<std::array<Fixed, N>, N> fixed_input;
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                fixed_input[i][j] = Fixed(input[i][j]);

        // 执行定点 DCT
        auto fixed_dct = dct_fixed(fixed_input);

        // 转回 float 并计算误差
        float mse = 0;
        float max_diff = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                float f1 = float_dct[i][j];
                float f2 = fixed_dct[i][j].toFloat();
                float diff = std::abs(f1 - f2);
                mse += diff * diff;
                if (diff > max_diff) max_diff = diff;
            }
        }
        mse /= (N * N);

        csv << trial << "," << mse << "," << max_diff << "\n";
        std::cout << "Trial " << trial << ": MSE=" << mse << ", Max Error=" << max_diff << "\n";
    }

    csv.close();
    std::cout << "Saved to dct_100_trials.csv\n";
    return 0;
}
