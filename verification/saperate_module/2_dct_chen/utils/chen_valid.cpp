// float_dct.cpp
#include <array>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>

static constexpr int N = 8;
static const double PI = std::acos(-1.0);

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
 * 保存固定点数据到内存格式文件
 *-------------------------------------------------*/
void save_fixed_point_mem(const double data[N][N], const char* filename) {
    std::ofstream fout(filename);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // 将浮点数转换为32位定点格式(Q16.16)
            int32_t fixed = static_cast<int32_t>(data[i][j] * 65536.0);
            // 输出8位十六进制格式
            fout << std::uppercase << std::setfill('0') << std::setw(8) 
                 << std::hex << (fixed & 0xFFFFFFFF) << std::endl;
        }
    }
}

/*--------------------------------------------------
 * 四、行‑列两遍  =  2‑D DCT
 *-------------------------------------------------*/
template <typename OneDimDCT>
void dct2d(const double in[N][N],
           double       out[N][N],
           OneDimDCT    dct1d,
           const char*  intermediate_file = nullptr)
{
    double tmp[N][N];
    std::array<double, N> buf_in, buf_out;

    /* 行变换 */
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) buf_in[j] = in[i][j];
        dct1d(buf_in, buf_out);
        for (int j = 0; j < N; ++j) tmp[i][j] = buf_out[j];
    }

    /* 保存行变换的中间结果，如果提供了文件名 */
    if (intermediate_file) {
        std::ofstream fout(intermediate_file);
        fout << std::fixed << std::setprecision(6);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                fout << std::setw(10) << tmp[i][j] << (j+1<N ? ' ' : '\n');
            }
        }
    }

    /* 列变换 */
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) buf_in[i] = tmp[i][j];
        dct1d(buf_in, buf_out);
        for (int i = 0; i < N; ++i) out[i][j] = buf_out[i];
    }
}

int main() {
    init_matrix();

    // 示例输入：0~63
    double input[N][N];
    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++)
        // input[i][j] = static_cast<double>(i * N + j);
        // 或使用随机数据
        input[i][j] = static_cast<double>(rand() % 1000);

    double out_direct[N][N], out_chen[N][N];
    dct2d(input, out_direct, dct1d_direct, "direct_intermediate.txt");
    dct2d(input, out_chen, dct1d_chen, "chen_intermediate.txt");

    // 保存到文件，格式化到小数点后 6 位
    std::ofstream fdir("direct_result.txt");
    std::ofstream fchen("chen_result.txt");
    fdir << std::fixed << std::setprecision(6);
    fchen << std::fixed << std::setprecision(6);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fdir  << std::setw(10) << out_direct[i][j]
                  << (j+1<N ? ' ' : '\n');
            fchen << std::setw(10) << out_chen[i][j]
                  << (j+1<N ? ' ' : '\n');
        }
    }
    
    // 保存为固定点格式，方便与硬件实现比较
    save_fixed_point_mem(out_chen, "chen_output.mem");
    
    // 保存行变换中间结果为固定点格式
    double row_dct[N][N];
    std::array<double, N> buf_in, buf_out;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) buf_in[j] = input[i][j];
        dct1d_chen(buf_in, buf_out);
        for (int j = 0; j < N; ++j) row_dct[i][j] = buf_out[j];
    }
    save_fixed_point_mem(row_dct, "chen_1d_row_dct.mem");

    // 数值一致性验证
    double max_diff = 0.0;
    int mismatch_values = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double diff = std::fabs(out_direct[i][j] - out_chen[i][j]);
            if (diff > max_diff) {
                max_diff = diff;
            }
            if (diff > 1e-6) {
                mismatch_values++;
                std::cout << "Mismatch at [" << i << "][" << j << "]: "
                         << "Direct = " << out_direct[i][j]
                         << ", Chen = " << out_chen[i][j]
                         << ", Diff = " << diff << "\n";
            }
        }
    }

    std::cout << "\n数值一致性验证:\n"
              << "  不匹配值数量: " << mismatch_values << " / " << (N * N) << "\n"
              << "  最大误差: " << max_diff << "\n";

    return 0;
}
