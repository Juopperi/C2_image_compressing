#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <cstdint>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include "FixedPoint.h"

constexpr int N = 8;

#include "QuantizationTable.h"

using Fix = FixedPoint<int32_t, 16>;

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

void rgb2ycbcr(float R, float G, float B, float &Y, float &Cb, float &Cr) {
    Y  =  0.299f * R + 0.587f * G + 0.114f * B - 128.0f;
    Cb = -0.168736f * R - 0.331264f * G + 0.5f * B ;
    Cr =  0.5f * R - 0.418688f * G - 0.081312f * B ;
}

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

void dct_1d(const float in[N], float out[N], const double coeffs[N][N]) {
    for (int k = 0; k < N; ++k) {
        float sum = 0.0f;
        for (int n = 0; n < N; ++n)
            sum += in[n] * static_cast<float>(coeffs[k][n]);
        out[k] = sum;
    }
}

// 函数：生成渐变块
void generate_gradient_block(uint8_t block[N][N][3], std::mt19937& gen) {
    std::uniform_int_distribution<int> dist_type(0, 3); // 渐变类型
    std::uniform_int_distribution<int> dist_color(0, 255); // 起始颜色
    std::uniform_int_distribution<int> dist_range(32, 128); // 渐变范围
    
    int gradient_type = dist_type(gen);
    uint8_t base_color[3];
    uint8_t delta[3];
    
    // 随机基础颜色和渐变范围
    for (int c = 0; c < 3; c++) {
        base_color[c] = dist_color(gen);
        delta[c] = dist_range(gen);
        // 确保渐变不会溢出
        if (base_color[c] + delta[c] > 255) {
            base_color[c] = 255 - delta[c];
        }
    }
    
    // 根据不同渐变类型生成块
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            float factor;
            
            switch (gradient_type) {
                case 0: // 水平渐变
                    factor = static_cast<float>(j) / (N - 1);
                    break;
                case 1: // 垂直渐变
                    factor = static_cast<float>(i) / (N - 1);
                    break;
                case 2: // 对角线渐变
                    factor = static_cast<float>(i + j) / (2 * (N - 1));
                    break;
                case 3: // 径向渐变
                    factor = std::sqrt(std::pow((i - N/2.0f), 2) + std::pow((j - N/2.0f), 2)) / std::sqrt(2 * std::pow(N/2.0f, 2));
                    break;
            }
            
            for (int c = 0; c < 3; c++) {
                block[i][j][c] = base_color[c] + static_cast<uint8_t>(delta[c] * factor);
            }
        }
    }
}

// 函数：生成纹理或图案块
void generate_pattern_block(uint8_t block[N][N][3], std::mt19937& gen) {
    std::uniform_int_distribution<int> dist_pattern(0, 4); // 图案类型
    std::uniform_int_distribution<int> dist_color(0, 255); // 颜色
    std::uniform_int_distribution<int> dist_freq(1, 3);    // 频率
    
    int pattern_type = dist_pattern(gen);
    uint8_t color1[3], color2[3];
    int frequency = dist_freq(gen);
    
    // 随机两种颜色
    for (int c = 0; c < 3; c++) {
        color1[c] = dist_color(gen);
        color2[c] = dist_color(gen);
    }
    
    // 根据不同图案类型生成块
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            bool condition;
            
            switch (pattern_type) {
                case 0: // 棋盘格
                    condition = ((i / frequency) % 2) ^ ((j / frequency) % 2);
                    break;
                case 1: // 水平条纹
                    condition = (i / frequency) % 2;
                    break;
                case 2: // 垂直条纹
                    condition = (j / frequency) % 2;
                    break;
                case 3: // 同心圆
                    condition = (static_cast<int>(std::sqrt(std::pow(i - N/2.0f, 2) + std::pow(j - N/2.0f, 2)) / frequency)) % 2;
                    break;
                case 4: // 正弦波图案
                    {
                        float sinVal = std::sin(2 * M_PI * frequency * i / N) * std::sin(2 * M_PI * frequency * j / N);
                        condition = sinVal > 0;
                    }
                    break;
            }
            
            for (int c = 0; c < 3; c++) {
                block[i][j][c] = condition ? color1[c] : color2[c];
            }
        }
    }
}

