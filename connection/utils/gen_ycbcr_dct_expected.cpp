#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <cstdint>
#include <cmath>
#include <string>
#include <algorithm>
#include "FixedPoint.h"

// Define M_PI if not already defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Custom clamp function for older C++ standards
template<typename T>
T clamp(T value, T min, T max) {
    return value < min ? min : (value > max ? max : value);
}

constexpr int N = 8;

using Fix = FixedPoint<int32_t, 16>;

// 对应于硬件中使用的zigzag顺序
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

// RGB到YCbCr转换函数 - 与硬件中的公式保持一致
void rgb2ycbcr(float R, float G, float B, float &Y, float &Cb, float &Cr) {
    Y  =  0.299f * R + 0.587f * G + 0.114f * B - 128.0f;
    Cb = -0.168736f * R - 0.331264f * G + 0.5f * B;
    Cr =  0.5f * R - 0.418688f * G - 0.081312f * B;
}

// 加载DCT系数矩阵 - 从文件中读取硬件使用的固定点系数
void load_dct_coeff_matrix(const std::string& filename, double coeffs[N][N]) {
    std::ifstream fin(filename);
    if (!fin) {
        std::cerr << "Error: Cannot open DCT coeff file: " << filename << std::endl;
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

// 1D DCT变换
void dct_1d(const float in[N], float out[N], const double coeffs[N][N]) {
    for (int k = 0; k < N; ++k) {
        float sum = 0.0f;
        for (int n = 0; n < N; ++n)
            sum += in[n] * static_cast<float>(coeffs[k][n]);
        out[k] = sum;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <num_samples>" << std::endl;
        return 1;
    }

    int num_samples = std::stoi(argv[1]);

    std::ofstream fout_y_raw("expected_Y_raw.mem");
    std::ofstream fout_cb_raw("expected_Cb_raw.mem");
    std::ofstream fout_cr_raw("expected_Cr_raw.mem");
    
    std::ofstream fout_y_dct("expected_Y_dct.mem");
    std::ofstream fout_cb_dct("expected_Cb_dct.mem");
    std::ofstream fout_cr_dct("expected_Cr_dct.mem");

    if (!fout_y_raw || !fout_cb_raw || !fout_cr_raw || 
        !fout_y_dct || !fout_cb_dct || !fout_cr_dct) {
        std::cerr << "Error opening output files." << std::endl;
        return 1;
    }

    // 加载RGB输入数据
    std::ifstream fin_r("input_R.mem");
    std::ifstream fin_g("input_G.mem");
    std::ifstream fin_b("input_B.mem");
    
    if (!fin_r || !fin_g || !fin_b) {
        std::cerr << "Error opening input files." << std::endl;
        return 1;
    }
    
    double dct_coeffs[N][N];
    load_dct_coeff_matrix("dct_coeff_matrix.mem", dct_coeffs);

    // 处理每个样本
    for (int s = 0; s < num_samples; ++s) {
        float pixel_R[N][N], pixel_G[N][N], pixel_B[N][N];
        float Y[N][N], Cb[N][N], Cr[N][N];
        
        // 读取RGB数据
        std::string hex;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                fin_r >> hex;
                pixel_R[i][j] = std::stoul(hex, nullptr, 16);
                
                fin_g >> hex;
                pixel_G[i][j] = std::stoul(hex, nullptr, 16);
                
                fin_b >> hex;
                pixel_B[i][j] = std::stoul(hex, nullptr, 16);
                
                // 进行RGB到YCbCr转换
                rgb2ycbcr(pixel_R[i][j], pixel_G[i][j], pixel_B[i][j], 
                          Y[i][j], Cb[i][j], Cr[i][j]);
                
                // 输出原始YCbCr结果
                Fix y_fixed(Y[i][j]);
                Fix cb_fixed(Cb[i][j]);
                Fix cr_fixed(Cr[i][j]);
                
                fout_y_raw << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                       << static_cast<uint32_t>(y_fixed.raw()) << std::endl;
                fout_cb_raw << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                        << static_cast<uint32_t>(cb_fixed.raw()) << std::endl;
                fout_cr_raw << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                        << static_cast<uint32_t>(cr_fixed.raw()) << std::endl;
            }
        }
        
        // 计算DCT变换
        float Y_temp[N][N], Cb_temp[N][N], Cr_temp[N][N];
        float Y_dct[N][N], Cb_dct[N][N], Cr_dct[N][N];
        
        // 首先对行进行DCT
        for (int i = 0; i < N; ++i) {
            dct_1d(Y[i], Y_temp[i], dct_coeffs);
            dct_1d(Cb[i], Cb_temp[i], dct_coeffs);
            dct_1d(Cr[i], Cr_temp[i], dct_coeffs);
        }
        
        // 然后对列进行DCT
        for (int j = 0; j < N; ++j) {
            float Y_col[N], Cb_col[N], Cr_col[N];
            float Y_dct_col[N], Cb_dct_col[N], Cr_dct_col[N];
            
            for (int i = 0; i < N; ++i) {
                Y_col[i] = Y_temp[i][j];
                Cb_col[i] = Cb_temp[i][j];
                Cr_col[i] = Cr_temp[i][j];
            }
            
            dct_1d(Y_col, Y_dct_col, dct_coeffs);
            dct_1d(Cb_col, Cb_dct_col, dct_coeffs);
            dct_1d(Cr_col, Cr_dct_col, dct_coeffs);
            
            for (int i = 0; i < N; ++i) {
                Y_dct[i][j] = Y_dct_col[i];
                Cb_dct[i][j] = Cb_dct_col[i];
                Cr_dct[i][j] = Cr_dct_col[i];
            }
        }
        
        // 按照行序输出DCT结果
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                Fix y_dct_fixed(Y_dct[i][j]);
                Fix cb_dct_fixed(Cb_dct[i][j]);
                Fix cr_dct_fixed(Cr_dct[i][j]);
                
                fout_y_dct << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                       << static_cast<uint32_t>(y_dct_fixed.raw()) << std::endl;
                fout_cb_dct << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                        << static_cast<uint32_t>(cb_dct_fixed.raw()) << std::endl;
                fout_cr_dct << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                        << static_cast<uint32_t>(cr_dct_fixed.raw()) << std::endl;
            }
        }
    }

    fin_r.close();
    fin_g.close();
    fin_b.close();
    
    fout_y_raw.close();
    fout_cb_raw.close();
    fout_cr_raw.close();
    
    fout_y_dct.close();
    fout_cb_dct.close();
    fout_cr_dct.close();

    std::cout << "✅ Generated expected results for " << num_samples << " blocks:" << std::endl;
    std::cout << "   YCbCr Raw: expected_Y/Cb/Cr_raw.mem" << std::endl;
    std::cout << "   DCT: expected_Y/Cb/Cr_dct.mem" << std::endl;
    return 0;
} 