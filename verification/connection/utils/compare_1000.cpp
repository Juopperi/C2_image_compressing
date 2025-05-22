#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdint>
#include <sstream>
#include <cmath>
#include <regex>
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

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <expected_file> <actual_file>" << std::endl;
        return 1;
    }

    std::string file_expected = argv[1];
    std::string file_actual   = argv[2];

    std::vector<Fix> expected = readMemFile(file_expected);
    std::vector<Fix> actual   = readMemFile(file_actual);

    size_t min_size = std::min(expected.size(), actual.size());

    if (expected.size() != actual.size()) {
        std::cerr << "⚠️ Warning: File length mismatch! Expected = "
                  << expected.size() << ", Actual = " << actual.size()
                  << " → comparing only first " << min_size << " entries.\n";
    }

    // ✅ 动态生成输出文件名
    std::string base = file_expected;
    std::smatch match;
    std::regex re("(\\d+)");
    std::string csv_file;

    if (std::regex_search(base, match, re)) {
        csv_file = "diff_distribution_" + match.str(1) + ".csv";
    } else {
        csv_file = "diff_distribution.csv";  // fallback
    }

    std::ofstream fout(csv_file);
    fout << "index,expected,actual,diff\n";

    std::cout << std::fixed << std::setprecision(6);
    float total_diff = 0.0f;

    for (size_t i = 0; i < min_size; ++i) {
        float e = expected[i].toFloat();
        float a = actual[i].toFloat();
        float diff = std::abs(e - a);
        total_diff += diff;

        fout << i << "," << e << "," << a << "," << diff << "\n";
    }

    fout.close();

    std::cout << "\n✅ Total Absolute Difference: " << total_diff << std::endl;
    std::cout << "📄 Results saved to: " << csv_file << std::endl;

    return 0;
}
