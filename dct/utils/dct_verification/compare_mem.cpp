#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdint>
#include <sstream>
#include <cmath>
#include "FixedPoint.h"

using Fix = FixedPoint<int32_t, 16>;  // Q16.16

// 读取 mem 文件，排除注释行并转换为 FixedPoint
std::vector<Fix> readMemFile(const std::string& filename) {
    std::ifstream fin(filename);
    std::string line;
    std::vector<Fix> values;

    while (std::getline(fin, line)) {
        if (line.empty() || line[0] == '/' || line[0] == '#') continue;

        uint32_t raw;
        std::stringstream ss;
        ss << std::hex << line;
        ss >> raw;

        values.push_back(Fix::fromRaw(static_cast<int32_t>(raw)));
    }

    return values;
}

int main() {
    std::string file_expected = "final_dct_result.mem";
    std::string file_actual   = "dct_out_2d.mem";

    std::vector<Fix> expected = readMemFile(file_expected);
    std::vector<Fix> actual   = readMemFile(file_actual);

    if (expected.size() != actual.size()) {
        std::cerr << "Error: File size mismatch!" << std::endl;
        return 1;
    }

    std::cout << std::fixed << std::setprecision(6);
    float total_diff = 0.0f;

    for (size_t i = 0; i < expected.size(); ++i) {
        float e = expected[i].toFloat();
        float a = actual[i].toFloat();
        float diff = std::abs(e - a);
        total_diff += diff;

        std::cout << "Index " << std::setw(2) << i << ": "
                  << "Expected = " << std::setw(10) << e
                  << " | Actual = "   << std::setw(10) << a
                  << " | Diff = "     << std::setw(10) << diff << std::endl;
    }

    std::cout << "\nTotal Absolute Difference: " << total_diff << std::endl;
    return 0;
}
