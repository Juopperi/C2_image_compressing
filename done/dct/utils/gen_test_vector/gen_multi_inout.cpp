#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdint>
#include <random>
#include "FixedPoint_refined.h"

constexpr int N = 8;
using Fix = FixedPoint<int32_t, 16>;

// 从文件读取 DCT 系数
void load_dct_coeff_matrix(const std::string& filename, double coeffs[N][N]) {
    std::ifstream fin(filename);
    if (!fin) {
        std::cerr << "Error: Cannot open " << filename << std::endl;
        exit(1);
    }
    std::string hex;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            fin >> hex;
            uint32_t raw = std::stoul(hex, nullptr, 16);
            Fix f = Fix::fromRaw(static_cast<int32_t>(raw));
            coeffs[i][j] = f.toFloat();
        }
    fin.close();
}

// 浮点一维 DCT
void dct_1d_float(const float in[N], float out[N], const double coeffs[N][N]) {
    for (int k = 0; k < N; ++k) {
        float sum = 0.0f;
        for (int n = 0; n < N; ++n)
            sum += in[n] * static_cast<float>(coeffs[k][n]);
        out[k] = sum;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <lower> <upper> <num_samples>" << std::endl;
        return 1;
    }

    int lower = std::stoi(argv[1]);
    int upper = std::stoi(argv[2]);
    int num_samples = std::stoi(argv[3]);

    double coeffs[N][N];
    load_dct_coeff_matrix("dct_coeff_matrix.mem", coeffs);

    std::ofstream fin("multi_input.mem"), fout("multi_output.mem");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    for (int s = 0; s < num_samples; ++s) {
        float input[N][N], row_out[N][N], final_out[N][N];

        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                input[i][j] = static_cast<float>(dist(gen));

        for (int i = 0; i < N; ++i)
            dct_1d_float(input[i], row_out[i], coeffs);

        for (int j = 0; j < N; ++j) {
            float col_in[N], col_out[N];
            for (int i = 0; i < N; ++i)
                col_in[i] = row_out[i][j];
            dct_1d_float(col_in, col_out, coeffs);
            for (int i = 0; i < N; ++i)
                final_out[i][j] = col_out[i];
        }

        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                fin << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    << static_cast<uint32_t>(Fix(static_cast<double>(input[i][j])).raw()) << std::endl;

        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                     << static_cast<uint32_t>(Fix(static_cast<double>(final_out[i][j])).raw()) << std::endl;
    }

    fin.close();
    fout.close();

    std::cout << "Generated " << num_samples << " DCT samples using float, saved as fixed-point hex." << std::endl;
    return 0;
}