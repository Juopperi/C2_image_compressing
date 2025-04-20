// -----------------------------------------------------------------------------
// 2‑D 8×8 DCT Test‑Vector Generator (float → fixed‑point, Chen algorithm)
// -----------------------------------------------------------------------------
// Usage
//   dct_gen <lower> <upper> <num_blocks>
//     * lower / upper : inclusive integer range of input pixels
//     * num_blocks    : how many 8×8 blocks to generate
//
// Output
//   chen_2d_dct_input.mem   –  input pixels  (row‑major) 64 words / block
//   chen_2d_dct_golden.mem  –  DCT coeffs    (row‑major) 64 words / block
//   Each word is 32‑bit hex of FixedPoint<int32_t,16>
// -----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdint>
#include <random>
#include "FixedPoint.h"

constexpr int N = 8;
using Fix = FixedPoint<int32_t, 16>; // Q16.16 signed (1 sign + 15 frac)

// ============================== 1‑D  DCT (Direct) ============================
// void dct_1d_float(const float in[N], float out[N]) {
//     constexpr float PI = 3.14159265358979323846f;
//     for (int k = 0; k < N; ++k) {
//         float alpha = (k == 0) ? std::sqrt(1.0f / N) : std::sqrt(2.0f / N);
//         float sum = 0.0f;
//         for (int n = 0; n < N; ++n) {
//             sum += in[n] * std::cos(PI * (n + 0.5f) * k / N);
//         }
//         out[k] = alpha * sum;
//     }
// }


// ============================== 1‑D  DCT  ====================================
// Same butterfly flow as the Verilog core (Chen)
void dct_1d_float(const float in[N], float out[N]) {
    constexpr double C0 = 1.0000000000000000; // cos(0*pi/16)
    constexpr double C1 = 0.9807852804032304; // cos(1*pi/16)
    constexpr double C2 = 0.9238795325112867; // cos(2*pi/16)
    constexpr double C3 = 0.8314696123025452; // cos(3*pi/16)
    constexpr double C4 = 0.7071067811865476; // cos(4*pi/16)
    constexpr double C5 = 0.5555702330196022; // cos(5*pi/16)
    constexpr double C6 = 0.3826834323650898; // cos(6*pi/16)
    constexpr double C7 = 0.1950903220161283; // cos(7*pi/16)

    // Stage 0 butterflies
    float a0 = in[0] + in[7];
    float a7 = in[0] - in[7];
    float a1 = in[1] + in[6];
    float a6 = in[1] - in[6];
    float a2 = in[2] + in[5];
    float a5 = in[2] - in[5];
    float a3 = in[3] + in[4];
    float a4 = in[3] - in[4];

    // Even part -----------------------------------------------------------
    float b0 = a0 + a3;
    float b3 = a0 - a3;
    float b1 = a1 + a2;
    float b2 = a1 - a2;

    out[0] = (b0 + b1);
    out[4] = C4 * (b0 - b1);
    out[2] = C2 * b2 + C6 * b3;
    out[6] = C6 * b2 - C2 * b3;

    // Odd part ------------------------------------------------------------
    float c4 = C4 * (a4 + a7);
    float c5 = C1 * a5 - C7 * a6;
    float c6 = C5 * a5 + C3 * a6;
    float c7 = C3 * a4 - C5 * a7;

    out[1] = c4 + c6;
    out[3] = c7 - c5;
    out[5] = c4 - c6;
    out[7] = c5 + c7;
}

// ============================== 2‑D  DCT  ====================================
void dct_2d_float(const float in[N][N], float out[N][N]) {
    float tmp[N][N];

    // Row DCTs
    for (int r = 0; r < N; ++r)
        dct_1d_float(in[r], tmp[r]);

    // Column DCTs (operate in‑place via temporary array)
    float col_in[N], col_out[N];
    for (int c = 0; c < N; ++c) {
        for (int r = 0; r < N; ++r) col_in[r] = tmp[r][c];
        dct_1d_float(col_in, col_out);
        for (int r = 0; r < N; ++r) out[r][c] = col_out[r];
    }
}

// ==============================  MAIN  =======================================
int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <lower> <upper> <num_blocks>\n";
        return 1;
    }

    int lower = std::stoi(argv[1]);
    int upper = std::stoi(argv[2]);
    int num_blocks = std::stoi(argv[3]);

    if (lower > upper) {
        std::cerr << "<lower> must ≤ <upper>.\n";
        return 1;
    }

    std::ofstream fin("chen_2d_dct_input.mem");
    std::ofstream fout("expected_chen_2d_dct_output.mem");

    if (!fin || !fout) {
        std::cerr << "Cannot open output files." << std::endl;
        return 1;
    }

    std::random_device rd;
    std::mt19937        gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    constexpr int WORDS_PER_BLOCK = N * N; // 64

    for (int blk = 0; blk < num_blocks; ++blk) {
        float input[N][N];
        float output[N][N];

        // Generate random block ------------------------------------------------
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c)
                input[r][c] = static_cast<float>(dist(gen));

        // Compute 2‑D DCT ------------------------------------------------------
        dct_2d_float(input, output);

        // Write input block (row‑major) ---------------------------------------
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c) {
                Fix fx = Fix(static_cast<double>(input[r][c]));
                fin << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    << static_cast<uint32_t>(fx.raw()) << std::endl;
            }

        // Write golden DCT block ---------------------------------------------
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c) {
                Fix fy = Fix(static_cast<double>(output[r][c]));
                fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                     << static_cast<uint32_t>(fy.raw()) << std::endl;
            }
    }

    std::cout << "Generated " << num_blocks << " 8×8 blocks.\n"
              << "   chen_2d_dct_input.mem   (" << WORDS_PER_BLOCK << " × blocks)\n"
              << "   expected_chen_2d_dct_output.mem  (" << WORDS_PER_BLOCK << " × blocks)\n";

    return 0;
}
