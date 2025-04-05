// 引入 Profiler 类的头文件（声明）以及用于输出的标准库
#include "Profiler.h"
#include <iostream>
#include <iomanip>  // 提供格式化输出，比如设置小数精度

Profiler* global_profiler = nullptr;

// 开始计时：记录当前阶段的开始时间
void Profiler::startTimer(const std::string& phase) {
    startTimes[phase] = getCurrentTime();  // 使用当前时间点覆盖记录
}

// 获取某个阶段当前累计的总耗时（单位：秒）
double Profiler::getElapsedTime(const std::string& phase) const {
    auto it = elapsedTimes.find(phase);  // 查找该阶段的累积时间
    return (it != elapsedTimes.end()) ? it->second : 0.0;  // 返回时间或默认 0.0
}

// 重置某个阶段的耗时统计
void Profiler::reset(const std::string& phase) {
    elapsedTimes[phase] = 0.0;       // 清零累计时间
    startTimes.erase(phase);         // 移除其对应的起始时间记录
}

// 重置所有阶段的耗时统计
void Profiler::resetAll() {
    elapsedTimes.clear();  // 清空累计时间记录
    startTimes.clear();    // 清空开始时间记录
}

// 打印所有阶段的统计信息（格式化输出）
void Profiler::printReport() const {
   
   return ;
    std::cout << "---- Profiling Report ----\n";
    for (const auto& pair : elapsedTimes) {
        std::cout << std::setw(15) << pair.first << " : "     // 打印阶段名
                  << std::fixed << std::setprecision(6)       // 保留 6 位小数
                  << pair.second << " seconds\n";             // 打印时间（秒）
    }
    std::cout << "--------------------------\n";
}

void Profiler::stopTimer(const std::string& phase) {
    auto it = startTimes.find(phase);
    if (it != startTimes.end()) {
        TimePoint end = getCurrentTime();
        double elapsed = getDurationSeconds(it->second, end);
        elapsedTimes[phase] += elapsed;
        lastElapsedTimes[phase] = elapsed;  // 记录本次的单次时间
    }
}

double Profiler::getLastElapsedTime(const std::string& phase) const {
    auto it = lastElapsedTimes.find(phase);
    return (it != lastElapsedTimes.end()) ? it->second : 0.0;
}
