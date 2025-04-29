#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdint>
#include <random>
#include "FixedPoint.h" // 你的 FixedPoint 模板类

constexpr int N = 8;
constexpr double PI = 3.14159265358979323846;

using Fix = FixedPoint<int32_t, 16>;  // Q16.16

// alpha 缩放因子（浮点→定点）
Fix alpha_fix(int k) {
    double a = (k == 0) ? std::sqrt(1.0 / N) : std::sqrt(2.0 / N);
    return Fix(a);
}

// 一维 DCT（定点版本）
void dct_1d(const Fix in[N], Fix out[N]) {
    for (int k = 0; k < N; ++k) {
        Fix sum;
        for (int n = 0; n < N; ++n) {
            double c = std::cos((2 * n + 1) * k * PI / (2.0 * N));
            Fix coeff(c);
            sum = sum + in[n] * coeff;
        }
        out[k] = sum * alpha_fix(k);
    }
}

// 保存定点矩阵为 Verilog `$readmemh` 可用格式
void save_matrix_mem(const std::string& filename, const Fix mat[N][N]) {
    std::ofstream fout(filename);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            uint32_t raw = static_cast<uint32_t>(mat[i][j].raw());
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << raw << std::endl;
        }
    fout.close();
}

int main() {
    Fix input[N][N];
    Fix row_dct[N][N];
    Fix final_dct[N][N];

    // 初始化随机数生成器，范围 [-127, 128]
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(-30, 30);
    // std::uniform_int_distribution<int> dist(-10, 10);

    // 随机整数初始化输入
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            input[i][j] = Fix(dist(gen));

    // 行 DCT
    for (int i = 0; i < N; ++i)
        dct_1d(input[i], row_dct[i]);

    // 列 DCT
    for (int j = 0; j < N; ++j) {
        Fix col_in[N], col_out[N];
        for (int i = 0; i < N; ++i)
            col_in[i] = row_dct[i][j];

        dct_1d(col_in, col_out);

        for (int i = 0; i < N; ++i)
            final_dct[i][j] = col_out[i];
    }

    // 保存为 Verilog 可读 .mem 文件
    save_matrix_mem("input_matrix.mem", input);
    save_matrix_mem("row_dct_intermediate.mem", row_dct);
    save_matrix_mem("final_dct_result.mem", final_dct);

    std::cout << "Fixed-point DCT complete with random input. .mem files written." << std::endl;
    return 0;
}