// 函数：生成平滑/自然块
void generate_smooth_block(uint8_t block[N][N][3], std::mt19937& gen) {
    std::uniform_int_distribution<int> dist_base(0, 255); // 基础颜色
    std::normal_distribution<float> dist_noise(0.0f, 1.0f); // 噪声分布
    
    // 生成低频基础信号(2D)
    float base[N][N][3];
    for (int c = 0; c < 3; c++) {
        uint8_t base_color = dist_base(gen);
        
        // 生成低频正弦/余弦基底
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                float val = base_color;
                
                // 添加几个低频分量
                for (int f = 1; f <= 2; f++) {
                    val += 20.0f * std::cos(2 * M_PI * f * i / N) * std::cos(2 * M_PI * f * j / N);
                }
                
                // 确保值在有效范围内
                base[i][j][c] = std::max(0.0f, std::min(255.0f, val));
            }
        }
    }
    
    // 增加微小的高频噪声
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int c = 0; c < 3; c++) {
                // 添加很小的高频噪声
                float noise = 5.0f * dist_noise(gen);
                float val = base[i][j][c] + noise;
                
                // 确保结果在0-255范围内
                block[i][j][c] = static_cast<uint8_t>(std::max(0.0f, std::min(255.0f, val)));
            }
        }
    }
}

// 主函数
int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <num_samples>" << std::endl;
        return 1;
    }

    int num_samples = std::stoi(argv[1]);

    std::ofstream fout_r("input_R.mem");
    std::ofstream fout_g("input_G.mem");
    std::ofstream fout_b("input_B.mem");
    std::ofstream fout_y("expected_Y_output.mem");
    std::ofstream fout_cb("expected_Cb_output.mem");
    std::ofstream fout_cr("expected_Cr_output.mem");

    if (!fout_r || !fout_g || !fout_b || !fout_y || !fout_cb || !fout_cr) {
        std::cerr << "Error opening output files." << std::endl;
        return 1;
    }

    double dct_coeffs[N][N];
    load_dct_coeff_matrix("dct_coeff_matrix.mem", dct_coeffs);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist_block_type(0, 2); // 3种块类型

    for (int s = 0; s < num_samples; ++s) {
        uint8_t rgb_block[N][N][3];
        int block_type = dist_block_type(gen);
        
        // 根据块类型生成不同特性的图像块
        switch (block_type) {
            case 0:
                generate_gradient_block(rgb_block, gen);
                break;
            case 1:
                generate_pattern_block(rgb_block, gen);
                break;
            case 2:
                generate_smooth_block(rgb_block, gen);
                break;
        }
        
        float Y[N][N], Cb[N][N], Cr[N][N];
        
        // 将RGB数据写入文件并转换为YCbCr
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                uint8_t R = rgb_block[i][j][0];
                uint8_t G = rgb_block[i][j][1];
                uint8_t B = rgb_block[i][j][2];

                fout_r << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(R) << std::endl;
                fout_g << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(G) << std::endl;
                fout_b << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(B) << std::endl;

                rgb2ycbcr(R, G, B, Y[i][j], Cb[i][j], Cr[i][j]);
            }
        }

        auto process_channel = [&](float mat[N][N], const uint8_t qtable[N][N], std::ofstream& fout) {
            float temp[N][N], dct_out[N][N], quant[N][N];
            
            // 行DCT
            for (int i = 0; i < N; ++i)
                dct_1d(mat[i], temp[i], dct_coeffs);
            
            // 列DCT
            for (int j = 0; j < N; ++j) {
                float col_in[N], col_out[N];
                for (int i = 0; i < N; ++i)
                    col_in[i] = temp[i][j];
                dct_1d(col_in, col_out, dct_coeffs);
                for (int i = 0; i < N; ++i)
                    dct_out[i][j] = col_out[i];
            }
            
            // 量化
            for (int i = 0; i < N; ++i)
                for (int j = 0; j < N; ++j)
                    quant[i][j] = dct_out[i][j] / static_cast<float>(qtable[i][j]);

            // 按zigzag顺序输出
            float flat[64];
            for (int i = 0; i < N; ++i)
                for (int j = 0; j < N; ++j)
                    flat[i * N + j] = quant[i][j];

            for (int i = 0; i < 64; ++i) {
                Fix f(flat[zigzag_order[i]]);
                fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                     << static_cast<uint32_t>(f.raw()) << std::endl;
            }
        };

        process_channel(Y,  luma_table,   fout_y);
        process_channel(Cb, chroma_table, fout_cb);
        process_channel(Cr, chroma_table, fout_cr);
    }

    fout_r.close();
    fout_g.close();
    fout_b.close();
    fout_y.close();
    fout_cb.close();
    fout_cr.close();

    std::cout << "✅ Generated " << num_samples << " blocks from RGB → Zigzag (quantized) pipeline." << std::endl;
    std::cout << "   Blocks have natural low-frequency dominant characteristics." << std::endl;
    return 0;
}