// -----------------------------------------------------------------------------
// RGB to YCbCr DCT and Quantization Test-Vector Generator
// -----------------------------------------------------------------------------
// Usage
//   dct_gen <lower> <upper> <num_blocks> <quality>
//     * lower / upper : inclusive integer range of input RGB pixels (0-255 recommended)
//     * num_blocks    : how many 8×8 blocks to generate
//     * quality       : JPEG quality factor (1-100, default 50)
//
// Output
//   r_input.mem, g_input.mem, b_input.mem - RGB input pixels
//   expected_y_quant_output.mem, expected_cb_quant_output.mem, expected_cr_quant_output.mem - Quantized DCT
//   The RGB inputs are stored as 32‑bit hex of FixedPoint<int32_t,16>
//   The quantized outputs are stored as 16-bit integers (only integer portion)
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
 * 一、RGB转YCbCr色彩空间转换
 *-------------------------------------------------*/
// RGB转YCbCr (使用BT.601标准)
void rgb_to_ycbcr(uint8_t r, uint8_t g, uint8_t b, uint8_t &y, uint8_t &cb, uint8_t &cr) {
    // BT.601标准转换公式
    // Y  =  0.299*R + 0.587*G + 0.114*B
    // Cb = -0.169*R - 0.331*G + 0.500*B + 128
    // Cr =  0.500*R - 0.419*G - 0.081*B + 128
    
    y  = std::round(0.299*r + 0.587*g + 0.114*b);
    cb = std::round(-0.169*r - 0.331*g + 0.500*b + 128);
    cr = std::round(0.500*r - 0.419*g - 0.081*b + 128);
}

/*--------------------------------------------------
 * 二、正交 8×8 DCT 变换表，只含 cos，不含 α(u)
 *-------------------------------------------------*/
static double T[N][N];

void init_matrix() {
    for (int u = 0; u < N; ++u)
        for (int x = 0; x < N; ++x)
            T[u][x] = std::cos((2.0 * x + 1.0) * u * PI / (2.0 * N));
}

/*--------------------------------------------------
 * 三、基于变换表的 1‑D DCT (正交归一化)
 *-------------------------------------------------*/
inline double alpha(int u) { return u == 0 ? std::sqrt(1.0 / N) : std::sqrt(2.0 / N); }

void dct1d_direct(const std::array<double, N>& in,
                  std::array<double, N>& out)
{
    for (int u = 0; u < N; ++u) {
        double sum = 0.0;
        for (int x = 0; x < N; ++x)
            sum += in[x] * T[u][x];
        out[u] = alpha(u) * sum;
    }
}

/*--------------------------------------------------
 * 四、行‑列两遍 = 2‑D DCT
 *-------------------------------------------------*/
void dct2d(const double in[N][N],
           double out[N][N])
{
    double tmp[N][N];
    std::array<double, N> buf_in, buf_out;

    /* 行变换 */
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) buf_in[j] = in[i][j];
        dct1d_direct(buf_in, buf_out);
        for (int j = 0; j < N; ++j) tmp[i][j] = buf_out[j];
    }
    /* 列变换 */
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) buf_in[i] = tmp[i][j];
        dct1d_direct(buf_in, buf_out);
        for (int i = 0; i < N; ++i) out[i][j] = buf_out[i];
    }
}

/*--------------------------------------------------
 * 五、基于 FixedPoint 类的标准 Direct DCT 实现
 *-------------------------------------------------*/
void dct1d_direct_fixed(const std::array<Fix, N>& in,
                        std::array<Fix, N>& out)
{
    // 预计算 T 矩阵的定点数表示
    static Fix T_fixed[N][N];
    static bool initialized = false;
    
    // 初始化 T 矩阵，只需要计算一次
    if (!initialized) {
        for (int u = 0; u < N; ++u)
            for (int x = 0; x < N; ++x)
                T_fixed[u][x] = Fix(std::cos((2.0 * x + 1.0) * u * PI / (2.0 * N)));
        initialized = true;
    }
    
    // 计算归一化系数
    static const Fix sqrt1_N = Fix(std::sqrt(1.0 / N));
    static const Fix sqrt2_N = Fix(std::sqrt(2.0 / N));
    
    for (int u = 0; u < N; ++u) {
        Fix sum = Fix(0.0);
        for (int x = 0; x < N; ++x)
            sum = sum + in[x] * T_fixed[u][x];
        
        // 归一化系数
        if (u == 0)
            out[u] = sum * sqrt1_N;
        else
            out[u] = sum * sqrt2_N;
    }
}

