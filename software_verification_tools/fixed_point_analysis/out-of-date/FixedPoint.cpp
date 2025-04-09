#include "FixedPoint.h"
#include <cmath>

FixedPoint::FixedPoint() : value(0) {}

FixedPoint::FixedPoint(int integer) : value(integer * scale) {}

FixedPoint::FixedPoint(float f) : value(static_cast<int32_t>(std::round(f * scale))) {}

FixedPoint::FixedPoint(const FixedPoint& other) : value(other.value) {}

int32_t FixedPoint::raw() const {
    return value;
}

float FixedPoint::toFloat() const {
    return static_cast<float>(value) / scale;
}

int FixedPoint::toInt() const {
    return value / scale;
}

FixedPoint FixedPoint::operator+(const FixedPoint& other) const {
    return FixedPoint::fromRaw(value + other.value);
}

FixedPoint FixedPoint::operator-(const FixedPoint& other) const {
    return FixedPoint::fromRaw(value - other.value);
}

FixedPoint FixedPoint::operator*(const FixedPoint& other) const {
    int64_t result = static_cast<int64_t>(value) * other.value;
    return FixedPoint::fromRaw(static_cast<int32_t>(result >> fractionalBits));
}

FixedPoint FixedPoint::operator/(const FixedPoint& other) const {
    int64_t numerator = static_cast<int64_t>(value) << fractionalBits;
    return FixedPoint::fromRaw(static_cast<int32_t>(numerator / other.value));
}

FixedPoint& FixedPoint::operator=(const FixedPoint& other) {
    value = other.value;
    return *this;
}

bool FixedPoint::operator==(const FixedPoint& other) const {
    return value == other.value;
}

bool FixedPoint::operator!=(const FixedPoint& other) const {
    return value != other.value;
}

FixedPoint FixedPoint::fromRaw(int32_t rawVal) {
    FixedPoint fp;
    fp.value = rawVal;
    return fp;
}

std::ostream& operator<<(std::ostream& os, const FixedPoint& fp) {
    os << fp.toFloat();
    return os;
}
