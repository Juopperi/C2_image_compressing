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

// 保存 1x8 行向量为一行
void save_vector_1x8(const std::string& filename, const Fix vec[N]) {
    std::ofstream fout(filename);
    for (int i = 0; i < N; ++i) {
        uint32_t raw = static_cast<uint32_t>(vec[i].raw());
        fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << raw;
        if (i != N - 1) fout << " ";
    }
    fout << std::endl;
    fout.close();
}

// 保存 NxN 矩阵（64 行）
void save_matrix_mem(const std::string& filename, const Fix mat[N][N]) {
    std::ofstream fout(filename);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            uint32_t raw = static_cast<uint32_t>(mat[i][j].raw());
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << raw << std::endl;
        }
    fout.close();
}

// 保存 dct_1d_8x8 中每一行输入/输出（可用于 row test）
void save_rows_for_1d_8x1_test(const Fix input[N][N], const Fix row_dct[N][N]) {
    for (int i = 0; i < N; ++i) {
        std::string in_file  = "row_input_" + std::to_string(i) + ".mem";
        std::string out_file = "row_output_" + std::to_string(i) + ".mem";
        save_vector_1x8(in_file, input[i]);
        save_vector_1x8(out_file, row_dct[i]);
    }
}

int main() {
    Fix input[N][N];
    Fix row_dct[N][N];
    Fix final_dct[N][N];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(-30, 30);

    // 生成输入矩阵
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            input[i][j] = Fix(dist(gen));

    // 行 DCT（1D）
    for (int i = 0; i < N; ++i)
        dct_1d(input[i], row_dct[i]);

    // 列 DCT（2D 最终输出）
    for (int j = 0; j < N; ++j) {
        Fix col_in[N], col_out[N];
        for (int i = 0; i < N; ++i)
            col_in[i] = row_dct[i][j];

        dct_1d(col_in, col_out);

        for (int i = 0; i < N; ++i)
            final_dct[i][j] = col_out[i];
    }

    // 保存文件（给 Verilog 仿真使用）
    save_matrix_mem("input_matrix.mem", input);                  // dct_2d_8x8 输入
    save_matrix_mem("row_dct_intermediate.mem", row_dct);        // dct_1d_8x8 输出 / dct_2d_8x8 中间结果
    save_matrix_mem("final_dct_result.mem", final_dct);          // dct_2d_8x8 输出

    save_rows_for_1d_8x1_test(input, row_dct);                   // row_input_i.mem / row_output_i.mem

    std::cout << "DCT computation done. All .mem files generated." << std::endl;
    return 0;
}
