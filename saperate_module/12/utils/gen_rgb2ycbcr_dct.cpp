// -----------------------------------------------------------------------------
// RGB to YCbCr + DCT Test-Vector Generator (RGB → YCbCr → DCT)
// -----------------------------------------------------------------------------
// Usage
//   rgb2ycbcr_dct_gen <lower> <upper> <num_blocks>
//     * lower / upper : inclusive integer range of input RGB values (0-255)
//     * num_blocks    : how many 8×8 blocks to generate
//
// Output
//   rgb_input_r.mem   - Red component input (8-bit, row-major) 64 values/block
//   rgb_input_g.mem   - Green component input (8-bit, row-major) 64 values/block
//   rgb_input_b.mem   - Blue component input (8-bit, row-major) 64 values/block
//   expected_y_dct_output.mem  - Y component DCT coefficients
//   expected_cb_dct_output.mem - Cb component DCT coefficients
//   expected_cr_dct_output.mem - Cr component DCT coefficients
//   Each DCT word is 32-bit hex of FixedPoint<int32_t,16>
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

// RGB to YCbCr conversion matrices (BT.601 standard)
// Y  = 0.299R + 0.587G + 0.114B
// Cb = -0.169R - 0.331G + 0.5B + 128
// Cr = 0.5R - 0.419G - 0.081B + 128
static const double RGB_TO_Y_MATRIX[3] = {0.299, 0.587, 0.114};
static const double RGB_TO_CB_MATRIX[3] = {-0.169, -0.331, 0.5};
static const double RGB_TO_CR_MATRIX[3] = {0.5, -0.419, -0.081};

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
 * 二、Chen 8‑点快速 DCT（正交归一化）
 *-------------------------------------------------*/
void dct1d_chen(const std::array<double, N>& in,
                std::array<double, N>& out)
{
    constexpr double c1 = 0.9807852804032304;   // cos( π/16)
    constexpr double c2 = 0.9238795325112867;   // cos(2π/16) = cos( π/8)
    constexpr double c3 = 0.8314696123025452;   // cos(3π/16)
    constexpr double c4 = 0.7071067811865475;   // cos( π/4)  = √½
    constexpr double c6 = 0.3826834323650898;   // cos(3π/8)  = cos(6π/16)
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
 * 三、行‑列两遍 = 2‑D DCT
 *-------------------------------------------------*/
void dct2d(const double in[N][N], double out[N][N])
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

/*--------------------------------------------------
 * 四、RGB to YCbCr conversion
 *-------------------------------------------------*/
void rgb_to_ycbcr(uint8_t r, uint8_t g, uint8_t b, double& y, double& cb, double& cr) {
    // Convert to YCbCr
    y = RGB_TO_Y_MATRIX[0] * r + RGB_TO_Y_MATRIX[1] * g + RGB_TO_Y_MATRIX[2] * b -128.0;
    
    // Apply offset for Cb and Cr
    cb = RGB_TO_CB_MATRIX[0] * r + RGB_TO_CB_MATRIX[1] * g + RGB_TO_CB_MATRIX[2] * b ;
    cr = RGB_TO_CR_MATRIX[0] * r + RGB_TO_CR_MATRIX[1] * g + RGB_TO_CR_MATRIX[2] * b ;
    
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

    if (lower > upper || lower < 0 || upper > 255) {
        std::cerr << "Error: Values must be in range [0, 255] and <lower> must ≤ <upper>.\n";
        return 1;
    }

    // Initialize the DCT cosine matrix
    init_matrix();

    // Output files
    std::ofstream rgb_r_file("rgb_input_r.mem");
    std::ofstream rgb_g_file("rgb_input_g.mem");
    std::ofstream rgb_b_file("rgb_input_b.mem");
    std::ofstream y_dct_file("expected_y_dct_output.mem");
    std::ofstream cb_dct_file("expected_cb_dct_output.mem");
    std::ofstream cr_dct_file("expected_cr_dct_output.mem");

    if (!rgb_r_file || !rgb_g_file || !rgb_b_file || 
        !y_dct_file || !cb_dct_file || !cr_dct_file) {
        std::cerr << "Cannot open output files." << std::endl;
        return 1;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    constexpr int WORDS_PER_BLOCK = N * N; // 64

    for (int blk = 0; blk < num_blocks; ++blk) {
        // RGB input values
        uint8_t r_input[N][N];
        uint8_t g_input[N][N];
        uint8_t b_input[N][N];
        
        // YCbCr intermediate values
        double y_values[N][N];
        double cb_values[N][N];
        double cr_values[N][N];
        
        // DCT output
        double y_dct[N][N];
        double cb_dct[N][N];
        double cr_dct[N][N];
        
        // Generate random RGB block
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                r_input[i][j] = dist(gen);
                g_input[i][j] = dist(gen);
                b_input[i][j] = dist(gen);
                
                // Convert to YCbCr
                double y, cb, cr;
                rgb_to_ycbcr(r_input[i][j], g_input[i][j], b_input[i][j], y, cb, cr);
                y_values[i][j] = y;
                cb_values[i][j] = cb;
                cr_values[i][j] = cr;
                
                // Output RGB values
                rgb_r_file << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                         << static_cast<int>(r_input[i][j]) << std::endl;
                rgb_g_file << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                         << static_cast<int>(g_input[i][j]) << std::endl;
                rgb_b_file << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                         << static_cast<int>(b_input[i][j]) << std::endl;
            }
        }
        
        // Perform DCT on YCbCr components
        dct2d(y_values, y_dct);
        dct2d(cb_values, cb_dct);
        dct2d(cr_values, cr_dct);
        
        // Write DCT outputs
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                // Convert to fixed-point and output
                Fix y_fix = Fix(y_dct[i][j]);
                Fix cb_fix = Fix(cb_dct[i][j]);
                Fix cr_fix = Fix(cr_dct[i][j]);
                
                y_dct_file << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                         << static_cast<uint32_t>(y_fix.raw()) << std::endl;
                cb_dct_file << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                          << static_cast<uint32_t>(cb_fix.raw()) << std::endl;
                cr_dct_file << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                          << static_cast<uint32_t>(cr_fix.raw()) << std::endl;
            }
        }
    }
    
    // Close files
    rgb_r_file.close();
    rgb_g_file.close();
    rgb_b_file.close();
    y_dct_file.close();
    cb_dct_file.close();
    cr_dct_file.close();
    
    std::cout << "Generated " << num_blocks << " 8×8 blocks.\n"
              << "   rgb_input_r.mem, rgb_input_g.mem, rgb_input_b.mem (RGB inputs)\n"
              << "   expected_y_dct_output.mem (Y DCT coefficients)\n"
              << "   expected_cb_dct_output.mem (Cb DCT coefficients)\n"
              << "   expected_cr_dct_output.mem (Cr DCT coefficients)\n";
              
    return 0;
} 