#ifndef JPEG_COMPRESSION_PIPELINE_SYSTEMC_H
#define JPEG_COMPRESSION_PIPELINE_SYSTEMC_H

#include <systemc.h>
#include "rgb2ycbcr_systemc.h"
#include "dct_systemc.h"
#include "quantization_systemc.h"
#include "zigzag_systemc.h"

// JPEG compression pipeline for 8x8 blocks
template<typename T = int32_t, int fracBits = 16, int DATA_WIDTH = sizeof(T)*8, int INPUT_WIDTH = 8, int PIXEL_COUNT = 64>
SC_MODULE(jpeg_compression_pipeline) {
    // Input ports
    sc_in<bool> clk;
    sc_in<bool> reset_n;
    
    // Packed RGB input signals
    sc_in<sc_bv<INPUT_WIDTH * PIXEL_COUNT>> r_all;
    sc_in<sc_bv<INPUT_WIDTH * PIXEL_COUNT>> g_all;
    sc_in<sc_bv<INPUT_WIDTH * PIXEL_COUNT>> b_all;
    
    // Packed YCbCr zigzag output signals
    sc_out<sc_bv<DATA_WIDTH * PIXEL_COUNT>> y_zigzag;
    sc_out<sc_bv<DATA_WIDTH * PIXEL_COUNT>> cb_zigzag;
    sc_out<sc_bv<DATA_WIDTH * PIXEL_COUNT>> cr_zigzag;

    // Internal signals for RGB to YCbCr
    sc_signal<sc_uint<INPUT_WIDTH>> r_signals[PIXEL_COUNT];
    sc_signal<sc_uint<INPUT_WIDTH>> g_signals[PIXEL_COUNT];
    sc_signal<sc_uint<INPUT_WIDTH>> b_signals[PIXEL_COUNT];
    
    sc_signal<sc_uint<DATA_WIDTH>> y_raw[PIXEL_COUNT];
    sc_signal<sc_uint<DATA_WIDTH>> cb_raw[PIXEL_COUNT];
    sc_signal<sc_uint<DATA_WIDTH>> cr_raw[PIXEL_COUNT];
    
    // Internal signals for DCT
    sc_signal<sc_int<DATA_WIDTH>> y_dct_in[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cb_dct_in[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cr_dct_in[PIXEL_COUNT];
    
    sc_signal<sc_int<DATA_WIDTH>> y_dct_out[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cb_dct_out[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cr_dct_out[PIXEL_COUNT];
    
    // Internal signals for quantization
    sc_signal<sc_int<DATA_WIDTH>> y_quant_out[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cb_quant_out[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cr_quant_out[PIXEL_COUNT];
    
    // Internal signals for zigzag reordering
    sc_signal<sc_int<DATA_WIDTH>> y_zigzag_out[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cb_zigzag_out[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cr_zigzag_out[PIXEL_COUNT];
    
    // DCT coefficient array signals
    sc_signal<sc_int<DATA_WIDTH>> dct_coeffs[PIXEL_COUNT];

    // Submodules
    rgb2ycbcr_container<T, fracBits, DATA_WIDTH, PIXEL_COUNT, INPUT_WIDTH>* rgb2ycbcr_inst;
    dct_2d_8x8<T, fracBits, DATA_WIDTH>* dct_y_inst;
    dct_2d_8x8<T, fracBits, DATA_WIDTH>* dct_cb_inst;
    dct_2d_8x8<T, fracBits, DATA_WIDTH>* dct_cr_inst;
    quantize_block<T, fracBits, DATA_WIDTH, true>* quant_y_inst;
    quantize_block<T, fracBits, DATA_WIDTH, false>* quant_cb_inst;
    quantize_block<T, fracBits, DATA_WIDTH, false>* quant_cr_inst;
    zigzag_reorder<T, DATA_WIDTH>* zigzag_y_inst;
    zigzag_reorder<T, DATA_WIDTH>* zigzag_cb_inst;
    zigzag_reorder<T, DATA_WIDTH>* zigzag_cr_inst;

    // Helper methods
    void unpack_inputs() {
        // Unpack the input bit vectors into individual signals
        for (int i = 0; i < PIXEL_COUNT; i++) {
            sc_uint<INPUT_WIDTH> r_val = 0;
            sc_uint<INPUT_WIDTH> g_val = 0;
            sc_uint<INPUT_WIDTH> b_val = 0;

            for (int j = 0; j < INPUT_WIDTH; j++) {
                r_val[j] = r_all.read()[(i * INPUT_WIDTH) + j].to_bool();
                g_val[j] = g_all.read()[(i * INPUT_WIDTH) + j].to_bool();
                b_val[j] = b_all.read()[(i * INPUT_WIDTH) + j].to_bool();
            }

            r_signals[i].write(r_val);
            g_signals[i].write(g_val);
            b_signals[i].write(b_val);
        }
    }

    void convert_for_dct() {
        // Convert from sc_uint to sc_int for DCT processing
        for (int i = 0; i < PIXEL_COUNT; i++) {
            y_dct_in[i].write(static_cast<int32_t>(y_raw[i].read()));
            cb_dct_in[i].write(static_cast<int32_t>(cb_raw[i].read()));
            cr_dct_in[i].write(static_cast<int32_t>(cr_raw[i].read()));
        }
    }

    void pack_outputs() {
        // Pack the individual zigzag outputs into output bit vectors
        sc_bv<DATA_WIDTH * PIXEL_COUNT> y_packed;
        sc_bv<DATA_WIDTH * PIXEL_COUNT> cb_packed;
        sc_bv<DATA_WIDTH * PIXEL_COUNT> cr_packed;

        for (int i = 0; i < PIXEL_COUNT; i++) {
            sc_int<DATA_WIDTH> y_val = y_zigzag_out[i].read();
            sc_int<DATA_WIDTH> cb_val = cb_zigzag_out[i].read();
            sc_int<DATA_WIDTH> cr_val = cr_zigzag_out[i].read();

            for (int j = 0; j < DATA_WIDTH; j++) {
                y_packed[(i * DATA_WIDTH) + j] = y_val[j].to_bool();
                cb_packed[(i * DATA_WIDTH) + j] = cb_val[j].to_bool();
                cr_packed[(i * DATA_WIDTH) + j] = cr_val[j].to_bool();
            }
        }

        y_zigzag.write(y_packed);
        cb_zigzag.write(cb_packed);
        cr_zigzag.write(cr_packed);
    }

    void init_dct_coeffs() {
        // Initialize DCT coefficients
        // In a real implementation, these would be loaded from the DCT coefficient tables
        // For simplicity, we'll use a placeholder initialization here
        for (int i = 0; i < PIXEL_COUNT; i++) {
            dct_coeffs[i].write(0); // Placeholder, should be actual DCT coefficients
        }
    }

    SC_CTOR(jpeg_compression_pipeline) {
        // RGB to YCbCr conversion
        rgb2ycbcr_inst = new rgb2ycbcr_container<T, fracBits, DATA_WIDTH, PIXEL_COUNT, INPUT_WIDTH>("rgb2ycbcr");
        rgb2ycbcr_inst->clk(clk);
        
        // Connect RGB inputs
        for (int i = 0; i < PIXEL_COUNT; i++) {
            rgb2ycbcr_inst->r_in[i](r_signals[i]);
            rgb2ycbcr_inst->g_in[i](g_signals[i]);
            rgb2ycbcr_inst->b_in[i](b_signals[i]);
            
            // Connect YCbCr outputs
            rgb2ycbcr_inst->y_out[i](y_raw[i]);
            rgb2ycbcr_inst->cb_out[i](cb_raw[i]);
            rgb2ycbcr_inst->cr_out[i](cr_raw[i]);
        }

        // DCT processing for Y channel
        dct_y_inst = new dct_2d_8x8<T, fracBits, DATA_WIDTH>("dct_y");
        dct_y_inst->clk(clk);
        dct_y_inst->reset_n(reset_n);
        
        // Connect Y channel inputs and coefficients
        for (int i = 0; i < PIXEL_COUNT; i++) {
            dct_y_inst->data_in_matrix[i](y_dct_in[i]);
            dct_y_inst->data_out_matrix[i](y_dct_out[i]);
            dct_y_inst->dct_coeffs[i](dct_coeffs[i]);
        }

        // DCT processing for Cb channel
        dct_cb_inst = new dct_2d_8x8<T, fracBits, DATA_WIDTH>("dct_cb");
        dct_cb_inst->clk(clk);
        dct_cb_inst->reset_n(reset_n);
        
        // Connect Cb channel inputs and coefficients
        for (int i = 0; i < PIXEL_COUNT; i++) {
            dct_cb_inst->data_in_matrix[i](cb_dct_in[i]);
            dct_cb_inst->data_out_matrix[i](cb_dct_out[i]);
            dct_cb_inst->dct_coeffs[i](dct_coeffs[i]);
        }

        // DCT processing for Cr channel
        dct_cr_inst = new dct_2d_8x8<T, fracBits, DATA_WIDTH>("dct_cr");
        dct_cr_inst->clk(clk);
        dct_cr_inst->reset_n(reset_n);
        
        // Connect Cr channel inputs and coefficients
        for (int i = 0; i < PIXEL_COUNT; i++) {
            dct_cr_inst->data_in_matrix[i](cr_dct_in[i]);
            dct_cr_inst->data_out_matrix[i](cr_dct_out[i]);
            dct_cr_inst->dct_coeffs[i](dct_coeffs[i]);
        }

        // Quantization for Y channel
        quant_y_inst = new quantize_block<T, fracBits, DATA_WIDTH, true>("quant_y");
        quant_y_inst->clk(clk);
        
        // Connect Y channel inputs and outputs
        for (int i = 0; i < PIXEL_COUNT; i++) {
            quant_y_inst->pixels[i](y_dct_out[i]);
            quant_y_inst->q_result[i](y_quant_out[i]);
        }

        // Quantization for Cb channel
        quant_cb_inst = new quantize_block<T, fracBits, DATA_WIDTH, false>("quant_cb");
        quant_cb_inst->clk(clk);
        
        // Connect Cb channel inputs and outputs
        for (int i = 0; i < PIXEL_COUNT; i++) {
            quant_cb_inst->pixels[i](cb_dct_out[i]);
            quant_cb_inst->q_result[i](cb_quant_out[i]);
        }

        // Quantization for Cr channel
        quant_cr_inst = new quantize_block<T, fracBits, DATA_WIDTH, false>("quant_cr");
        quant_cr_inst->clk(clk);
        
        // Connect Cr channel inputs and outputs
        for (int i = 0; i < PIXEL_COUNT; i++) {
            quant_cr_inst->pixels[i](cr_dct_out[i]);
            quant_cr_inst->q_result[i](cr_quant_out[i]);
        }

        // Zigzag reordering for Y channel
        zigzag_y_inst = new zigzag_reorder<T, DATA_WIDTH>("zigzag_y");
        zigzag_y_inst->clk(clk);
        
        // Connect Y channel inputs and outputs
        for (int i = 0; i < PIXEL_COUNT; i++) {
            zigzag_y_inst->input_matrix[i](y_quant_out[i]);
            zigzag_y_inst->zigzag_out[i](y_zigzag_out[i]);
        }

        // Zigzag reordering for Cb channel
        zigzag_cb_inst = new zigzag_reorder<T, DATA_WIDTH>("zigzag_cb");
        zigzag_cb_inst->clk(clk);
        
        // Connect Cb channel inputs and outputs
        for (int i = 0; i < PIXEL_COUNT; i++) {
            zigzag_cb_inst->input_matrix[i](cb_quant_out[i]);
            zigzag_cb_inst->zigzag_out[i](cb_zigzag_out[i]);
        }

        // Zigzag reordering for Cr channel
        zigzag_cr_inst = new zigzag_reorder<T, DATA_WIDTH>("zigzag_cr");
        zigzag_cr_inst->clk(clk);
        
        // Connect Cr channel inputs and outputs
        for (int i = 0; i < PIXEL_COUNT; i++) {
            zigzag_cr_inst->input_matrix[i](cr_quant_out[i]);
            zigzag_cr_inst->zigzag_out[i](cr_zigzag_out[i]);
        }

        // Register methods
        SC_METHOD(unpack_inputs);
        sensitive << r_all << g_all << b_all;

        SC_METHOD(convert_for_dct);
        for (int i = 0; i < PIXEL_COUNT; i++) {
            sensitive << y_raw[i] << cb_raw[i] << cr_raw[i];
        }

        SC_METHOD(init_dct_coeffs);
        sensitive << reset_n.pos();

        SC_METHOD(pack_outputs);
        for (int i = 0; i < PIXEL_COUNT; i++) {
            sensitive << y_zigzag_out[i] << cb_zigzag_out[i] << cr_zigzag_out[i];
        }
    }

    ~jpeg_compression_pipeline() {
        delete rgb2ycbcr_inst;
        delete dct_y_inst;
        delete dct_cb_inst;
        delete dct_cr_inst;
        delete quant_y_inst;
        delete quant_cb_inst;
        delete quant_cr_inst;
        delete zigzag_y_inst;
        delete zigzag_cb_inst;
        delete zigzag_cr_inst;
    }
};

#endif // JPEG_COMPRESSION_PIPELINE_SYSTEMC_H