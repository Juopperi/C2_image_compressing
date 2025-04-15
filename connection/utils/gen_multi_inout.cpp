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

    for (int s = 0; s < num_samples; ++s) {
        float Y[N][N], Cb[N][N], Cr[N][N];
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j) {
                uint8_t R = dist(gen);
                uint8_t G = dist(gen);
                uint8_t B = dist(gen);

                fout_r << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(R) << std::endl;
                fout_g << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(G) << std::endl;
                fout_b << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << static_cast<int>(B) << std::endl;

                rgb2ycbcr(R, G, B, Y[i][j], Cb[i][j], Cr[i][j]);
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
