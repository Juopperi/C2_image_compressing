#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <cstdint>
#include "FixedPoint.h"

constexpr int N = 8;
using Fixed = FixedPoint<int32_t, 16>;

int main() {
    std::vector<Fixed> data(N);
    std::vector<Fixed> coeff(N);
    Fixed result = Fixed(0);

    std::ofstream fin("stim_data.txt");            // raw int
    std::ofstream fcoef("stim_coeff.txt");
    std::ofstream fout("expected_out.txt");

    std::ofstream fin_float("stim_data_float.txt");   // float version
    std::ofstream fcoef_float("stim_coeff_float.txt");
    std::ofstream fout_float("expected_out_float.txt");

    std::mt19937 rng(42);
    std::uniform_real_distribution<float> dist(-1.0f, 1.0f);

    for (int i = 0; i < N; ++i) {
        float d = dist(rng);
        float c = dist(rng);
        data[i] = Fixed(d);
        coeff[i] = Fixed(c);
        result = result + (data[i] * coeff[i]);
        
        fin       << std::hex << (uint32_t)data[i].raw() << "\n";
        fcoef     << std::hex << (uint32_t)coeff[i].raw() << "\n";

        fin_float << d << "\n";
        fcoef_float << c << "\n";
    }

    fout      << std::hex << (uint32_t)result.raw() << "\n";

    fout_float << result.toFloat() << "\n";

    std::cout << "Generated 8 fixed-point inputs and coefficients.\n";
    std::cout << "Expected output (Q16.16): " << result.toFloat()
              << " (raw: " << result.raw() << ")\n";

    // 关闭所有文件
    fin.close(); fcoef.close(); fout.close();
    fin_float.close(); fcoef_float.close(); fout_float.close();

    return 0;
}
