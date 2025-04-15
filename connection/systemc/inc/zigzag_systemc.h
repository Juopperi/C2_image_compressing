#ifndef ZIGZAG_SYSTEMC_H
#define ZIGZAG_SYSTEMC_H

#include <systemc.h>

// Zigzag reordering module for 8x8 block
template<typename T = int32_t, int DATA_WIDTH = sizeof(T)*8>
SC_MODULE(zigzag_reorder) {
    sc_in<bool> clk;
    sc_in<sc_int<DATA_WIDTH>> input_matrix[64];
    sc_out<sc_int<DATA_WIDTH>> zigzag_out[64];

    // Zigzag order mapping for 8x8 matrix
    const int zigzag_order[64] = {
         0,  1,  5,  6, 14, 15, 27, 28,
         2,  4,  7, 13, 16, 26, 29, 42,
         3,  8, 12, 17, 25, 30, 41, 43,
         9, 11, 18, 24, 31, 40, 44, 53,
        10, 19, 23, 32, 39, 45, 52, 54,
        20, 22, 33, 38, 46, 51, 55, 60,
        21, 34, 37, 47, 50, 56, 59, 61,
        35, 36, 48, 49, 57, 58, 62, 63
    };

    void reorder() {
        // Apply zigzag reordering
        for (int i = 0; i < 64; i++) {
            zigzag_out[i].write(input_matrix[zigzag_order[i]].read());
        }
    }

    SC_CTOR(zigzag_reorder) {
        SC_METHOD(reorder);
        sensitive << clk.pos();
        for (int i = 0; i < 64; i++) {
            sensitive << input_matrix[i];
        }
    }
};

#endif // ZIGZAG_SYSTEMC_H