//
// Created by wuche on 25-4-14.
//
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include "FixedPoint.h"

// Generate DCT coefficients in fixed-point format
// This program creates the dct_coeff_matrix.mem file needed by the testbench

int main() {
    constexpr int N = 8;
    constexpr int FRAC_BITS = 16;

    std::ofstream fout("dct_coeff_matrix.mem");
    if (!fout) {
        std::cerr << "Error: Cannot open output file" << std::endl;
        return 1;
    }

    // Calculate and store DCT coefficients
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            // DCT coefficient formula
            double c_i = (i == 0) ? 1.0 / std::sqrt(N) : std::sqrt(2.0 / N);

            // Calculate cosine term
            double cos_term = std::cos((2 * j + 1) * i * M_PI / (2 * N));

            // Final coefficient
            double coeff = c_i * cos_term;

            // Convert to fixed-point
            FixedPoint<int32_t, FRAC_BITS> fp_coeff(coeff);

            // Write to file in hex format
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                 << static_cast<uint32_t>(fp_coeff.raw()) << std::endl;

            // Print for verification
            std::cout << "Coeff[" << i << "][" << j << "] = " << std::fixed << std::setprecision(6)
                      << coeff << " (hex: " << std::hex << std::uppercase << fp_coeff.raw()
                      << std::dec << ")" << std::endl;
        }
    }

    fout.close();
    std::cout << "DCT coefficients generated and saved to dct_coeff_matrix.mem" << std::endl;

    return 0;
}