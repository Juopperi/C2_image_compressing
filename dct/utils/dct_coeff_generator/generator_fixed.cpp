#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdint>
#include "FixedPoint.h" // 你的模板类, 假设支持 FixedPoint<int32_t,16>

constexpr int N = 8;
constexpr double PI = 3.14159265358979323846;

using Fix = FixedPoint<int32_t, 16>;  // 假设是 Q16.16 定点

// DCT 缩放因子
double alpha(int v) {
    return (v == 0) ? std::sqrt(1.0 / N) : std::sqrt(2.0 / N);
}

int main() {
    std::ofstream fout("coeff_table.mem");
    if (!fout.is_open()) {
        std::cerr << "Failed to open coeff_table.mem" << std::endl;
        return 1;
    }

    // 按“行优先”顺序输出：row0 -> row1 -> ... -> row7
    // row = v, col = j
    // 每行对应一个系数 M[v][j]
    for (int v = 0; v < N; ++v) {
        double cv = alpha(v);  // 缩放因子
        for (int j = 0; j < N; ++j) {
            double coeff = cv * std::cos((2.0 * j + 1.0) * v * PI / (2.0 * N));
            
            // 转为定点 Q16.16
            Fix fix_coeff(coeff);
            uint32_t raw = static_cast<uint32_t>(fix_coeff.raw()); // interpret as unsigned for hex

            // 输出一行，形如 00007D8A
            fout << std::hex 
                 << std::uppercase 
                 << std::setw(8) 
                 << std::setfill('0') 
                 << raw 
                 << std::endl;
        }
    }

    fout.close();
    std::cout << "Written 64 lines to coeff_table.mem (row0 ~ row7, each row has 8 entries)" << std::endl;
    return 0;
}
