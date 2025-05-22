#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <iomanip>
#include <ctime>
#include <vector>
#include <unordered_map>
#include <sstream>
#include "profiler.h"

namespace fs = std::filesystem;

// 获取当前时间字符串（MATLAB 风格）
std::string getCurrentTimeString() {
    std::time_t now = std::time(nullptr);
    char buf[64];
    std::strftime(buf, sizeof(buf), "%d-%b-%Y %H:%M:%S", std::localtime(&now));
    return std::string(buf);
}

// 阶段标签映射（MATLAB风格标签 -> profiler内部键名）
const std::vector<std::pair<std::string, std::string>> phase_mapping = {
    {"Image loading", "load_image"},
    {"RGB to YCbCr conversion", "rgb2ycbcr"},
    {"Chroma subsampling", "subsample_encoding"},
    {"Level shift", "level_shift"},
    {"DCT transform", "dct_rows"},      // 可包含 dct_columns
    {"Quantization", "quantize"},
    {"Encoding", "encode_acs"},         // 可加 encode_dc
    {"File writing", "save_image"}
};

int main() {
    Profiler profiler;
    global_profiler = &profiler;

    const char* input_dir = "jpg_input";
    const char* output_dir = "jpg";
    const char* log_path = "pc_log.txt";

    // ✅ 先删除旧的日志文件（如果存在）
    if (fs::exists(log_path)) {
        fs::remove(log_path);
    }

    // ✅ 打开日志文件（以追加方式）
    std::ofstream log_file(log_path, std::ios::app);

    if (!fs::exists(output_dir)) {
        fs::create_directory(output_dir);
    }

    for (const auto& entry : fs::directory_iterator(input_dir)) {
        if (entry.path().extension() == ".jpg") {

            std::ostringstream log;  // 用于缓存本轮日志内容
            std::string filename = entry.path().filename().string();
            std::string filepath = entry.path().string();

            profiler.resetAll();

            log << "========================================\n";
            log << "Processing: " << filename << "\n";

            int width, height, channels;

            profiler.startTimer("load_image");
            unsigned char* image = stbi_load(filepath.c_str(), &width, &height, &channels, 0);
            profiler.stopTimer("load_image");

            if (!image) {
                log << "Error loading image: " << filepath << "\n";
                std::cout << log.str();
                log_file << log.str();
                continue;
            }

            log << "Width: " << width << " Height: " << height << " Channels: " << channels << "\n";

            std::string output_path = std::string(output_dir) + "/" + entry.path().stem().string() + ".jpg";

            profiler.startTimer("save_image");
            bool success = stbi_write_jpg(output_path.c_str(), width, height, channels, image, 90);
            profiler.stopTimer("save_image");

            stbi_image_free(image);

            if (!success) {
                log << "Error saving image: " << output_path << "\n";
                std::cout << log.str();
                log_file << log.str();
                continue;
            }

            // ========== 输出 MATLAB 样式日志 ==========
            log << "Current time: " << getCurrentTimeString() << "\n";
            log << "Image name: " << filepath << "\n";

            double total_time = 0.0;
            std::unordered_map<std::string, double> durations;

            for (const auto& [label, key] : phase_mapping) {
                double t = profiler.getElapsedTime(key);
                durations[label] = t;
                total_time += t;
            }

            for (const auto& [label, _] : phase_mapping) {
                log << label << " time: " << std::fixed << std::setprecision(4)
                    << durations[label] << " seconds\n";
            }

            log << "Total execution time: " << std::fixed << std::setprecision(4)
                << total_time << " seconds\n\n";

            log << "Execution time breakdown:\n";
            for (const auto& [label, _] : phase_mapping) {
                double percent = (total_time > 0.0) ? (durations[label] / total_time) * 100.0 : 0.0;
                log << label << ": " << std::fixed << std::setprecision(2)
                    << percent << "%\n";
            }
            log << "========================================\n\n";

            // ✅ 同时打印到屏幕和写入文件
            std::cout << log.str();
            log_file << log.str();
        }
    }

    log_file.close();
    return 0;
}
