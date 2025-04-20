// -----------------------------------------------------------------------------
// 2‑D 8×8 DCT Test‑Vector Generator (float → fixed‑point, Chen algorithm)
// -----------------------------------------------------------------------------
// Usage
//   dct_gen <lower> <upper> <num_blocks>
//     * lower / upper : inclusive integer range of input pixels
//     * num_blocks    : how many 8×8 blocks to generate
//
// Output
//   chen_2d_dct_input.mem   –  input pixels  (row‑major) 64 words / block
//   expected_chen_2d_dct_output.mem  –  DCT coeffs using Chen algorithm
//   expected_chen_2d_dct_output_direct.mem  –  DCT coeffs using direct definition
//   Each word is 32‑bit hex of FixedPoint<int32_t,16>
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
    constexpr double c1 = 0.980785280403230449;   // cos(pi/16)
    constexpr double c3 = 0.831469612302545236;   // cos(3*pi/16)
    constexpr double c4 = 0.707106781186547524;   // cos(pi/4)=√1/2

    /* 1. butterfly：even / odd 拆分 */
    double S0 = in[0] + in[7], D0 = in[0] - in[7];
    double S1 = in[1] + in[6], D1 = in[1] - in[6];
    double S2 = in[2] + in[5], D2 = in[2] - in[5];
    double S3 = in[3] + in[4], D3 = in[3] - in[4];

    /* 2. 偶数部分 */
    double E0 = S0 + S3,  E1 = S1 + S2;
    double E2 = S0 - S3,  E3 = S1 - S2;

    double B0 =  c4 * (E0 + E1);          // k = 0
    double B4 =  c4 * (E0 - E1);          // k = 4
    double B2 =  c4 * (E2 + E3);          // k = 2
    double B6 =  c4 * (E2 - E3);          // k = 6

    /* 3. 奇数部分的 2×2 旋转 */
    double T1 = D0 + D3,  T2 = D1 + D2;
    double T3 = D0 - D3,  T4 = D1 - D2;

    double B1 =  c1 * T1 + c3 * T2;       // k = 1
    double B3 =  c3 * T3 - c1 * T4;       // k = 3
    double B5 =  c1 * T3 + c3 * T4;       // k = 5
    double B7 =  c3 * T1 - c1 * T2;       // k = 7

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
template <typename OneDimDCT>
void dct2d(const double in[N][N],
           double       out[N][N],
           OneDimDCT    dct1d)
{
    double tmp[N][N];
    std::array<double, N> buf_in, buf_out;

    /* 行变换 */
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) buf_in[j] = in[i][j];
        dct1d(buf_in, buf_out);
        for (int j = 0; j < N; ++j) tmp[i][j] = buf_out[j];
    }
    /* 列变换 */
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) buf_in[i] = tmp[i][j];
        dct1d(buf_in, buf_out);
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
    std::ofstream fout_direct("expected_chen_2d_dct_output_direct.mem");

    // Statistics for numerical consistency verification
    int mismatch_blocks = 0;
    int mismatch_values = 0;
    int max_diff = 0;

    if (!fin || !fout || !fout_direct) {
        std::cerr << "Cannot open output files." << std::endl;
        return 1;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    constexpr int WORDS_PER_BLOCK = N * N; // 64

    for (int blk = 0; blk < num_blocks; ++blk) {
        double input[N][N];
        double output_chen[N][N];
        double output_direct[N][N];
        
        // Generate random block ------------------------------------------------
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c)
                input[r][c] = static_cast<double>(dist(gen));

        // Compute 2‑D DCT using both methods -----------------------------------
        dct2d(input, output_chen, dct1d_chen);
        dct2d(input, output_direct, dct1d_direct);

        // Write input block (row‑major) ---------------------------------------
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c) {
                Fix fx = Fix(input[r][c]);
                fin << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    << static_cast<uint32_t>(fx.raw()) << std::endl;
            }

        // Write Chen DCT output ------------------------------------------------
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c) {
                Fix fy = Fix(output_chen[r][c]);
                fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                     << static_cast<uint32_t>(fy.raw()) << std::endl;
            }

        // Write Direct DCT output ----------------------------------------------
        for (int r = 0; r < N; ++r)
            for (int c = 0; c < N; ++c) {
                Fix fy = Fix(output_direct[r][c]);
                fout_direct << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                            << static_cast<uint32_t>(fy.raw()) << std::endl;
            }
            
        // === Compare fixed-point results of Chen vs Direct ===
        bool block_has_mismatch = false;
        for (int r = 0; r < N; ++r) {
            for (int c = 0; c < N; ++c) {
                Fix f1 = Fix(output_chen[r][c]);
                Fix f2 = Fix(output_direct[r][c]);
                int32_t diff = std::abs(f1.raw() - f2.raw());
                
                // Track maximum difference seen
                if (diff > max_diff) {
                    max_diff = diff;
                }

                // Allow error ≤ 0.5 LSB, which is 1 in Q16.16 fixed-point
                if (diff > 1) {
                    if (!block_has_mismatch) {
                        mismatch_blocks++;
                        block_has_mismatch = true;
                    }
                    mismatch_values++;
                    
                    std::cerr << "Mismatch at block " << blk
                            << " [" << r << "][" << c << "]: "
                            << "Chen = 0x" << std::hex << f1.raw()
                            << ", Direct = 0x" << f2.raw()
                            << ", Diff = " << std::dec << diff << "\n";
                }
            }
        }
    }

    std::cout << "Generated " << num_blocks << " 8×8 blocks.\n"
              << "   chen_2d_dct_input.mem   (" << WORDS_PER_BLOCK << " × blocks)\n"
              << "   expected_chen_2d_dct_output.mem  (" << WORDS_PER_BLOCK << " × blocks)\n"
              << "   expected_chen_2d_dct_output_direct.mem  (" << WORDS_PER_BLOCK << " × blocks)\n";
              
    // Print verification summary
    std::cout << "\nNumerical Consistency Verification:\n"
              << "   Mismatching blocks: " << mismatch_blocks << " / " << num_blocks << "\n"
              << "   Mismatching values: " << mismatch_values << " / " << (num_blocks * WORDS_PER_BLOCK) << "\n"
              << "   Maximum difference: " << max_diff << " (LSB units)\n";

    return 0;
}
