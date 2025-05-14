// -----------------------------------------------------------------------------
// 1‑D 8‑point DCT Test‑Vector Generator (float → fixed‑point, Chen algorithm)
// -----------------------------------------------------------------------------
// Usage
//   gen_1d_test_vectors <lower> <upper> <num_lines>
//     * lower / upper : inclusive integer range of input values
//     * num_lines     : how many 8-element lines to generate
//
// Output
//   chen_1d_dct_input.mem          - input values (8 words / line)
//   expected_chen_1d_dct_output.mem - DCT coeffs using Chen algorithm
//   expected_chen_1d_dct_output_direct.mem - DCT coeffs using direct definition
//   expected_chen_1d_dct_output_fixed.mem - DCT coeffs using fixed-point implementation
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

// 0.5的定点数表示
#define TOLERANCE 0x8000

static constexpr int N = 8;
static const double PI = std::acos(-1.0);

using Fix = FixedPoint<int32_t, 16>; // Q16.16 signed fixed-point

/*--------------------------------------------------
 * 一、正交 8‑point DCT 变换表，只含 cos，不含 α(u)
 *-------------------------------------------------*/
static double T[N][N];

void init_matrix() {
    for (int u = 0; u < N; ++u)
        for (int x = 0; x < N; ++x)
            T[u][x] = std::cos((2.0 * x + 1.0) * u * PI / (2.0 * N));
}

/*--------------------------------------------------
 * 二、基于变换表的 1‑D DCT (正交归一化)
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
 * 四、基于 FixedPoint 类的 Chen DCT 实现
 *-------------------------------------------------*/
void dct1d_chen_fixed(const std::array<Fix, N>& in,
                      std::array<Fix, N>& out)
{
    // 常数使用FixedPoint表示
    static const Fix c1 = Fix(0.9807852804032304);   // cos( π/16)
    static const Fix c2 = Fix(0.9238795325112867);   // cos(2π/16) = cos( π/8)
    static const Fix c3 = Fix(0.8314696123025452);   // cos(3π/16)
    static const Fix c4 = Fix(0.7071067811865475);   // cos( π/4)  = √½
    static const Fix c6 = Fix(0.3826834323650898);   // cos(3π/8)  = cos(6π/16)
    static const Fix s1 = Fix(0.1950903220161283);   // sin( π/16)
    static const Fix s3 = Fix(0.5555702330196022);   // sin(3π/16)
    static const Fix sqrt1_N = Fix(std::sqrt(1.0 / N));
    static const Fix sqrt2_N = Fix(std::sqrt(2.0 / N));

    /* 1. butterfly：even / odd 拆分 */
    Fix S0 = in[0] + in[7], D0 = in[0] - in[7];
    Fix S1 = in[1] + in[6], D1 = in[1] - in[6];
    Fix S2 = in[2] + in[5], D2 = in[2] - in[5];
    Fix S3 = in[3] + in[4], D3 = in[3] - in[4];

    /* 2. 偶数部分 */
    Fix E0 = S0 + S3,  E1 = S1 + S2;
    Fix E2 = S0 - S3,  E3 = S1 - S2;

    Fix B0 = (E0 + E1);                     // 去掉 ×c4
    Fix B4 = (E0 - E1) * c4;
    Fix B2 = c2 * E2 + c6 * E3;             // 改用 c2 / c6
    Fix B6 = c6 * E2 - c2 * E3;

    /* 3. 奇数部分 */
    // 直接按 D0‥D3 线性组合
    Fix B1 = c1*D0 + c3*D1 + s3*D2 + s1*D3;
    Fix B3 = c3*D0 - s1*D1 - c1*D2 - s3*D3;
    Fix B5 = s3*D0 - c1*D1 + s1*D2 + c3*D3;
    Fix B7 = s1*D0 - s3*D1 + c3*D2 - c1*D3;

    /* 4. 正交归一化（α/√N） */
    out[0] = B0 * sqrt1_N;
    out[1] = B1 * sqrt2_N;
    out[2] = B2 * sqrt2_N;
    out[3] = B3 * sqrt2_N;
    out[4] = B4 * sqrt2_N;
    out[5] = B5 * sqrt2_N;
    out[6] = B6 * sqrt2_N;
    out[7] = B7 * sqrt2_N;
}