// 使用标准直接算法的定点数实现进行二维DCT变换
void dct2d_direct_fixed(const Fix in[N][N], 
                       Fix out[N][N])
{
    Fix tmp[N][N];
    std::array<Fix, N> buf_in, buf_out;

    /* 行变换 */
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) buf_in[j] = in[i][j];
        dct1d_direct_fixed(buf_in, buf_out);
        for (int j = 0; j < N; ++j) tmp[i][j] = buf_out[j];
    }
    /* 列变换 */
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) buf_in[i] = tmp[i][j];
        dct1d_direct_fixed(buf_in, buf_out);
        for (int i = 0; i < N; ++i) out[i][j] = buf_out[i];
    }
}

/*--------------------------------------------------
 * 六、JPEG量化表和量化操作
 *-------------------------------------------------*/
// 标准JPEG亮度量化表 (Luminance Quantization Table) - 用于Y通道
static int jpeg_luma_quant_table[N][N] = {
    {16, 11, 10, 16, 24, 40, 51, 61},
    {12, 12, 14, 19, 26, 58, 60, 55},
    {14, 13, 16, 24, 40, 57, 69, 56},
    {14, 17, 22, 29, 51, 87, 80, 62},
    {18, 22, 37, 56, 68, 109, 103, 77},
    {24, 35, 55, 64, 81, 104, 113, 92},
    {49, 64, 78, 87, 103, 121, 120, 101},
    {72, 92, 95, 98, 112, 100, 103, 99}
};

// 标准JPEG色度量化表 (Chrominance Quantization Table) - 用于Cb、Cr通道
static int jpeg_chroma_quant_table[N][N] = {
    {17, 18, 24, 47, 99, 99, 99, 99},
    {18, 21, 26, 66, 99, 99, 99, 99},
    {24, 26, 56, 99, 99, 99, 99, 99},
    {47, 66, 99, 99, 99, 99, 99, 99},
    {99, 99, 99, 99, 99, 99, 99, 99},
    {99, 99, 99, 99, 99, 99, 99, 99},
    {99, 99, 99, 99, 99, 99, 99, 99},
    {99, 99, 99, 99, 99, 99, 99, 99}
};

// 量化表缩放函数 - 根据quality factor调整量化表
void scale_quant_table(int quality, int quant_table[N][N], int scaled_table[N][N]) {
    if (quality < 1) quality = 1;
    if (quality > 100) quality = 100;
    
    int scale_factor;
    if (quality < 50)
        scale_factor = 5000 / quality;
    else
        scale_factor = 200 - quality * 2;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int temp = (quant_table[i][j] * scale_factor + 50) / 100;
            // 确保量化值不小于1
            if (temp < 1) temp = 1;
            // 确保量化值不大于255
            if (temp > 255) temp = 255;
            scaled_table[i][j] = temp;
        }
    }
}

// 对DCT系数进行量化
void quantize_block(const Fix dct[N][N], int quant_table[N][N], int16_t quantized[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // 将DCT系数除以量化表中对应的值，并四舍五入
            float coef = dct[i][j].toFloat();
            quantized[i][j] = static_cast<int16_t>(std::round(coef / quant_table[i][j]));
        }
    }
}

