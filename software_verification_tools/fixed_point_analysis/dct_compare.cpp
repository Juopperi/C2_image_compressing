#include <iostream>
#include <cmath>
#include <array>
#include <random>
#include "FixedPoint.h"

constexpr int N = 8;
using Block = std::array<std::array<float, N>, N>;

// 浮点 DCT 实现
Block dct_float(const Block& input) {
    Block output = {};
    for (int u = 0; u < N; ++u) {
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
    }
    return output;
}

// 定点 DCT 实现
template<typename Fixed>
std::array<std::array<Fixed, N>, N> dct_fixed(const std::array<std::array<Fixed, N>, N>& input) {
    std::array<std::array<Fixed, N>, N> output = {};
    for (int u = 0; u < N; ++u) {
        for (int v = 0; v < N; ++v) {
            Fixed sum = 0;
            for (int x = 0; x < N; ++x)
                for (int y = 0; y < N; ++y) {
                    float cx = std::cos((2 * x + 1) * u * M_PI / (2 * N));
                    float cy = std::cos((2 * y + 1) * v * M_PI / (2 * N));
                    Fixed fx = cx;
                    Fixed fy = cy;
                    sum = sum + input[x][y] * fx * fy;
                }
            float cu = (u == 0) ? std::sqrt(0.5f) : 1.0f;
            float cv = (v == 0) ? std::sqrt(0.5f) : 1.0f;
            Fixed fcu = cu;
            Fixed fcv = cv;
            Fixed scale = Fixed(0.25f);
            output[u][v] = scale * fcu * fcv * sum;
        }
    }
    return output;
}

// 随机生成 8x8 浮点图像块（0~255）
Block generate_input() {
    Block block;
    std::mt19937 rng(42);
    std::uniform_real_distribution<float> dist(0.0f, 255.0f);
    for (auto& row : block)
        for (auto& val : row)
            val = dist(rng);
    return block;
}

// 误差计算（均方误差）
float compute_mse(const Block& ref, const Block& test) {
    float mse = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            float diff = ref[i][j] - test[i][j];
            mse += diff * diff;
        }
    return mse / (N * N);
}

int main() {
    using Fixed = FixedPoint<int32_t, 16>;  // 可切换为 4、12、16 等

    Block input = generate_input();
    Block float_dct = dct_float(input);

    // 转换为定点输入
    std::array<std::array<Fixed, N>, N> fixed_input;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            fixed_input[i][j] = Fixed(input[i][j]);

    auto fixed_dct = dct_fixed(fixed_input);

    // 转回 float
    Block fixed_dct_float;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            fixed_dct_float[i][j] = fixed_dct[i][j].toFloat();

    float mse = compute_mse(float_dct, fixed_dct_float);
    std::cout << "DCT MSE (float vs fixed): " << mse << "\n";

        std::cout << "\nInput Block (float):\n";
    for (const auto& row : input) {
        for (auto val : row)
            std::cout << val << "\t";
        std::cout << "\n";
    }

    std::cout << "\nDCT Output (float):\n";
    for (const auto& row : float_dct) {
        for (auto val : row)
            std::cout << val << "\t";
        std::cout << "\n";
    }

    std::cout << "\nDCT Output (fixed to float):\n";
    for (const auto& row : fixed_dct_float) {
        for (auto val : row)
            std::cout << val << "\t";
        std::cout << "\n";
    }

    std::cout << "\nError Matrix (float - fixed):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            float err = float_dct[i][j] - fixed_dct_float[i][j];
            std::cout << err << "\t";
        }
        std::cout << "\n";
    }


    return 0;
}
