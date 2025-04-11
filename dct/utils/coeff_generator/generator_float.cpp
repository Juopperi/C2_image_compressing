#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>

constexpr int N = 8;
constexpr double PI = 3.14159265358979323846;

// C(v) 系数
double alpha(int v) {
    return (v == 0) ? std::sqrt(1.0 / N) : std::sqrt(2.0 / N);
}

int main() {
    for (int v = 0; v < N; ++v) {
        std::string filename = "coeff_" + std::to_string(v);
        std::ofstream fout(filename);
        if (!fout.is_open()) {
            std::cerr << "Failed to open file: " << filename << std::endl;
            return 1;
        }

        fout << std::fixed << std::setprecision(10);

        double cv = alpha(v);
        for (int j = 0; j < N; ++j) {
            double coeff = cv * std::cos((2 * j + 1) * v * PI / (2.0 * N));
            fout << coeff << std::endl;
        }

        fout.close();
        std::cout << "Written: " << filename << std::endl;
    }

    return 0;
}
