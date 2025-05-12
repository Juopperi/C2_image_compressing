#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <cstdint>
#include <cmath>
#include "FixedPoint.h"

using Fix = FixedPoint<int32_t, 16>; // 32-bit fixed point with 16 fractional bits

float clamp(float x, float lo = 0.0f, float hi = 255.0f) {
    return std::min(std::max(x, lo), hi);
}

// YCbCr conversion using standard BT.601
void rgb2ycbcr(float R, float G, float B, float &Y, float &Cb, float &Cr) {
    Y  =  0.299f * R + 0.587f * G + 0.114f * B - 128.0f;
    Cb = -0.168736f * R - 0.331264f * G + 0.5f * B;
    Cr =  0.5f * R - 0.418688f * G - 0.081312f * B;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <num_samples>" << std::endl;
        return 1;
    }

    int num_samples = std::stoi(argv[1]);

    std::ofstream fin_r("input_R.mem");
    std::ofstream fin_g("input_G.mem");
    std::ofstream fin_b("input_B.mem");
    std::ofstream fout_y("expected_Y_output.mem");
    std::ofstream fout_cb("expected_Cb_output.mem");
    std::ofstream fout_cr("expected_Cr_output.mem");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 255);

    for (int s = 0; s < num_samples; ++s) {
        for (int i = 0; i < 64; ++i) {
            uint8_t R = static_cast<uint8_t>(dist(gen));
            uint8_t G = static_cast<uint8_t>(dist(gen));
            uint8_t B = static_cast<uint8_t>(dist(gen));

            float Y, Cb, Cr;
            rgb2ycbcr(R, G, B, Y, Cb, Cr);

            fin_r << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                  << static_cast<int>(R) << std::endl;
            fin_g << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                  << static_cast<int>(G) << std::endl;
            fin_b << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
                  << static_cast<int>(B) << std::endl;

            fout_y << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                   << static_cast<uint32_t>(Fix(Y).raw()) << std::endl;
            fout_cb << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    << static_cast<uint32_t>(Fix(Cb).raw()) << std::endl;
            fout_cr << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    << static_cast<uint32_t>(Fix(Cr).raw()) << std::endl;
        }
    }

    fin_r.close();
    fin_g.close();
    fin_b.close();
    fout_y.close();
    fout_cb.close();
    fout_cr.close();

    std::cout << "Generated " << num_samples << " RGB→YCbCr samples." << std::endl;
    return 0;
}
