#ifndef FIXEDPOINT_H
#define FIXEDPOINT_H

#include <cstdint>
#include <type_traits>

// FixedPoint template class for handling fixed-point arithmetic operations
template<typename T = int32_t, int fracBits = 16>
class FixedPoint {
private:
    T value; // Raw fixed-point value

public:
    // Constructors
    FixedPoint() : value(0) {}
    
    // Construct from double (convert to fixed-point)
    FixedPoint(double d) {
        value = static_cast<T>(d * (1LL << fracBits));
    }
    
    // Create from raw value
    static FixedPoint fromRaw(T raw) {
        FixedPoint result;
        result.value = raw;
        return result;
    }
    
    // Get raw fixed-point value
    T raw() const {
        return value;
    }
    
    // Convert to double
    double toDouble() const {
        return static_cast<double>(value) / (1LL << fracBits);
    }
    
    // Addition operator
    FixedPoint operator+(const FixedPoint& other) const {
        FixedPoint result;
        result.value = value + other.value;
        return result;
    }
    
    // Subtraction operator
    FixedPoint operator-(const FixedPoint& other) const {
        FixedPoint result;
        result.value = value - other.value;
        return result;
    }
    
    // Multiplication operator (with proper scaling)
    FixedPoint operator*(const FixedPoint& other) const {
        FixedPoint result;
        
        // Need to use wider type for multiplication to avoid overflow
        using WideType = typename std::conditional<
            sizeof(T) <= 4,
            int64_t,
            __int128_t
        >::type;
        
        WideType temp = static_cast<WideType>(value) * static_cast<WideType>(other.value);
        
        // Shift right to account for the fractional bits
        result.value = static_cast<T>(temp >> fracBits);
        
        return result;
    }
    
    // Division operator (with proper scaling)
    FixedPoint operator/(const FixedPoint& other) const {
        FixedPoint result;
        
        // Need to use wider type for division to maintain precision
        using WideType = typename std::conditional<
            sizeof(T) <= 4,
            int64_t,
            __int128_t
        >::type;
        
        // Pre-scale the numerator by shifting left
        WideType temp = static_cast<WideType>(value) << fracBits;
        
        // Perform the division
        temp = temp / static_cast<WideType>(other.value);
        
        result.value = static_cast<T>(temp);
        
        return result;
    }
    
    // Negate operator
    FixedPoint operator-() const {
        FixedPoint result;
        result.value = -value;
        return result;
    }
    
    // Comparison operators
    bool operator==(const FixedPoint& other) const {
        return value == other.value;
    }
    
    bool operator!=(const FixedPoint& other) const {
        return value != other.value;
    }
    
    bool operator<(const FixedPoint& other) const {
        return value < other.value;
    }
    
    bool operator>(const FixedPoint& other) const {
        return value > other.value;
    }
    
    bool operator<=(const FixedPoint& other) const {
        return value <= other.value;
    }
    
    bool operator>=(const FixedPoint& other) const {
        return value >= other.value;
    }
};

#endif // FIXEDPOINT_H