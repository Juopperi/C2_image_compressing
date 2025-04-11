#pragma once

#include <type_traits>
#include <cmath>
#include <iostream>
#include <stdexcept>

template<typename T, int fracBits>
class FixedPoint {
    static_assert(std::is_integral<T>::value, "T must be an integral type");
    static_assert(fracBits >= 0 && fracBits < (int)(sizeof(T) * 8), "Invalid fractional bits");

private:
    T value;
    static constexpr T scale = static_cast<T>(1) << fracBits;

public:

	FixedPoint() : value(0) {}

	FixedPoint(int integer) : value(static_cast<T>(integer) * scale) {}

	FixedPoint(float f) : value(static_cast<T>(std::round(f * scale))) {}

	FixedPoint(double d) : value(static_cast<T>(std::round(d * scale))) {}

	FixedPoint(const FixedPoint& other) = default;


    // 从原始值构造（静态工厂函数）
    static FixedPoint fromRaw(T rawVal) {
        FixedPoint fp;
        fp.value = rawVal;
        return fp;
    }

    // 转为 float
    float toFloat() const {
        return static_cast<float>(value) / scale;
    }

    // 转为 int（取整）
    int toInt() const {
        return static_cast<int>(value / scale);
    }

    // 获取内部原始值
    T raw() const {
        return value;
    }

    // 加法
    FixedPoint operator+(const FixedPoint& other) const {
        return FixedPoint::fromRaw(value + other.value);
    }

    // 减法
    FixedPoint operator-(const FixedPoint& other) const {
        return FixedPoint::fromRaw(value - other.value);
    }

    // 乘法
    FixedPoint operator*(const FixedPoint& other) const {
        using WideType = typename std::conditional<sizeof(T) <= 2, int32_t, int64_t>::type;
        WideType result = static_cast<WideType>(value) * static_cast<WideType>(other.value);
        return FixedPoint::fromRaw(static_cast<T>(result >> fracBits));
    }

    // 禁止除法
    FixedPoint operator/(const FixedPoint& other) const {
        throw std::logic_error("FixedPoint does not support division. Use reciprocal or float * fixed instead.");
    }

    // 比较
    bool operator==(const FixedPoint& other) const { return value == other.value; }
    bool operator!=(const FixedPoint& other) const { return value != other.value; }

    // 输出支持
    friend std::ostream& operator<<(std::ostream& os, const FixedPoint& fp) {
        os << fp.toFloat();
        return os;
    }
};
