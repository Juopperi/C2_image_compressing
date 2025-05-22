// ===== ./1_YCbCr_conversion/utils/gen_multi_inout.cpp =====
#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <cstdint>
#include <cmath>
#include "FixedPoint.h"

using Fix = FixedPoint<int32_t, 16>; // 32-bit fixed point with 16 fractional bits

float clamp(float x, float lo = 0.0f, float hi = 255.0f) {
    return std::min(std::max(x, lo), hi);
}

// YCbCr conversion using standard BT.601
void rgb2ycbcr(float R, float G, float B, float &Y, float &Cb, float &Cr) {
    Y  =  0.299f * R + 0.587f * G + 0.114f * B - 128.0f;
    Cb = -0.168736f * R - 0.331264f * G + 0.5f * B ;
    Cr =  0.5f * R - 0.418688f * G - 0.081312f * B ;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <num_samples>" << std::endl;
        return 1;
    }

    int num_samples = std::stoi(argv[1]);

    std::ofstream fin_r("input_R.mem");
    std::ofstream fin_g("input_G.mem");
    std::ofstream fin_b("input_B.mem");
    std::ofstream fout_y("expected_Y_output.mem");
    std::ofstream fout_cb("expected_Cb_output.mem");
    std::ofstream fout_cr("expected_Cr_output.mem");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 255);

    for (int s = 0; s < num_samples; ++s) {
        for (int i = 0; i < 64; ++i) {
            uint8_t R = static_cast<uint8_t>(dist(gen));
            uint8_t G = static_cast<uint8_t>(dist(gen));
            uint8_t B = static_cast<uint8_t>(dist(gen));

            float Y, Cb, Cr;
            rgb2ycbcr(R, G, B, Y, Cb, Cr);

            fin_r << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                  << static_cast<int>(R) << std::endl;
            fin_g << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                  << static_cast<int>(G) << std::endl;
            fin_b << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                  << static_cast<int>(B) << std::endl;

            fout_y << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                   << static_cast<uint32_t>(Fix(Y).raw()) << std::endl;
            fout_cb << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    << static_cast<uint32_t>(Fix(Cb).raw()) << std::endl;
            fout_cr << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    << static_cast<uint32_t>(Fix(Cr).raw()) << std::endl;
        }
    }

    fin_r.close();
    fin_g.close();
    fin_b.close();
    fout_y.close();
    fout_cb.close();
    fout_cr.close();

    std::cout << "Generated " << num_samples << " RGB→YCbCr samples." << std::endl;
    return 0;
}
// ===== ./2_dct/utils/gen_multi_inout.cpp =====
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
// ===== ./3_quantization/utils/gen_multi_inout.cpp =====
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
// ===== ./4_zigzag/utils/gen_multi_inout.cpp =====
#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <string>
#include <cstdint>

// Zigzag 顺序表：用于 8x8 矩阵
const int zigzag_order[64] = {
     0,  1,  5,  6, 14, 15, 27, 28,
     2,  4,  7, 13, 16, 26, 29, 42,
     3,  8, 12, 17, 25, 30, 41, 43,
     9, 11, 18, 24, 31, 40, 44, 53,
    10, 19, 23, 32, 39, 45, 52, 54,
    20, 22, 33, 38, 46, 51, 55, 60,
    21, 34, 37, 47, 50, 56, 59, 61,
    35, 36, 48, 49, 57, 58, 62, 63
};

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <lower> <upper> <num_samples>" << std::endl;
        return 1;
    }

    int lower = std::stoi(argv[1]);
    int upper = std::stoi(argv[2]);
    int num_samples = std::stoi(argv[3]);

    std::ofstream fin("zigzag_input.mem");
    std::ofstream fout("expected_zigzag_output.mem");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int32_t> dist(lower, upper);

    for (int s = 0; s < num_samples; ++s) {
        uint32_t matrix[64];
        for (int i = 0; i < 64; ++i) {
            int32_t val = dist(gen);
            matrix[i] = static_cast<uint32_t>(val);
            fin << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << matrix[i] << std::endl;
        }

        for (int i = 0; i < 64; ++i) {
            uint32_t reordered = matrix[zigzag_order[i]];
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << reordered << std::endl;
        }
    }

    fin.close();
    fout.close();

    std::cout << "Generated " << num_samples << " zigzag test cases." << std::endl;
    return 0;
}
// ===== ./template/utils/gen_multi_inout.cpp =====
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
