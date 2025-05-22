#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <cstdint>
#include <cmath>
#include <string>
#include <algorithm>
#include "FixedPoint.h"

constexpr int N = 8;

#include "QuantizationTable.h"

using Fix = FixedPoint<int32_t, 16>;

// Zigzag order not needed for wrapper module test
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

// Generate structured test patterns instead of random data
void generate_test_pattern(uint8_t pattern_type, uint8_t R_block[N*N], uint8_t G_block[N*N], uint8_t B_block[N*N]) {
    // Initialize with base values
    for (int i = 0; i < N*N; ++i) {
        R_block[i] = 128;
        G_block[i] = 128;
        B_block[i] = 128;
    }
    
    switch (pattern_type % 6) {
        case 0: {
            // Gradient pattern - horizontal
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    int idx = i*N + j;
                    R_block[idx] = 50 + j * 20; 
                    G_block[idx] = 50 + j * 20;
                    B_block[idx] = 50 + j * 20;
                }
            }
            break;
        }
        case 1: {
            // Gradient pattern - vertical
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    int idx = i*N + j;
                    R_block[idx] = 50 + i * 20;
                    G_block[idx] = 50 + i * 20;
                    B_block[idx] = 50 + i * 20;
                }
            }
            break;
        }
        case 2: {
            // Checker pattern
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    int idx = i*N + j;
                    if ((i+j) % 2 == 0) {
                        R_block[idx] = 220;
                        G_block[idx] = 220;
                        B_block[idx] = 220;
                    } else {
                        R_block[idx] = 50;
                        G_block[idx] = 50;
                        B_block[idx] = 50;
                    }
                }
            }
            break;
        }
        case 3: {
            // Solid colors with different channels
            for (int i = 0; i < N*N; ++i) {
                R_block[i] = 220;
                G_block[i] = 50;
                B_block[i] = 50;
            }
            break;
        }
        case 4: {
            // Center dot pattern
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    int idx = i*N + j;
                    if (i >= 2 && i <= 5 && j >= 2 && j <= 5) {
                        R_block[idx] = 250;
                        G_block[idx] = 250;
                        B_block[idx] = 250;
                    } else {
                        R_block[idx] = 50;
                        G_block[idx] = 50;
                        B_block[idx] = 50;
                    }
                }
            }
            break;
        }
        case 5: {
            // Diagonal pattern
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    int idx = i*N + j;
                    if (i == j || i == (N-1-j)) {
                        R_block[idx] = 250;
                        G_block[idx] = 250;
                        B_block[idx] = 250;
                    } else {
                        R_block[idx] = 50;
                        G_block[idx] = 50;
                        B_block[idx] = 50;
                    }
                }
            }
            break;
        }
    }
}

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

    if (!fout_r || !fout_g || !fout_b || !fout_y) {
        std::cerr << "Error opening output files." << std::endl;
        return 1;
    }

    double dct_coeffs[N][N];
    load_dct_coeff_matrix("dct_coeff_matrix.mem", dct_coeffs);

    for (int s = 0; s < num_samples; ++s) {
        uint8_t R_block[N*N], G_block[N*N], B_block[N*N];
        float Y[N][N], Cb[N][N], Cr[N][N];
        
        // Generate structured test pattern for this block
        generate_test_pattern(s, R_block, G_block, B_block);
        
        // Write RGB values in 8-bit hex format
        for (int idx = 0; idx < N*N; ++idx) {
            fout_r << std::hex << std::uppercase << std::setw(2) << std::setfill('0') 
                   << static_cast<int>(R_block[idx]) << std::endl;
            fout_g << std::hex << std::uppercase << std::setw(2) << std::setfill('0') 
                   << static_cast<int>(G_block[idx]) << std::endl;
            fout_b << std::hex << std::uppercase << std::setw(2) << std::setfill('0') 
                   << static_cast<int>(B_block[idx]) << std::endl;
        }
        
        // Convert to YCbCr
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                int idx = i*N + j;
                rgb2ycbcr(R_block[idx], G_block[idx], B_block[idx], 
                          Y[i][j], Cb[i][j], Cr[i][j]);
            }
        }

        // Process the Y channel only
        float temp[N][N], dct_out[N][N], quant[N][N];
        
        // 2D DCT for Y channel
        for (int i = 0; i < N; ++i)
            dct_1d(Y[i], temp[i], dct_coeffs);
        
        for (int j = 0; j < N; ++j) {
            float col_in[N], col_out[N];
            for (int i = 0; i < N; ++i)
                col_in[i] = temp[i][j];
            dct_1d(col_in, col_out, dct_coeffs);
            for (int i = 0; i < N; ++i)
                dct_out[i][j] = col_out[i];
        }
        
        // Quantization for Y channel
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                quant[i][j] = dct_out[i][j] / static_cast<float>(luma_table[i][j]);

        // Output Y values as 16-bit integers in original order
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                Fix f(quant[i][j]);
                // Use only the lower 16 bits (integer part) like in the wrapper
                uint16_t value = static_cast<uint16_t>(f.raw() & 0xFFFF);
                fout_y << std::hex << std::uppercase << std::setw(4) << std::setfill('0')
                       << value << std::endl;
            }
        }
    }

    fout_r.close();
    fout_g.close();
    fout_b.close();
    fout_y.close();

    std::cout << "✅ Generated " << num_samples << " structured test patterns for wrapper module." << std::endl;
    std::cout << "RGB inputs stored in input_R.mem, input_G.mem, input_B.mem" << std::endl;
    std::cout << "Expected Y output stored in expected_Y_output.mem (16-bit format, original order)" << std::endl;
    return 0;
}