// ==============================  MAIN  =======================================
int main(int argc, char* argv[]) {
    if (argc < 4 || argc > 5) {
        std::cerr << "Usage: " << argv[0] << " <lower> <upper> <num_blocks> [quality]\n";
        return 1;
    }

    int lower = std::stoi(argv[1]);
    int upper = std::stoi(argv[2]);
    int num_blocks = std::stoi(argv[3]);
    // 默认质量因子为50
    int quality = (argc == 5) ? std::stoi(argv[4]) : 50;

    if (lower > upper) {
        std::cerr << "<lower> must ≤ <upper>.\n";
        return 1;
    }

    if (quality < 1 || quality > 100) {
        std::cerr << "Quality factor must be between 1 and 100.\n";
        return 1;
    }
    
    // 建议输入范围为0-255，与像素值范围一致
    if (lower < 0 || upper > 255) {
        std::cout << "Warning: For realistic RGB pixel values, input range should be 0-255.\n";
    }

    // Initialize the DCT cosine matrix
    init_matrix();
    
    // 缩放量化表根据quality参数
    int scaled_luma_table[N][N];
    int scaled_chroma_table[N][N];
    scale_quant_table(quality, jpeg_luma_quant_table, scaled_luma_table);
    scale_quant_table(quality, jpeg_chroma_quant_table, scaled_chroma_table);

    // 创建输入和输出文件
    // RGB输入文件
    std::ofstream r_input("r_input.mem");
    std::ofstream g_input("g_input.mem");
    std::ofstream b_input("b_input.mem");
    
    // YCbCr量化输出文件
    std::ofstream y_quant("expected_y_quant_output.mem");
    std::ofstream cb_quant("expected_cb_quant_output.mem");
    std::ofstream cr_quant("expected_cr_quant_output.mem");

    if (!r_input || !g_input || !b_input || !y_quant || !cb_quant || !cr_quant) {
        std::cerr << "Cannot open output files." << std::endl;
        return 1;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);

    constexpr int WORDS_PER_BLOCK = N * N; // 64

    // 量化统计
    int y_zero_coeffs = 0, cb_zero_coeffs = 0, cr_zero_coeffs = 0;
    int y_nonzero_coeffs = 0, cb_nonzero_coeffs = 0, cr_nonzero_coeffs = 0;

    for (int blk = 0; blk < num_blocks; ++blk) {
        // 为RGB和YCbCr创建数据结构
        uint8_t rgb_input[N][N][3];      // RGB输入数据
        uint8_t ycbcr_input[N][N][3];    // YCbCr转换后的数据
        
        Fix r_input_fixed[N][N];         // R通道定点数
        Fix g_input_fixed[N][N];         // G通道定点数
        Fix b_input_fixed[N][N];         // B通道定点数
        
        // YCbCr处理数据
        Fix y_input_fixed[N][N];
        Fix y_output_fixed[N][N];
        int16_t y_quantized[N][N];
        
        Fix cb_input_fixed[N][N];
        Fix cb_output_fixed[N][N];
        int16_t cb_quantized[N][N];
        
        Fix cr_input_fixed[N][N];
        Fix cr_output_fixed[N][N];
        int16_t cr_quantized[N][N];
        
        // 1. 生成随机RGB块数据
        for (int r = 0; r < N; ++r) {
            for (int c = 0; c < N; ++c) {
                // 生成RGB像素值（范围通常为0-255）
                rgb_input[r][c][0] = static_cast<uint8_t>(dist(gen)); // R
                rgb_input[r][c][1] = static_cast<uint8_t>(dist(gen)); // G
                rgb_input[r][c][2] = static_cast<uint8_t>(dist(gen)); // B
                
                // 将RGB值转换为定点数格式
                r_input_fixed[r][c] = Fix(static_cast<double>(rgb_input[r][c][0]));
                g_input_fixed[r][c] = Fix(static_cast<double>(rgb_input[r][c][1]));
                b_input_fixed[r][c] = Fix(static_cast<double>(rgb_input[r][c][2]));
                
                // 2. 将RGB转换为YCbCr
                rgb_to_ycbcr(
                    rgb_input[r][c][0], rgb_input[r][c][1], rgb_input[r][c][2],
                    ycbcr_input[r][c][0], ycbcr_input[r][c][1], ycbcr_input[r][c][2]
                );
                
                // 3. 将YCbCr值转换为定点数格式
                y_input_fixed[r][c] = Fix(static_cast<double>(ycbcr_input[r][c][0]));   // Y
                cb_input_fixed[r][c] = Fix(static_cast<double>(ycbcr_input[r][c][1]));  // Cb
                cr_input_fixed[r][c] = Fix(static_cast<double>(ycbcr_input[r][c][2]));  // Cr
            }
        }

        // 4. 计算Y通道的DCT并量化（使用亮度量化表）
        dct2d_direct_fixed(y_input_fixed, y_output_fixed);
        quantize_block(y_output_fixed, scaled_luma_table, y_quantized);
        
        // 5. 计算Cb通道的DCT并量化（使用色度量化表）
        dct2d_direct_fixed(cb_input_fixed, cb_output_fixed);
        quantize_block(cb_output_fixed, scaled_chroma_table, cb_quantized);
        
        // 6. 计算Cr通道的DCT并量化（使用色度量化表）
        dct2d_direct_fixed(cr_input_fixed, cr_output_fixed);
        quantize_block(cr_output_fixed, scaled_chroma_table, cr_quantized);
        
        // 7. 统计量化的零系数和非零系数数量
        for (int r = 0; r < N; ++r) {
            for (int c = 0; c < N; ++c) {
                // Y通道统计
                if (y_quantized[r][c] == 0) {
                    y_zero_coeffs++;
                } else {
                    y_nonzero_coeffs++;
                }
                
                // Cb通道统计
                if (cb_quantized[r][c] == 0) {
                    cb_zero_coeffs++;
                } else {
                    cb_nonzero_coeffs++;
                }
                
                // Cr通道统计
                if (cr_quantized[r][c] == 0) {
                    cr_zero_coeffs++;
                } else {
                    cr_nonzero_coeffs++;
                }
            }
        }

        // 8. 写入RGB输入文件（8位整数）
        for (int r = 0; r < N; ++r) {
            for (int c = 0; c < N; ++c) {
                // R通道输入（8位整数）
                r_input << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                        << static_cast<int>(rgb_input[r][c][0]) << std::endl;
                
                // G通道输入（8位整数）
                g_input << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                        << static_cast<int>(rgb_input[r][c][1]) << std::endl;
                
                // B通道输入（8位整数）
                b_input << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                        << static_cast<int>(rgb_input[r][c][2]) << std::endl;
            }
        }
        
        // 9. 写入YCbCr量化输出文件（仅整数部分）
        for (int r = 0; r < N; ++r) {
            for (int c = 0; c < N; ++c) {
                // Y通道量化结果
                y_quant << std::hex << std::uppercase << std::setw(4) << std::setfill('0')
                        << (y_quantized[r][c] & 0xFFFF) << std::endl;
                
                // Cb通道量化结果
                cb_quant << std::hex << std::uppercase << std::setw(4) << std::setfill('0')
                        << (cb_quantized[r][c] & 0xFFFF) << std::endl;
                
                // Cr通道量化结果
                cr_quant << std::hex << std::uppercase << std::setw(4) << std::setfill('0')
                        << (cr_quantized[r][c] & 0xFFFF) << std::endl;
            }
        }
    }

    // 计算压缩比
    double y_compression = (double)(y_zero_coeffs + y_nonzero_coeffs) / y_nonzero_coeffs;
    double cb_compression = (double)(cb_zero_coeffs + cb_nonzero_coeffs) / cb_nonzero_coeffs;
    double cr_compression = (double)(cr_zero_coeffs + cr_nonzero_coeffs) / cr_nonzero_coeffs;
    
    double total_compression = (double)(y_zero_coeffs + y_nonzero_coeffs + 
                                       cb_zero_coeffs + cb_nonzero_coeffs + 
                                       cr_zero_coeffs + cr_nonzero_coeffs) / 
                              (y_nonzero_coeffs + cb_nonzero_coeffs + cr_nonzero_coeffs);

    std::cout << "Generated " << num_blocks << " 8×8 blocks with quality factor " << quality << ".\n"
              << "Created the following files:\n"
              << "   RGB inputs: r_input.mem, g_input.mem, b_input.mem\n"
              << "   YCbCr quantized outputs: expected_y_quant_output.mem, expected_cb_quant_output.mem, expected_cr_quant_output.mem\n";
              
    // 打印压缩统计信息
    std::cout << "\nCompression Statistics:\n"
              << "   Y Channel: " << y_compression << ":1, Zero coeffs: "
              << (100.0 * y_zero_coeffs / (y_zero_coeffs + y_nonzero_coeffs)) << "%\n"
              << "   Cb Channel: " << cb_compression << ":1, Zero coeffs: "
              << (100.0 * cb_zero_coeffs / (cb_zero_coeffs + cb_nonzero_coeffs)) << "%\n"
              << "   Cr Channel: " << cr_compression << ":1, Zero coeffs: "
              << (100.0 * cr_zero_coeffs / (cr_zero_coeffs + cr_nonzero_coeffs)) << "%\n"
              << "   Overall Compression Ratio: " << total_compression << ":1\n";

    return 0;
}