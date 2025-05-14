// -----------------------------------------------------------------------------
// 2‑D 8×8 DCT Test‑Vector Generator for Pipelined Implementation
// -----------------------------------------------------------------------------
// Usage
//   gen_2d_pipe_test_vectors <lower> <upper> <num_blocks>
//     * lower / upper : inclusive integer range of input pixels
//     * num_blocks    : how many 8×8 blocks to generate
//
// Output
//   chen_2d_dct_input.mem         - input pixels (row‑major) 64 words / block
//   expected_chen_2d_dct_output.mem - DCT coeffs using Chen algorithm
//   This program is similar to gen_multi_inout.cpp but optimized for testing 
//   the pipelined 2D DCT module with back-to-back blocks.
// -----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdint>
#include <random>
#include <array>
#include "FixedPoint.h"

// 0.5的定点数表示
#define TOLERANCE 0x8000

static constexpr int N = 8;
static const double PI = std::acos(-1.0);

using Fix = FixedPoint<int32_t, 16>; // Q16.16 signed fixed-point

/*--------------------------------------------------
 * 一、正交 8×8 DCT 变换表，只含 cos，不含 α(u)
 *-------------------------------------------------*/
static double T[N][N];

void init_matrix() {
    for (int u = 0; u < N; ++u)
        for (int x = 0; x < N; ++x)
            T[u][x] = std::cos((2.0 * x + 1.0) * u * PI / (2.0 * N));
}

/*--------------------------------------------------
 * 二、基于变换表的 1‑D  DCT  (正交归一化)
 *-------------------------------------------------*/
inline double alpha(int u) { return u == 0 ? std::sqrt(1.0 / N) : std::sqrt(2.0 / N); }

void dct1d_direct(const std::array<double, N>& in,
                  std::array<double, N>& out)
{
    for (int u = 0; u < N; ++u) {
        double sum = 0.0;
        for (int x = 0; x < N; ++x)
            sum += in[x] * T[u][x];
        out[u] = alpha(u) * sum;          // 只乘一次 α(u)，没有 0.5
    }
}

/*--------------------------------------------------
 * 三、Chen 8‑点快速 DCT（正交归一化）
 *-------------------------------------------------*/
void dct1d_chen(const std::array<double, N>& in,
                std::array<double, N>& out)
{
    constexpr double c1 = 0.9807852804032304;   // cos( π/16)
    constexpr double c2 = 0.9238795325112867;   // cos(2π/16) = cos( π/8)
    constexpr double c3 = 0.8314696123025452;   // cos(3π/16)
    constexpr double c4 = 0.7071067811865475;   // cos( π/4)  = √½
    constexpr double c6 = 0.3826834323650898;   // cos(3π/8)  = cos(6π/16)
    /* ---------- 预先补两条 sin 常数 ---------- */
    constexpr double s1 = 0.1950903220161283;   // sin( π/16)
    constexpr double s3 = 0.5555702330196022;   // sin(3π/16)

    /* 1. butterfly：even / odd 拆分 */
    double S0 = in[0] + in[7], D0 = in[0] - in[7];
    double S1 = in[1] + in[6], D1 = in[1] - in[6];
    double S2 = in[2] + in[5], D2 = in[2] - in[5];
    double S3 = in[3] + in[4], D3 = in[3] - in[4];

    /* 2. 偶数部分 */
    double E0 = S0 + S3,  E1 = S1 + S2;
    double E2 = S0 - S3,  E3 = S1 - S2;

    double B0 =  (E0 + E1);                     // 去掉 ×c4
    double B4 =  (E0 - E1) * c4;
    double B2 =  c2 * E2 + c6 * E3;             // 改用 c2 / c6
    double B6 =  c6 * E2 - c2 * E3;

    /* 3. 奇数部分 */
    // 直接按 D0‥D3 线性组合即可（少于 6 乘）
    double B1 =  c1*D0 + c3*D1 + s3*D2 + s1*D3;
    double B3 =  c3*D0 - s1*D1 - c1*D2 - s3*D3;
    double B5 =  s3*D0 - c1*D1 + s1*D2 + c3*D3;
    double B7 =  s1*D0 - s3*D1 + c3*D2 - c1*D3;

    /* 4. 正交归一化（α/√N） */
    out[0] = B0 * std::sqrt(1.0 / N);
    out[1] = B1 * std::sqrt(2.0 / N);
    out[2] = B2 * std::sqrt(2.0 / N);
    out[3] = B3 * std::sqrt(2.0 / N);
    out[4] = B4 * std::sqrt(2.0 / N);
    out[5] = B5 * std::sqrt(2.0 / N);
    out[6] = B6 * std::sqrt(2.0 / N);
    out[7] = B7 * std::sqrt(2.0 / N);
}

/*--------------------------------------------------
 * 四、行‑列两遍  =  2‑D DCT
 *-------------------------------------------------*/
void dct2d_chen(const double in[N][N],
                double       out[N][N])
{
    double tmp[N][N];
    std::array<double, N> buf_in, buf_out;

    /* 行变换 */
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) buf_in[j] = in[i][j];
        dct1d_chen(buf_in, buf_out);
        for (int j = 0; j < N; ++j) tmp[i][j] = buf_out[j];
    }
    /* 列变换 */
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) buf_in[i] = tmp[i][j];
        dct1d_chen(buf_in, buf_out);
        for (int i = 0; i < N; ++i) out[i][j] = buf_out[i];
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

    // Initialize the DCT cosine matrix
    init_matrix();

    std::ofstream fin("chen_2d_dct_input.mem");
    std::ofstream fout("expected_chen_2d_dct_output.mem");

    if (!fin || !fout) {
        std::cerr << "Cannot open output files." << std::endl;
        return 1;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    constexpr int WORDS_PER_BLOCK = N * N; // 64

    for (int blk = 0; blk < num_blocks; ++blk) {
        double input[N][N];
        double output[N][N];
        
        // Generate random block with varying patterns to stress test pipeline
        for (int r = 0; r < N; ++r) {
            for (int c = 0; c < N; ++c) {
                // Generate patterns that might stress pipeline behavior
                if (blk % 3 == 0) {
                    // Random values
                    input[r][c] = static_cast<double>(dist(gen));
                } else if (blk % 3 == 1) {
                    // Ramp pattern (different for each block)
                    input[r][c] = static_cast<double>((r*N + c + blk) % (upper - lower + 1) + lower);
                } else {
                    // Edge pattern
                    input[r][c] = (r == 0 || c == 0 || r == N-1 || c == N-1) ? upper : lower;
                }
            }
        }

        // Compute 2‑D DCT
        dct2d_chen(input, output);

        // Write input block (row‑major)
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c) {
                Fix fx = Fix(input[r][c]);
                fin << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    << static_cast<uint32_t>(fx.raw()) << std::endl;
            }

        // Write output block (row‑major)
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c) {
                Fix fy = Fix(output[r][c]);
                fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                     << static_cast<uint32_t>(fy.raw()) << std::endl;
            }
    }

    std::cout << "Generated " << num_blocks << " 8×8 blocks for pipeline testing.\n"
              << "   chen_2d_dct_input.mem   (" << WORDS_PER_BLOCK << " × blocks)\n"
              << "   expected_chen_2d_dct_output.mem  (" << WORDS_PER_BLOCK << " × blocks)\n";

    return 0;
} 