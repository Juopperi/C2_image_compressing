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
    
    // Y  =  0.299f * R + 0.587f * G + 0.114f * B ;
    // Cb = -0.168736f * R - 0.331264f * G + 0.5f * B + 128.0f;
    // Cr =  0.5f * R - 0.418688f * G - 0.081312f * B + 128.0f;
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

// Pattern generation functions
float sine_pattern(int x, int y, float freq_x, float freq_y, float amplitude) {
    return amplitude * sin(freq_x * x + freq_y * y);
}

float gradient_pattern(int x, int y, float angle, float scale) {
    float nx = cos(angle) * x + sin(angle) * y;
    return scale * nx / N;
}

float checkerboard_pattern(int x, int y, int check_size) {
    return ((x / check_size) % 2 == (y / check_size) % 2) ? 1.0f : -1.0f;
}

float edge_pattern(int x, int y, float angle, float sharpness) {
    float nx = cos(angle) * x + sin(angle) * y;
    return 128.0f * (1.0f + tanh(sharpness * (nx - N/2)));
}

float circle_pattern(int x, int y, float cx, float cy, float radius) {
    float dx = x - cx;
    float dy = y - cy;
    float distance = std::sqrt(dx*dx + dy*dy);
    return (distance < radius) ? 1.0f : -1.0f;
}

float frequency_specific_pattern(int x, int y, int freq_x, int freq_y) {
    // Creates a pattern with specific frequency components
    return std::cos(M_PI * freq_x * x / N) * std::cos(M_PI * freq_y * y / N);
}

