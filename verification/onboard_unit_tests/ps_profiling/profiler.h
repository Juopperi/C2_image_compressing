#pragma once  // 保证头文件只被包含一次，防止重复定义

#include <string>              // 提供 std::string 类型
#include <unordered_map>      // 提供哈希表容器，用于快速查找阶段时间
#include "platform.h"         // 包含平台相关的计时接口与类型 TimePoint


// Profiler 类：用于统计多个阶段的运行时间（如 JPEG 编码中的 DCT、量化等）
class Profiler {
public:
    // 开始某个阶段的计时（记录当前时间为该阶段的起始时间）
    void startTimer(const std::string& phase);

    // 停止该阶段的计时（获取当前时间，与起始时间求差后累加到总耗时中）
    void stopTimer(const std::string& phase);

    // 获取该阶段的总耗时（单位：秒），可用于性能分析
    double getElapsedTime(const std::string& phase) const;

    // 重置该阶段的计时（清空累计耗时，并移除起始时间记录）
    void reset(const std::string& phase);

    // 重置所有阶段（包括所有累计耗时与起始时间记录）
    void resetAll();

    // 打印各阶段的统计结果（如 DCT : 0.012345 秒）
    void printReport() const;

    // Profiler.h 中添加新方法
    double getLastElapsedTime(const std::string& phase) const;

private:
    std::unordered_map<std::string, double> lastElapsedTimes;  // 新增：记录最近一次 start-stop 的时间

    // 保存各阶段的起始时间（startTimer 调用时记录）
    // key：阶段名称，例如 "DCT"、"Quant"；value：开始时间点
    std::unordered_map<std::string, TimePoint> startTimes;

    // 保存各阶段的总耗时（单位为秒）
    // key：阶段名称；value：该阶段目前为止的累计耗时
    std::unordered_map<std::string, double> elapsedTimes;
};

extern Profiler* global_profiler;
