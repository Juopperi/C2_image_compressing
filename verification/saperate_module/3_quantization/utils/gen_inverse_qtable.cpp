#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdint>
#include <cmath>
#include "FixedPoint.h" // 你的定点类，支持 FixedPoint<int32_t, 16>

using Fix = FixedPoint<int32_t, 16>;  // Q16.16 格式
constexpr int N = 8;

#include "QuantizationTable.h"

void write_inverse_table(std::ofstream& fout, const uint8_t table[N][N], const std::string& var_name) {
    fout << "wire [32*64-1:0] " << var_name << " = {\n";

    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j, ++count) {
            double inv_val = 1.0 / static_cast<double>(table[i][j]);
            Fix fix(inv_val);
            uint32_t raw = static_cast<uint32_t>(fix.raw());

            fout << "    32'h" 
                 << std::uppercase 
                 << std::hex 
                 << std::setw(8) 
                 << std::setfill('0') 
                 << raw;

            if (count != 63)
                fout << ",\n";
            else
                fout << "\n";
        }
    }

    fout << "};\n\n";
}

int main() {
    std::ofstream fout("inverse_qtables.vh");
    if (!fout.is_open()) {
        std::cerr << "Failed to open inverse_qtables.vh\n";
        return 1;
    }

    write_inverse_table(fout, luma_table, "luma_qtable_inv");
    write_inverse_table(fout, chroma_table, "chroma_qtable_inv");

    fout.close();
    std::cout << "Generated inverse quantization tables in inverse_qtables.vh (Q16.16 format)\n";
    return 0;
}
