#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdint>
#include "FixedPoint.h" // 你的模板类

constexpr int N = 8;
constexpr double PI = 3.14159265358979323846;

using Fix = FixedPoint<int32_t, 16>;  // Q16.16

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

    for (int v = 0; v < N; ++v) {
        double cv = alpha(v);
        for (int j = 0; j < N; ++j) {
            double coeff = cv * std::cos((2 * j + 1) * v * PI / (2.0 * N));
            Fix fix_coeff(coeff);
            uint32_t raw = static_cast<uint32_t>(fix_coeff.raw()); // interpret as unsigned for hex

            // 写入高位在前的 8 位对齐 hex（最多 8 个 hex 字符）
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << raw << std::endl;
        }
    }

    fout.close();
    std::cout << "Written: coeff_table.mem (for Verilog)" << std::endl;
    return 0;
}
