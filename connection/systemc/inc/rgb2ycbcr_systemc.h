#include <systemc.h>
#include "FixedPoint.h"

// Conversion module for RGB to YCbCr transformation
template<typename T = int, int fracBits = 16, int fixed_point_length = 32, int input_width = 8>
SC_MODULE(conversion) {
    // Input ports
    sc_in<sc_uint<input_width>> input_R;
    sc_in<sc_uint<input_width>> input_G;
    sc_in<sc_uint<input_width>> input_B;
    sc_in<bool> clk;

    // Output ports
    sc_out<sc_uint<fixed_point_length>> output_Y;
    sc_out<sc_uint<fixed_point_length>> output_Cb;
    sc_out<sc_uint<fixed_point_length>> output_Cr;

    // Constants for RGB to YCbCr conversion (scaled by 2^fracBits)
    const FixedPoint<T, fracBits> n299 = FixedPoint<T, fracBits>(0.299);
    const FixedPoint<T, fracBits> n587 = FixedPoint<T, fracBits>(0.587);
    const FixedPoint<T, fracBits> n114 = FixedPoint<T, fracBits>(0.114);

    const FixedPoint<T, fracBits> n1687 = FixedPoint<T, fracBits>(0.1687);
    const FixedPoint<T, fracBits> n3313 = FixedPoint<T, fracBits>(0.3313);
    const FixedPoint<T, fracBits> n5 = FixedPoint<T, fracBits>(0.5);

    const FixedPoint<T, fracBits> n4187 = FixedPoint<T, fracBits>(0.4187);
    const FixedPoint<T, fracBits> n0813 = FixedPoint<T, fracBits>(0.0813);

    const FixedPoint<T, fracBits> n128 = FixedPoint<T, fracBits>(128);

    void convert() {
        // Read input values
        sc_uint<input_width> r_val = input_R.read();
        sc_uint<input_width> g_val = input_G.read();
        sc_uint<input_width> b_val = input_B.read();

        // Convert to FixedPoint
        FixedPoint<T, fracBits> r(r_val.to_int());
        FixedPoint<T, fracBits> g(g_val.to_int());
        FixedPoint<T, fracBits> b(b_val.to_int());

        // Calculate Y, Cb, Cr
        FixedPoint<T, fracBits> Y = r * n299 + g * n587 + b * n114 - n128;
        FixedPoint<T, fracBits> Cb =  b * n5 - r * n1687 - g * n3313;
        FixedPoint<T, fracBits> Cr =  r * n5 - g * n4187 - b * n0813;

        // Output results
        output_Y.write(Y.raw());
        output_Cb.write(Cb.raw());
        output_Cr.write(Cr.raw());
    }

    SC_CTOR(conversion) {
        SC_METHOD(convert);
        sensitive << clk.pos();
    }
};

// Container module that instantiates multiple conversion modules
template<typename T = int, int fracBits = 16, int fixed_point_length = 32, int num_pixels = 64, int input_width = 8>
SC_MODULE(rgb2ycbcr_container) {
    // Input ports
    sc_in<bool> clk;
    sc_in<sc_uint<input_width>> r_in[num_pixels];
    sc_in<sc_uint<input_width>> g_in[num_pixels];
    sc_in<sc_uint<input_width>> b_in[num_pixels];

    // Output ports
    sc_out<sc_uint<fixed_point_length>> y_out[num_pixels];
    sc_out<sc_uint<fixed_point_length>> cb_out[num_pixels];
    sc_out<sc_uint<fixed_point_length>> cr_out[num_pixels];

    // Array of conversion modules
    conversion<T, fracBits, fixed_point_length, input_width>* converters[num_pixels];

    SC_CTOR(rgb2ycbcr_container) {
        // Instantiate num_pixels converters
        for (int i = 0; i < num_pixels; i++) {
            char name[20];
            sprintf(name, "converter_%d", i);

            converters[i] = new conversion<T, fracBits, fixed_point_length, input_width>(name);

            // Connect ports
            converters[i]->clk(clk);
            converters[i]->input_R(r_in[i]);
            converters[i]->input_G(g_in[i]);
            converters[i]->input_B(b_in[i]);
            converters[i]->output_Y(y_out[i]);
            converters[i]->output_Cb(cb_out[i]);
            converters[i]->output_Cr(cr_out[i]);
        }
    }

    ~rgb2ycbcr_container() {
        // Free the dynamically allocated converters
        for (int i = 0; i < num_pixels; i++) {
            delete converters[i];
        }
    }
};