float texture_pattern(int x, int y, unsigned int seed) {
    // Simple Perlin-like noise
    float nx = x / static_cast<float>(N);
    float ny = y / static_cast<float>(N);
    
    // Hash function for pseudo-random values
    auto hash = [](float x, float y, unsigned int seed) -> float {
        unsigned int h = seed ^ 
                        static_cast<unsigned int>(x * 374761393) ^ 
                        static_cast<unsigned int>(y * 668265263);
        h = (h ^ (h >> 13)) * 1274126177;
        return (h & 0xFFFFFF) / static_cast<float>(0xFFFFFF) * 2.0f - 1.0f;
    };
    
    // Bilinear interpolation
    int ix = static_cast<int>(nx * 4);
    int iy = static_cast<int>(ny * 4);
    float fx = nx * 4 - ix;
    float fy = ny * 4 - iy;
    
    float v00 = hash(ix, iy, seed);
    float v10 = hash(ix+1, iy, seed);
    float v01 = hash(ix, iy+1, seed);
    float v11 = hash(ix+1, iy+1, seed);
    
    float wx = fx * fx * (3 - 2 * fx);
    float wy = fy * fy * (3 - 2 * fy);
    
    float vx0 = v00 + wx * (v10 - v00);
    float vx1 = v01 + wx * (v11 - v01);
    
    return vx0 + wy * (vx1 - vx0);
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
    std::uniform_int_distribution<int> dist(0, 255);
    std::uniform_real_distribution<float> fdist(0.0f, 1.0f);
    std::uniform_real_distribution<float> angle_dist(0.0f, 3.14159f);
    std::uniform_int_distribution<int> pattern_dist(0, 7); // 8 pattern types + mixed
    std::uniform_int_distribution<int> freq_dist(1, 7);    // For specific frequency testing

    // Generate a distribution of different test patterns
    for (int s = 0; s < num_samples; ++s) {
        float Y[N][N], Cb[N][N], Cr[N][N];
        
        // Force specific pattern types at regular intervals to ensure good coverage
        int pattern_type;
        if (s < 8) {
            // First 8 samples: one of each pattern type
            pattern_type = s;
        } else if (s % 10 == 0) {
            // Every 10th sample: random frequency-specific pattern
            pattern_type = 6;
        } else if (s % 5 == 0) {
            // Every 5th sample: mixed patterns
            pattern_type = 7;
        } else {
            // Otherwise random pattern
            pattern_type = pattern_dist(gen);
        }
        
        // Pattern parameters
        float angle = angle_dist(gen);
        float freq_x = fdist(gen) * 0.8f + 0.1f;
        float freq_y = fdist(gen) * 0.8f + 0.1f;
        int check_size = 1 + gen() % 4;
        float sharpness = 0.5f + fdist(gen) * 2.0f;
        float cx = fdist(gen) * N;
        float cy = fdist(gen) * N;
        float radius = 1.0f + fdist(gen) * (N/2 - 1.0f);
        int specific_freq_x = freq_dist(gen);
        int specific_freq_y = freq_dist(gen);
        unsigned int texture_seed = gen();
        
        // Base/offset values for each channel to create color variation
        float base_r = 128.0f;  // Centered around middle value
        float base_g = 128.0f;
        float base_b = 128.0f;
        float scale_r = 50.0f + fdist(gen) * 100.0f;
        float scale_g = 50.0f + fdist(gen) * 100.0f;
        float scale_b = 50.0f + fdist(gen) * 100.0f;
        
        // For mixed patterns
        int secondary_pattern = (pattern_type + 1 + gen() % 6) % 7;
        float mix_ratio = 0.3f + fdist(gen) * 0.4f; // 0.3 to 0.7
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                // Generate a structured pattern
                float pattern_val = 0.0f;
                
                auto apply_pattern = [&](int ptype) -> float {
                    switch (ptype) {
                        case 0: // Sine wave pattern
                            return sine_pattern(i, j, freq_x, freq_y, 1.0f);
                        case 1: // Gradient pattern
                            return gradient_pattern(i, j, angle, 1.0f);
                        case 2: // Checkerboard pattern
                            return checkerboard_pattern(i, j, check_size);
                        case 3: // Edge pattern
                            return edge_pattern(i, j, angle, sharpness);
                        case 4: // Circle pattern
                            return circle_pattern(i, j, cx, cy, radius);
                        case 5: // Texture pattern
                            return texture_pattern(i, j, texture_seed);
                        case 6: // Frequency specific pattern
                            return frequency_specific_pattern(i, j, specific_freq_x, specific_freq_y);
                        default:
                            return 0.0f;
                    }
                };
                
                if (pattern_type == 7) {
                    // Mixed pattern mode
                    pattern_val = mix_ratio * apply_pattern(pattern_dist(gen)) + 
                                  (1.0f - mix_ratio) * apply_pattern(secondary_pattern);
                } else {
                    pattern_val = apply_pattern(pattern_type);
                }
                
                // Apply pattern to create RGB values with realistic variation
                uint8_t R = clamp(static_cast<int>(base_r + scale_r * pattern_val), 0, 255);
                uint8_t G = clamp(static_cast<int>(base_g + scale_g * pattern_val), 0, 255);
                uint8_t B = clamp(static_cast<int>(base_b + scale_b * pattern_val), 0, 255);

                fout_r << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(R) << std::endl;
                fout_g << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(G) << std::endl;
                fout_b << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(B) << std::endl;

                rgb2ycbcr(R, G, B, Y[i][j], Cb[i][j], Cr[i][j]);
            }
        }

        auto process_channel = [&](float mat[N][N], const uint8_t qtable[N][N], std::ofstream& fout) {
            float temp[N][N], dct_out[N][N], quant[N][N];
            for (int i = 0; i < N; ++i)
                dct_1d(mat[i], temp[i], dct_coeffs);
            for (int j = 0; j < N; ++j) {
                float col_in[N], col_out[N];
                for (int i = 0; i < N; ++i)
                    col_in[i] = temp[i][j];
                dct_1d(col_in, col_out, dct_coeffs);
                for (int i = 0; i < N; ++i)
                    dct_out[i][j] = col_out[i];
            }
            for (int i = 0; i < N; ++i)
                for (int j = 0; j < N; ++j)
                    quant[i][j] = dct_out[i][j] / static_cast<float>(qtable[i][j]);

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
    return 0;
}
