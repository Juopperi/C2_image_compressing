#include <iostream>
#include <fstream>
#include <cmath>
#include <array>
#include <opencv2/opencv.hpp>
#include "FixedPoint.h"

constexpr int N = 8;
using Block = std::array<std::array<float, N>, N>;
using Fixed = FixedPoint<int32_t, 16>;

// 提取一块 8×8 数据块
Block extract_block(const cv::Mat& gray, int row, int col) {
    Block block;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            block[i][j] = static_cast<float>(gray.at<uint8_t>(row + i, col + j));
    return block;
}

// 浮点 DCT
Block dct_float(const Block& input) {
    Block output = {};
    for (int u = 0; u < N; ++u)
        for (int v = 0; v < N; ++v) {
            float sum = 0;
            for (int x = 0; x < N; ++x)
                for (int y = 0; y < N; ++y)
                    sum += input[x][y] *
                           std::cos((2 * x + 1) * u * M_PI / (2 * N)) *
                           std::cos((2 * y + 1) * v * M_PI / (2 * N));
            float cu = (u == 0) ? std::sqrt(0.5f) : 1.0f;
            float cv = (v == 0) ? std::sqrt(0.5f) : 1.0f;
            output[u][v] = 0.25f * cu * cv * sum;
        }
    return output;
}

// 定点 DCT
std::array<std::array<Fixed, N>, N> dct_fixed(const std::array<std::array<Fixed, N>, N>& input) {
    std::array<std::array<Fixed, N>, N> output = {};
    for (int u = 0; u < N; ++u)
        for (int v = 0; v < N; ++v) {
            Fixed sum = 0;
            for (int x = 0; x < N; ++x)
                for (int y = 0; y < N; ++y) {
                    Fixed cx = std::cos((2 * x + 1) * u * M_PI / (2 * N));
                    Fixed cy = std::cos((2 * y + 1) * v * M_PI / (2 * N));
                    sum = sum + input[x][y] * cx * cy;
                }
            Fixed cu = (u == 0) ? std::sqrt(0.5f) : 1.0f;
            Fixed cv = (v == 0) ? std::sqrt(0.5f) : 1.0f;
            Fixed scale = Fixed(0.25f);
            output[u][v] = scale * cu * cv * sum;
        }
    return output;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: ./dct_from_image path_to_image\n";
        return 1;
    }

    // 加载图像并转换为灰度
    cv::Mat img = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);
    if (img.empty()) {
        std::cerr << "Failed to load image: " << argv[1] << "\n";
        return 1;
    }

    int rows = img.rows;
    int cols = img.cols;

    std::ofstream csv("dct_from_image.csv");
    csv << "block_id,MSE,max_error\n";

    int block_id = 0;
    for (int i = 0; i + N <= rows; i += N) {
        for (int j = 0; j + N <= cols; j += N) {
            Block input = extract_block(img, i, j);
            Block ref = dct_float(input);

            std::array<std::array<Fixed, N>, N> fixed_input;
            for (int x = 0; x < N; ++x)
                for (int y = 0; y < N; ++y)
                    fixed_input[x][y] = Fixed(input[x][y]);

            auto fixed_dct = dct_fixed(fixed_input);

            // 比较误差
            float mse = 0;
            float max_err = 0;
            for (int x = 0; x < N; ++x) {
                for (int y = 0; y < N; ++y) {
                    float f1 = ref[x][y];
                    float f2 = fixed_dct[x][y].toFloat();
                    float diff = std::abs(f1 - f2);
                    mse += diff * diff;
                    if (diff > max_err) max_err = diff;
                }
            }
            mse /= (N * N);
            csv << block_id++ << "," << mse << "," << max_err << "\n";
        }
    }

    std::cout << "Total blocks processed: " << block_id << "\n";
    std::cout << "Saved to dct_from_image.csv\n";
    return 0;
}
