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

// 生成并保存 DCT 系数（使用 trunc 行为）
void generate_dct_coeff_matrix(const std::string& filename) {
    std::ofstream fout(filename);
    for (int k = 0; k < N; ++k) {
        double a = (k == 0) ? std::sqrt(1.0 / N) : std::sqrt(2.0 / N);
        for (int n = 0; n < N; ++n) {
            double c = std::cos((2 * n + 1) * k * M_PI / (2.0 * N));
            Fix coeff(a * c, false); // truncate，不用 round
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << static_cast<uint32_t>(coeff.raw()) << std::endl;
        }
    }
    fout.close();
}

// 从文件读取 DCT 系数
void load_dct_coeff_matrix(const std::string& filename, Fix coeffs[N][N], double coeffs_f[N][N]) {
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
            coeffs[i][j] = Fix::fromRaw(raw);
            coeffs_f[i][j] = coeffs[i][j].toFloat();
        }
    fin.close();
}

// 定点一维 DCT
void dct_1d(const Fix in[N], Fix out[N], const Fix coeffs[N][N], int index) {
    for (int k = 0; k < N; ++k) {
        Fix sum;
        for (int n = 0; n < N; ++n)
            sum = sum + in[n] * coeffs[k][n];
        out[k] = sum;
    }
}

// 浮点一维 DCT
void dct_1d_float(const float in[N], float out[N], const double coeff[N][N], int index) {
    for (int k = 0; k < N; ++k) {
        float sum = 0.0f;
        for (int n = 0; n < N; ++n)
            sum += in[n] * static_cast<float>(coeff[k][n]);
        out[k] = sum;
    }
}

// 保存定点向量
void save_vector_1x8(const std::string& filename, const Fix vec[N]) {
    std::ofstream fout(filename);
    for (int i = 0; i < N; ++i) {
        fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << static_cast<uint32_t>(vec[i].raw());
        if (i != N - 1) fout << " ";
    }
    fout << std::endl;
    fout.close();
}

// 保存定点矩阵
void save_matrix_mem(const std::string& filename, const Fix mat[N][N]) {
    std::ofstream fout(filename);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << static_cast<uint32_t>(mat[i][j].raw()) << std::endl;
    fout.close();
}

// 保存浮点矩阵
void save_matrix_float(const std::string& filename, float mat[N][N]) {
    std::ofstream fout(filename);
    fout << std::fixed << std::setprecision(6);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            fout << mat[i][j] << std::endl;
    fout.close();
}

void save_rows_for_1d_8x1_test(const Fix input[N][N], const Fix row_dct[N][N]) {
    for (int i = 0; i < N; ++i) {
        save_vector_1x8("row_input_" + std::to_string(i) + ".mem", input[i]);
        save_vector_1x8("row_output_" + std::to_string(i) + ".mem", row_dct[i]);
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <lower_bound> <upper_bound>" << std::endl;
        return 1;
    }

    int lower = std::stoi(argv[1]);
    int upper = std::stoi(argv[2]);

    // 定点矩阵
    Fix input[N][N], row_dct[N][N], final_dct[N][N], coeff_matrix[N][N];
    // 浮点矩阵
    float input_f[N][N], row_dct_f[N][N], final_dct_f[N][N];
    double coeff_matrix_f[N][N];

    generate_dct_coeff_matrix("dct_coeff_matrix.mem");
    load_dct_coeff_matrix("dct_coeff_matrix.mem", coeff_matrix, coeff_matrix_f);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    // 生成相同的输入
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            int val = dist(gen);
            input[i][j] = Fix(val);
            input_f[i][j] = static_cast<float>(val);
        }

    // 行 DCT
    for (int i = 0; i < N; ++i) {
        dct_1d(input[i], row_dct[i], coeff_matrix, i);
        dct_1d_float(input_f[i], row_dct_f[i], coeff_matrix_f, i);
    }

    // 列 DCT
    for (int j = 0; j < N; ++j) {
        Fix col_in[N], col_out[N];
        float col_in_f[N], col_out_f[N];
        for (int i = 0; i < N; ++i) {
            col_in[i] = row_dct[i][j];
            col_in_f[i] = row_dct_f[i][j];
        }
        dct_1d(col_in, col_out, coeff_matrix, j);
        dct_1d_float(col_in_f, col_out_f, coeff_matrix_f, j);
        for (int i = 0; i < N; ++i) {
            final_dct[i][j] = col_out[i];
            final_dct_f[i][j] = col_out_f[i];
        }
    }

    // 保存定点
    save_matrix_mem("input_matrix.mem", input);
    save_matrix_mem("row_dct_intermediate.mem", row_dct);
    save_matrix_mem("final_dct_result.mem", final_dct);
    save_rows_for_1d_8x1_test(input, row_dct);

    // 保存浮点
    save_matrix_float("float_row_dct_intermediate.txt", row_dct_f);
    save_matrix_float("float_final_dct_result.txt", final_dct_f);

    std::cout << "DCT computation complete (range: [" << lower << ", " << upper << "])." << std::endl;
    return 0;
}
