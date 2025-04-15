#ifndef QUANTIZATION_SYSTEMC_H
#define QUANTIZATION_SYSTEMC_H

#include <systemc.h>
#include "FixedPoint.h"

// Luma and Chroma quantization tables (inverse values)
const int32_t luma_qtable_inv[64] = {
    0x00001000, 0x00001746, 0x0000199A, 0x00001000,
    0x00000AAB, 0x00000666, 0x00000505, 0x00000432,
    0x00001555, 0x00001555, 0x00001249, 0x00000D79,
    0x000009D9, 0x0000046A, 0x00000444, 0x000004A8,
    0x00001249, 0x000013B1, 0x00001000, 0x00000AAB,
    0x00000666, 0x0000047E, 0x000003B6, 0x00000492,
    0x00001249, 0x00000F0F, 0x00000BA3, 0x000008D4,
    0x00000505, 0x000002F1, 0x00000333, 0x00000421,
    0x00000E39, 0x00000BA3, 0x000006EB, 0x00000492,
    0x000003C4, 0x00000259, 0x0000027C, 0x00000353,
    0x00000AAB, 0x00000750, 0x000004A8, 0x00000400,
    0x00000329, 0x00000276, 0x00000244, 0x000002C8,
    0x00000539, 0x00000400, 0x00000348, 0x000002F1,
    0x0000027C, 0x0000021E, 0x00000222, 0x00000289,
    0x0000038E, 0x000002C8, 0x000002B2, 0x0000029D,
    0x00000249, 0x0000028F, 0x0000027C, 0x00000296
};

const int32_t chroma_qtable_inv[64] = {
    0x00000F0F, 0x00000E39, 0x00000AAB, 0x00000572,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000E39, 0x00000C31, 0x000009D9, 0x000003E1,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000AAB, 0x000009D9, 0x00000492, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000572, 0x000003E1, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296,
    0x00000296, 0x00000296, 0x00000296, 0x00000296
};

// Quantization module for a single value
template<typename T = int32_t, int fracBits = 16, int DATA_WIDTH = sizeof(T)*8>
SC_MODULE(quantize_pixel) {
    sc_in<sc_int<DATA_WIDTH>> pixel;
    sc_in<sc_int<DATA_WIDTH>> qtable_value;
    sc_out<sc_int<DATA_WIDTH>> result;

    void quantize() {
        // Get input values
        T pixel_val = pixel.read();
        T qtable_val = qtable_value.read();

        // Create FixedPoint objects
        FixedPoint<T, fracBits> fp_pixel = FixedPoint<T, fracBits>::fromRaw(pixel_val);
        FixedPoint<T, fracBits> fp_qtable = FixedPoint<T, fracBits>::fromRaw(qtable_val);

        // Perform quantization (multiplication in fixed point)
        FixedPoint<T, fracBits> quantized = fp_pixel * fp_qtable;

        // Write result
        result.write(quantized.raw());
    }

    SC_CTOR(quantize_pixel) {
        SC_METHOD(quantize);
        sensitive << pixel << qtable_value;
    }
};

// Quantization module for an entire 8x8 block
template<typename T = int32_t, int fracBits = 16, int DATA_WIDTH = sizeof(T)*8, bool USE_LUMA = true>
SC_MODULE(quantize_block) {
    sc_in<bool> clk;
    sc_in<sc_int<DATA_WIDTH>> pixels[64];
    sc_out<sc_int<DATA_WIDTH>> q_result[64];

    // Internal signals
    sc_signal<sc_int<DATA_WIDTH>> qtable_values[64];

    // Submodules
    quantize_pixel<T, fracBits>* quantizers[64];

    void load_qtable() {
        // Load the appropriate quantization table based on USE_LUMA
        for (int i = 0; i < 64; i++) {
            int32_t table_val = USE_LUMA ? luma_qtable_inv[i] : chroma_qtable_inv[i];
            qtable_values[i].write(table_val);
        }
    }

    SC_CTOR(quantize_block) {
        // Create quantizer instances for each pixel
        for (int i = 0; i < 64; i++) {
            char name[20];
            sprintf(name, "quantizer_%d", i);
            quantizers[i] = new quantize_pixel<T, fracBits>(name);
            
            // Connect ports
            quantizers[i]->pixel(pixels[i]);
            quantizers[i]->qtable_value(qtable_values[i]);
            quantizers[i]->result(q_result[i]);
        }

        // Method to load quantization table
        SC_METHOD(load_qtable);
        sensitive << clk.pos();
    }

    ~quantize_block() {
        for (int i = 0; i < 64; i++) {
            delete quantizers[i];
        }
    }
};

#endif // QUANTIZATION_SYSTEMC_H