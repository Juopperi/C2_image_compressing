#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

constexpr int N = 8;
constexpr double PI = 3.14159265358979323846;

// DCT 系数缩放因子
double alpha(int k) {
    return (k == 0) ? std::sqrt(1.0 / N) : std::sqrt(2.0 / N);
}

// 一维 DCT，输入 size=N，输出结果保存到 out[k]
void dct_1d(const double in[N], double out[N]) {
    for (int k = 0; k < N; ++k) {
        out[k] = 0.0;
        for (int n = 0; n < N; ++n) {
            out[k] += in[n] * std::cos((2 * n + 1) * k * PI / (2.0 * N));
        }
        out[k] *= alpha(k);
    }
}

// 保存矩阵到文件
void save_matrix(const std::string& filename, const double mat[N][N]) {
    std::ofstream fout(filename);
    fout << std::fixed << std::setprecision(10);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            fout << mat[i][j];
            if (j != N - 1) fout << ", ";
        }
        fout << "\n";
    }
    fout.close();
}

int main() {
    double input[N][N];      // 原始输入数据
    double row_dct[N][N];    // 行 DCT 中间结果
    double final_dct[N][N];  // 最终 DCT 输出

    // 初始化输入数据（这里举例用 f(x,y) = x + y）
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            input[i][j] = i + j;

    // 第一步：对每一行做 1D DCT
    for (int i = 0; i < N; ++i) {
        dct_1d(input[i], row_dct[i]);
    }

    // 第二步：对每一列做 1D DCT
    for (int j = 0; j < N; ++j) {
        double col_in[N], col_out[N];
        for (int i = 0; i < N; ++i)
            col_in[i] = row_dct[i][j];

        dct_1d(col_in, col_out);

        for (int i = 0; i < N; ++i)
            final_dct[i][j] = col_out[i];
    }

    // 保存结果
    save_matrix("input_matrix.txt", input);
    save_matrix("row_dct_intermediate.txt", row_dct);
    save_matrix("final_dct_result.txt", final_dct);

    std::cout << "DCT processing done. Results saved to files." << std::endl;
    return 0;
}
