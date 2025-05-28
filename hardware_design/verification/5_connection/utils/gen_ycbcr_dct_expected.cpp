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

// 测试模式类型
enum TestMode {
    FROM_FILE = 0,   // 从文件读取RGB数据
    ALL_ONES,        // 所有RGB值为1
    ALL_VALUE,       // 所有RGB值为指定值n
    RAMP,            // 渐变模式(X方向递增)
    CHECKERBOARD,    // 棋盘格模式
    EDGE,            // 边缘模式(一半0，一半255)
    X_GRADIENT,      // X方向渐变
    Y_GRADIENT,      // Y方向渐变
};

// RGB到YCbCr转换函数 - 与硬件中的公式保持一致
void rgb2ycbcr(float R, float G, float B, float &Y, float &Cb, float &Cr) {
    Y  =  0.299f * R + 0.587f * G + 0.114f * B - 128.0f;
    Cb = -0.168736f * R - 0.331264f * G + 0.5f * B;
    Cr =  0.5f * R - 0.418688f * G - 0.081312f * B;
}

// 初始化标准DCT系数矩阵
void init_dct_coeffs(double coeffs[N][N]) {
    // 标准DCT系数计算: C(i,j) = α(i) * α(j) * cos((2*j+1)*i*π/16)
    // 其中: α(0) = 1/√2, α(i) = 1 for i > 0
    
    double alpha[N];
    alpha[0] = 1.0 / sqrt(2.0);
    for (int i = 1; i < N; i++) {
        alpha[i] = 1.0;
    }
    
    // 构建系数矩阵
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            coeffs[i][j] = alpha[i] * alpha[j] * 
                          cos((2.0 * j + 1.0) * i * M_PI / (2.0 * N));
        }
    }
    
    // 归一化系数
    double norm_factor = 0.25; // 归一化因子，可根据实际硬件实现调整
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            coeffs[i][j] *= norm_factor;
        }
    }
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

// 生成测试块的RGB数据
void generate_test_block(float R[N][N], float G[N][N], float B[N][N], 
                         TestMode mode, int value = 0) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            switch (mode) {
                case ALL_ONES:
                    R[i][j] = G[i][j] = B[i][j] = 1.0f;
                    break;
                
                case ALL_VALUE:
                    R[i][j] = G[i][j] = B[i][j] = static_cast<float>(value);
                    break;
                
                case RAMP:
                    R[i][j] = G[i][j] = B[i][j] = static_cast<float>(j * 32);
                    break;
                
                case CHECKERBOARD:
                    R[i][j] = G[i][j] = B[i][j] = ((i + j) % 2 == 0) ? 0.0f : 255.0f;
                    break;
                
                case EDGE:
                    R[i][j] = G[i][j] = B[i][j] = (j < N/2) ? 0.0f : 255.0f;
                    break;
                
                case X_GRADIENT:
                    R[i][j] = G[i][j] = B[i][j] = static_cast<float>(j * 255 / (N - 1));
                    break;
                
                case Y_GRADIENT:
                    R[i][j] = G[i][j] = B[i][j] = static_cast<float>(i * 255 / (N - 1));
                    break;
                
                default:
                    R[i][j] = G[i][j] = B[i][j] = 0.0f;
                    break;
            }
        }
    }
}

