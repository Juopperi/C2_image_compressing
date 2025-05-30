#ifndef VERILATOR_UTILS_H
#define VERILATOR_UTILS_H

#include <vector>
#include <cstdint>
#include <iostream>
#include "verilated.h"
#include "FixedPoint.h"

/**
 * @brief Verilator宽位接口实用工具
 * 提供处理VlWide<N>类型的辅助函数，用于处理宽位信号的赋值、比较等操作
 */
namespace VerilatorUtils {

/**
 * @brief 将数据向量填充到Verilator的宽位输入端口
 * 
 * @tparam N VlWide的大小参数
 * @tparam T 数据类型
 * @param port Verilator的宽位端口
 * @param data 要填充的数据
 * @param start_idx 数据起始索引
 */
template<unsigned int N, typename T>
void fillPort(VlWide<N>& port, const std::vector<T>& data, size_t start_idx = 0) {
    for (unsigned int i = 0; i < N && (i + start_idx) < data.size(); ++i) {
        port[i] = static_cast<uint32_t>(data[i + start_idx]);
    }
}

/**
 * @brief 将FixedPoint数据向量填充到Verilator的宽位输入端口
 * 
 * @tparam N VlWide的大小参数
 * @tparam INT_T FixedPoint内部整数类型
 * @tparam FRAC_BITS FixedPoint小数位数
 * @param port Verilator的宽位端口
 * @param data 要填充的FixedPoint数据
 * @param start_idx 数据起始索引
 */
template<unsigned int N, typename INT_T, unsigned int FRAC_BITS>
void fillPortWithFixedPoint(VlWide<N>& port, const std::vector<FixedPoint<INT_T, FRAC_BITS>>& data, size_t start_idx = 0) {
    for (unsigned int i = 0; i < N && (i + start_idx) < data.size(); ++i) {
        port[i] = static_cast<uint32_t>(data[i + start_idx].raw());
    }
}

/**
 * @brief 从Verilator的宽位输出端口读取数据到向量
 * 
 * @tparam N VlWide的大小参数
 * @tparam T 数据类型
 * @param port Verilator的宽位端口
 * @return std::vector<T> 读取的数据向量
 */
template<unsigned int N, typename T>
std::vector<T> readPort(const VlWide<N>& port) {
    std::vector<T> result(N);
    for (unsigned int i = 0; i < N; ++i) {
        result[i] = static_cast<T>(port[i]);
    }
    return result;
}

/**
 * @brief 从Verilator的宽位输出端口读取数据到FixedPoint向量
 * 
 * @tparam N VlWide的大小参数
 * @tparam INT_T FixedPoint内部整数类型
 * @tparam FRAC_BITS FixedPoint小数位数
 * @param port Verilator的宽位端口
 * @return std::vector<FixedPoint<INT_T, FRAC_BITS>> 读取的FixedPoint数据向量
 */
template<unsigned int N, typename INT_T, unsigned int FRAC_BITS>
std::vector<FixedPoint<INT_T, FRAC_BITS>> readPortToFixedPoint(const VlWide<N>& port) {
    std::vector<FixedPoint<INT_T, FRAC_BITS>> result(N);
    for (unsigned int i = 0; i < N; ++i) {
        result[i] = FixedPoint<INT_T, FRAC_BITS>::fromRaw(port[i]);
    }
    return result;
}

/**
 * @brief 清零Verilator的宽位端口
 * 
 * @tparam N VlWide的大小参数
 * @param port Verilator的宽位端口
 */
template<unsigned int N>
void clearPort(VlWide<N>& port) {
    for (unsigned int i = 0; i < N; ++i) {
        port[i] = 0;
    }
}

/**
 * @brief 打印Verilator宽位端口的内容（十六进制）
 * 
 * @tparam N VlWide的大小参数
 * @param port Verilator的宽位端口
 * @param msg 可选的前缀消息
 */
template<unsigned int N>
void printPort(const VlWide<N>& port, const std::string& msg = "") {
    if (!msg.empty()) {
        std::cout << msg << ": ";
    }
    std::cout << "0x";
    for (int i = N-1; i >= 0; --i) {
        std::cout << std::hex << std::setw(8) << std::setfill('0') << port[i];
    }
    std::cout << std::dec << std::endl;
}

} // namespace VerilatorUtils

#endif // VERILATOR_UTILS_H 