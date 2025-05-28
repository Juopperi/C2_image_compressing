#include <iostream>
#include "FixedPoint.h"

int main() {
    using Fixed16_8 = FixedPoint<int16_t, 8>; // 16位总长，8位小数

    Fixed16_8 a = 1.5f;
    Fixed16_8 b = 2;

    auto c = a + b;
    auto d = a * b;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = a + b = " << c << "\n";
    std::cout << "d = a * b = " << d << "\n";

    try {
        auto e = a / b; // 这里会抛出异常
    } catch (const std::logic_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
