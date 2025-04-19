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

    if (expected.size() != actual.size()) {
        std::cerr << "Error: File size mismatch! Expected: " << expected.size() 
                  << ", Actual: " << actual.size() << std::endl;
        return 1;
    }

    // 动态生成输出文件名
    std::string csv_file = "chen_1d_dct_diff.csv";

    std::ofstream fout(csv_file);
    fout << "group,index,expected,actual,diff\n";

    std::cout << std::fixed << std::setprecision(6);
    float total_diff = 0.0f;
    int group_size = 8; // 每组8个元素
    int groups = expected.size() / group_size;

    for (size_t i = 0; i < expected.size(); ++i) {
        float e = expected[i].toFloat();
        float a = actual[i].toFloat();
        float diff = std::abs(e - a);
        total_diff += diff;

        int group = i / group_size;
        int index = i % group_size;
        fout << group << "," << index << "," << e << "," << a << "," << diff << "\n";
    }

    fout.close();

    float avg_diff = total_diff / expected.size();
    std::cout << "\nTotal Groups: " << groups << std::endl;
    std::cout << "Total Elements: " << expected.size() << std::endl;
    std::cout << "Total Absolute Difference: " << total_diff << std::endl;
    std::cout << "Average Difference: " << avg_diff << std::endl;
    std::cout << "Results saved to " << csv_file << std::endl;
    return 0;
} 