// ==============================  MAIN  =======================================
int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <lower> <upper> <num_lines>\n";
        return 1;
    }

    int lower = std::stoi(argv[1]);
    int upper = std::stoi(argv[2]);
    int num_lines = std::stoi(argv[3]);

    if (lower > upper) {
        std::cerr << "<lower> must ≤ <upper>.\n";
        return 1;
    }

    // Initialize the DCT cosine matrix
    init_matrix();

    std::ofstream fin("chen_1d_dct_input.mem");
    std::ofstream fout("expected_chen_1d_dct_output.mem");
    std::ofstream fout_direct("expected_chen_1d_dct_output_direct.mem");
    std::ofstream fout_fixed("expected_chen_1d_dct_output_fixed.mem");

    // Statistics for numerical consistency verification
    int mismatch_lines = 0;
    int mismatch_values = 0;
    int max_diff = 0;
    
    // Statistics for float vs fixed comparison
    int mismatch_float_fixed_lines = 0;
    int mismatch_float_fixed_values = 0;
    int max_float_fixed_diff = 0;

    if (!fin || !fout || !fout_direct || !fout_fixed) {
        std::cerr << "Cannot open output files." << std::endl;
        return 1;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    constexpr int WORDS_PER_LINE = N; // 8

    for (int line = 0; line < num_lines; ++line) {
        std::array<double, N> input;
        std::array<double, N> output_chen;
        std::array<double, N> output_direct;
        std::array<Fix, N> input_fixed;
        std::array<Fix, N> output_fixed;
        
        // Generate random input line -----------------------------------------------
        for (int i = 0; i < N; ++i) {
            input[i] = static_cast<double>(dist(gen));
            input_fixed[i] = Fix(input[i]);
        }

        // Compute 1‑D DCT using both methods ---------------------------------------
        dct1d_chen(input, output_chen);
        dct1d_direct(input, output_direct);
        dct1d_chen_fixed(input_fixed, output_fixed);

        // Write input line ---------------------------------------------------------
        for (int i = 0; i < N; ++i) {
            Fix fx = Fix(input[i]);
            fin << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                << static_cast<uint32_t>(fx.raw()) << std::endl;
        }

        // Write Chen DCT output (floating point) -----------------------------------
        for (int i = 0; i < N; ++i) {
            Fix fy = Fix(output_chen[i]);
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                 << static_cast<uint32_t>(fy.raw()) << std::endl;
        }

        // Write Direct DCT output (floating point) ---------------------------------
        for (int i = 0; i < N; ++i) {
            Fix fy = Fix(output_direct[i]);
            fout_direct << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                        << static_cast<uint32_t>(fy.raw()) << std::endl;
        }
            
        // Write Chen DCT output (fixed point) --------------------------------------
        for (int i = 0; i < N; ++i) {
            fout_fixed << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                       << static_cast<uint32_t>(output_fixed[i].raw()) << std::endl;
        }
            
        // === Compare fixed-point results of Chen vs Direct ===
        bool line_has_mismatch = false;
        for (int i = 0; i < N; ++i) {
            Fix f1 = Fix(output_chen[i]);
            Fix f2 = Fix(output_direct[i]);
            int32_t diff = std::abs(f1.raw() - f2.raw());
            
            // Track maximum difference seen
            if (diff > max_diff) {
                max_diff = diff;
            }

            // Allow error ≤ 0.5 LSB, which is 1 in Q16.16 fixed-point
            if (diff > TOLERANCE) {
                if (!line_has_mismatch) {
                    mismatch_lines++;
                    line_has_mismatch = true;
                }
                mismatch_values++;
                
                std::cerr << "Mismatch at line " << line
                          << " idx " << i << ": "
                          << "Chen = 0x" << std::hex << f1.raw()
                          << ", Direct = 0x" << f2.raw()
                          << ", Diff = " << std::dec << diff << "\n";
            }
        }
        
        // === Compare floating-point vs fixed-point ===
        bool line_has_float_fixed_mismatch = false;
        for (int i = 0; i < N; ++i) {
            Fix f1 = Fix(output_chen[i]);
            Fix f2 = output_fixed[i];
            int32_t diff = std::abs(f1.raw() - f2.raw());
            
            // Track maximum difference seen
            if (diff > max_float_fixed_diff) {
                max_float_fixed_diff = diff;
            }

            // Allow slightly larger error for float vs fixed comparison
            if (diff > TOLERANCE) {
                if (!line_has_float_fixed_mismatch) {
                    mismatch_float_fixed_lines++;
                    line_has_float_fixed_mismatch = true;
                }
                mismatch_float_fixed_values++;
                
                std::cerr << "Float vs Fixed mismatch at line " << line
                          << " idx " << i << ": "
                          << "Float = 0x" << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << f1.raw()
                          << ", Fixed = 0x" << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << f2.raw()
                          << ", Diff = 0x" << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << diff << "\n";
            }
        }
    }

    std::cout << "Generated " << num_lines << " lines of 8-point DCT.\n"
              << "   chen_1d_dct_input.mem   (" << WORDS_PER_LINE << " × lines)\n"
              << "   expected_chen_1d_dct_output.mem  (" << WORDS_PER_LINE << " × lines)\n"
              << "   expected_chen_1d_dct_output_direct.mem  (" << WORDS_PER_LINE << " × lines)\n"
              << "   expected_chen_1d_dct_output_fixed.mem  (" << WORDS_PER_LINE << " × lines)\n";
              
    // Print verification summary
    std::cout << "\nNumerical Consistency Verification (Chen vs Direct):\n"
              << "   Mismatching lines: " << mismatch_lines << " / " << num_lines << "\n"
              << "   Mismatching values: " << mismatch_values << " / " << (num_lines * WORDS_PER_LINE) << "\n"
              << "   Maximum difference: " << max_diff << " (LSB units)\n";
              
    std::cout << "\nNumerical Consistency Verification (Float vs Fixed):\n"
              << "   Mismatching lines: " << mismatch_float_fixed_lines << " / " << num_lines << "\n"
              << "   Mismatching values: " << mismatch_float_fixed_values << " / " << (num_lines * WORDS_PER_LINE) << "\n"
              << "   Maximum difference: " << max_float_fixed_diff << " (LSB units)\n";

    return 0;
} 