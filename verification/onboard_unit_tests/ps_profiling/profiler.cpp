#include "Profiler.h"

#ifdef PLATFORM_ZYNQ
#include "xil_printf.h"
#else
#include <iostream>
#include <iomanip>
#endif

// Profiler* global_profiler = nullptr;

void Profiler::startTimer(const std::string& phase) {
    startTimes[phase] = getCurrentTime();
}

void Profiler::stopTimer(const std::string& phase) {
    auto it = startTimes.find(phase);
    if (it != startTimes.end()) {
        TimePoint end = getCurrentTime();
        double elapsed = getDurationSeconds(it->second, end);
        elapsedTimes[phase] += elapsed;
        lastElapsedTimes[phase] = elapsed;
    }
}

double Profiler::getElapsedTime(const std::string& phase) const {
    auto it = elapsedTimes.find(phase);
    return (it != elapsedTimes.end()) ? it->second : 0.0;
}

double Profiler::getLastElapsedTime(const std::string& phase) const {
    auto it = lastElapsedTimes.find(phase);
    return (it != lastElapsedTimes.end()) ? it->second : 0.0;
}

void Profiler::reset(const std::string& phase) {
    elapsedTimes[phase] = 0.0;
    startTimes.erase(phase);
}

void Profiler::resetAll() {
    elapsedTimes.clear();
    startTimes.clear();
    lastElapsedTimes.clear();
}

void Profiler::printReport() const {
#ifdef PLATFORM_ZYNQ
    // Zynq 平台建议使用 xil_printf 写入串口或日志
    xil_printf("---- Profiling Report ----\r\n");
    for (const auto& pair : elapsedTimes) {
        xil_printf("%s : %.6f seconds\r\n", pair.first.c_str(), pair.second);
    }
    xil_printf("--------------------------\r\n");
#else
    std::cout << "---- Profiling Report ----\n";
    for (const auto& pair : elapsedTimes) {
        std::cout << std::setw(15) << pair.first << " : "
                  << std::fixed << std::setprecision(6)
                  << pair.second << " seconds\n";
    }
    std::cout << "--------------------------\n";
#endif
}
