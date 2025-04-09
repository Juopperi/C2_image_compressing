#include <iostream>
#include <fstream>
#include <cmath>
#include <array>
#include <random>
#include <string>
#include "FixedPoint.h"

constexpr int N = 8;
using Block = std::array<std::array<float, N>, N>;

Block generate_input() {
    Block block;
    std::mt19937 rng(42);
    //std::uniform_real_distribution<float> dist(0.0f, 255.0f);
    std::uniform_real_distribution<float> dist(-127.0f, 128.0f);
    for (auto& row : block)
        for (auto& val : row)
            val = dist(rng);
    return block;
}

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

template<int fracBits>
float dct_fixed_mse(const Block& input, const Block& float_dct) {
    using Fixed = FixedPoint<int32_t, fracBits>;

    std::array<std::array<Fixed, N>, N> fixed_input;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            fixed_input[i][j] = Fixed(input[i][j]);

    std::array<std::array<Fixed, N>, N> fixed_dct = {};
    for (int u = 0; u < N; ++u) {
        for (int v = 0; v < N; ++v) {
            Fixed sum = 0;
            for (int x = 0; x < N; ++x)
                for (int y = 0; y < N; ++y) {
                    Fixed cx = std::cos((2 * x + 1) * u * M_PI / (2 * N));
                    Fixed cy = std::cos((2 * y + 1) * v * M_PI / (2 * N));
                    sum = sum + fixed_input[x][y] * cx * cy;
                }
            Fixed cu = (u == 0) ? std::sqrt(0.5f) : 1.0f;
            Fixed cv = (v == 0) ? std::sqrt(0.5f) : 1.0f;
            Fixed scale = Fixed(0.25f);
            fixed_dct[u][v] = scale * cu * cv * sum;
        }
    }

    float mse = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            float diff = fixed_dct[i][j].toFloat() - float_dct[i][j];
            mse += diff * diff;
        }

    return mse / (N * N);
}

int main() {
    Block input = generate_input();
    Block dct_ref = dct_float(input);

    std::ofstream csv("mse_vs_fracBits.csv");
    csv << "fracBits,MSE\n";

    for (int bits = 4; bits <= 32; ++bits) {
        float mse = 0;

        switch (bits) {
#define CASE(B) case B: mse = dct_fixed_mse<B>(input, dct_ref); break;
            CASE(4)  CASE(5)  CASE(6)  CASE(7)
            CASE(8)  CASE(9)  CASE(10) CASE(11)
            CASE(12) CASE(13) CASE(14) CASE(15)
            CASE(16) CASE(17) CASE(18) CASE(19)
            CASE(20)
#undef CASE
        }

        std::cout << "fracBits = " << bits << ", MSE = " << mse << "\n";
        csv << bits << "," << mse << "\n";
    }

    csv.close();
    std::cout << "Results saved to mse_vs_fracBits.csv\n";
    return 0;
}