// Alternate implementation with packed arrays
template<typename T = int, int fracBits = 16, int fixed_point_length = 32, int num_pixels = 64, int input_width = 8>
SC_MODULE(rgb2ycbcr_container_packed) {
    // Input ports for packed arrays
    sc_in<bool> clk;
    sc_in<sc_bv<input_width * num_pixels>> r_all;
    sc_in<sc_bv<input_width * num_pixels>> g_all;
    sc_in<sc_bv<input_width * num_pixels>> b_all;

    // Output ports for packed arrays
    sc_out<sc_bv<fixed_point_length * num_pixels>> y_all;
    sc_out<sc_bv<fixed_point_length * num_pixels>> cb_all;
    sc_out<sc_bv<fixed_point_length * num_pixels>> cr_all;

    // Individual ports for internal connections
    sc_signal<sc_uint<input_width>> r_sig[num_pixels];
    sc_signal<sc_uint<input_width>> g_sig[num_pixels];
    sc_signal<sc_uint<input_width>> b_sig[num_pixels];

    sc_signal<sc_uint<fixed_point_length>> y_sig[num_pixels];
    sc_signal<sc_uint<fixed_point_length>> cb_sig[num_pixels];
    sc_signal<sc_uint<fixed_point_length>> cr_sig[num_pixels];

    // Array of conversion modules
    conversion<T, fracBits, fixed_point_length, input_width>* converters[num_pixels];

    void unpack_inputs() {
        // Unpack the input bit vectors into individual signals
        for (int i = 0; i < num_pixels; i++) {
            sc_uint<input_width> r_val;
            sc_uint<input_width> g_val;
            sc_uint<input_width> b_val;

            for (int j = 0; j < input_width; j++) {
                // Convert sc_bit to bool and then assign to sc_uint_bitref
                r_val[j] = r_all.read()[(i * input_width) + j].to_bool();
                g_val[j] = g_all.read()[(i * input_width) + j].to_bool();
                b_val[j] = b_all.read()[(i * input_width) + j].to_bool();
            }

            r_sig[i].write(r_val);
            g_sig[i].write(g_val);
            b_sig[i].write(b_val);
        }
    }

    void pack_outputs() {
        // Pack the individual output signals into output bit vectors
        sc_bv<fixed_point_length * num_pixels> y_packed;
        sc_bv<fixed_point_length * num_pixels> cb_packed;
        sc_bv<fixed_point_length * num_pixels> cr_packed;

        for (int i = 0; i < num_pixels; i++) {
            sc_uint<fixed_point_length> y_val = y_sig[i].read();
            sc_uint<fixed_point_length> cb_val = cb_sig[i].read();
            sc_uint<fixed_point_length> cr_val = cr_sig[i].read();

            for (int j = 0; j < fixed_point_length; j++) {
                // Convert sc_uint_bitref to bool before assigning to sc_bitref
                y_packed[(i * fixed_point_length) + j] = (y_val[j] == 1);
                cb_packed[(i * fixed_point_length) + j] = (cb_val[j] == 1);
                cr_packed[(i * fixed_point_length) + j] = (cr_val[j] == 1);
            }
        }

        y_all.write(y_packed);
        cb_all.write(cb_packed);
        cr_all.write(cr_packed);
    }

    SC_CTOR(rgb2ycbcr_container_packed) {
        // Instantiate num_pixels converters
        for (int i = 0; i < num_pixels; i++) {
            char name[20];
            sprintf(name, "converter_%d", i);

            converters[i] = new conversion<T, fracBits, fixed_point_length, input_width>(name);

            // Connect ports
            converters[i]->clk(clk);
            converters[i]->input_R(r_sig[i]);
            converters[i]->input_G(g_sig[i]);
            converters[i]->input_B(b_sig[i]);
            converters[i]->output_Y(y_sig[i]);
            converters[i]->output_Cb(cb_sig[i]);
            converters[i]->output_Cr(cr_sig[i]);
        }

        SC_METHOD(unpack_inputs);
        sensitive << r_all << g_all << b_all;

        SC_METHOD(pack_outputs);
        for (int i = 0; i < num_pixels; i++) {
            sensitive << y_sig[i] << cb_sig[i] << cr_sig[i];
        }
    }

    ~rgb2ycbcr_container_packed() {
        // Free the dynamically allocated converters
        for (int i = 0; i < num_pixels; i++) {
            delete converters[i];
        }
    }
};