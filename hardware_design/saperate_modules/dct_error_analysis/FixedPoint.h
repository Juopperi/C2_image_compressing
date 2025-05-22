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

    FixedPoint(float f, bool round = true) {
        value = round
            ? static_cast<T>(std::round(f * scale))
            : static_cast<T>(f * scale);
    }

    FixedPoint(double d, bool round = true) {
        value = round
            ? static_cast<T>(std::round(d * scale))
            : static_cast<T>(d * scale);
    }

    FixedPoint(const FixedPoint& other) = default;

    static FixedPoint fromRaw(T rawVal) {
        FixedPoint fp;
        fp.value = rawVal;
        return fp;
    }

    float toFloat() const {
        return static_cast<float>(value) / scale;
    }

    double toDouble() const {
        return static_cast<double>(value) / scale;
    }

    int toInt() const {
        return static_cast<int>(value / scale);
    }

    T raw() const {
        return value;
    }

    FixedPoint operator+(const FixedPoint& other) const {
        return FixedPoint::fromRaw(value + other.value);
    }

    FixedPoint operator-(const FixedPoint& other) const {
        return FixedPoint::fromRaw(value - other.value);
    }

    FixedPoint operator*(const FixedPoint& other) const {
        using WideType = typename std::conditional<sizeof(T) <= 2, int32_t, int64_t>::type;
        WideType result = static_cast<WideType>(value) * static_cast<WideType>(other.value);
        return FixedPoint::fromRaw(static_cast<T>(result >> fracBits));
    }

    FixedPoint operator/(const FixedPoint& other) const {
        throw std::logic_error("FixedPoint does not support division. Use reciprocal or float * fixed instead.");
    }

    bool operator==(const FixedPoint& other) const { return value == other.value; }
    bool operator!=(const FixedPoint& other) const { return value != other.value; }

    friend std::ostream& operator<<(std::ostream& os, const FixedPoint& fp) {
        os << fp.toFloat();
        return os;
    }
};
