#pragma once

#ifdef PLATFORM_ZYNQ
#include "xtime_l.h"
using TimePoint = XTime;

inline TimePoint getCurrentTime() {
    XTime t;
    XTime_GetTime(&t);
    return t;
}

inline double getDurationSeconds(TimePoint start, TimePoint end) {
    // Zynq 默认 333 MHz，可通过宏配置
#ifndef CPU_FREQ_HZ
#define CPU_FREQ_HZ 333000000
#endif
    return static_cast<double>(end - start) / CPU_FREQ_HZ;
}

#else  // X86/Linux/macOS 等

#include <chrono>

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

inline TimePoint getCurrentTime() {
    return Clock::now();
}

inline double getDurationSeconds(TimePoint start, TimePoint end) {
    return std::chrono::duration<double>(end - start).count();
}

#endif
