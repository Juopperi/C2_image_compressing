#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#include <cstdint>
#include <iostream>
#include <iomanip>

#include <systemc.h>

// Fixed point number implementation with debug capabilities
template<typename T = int32_t, int fracBits = 16>
class FixedPoint {
private:
    T value; // Raw fixed-point value

public:
    // Default constructor
    FixedPoint() : value(0) {}

    // Constructor from raw fixed-point value
    explicit FixedPoint(T rawValue) : value(rawValue) {}

    // Constructor from double (converts to fixed-point)
    FixedPoint(double dValue) {
        value = static_cast<T>(dValue * (1 << fracBits));
    }

    // Static factory method to create from raw value
    static FixedPoint<T, fracBits> fromRaw(T rawValue) {
        return FixedPoint<T, fracBits>(rawValue);
    }

    // Convert to double
    double toDouble() const {
        return static_cast<double>(value) / (1 << fracBits);
    }

    // Get raw fixed-point value
    T raw() const {
        return value;
    }

    // Addition
    FixedPoint<T, fracBits> operator+(const FixedPoint<T, fracBits>& other) const {
        return FixedPoint<T, fracBits>(value + other.value);
    }

    // Subtraction
    FixedPoint<T, fracBits> operator-(const FixedPoint<T, fracBits>& other) const {
        return FixedPoint<T, fracBits>(value - other.value);
    }

    // Multiplication
    FixedPoint<T, fracBits> operator*(const FixedPoint<T, fracBits>& other) const {
        // For fixed-point multiplication, we need to shift right by fracBits
        // to account for the double fractional part
        T result = (static_cast<int64_t>(value) * static_cast<int64_t>(other.value)) >> fracBits;
        return FixedPoint<T, fracBits>(result);
    }

    // Division
    FixedPoint<T, fracBits> operator/(const FixedPoint<T, fracBits>& other) const {
        // For fixed-point division, we need to shift left by fracBits
        T result = (static_cast<int64_t>(value) << fracBits) / other.value;
        return FixedPoint<T, fracBits>(result);
    }

    // Negation
    FixedPoint<T, fracBits> operator-() const {
        return FixedPoint<T, fracBits>(-value);
    }

    // Print fixed-point value for debugging
    void print(const char* label = NULL) const {
        if (label) {
            std::cout << label << ": ";
        }
        
        std::cout << "Raw=0x" << std::hex << std::setw(8) << std::setfill('0') 
                  << value << std::dec << " (" << toDouble() << ")" << std::endl;
    }

    // Static method to print a value in fixed-point format
    static void printValue(T rawValue, const char* label = NULL) {
        FixedPoint<T, fracBits> fp(rawValue);
        fp.print(label);
    }
};


// Fixed point multiplier for DCT coefficients
template<typename T = int32_t, int fracBits = 16>
SC_MODULE(fixed_multiplier) {
    sc_in<sc_int<sizeof(T)*8>> a;
    sc_in<sc_int<sizeof(T)*8>> b;
    sc_out<sc_int<sizeof(T)*8>> mul_res;

    void multiply() {
        // Get input values
        T a_val = a.read();
        T b_val = b.read();

        // Create FixedPoint objects
        FixedPoint<T, fracBits> fp_a = FixedPoint<T, fracBits>::fromRaw(a_val);
        FixedPoint<T, fracBits> fp_b = FixedPoint<T, fracBits>::fromRaw(b_val);

        // Perform multiplication
        FixedPoint<T, fracBits> result = fp_a * fp_b;

        // Write result
        mul_res.write(result.raw());
    }

    SC_CTOR(fixed_multiplier) {
        SC_METHOD(multiply);
        sensitive << a << b;
    }
};

// Fixed point adder
template<typename T = int32_t, int fracBits = 16>
SC_MODULE(fixed_adder) {
    sc_in<sc_int<sizeof(T)*8>> a;
    sc_in<sc_int<sizeof(T)*8>> b;
    sc_out<sc_int<sizeof(T)*8>> sum_out;

    void add() {
        // Get input values
        T a_val = a.read();
        T b_val = b.read();

        // Create FixedPoint objects
        FixedPoint<T, fracBits> fp_a = FixedPoint<T, fracBits>::fromRaw(a_val);
        FixedPoint<T, fracBits> fp_b = FixedPoint<T, fracBits>::fromRaw(b_val);

        // Perform addition
        FixedPoint<T, fracBits> result = fp_a + fp_b;

        // Write result
        sum_out.write(result.raw());
    }

    SC_CTOR(fixed_adder) {
        SC_METHOD(add);
        sensitive << a << b;
    }
};

#endif // FIXED_POINT_H