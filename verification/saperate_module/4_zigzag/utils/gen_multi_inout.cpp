#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <string>
#include <cstdint>

// Zigzag 顺序表：用于 8x8 矩阵
const int zigzag_order[64] = {
     0,  1,  5,  6, 14, 15, 27, 28,
     2,  4,  7, 13, 16, 26, 29, 42,
     3,  8, 12, 17, 25, 30, 41, 43,
     9, 11, 18, 24, 31, 40, 44, 53,
    10, 19, 23, 32, 39, 45, 52, 54,
    20, 22, 33, 38, 46, 51, 55, 60,
    21, 34, 37, 47, 50, 56, 59, 61,
    35, 36, 48, 49, 57, 58, 62, 63
};

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <lower> <upper> <num_samples>" << std::endl;
        return 1;
    }

    int lower = std::stoi(argv[1]);
    int upper = std::stoi(argv[2]);
    int num_samples = std::stoi(argv[3]);

    std::ofstream fin("zigzag_input.mem");
    std::ofstream fout("expected_zigzag_output.mem");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int32_t> dist(lower, upper);

    for (int s = 0; s < num_samples; ++s) {
        uint32_t matrix[64];
        for (int i = 0; i < 64; ++i) {
            int32_t val = dist(gen);
            matrix[i] = static_cast<uint32_t>(val);
            fin << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << matrix[i] << std::endl;
        }

        for (int i = 0; i < 64; ++i) {
            uint32_t reordered = matrix[zigzag_order[i]];
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << reordered << std::endl;
        }
    }

    fin.close();
    fout.close();

    std::cout << "Generated " << num_samples << " zigzag test cases." << std::endl;
    return 0;
}