// 打印帮助信息
void print_help(const char* prog_name) {
    std::cerr << "Usage: " << prog_name << " <num_samples> [options]" << std::endl;
    std::cerr << "Options:" << std::endl;
    std::cerr << "  --mode=<mode_num>   Specify test mode (default: 0)" << std::endl;
    std::cerr << "                      0: Read from file (input_R/G/B.mem)" << std::endl;
    std::cerr << "                      1: All ones" << std::endl;
    std::cerr << "                      2: All same value (requires --value)" << std::endl;
    std::cerr << "                      3: Ramp (each row increases by 32)" << std::endl;
    std::cerr << "                      4: Checkerboard (0/255 pattern)" << std::endl;
    std::cerr << "                      5: Edge (left half 0, right half 255)" << std::endl;
    std::cerr << "                      6: X-gradient (0-255 horizontally)" << std::endl;
    std::cerr << "                      7: Y-gradient (0-255 vertically)" << std::endl;
    std::cerr << "  --value=<n>         Value to use for ALL_VALUE mode" << std::endl;
    std::cerr << "  --write-rgb         Also write generated RGB data to files" << std::endl;
    std::cerr << "  --help              Show this help message" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        print_help(argv[0]);
        return 1;
    }

    // 解析参数
    int num_samples = std::stoi(argv[1]);
    TestMode mode = FROM_FILE;
    int value = 128;
    bool write_rgb = false;

    for (int i = 2; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg.substr(0, 7) == "--mode=") {
            int mode_num = std::stoi(arg.substr(7));
            if (mode_num >= 0 && mode_num <= 7) {
                mode = static_cast<TestMode>(mode_num);
            } else {
                std::cerr << "Error: Invalid mode number: " << mode_num << std::endl;
                print_help(argv[0]);
                return 1;
            }
        } else if (arg.substr(0, 8) == "--value=") {
            value = std::stoi(arg.substr(8));
            if (value < 0 || value > 255) {
                std::cerr << "Error: Value must be 0-255, got: " << value << std::endl;
                return 1;
            }
        } else if (arg == "--write-rgb") {
            write_rgb = true;
        } else if (arg == "--help") {
            print_help(argv[0]);
            return 0;
        } else {
            std::cerr << "Error: Unknown option: " << arg << std::endl;
            print_help(argv[0]);
            return 1;
        }
    }

    // 打开输出文件
    std::ofstream fout_y_raw("expected_Y_raw.mem");
    std::ofstream fout_cb_raw("expected_Cb_raw.mem");
    std::ofstream fout_cr_raw("expected_Cr_raw.mem");
    
    std::ofstream fout_y_dct("expected_Y_dct.mem");
    std::ofstream fout_cb_dct("expected_Cb_dct.mem");
    std::ofstream fout_cr_dct("expected_Cr_dct.mem");

    std::ofstream fout_r, fout_g, fout_b;
    if (write_rgb && mode != FROM_FILE) {
        fout_r.open("input_R.mem");
        fout_g.open("input_G.mem");
        fout_b.open("input_B.mem");
        
        if (!fout_r || !fout_g || !fout_b) {
            std::cerr << "Error opening RGB output files." << std::endl;
            return 1;
        }
    }

    if (!fout_y_raw || !fout_cb_raw || !fout_cr_raw || 
        !fout_y_dct || !fout_cb_dct || !fout_cr_dct) {
        std::cerr << "Error opening output files." << std::endl;
        return 1;
    }

    // 从文件读取或生成输入数据
    std::ifstream fin_r, fin_g, fin_b;
    if (mode == FROM_FILE) {
        fin_r.open("input_R.mem");
        fin_g.open("input_G.mem");
        fin_b.open("input_B.mem");
        
        if (!fin_r || !fin_g || !fin_b) {
            std::cerr << "Error opening input files." << std::endl;
            return 1;
        }
    }
    
    // 初始化DCT系数矩阵
    double dct_coeffs[N][N];
    init_dct_coeffs(dct_coeffs);

    // 处理每个样本
    for (int s = 0; s < num_samples; ++s) {
        float pixel_R[N][N], pixel_G[N][N], pixel_B[N][N];
        float Y[N][N], Cb[N][N], Cr[N][N];
        
        if (mode == FROM_FILE) {
            // 从文件读取RGB数据
            std::string hex;
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    fin_r >> hex;
                    pixel_R[i][j] = std::stoul(hex, nullptr, 16);
                    
                    fin_g >> hex;
                    pixel_G[i][j] = std::stoul(hex, nullptr, 16);
                    
                    fin_b >> hex;
                    pixel_B[i][j] = std::stoul(hex, nullptr, 16);
                }
            }
        } else {
            // 生成测试模式
            generate_test_block(pixel_R, pixel_G, pixel_B, mode, value);
            
            // 如果需要，写入生成的RGB数据
            if (write_rgb) {
                for (int i = 0; i < N; ++i) {
                    for (int j = 0; j < N; ++j) {
                        uint8_t r = static_cast<uint8_t>(pixel_R[i][j]);
                        uint8_t g = static_cast<uint8_t>(pixel_G[i][j]);
                        uint8_t b = static_cast<uint8_t>(pixel_B[i][j]);
                        
                        fout_r << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                              << static_cast<int>(r) << std::endl;
                        fout_g << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                              << static_cast<int>(g) << std::endl;
                        fout_b << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                              << static_cast<int>(b) << std::endl;
                    }
                }
            }
        }
        
        // RGB转YCbCr并输出原始结果
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
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
        
        // 输出DCT结果
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

    // 关闭所有文件
    if (mode == FROM_FILE) {
        fin_r.close();
        fin_g.close();
        fin_b.close();
    }
    
    if (write_rgb && mode != FROM_FILE) {
        fout_r.close();
        fout_g.close();
        fout_b.close();
    }
    
    fout_y_raw.close();
    fout_cb_raw.close();
    fout_cr_raw.close();
    
    fout_y_dct.close();
    fout_cb_dct.close();
    fout_cr_dct.close();

    // 输出结果信息
    std::cout << "✅ Generated expected results for " << num_samples << " blocks:" << std::endl;
    if (mode != FROM_FILE) {
        std::cout << "   Mode: ";
        switch (mode) {
            case ALL_ONES:      std::cout << "全1模式"; break;
            case ALL_VALUE:     std::cout << "全" << value << "模式"; break;
            case RAMP:          std::cout << "渐变模式"; break;
            case CHECKERBOARD:  std::cout << "棋盘格模式"; break;
            case EDGE:          std::cout << "边缘模式"; break;
            case X_GRADIENT:    std::cout << "X渐变模式"; break;
            case Y_GRADIENT:    std::cout << "Y渐变模式"; break;
            default:            std::cout << "未知模式"; break;
        }
        std::cout << std::endl;
        
        if (write_rgb) {
            std::cout << "   RGB数据: input_R/G/B.mem" << std::endl;
        }
    }
    std::cout << "   YCbCr Raw: expected_Y/Cb/Cr_raw.mem" << std::endl;
    std::cout << "   DCT: expected_Y/Cb/Cr_dct.mem" << std::endl;
    return 0;
} 