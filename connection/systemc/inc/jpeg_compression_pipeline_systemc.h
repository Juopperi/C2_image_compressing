#ifndef JPEG_COMPRESSION_PIPELINE_SYSTEMC_H
#define JPEG_COMPRESSION_PIPELINE_SYSTEMC_H

#include <systemc.h>
#include <iomanip>  // for setw, setfill
#include <systemc.h>
#include "fixed_point.h"
#include "rgb2ycbcr_systemc.h"
#include "dct_systemc.h"
#include "quantization_systemc.h"
#include "zigzag_systemc.h"

// Forward declare the FixedPoint class if it's not already included
template<typename T, int fracBits>
class FixedPoint;

// Debug mode definition
#define DEBUG_MODE_NONE 0
#define DEBUG_MODE_MINIMAL 1
#define DEBUG_MODE_VERBOSE 2
#define DEBUG_MODE_FULL 3

// Map pipeline debug modes to DCT debug modes
#define MAP_TO_DCT_DEBUG(mode) ((mode) == DEBUG_MODE_FULL ? DCT_DEBUG_FULL : \
                                (mode) == DEBUG_MODE_VERBOSE ? DCT_DEBUG_VERBOSE : \
                                (mode) == DEBUG_MODE_MINIMAL ? DCT_DEBUG_MINIMAL : DCT_DEBUG_NONE)

// JPEG compression pipeline with debug capabilities
template<typename T = int32_t, int fracBits = 16, int DATA_WIDTH = sizeof(T)*8, int INPUT_WIDTH = 8, int PIXEL_COUNT = 64, int DEBUG_MODE = DEBUG_MODE_MINIMAL>
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
    
    // Debug output signals for intermediate values
    sc_out<sc_int<DATA_WIDTH>> debug_y_raw[PIXEL_COUNT];
    sc_out<sc_int<DATA_WIDTH>> debug_cb_raw[PIXEL_COUNT];
    sc_out<sc_int<DATA_WIDTH>> debug_cr_raw[PIXEL_COUNT];
    
    sc_out<sc_int<DATA_WIDTH>> debug_y_dct[PIXEL_COUNT];
    sc_out<sc_int<DATA_WIDTH>> debug_cb_dct[PIXEL_COUNT];
    sc_out<sc_int<DATA_WIDTH>> debug_cr_dct[PIXEL_COUNT];
    
    sc_out<sc_int<DATA_WIDTH>> debug_y_quant[PIXEL_COUNT];
    sc_out<sc_int<DATA_WIDTH>> debug_cb_quant[PIXEL_COUNT];
    sc_out<sc_int<DATA_WIDTH>> debug_cr_quant[PIXEL_COUNT];
    
    // Internal signals for RGB to YCbCr
    sc_signal<sc_uint<INPUT_WIDTH>> r_signals[PIXEL_COUNT];
    sc_signal<sc_uint<INPUT_WIDTH>> g_signals[PIXEL_COUNT];
    sc_signal<sc_uint<INPUT_WIDTH>> b_signals[PIXEL_COUNT];
    
    sc_signal<sc_int<DATA_WIDTH>> y_raw[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cb_raw[PIXEL_COUNT];
    sc_signal<sc_int<DATA_WIDTH>> cr_raw[PIXEL_COUNT];
    
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

    // Debug log counter
    sc_signal<sc_uint<32>> debug_cycle_counter;

    // Submodules - using fixed RGB to YCbCr conversion
    rgb2ycbcr_container_fixed<T, fracBits, DATA_WIDTH, PIXEL_COUNT, INPUT_WIDTH>* rgb2ycbcr_inst;
    dct_2d_8x8<T, fracBits, DATA_WIDTH, 8, MAP_TO_DCT_DEBUG(DEBUG_MODE)>* dct_y_inst;
    dct_2d_8x8<T, fracBits, DATA_WIDTH, 8, MAP_TO_DCT_DEBUG(DEBUG_MODE)>* dct_cb_inst;
    dct_2d_8x8<T, fracBits, DATA_WIDTH, 8, MAP_TO_DCT_DEBUG(DEBUG_MODE)>* dct_cr_inst;
    quantize_block<T, fracBits, DATA_WIDTH, true>* quant_y_inst;
    quantize_block<T, fracBits, DATA_WIDTH, false>* quant_cb_inst;
    quantize_block<T, fracBits, DATA_WIDTH, false>* quant_cr_inst;
    zigzag_reorder<T, DATA_WIDTH>* zigzag_y_inst;
    zigzag_reorder<T, DATA_WIDTH>* zigzag_cb_inst;
    zigzag_reorder<T, DATA_WIDTH>* zigzag_cr_inst;

    // Helper method to convert fixed-point value to decimal for debugging
    double fixed_to_double(T fixed_val) {
        // Create a FixedPoint object and convert to double
        return FixedPoint<T, fracBits>::fromRaw(fixed_val).toDouble();
    }

    // Utility to print a matrix for debug
    void print_matrix_debug(const char* name, sc_signal<sc_int<DATA_WIDTH>>* matrix, bool print_fixed = true) {
        std::cout << "=== " << name << " Matrix ===" << std::endl;
        
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                int idx = row * 8 + col;
                T val = matrix[idx].read();
                
                if (print_fixed) {
                    // Print both hex and decimal float value
                    std::cout << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                              << val << std::dec << "(" 
                              << fixed_to_double(val) << ") ";
                } else {
                    // Print just the hex value
                    std::cout << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                              << val << std::dec << " ";
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    // Debug method to print RGB/YCbCr signal values
    void debug_print_color_values() {
        if (DEBUG_MODE >= DEBUG_MODE_VERBOSE) {
            std::cout << "=== Cycle " << debug_cycle_counter.read() << " - Color Conversion Debug ===" << std::endl;
            
            // Print sample of input RGB values
            std::cout << "Sample RGB values (First 4 pixels):" << std::endl;
            for (int i = 0; i < 4; i++) {
                std::cout << "Pixel[" << i << "]: R=" << r_signals[i].read() 
                          << " G=" << g_signals[i].read() 
                          << " B=" << b_signals[i].read() << std::endl;
            }
            
            // Print sample of output YCbCr values
            std::cout << "Sample YCbCr values (First 4 pixels):" << std::endl;
            for (int i = 0; i < 4; i++) {
                std::cout << "Pixel[" << i << "]: Y=" << std::hex << y_raw[i].read() 
                          << "(" << fixed_to_double(y_raw[i].read()) << ") "
                          << " Cb=" << cb_raw[i].read() 
                          << "(" << fixed_to_double(cb_raw[i].read()) << ") "
                          << " Cr=" << cr_raw[i].read() 
                          << "(" << fixed_to_double(cr_raw[i].read()) << ")" 
                          << std::dec << std::endl;
            }
            
            std::cout << std::endl;
        }
    }

    // Debug method to print DCT values
    void debug_print_dct_values() {
        if (DEBUG_MODE >= DEBUG_MODE_VERBOSE) {
            std::cout << "=== Cycle " << debug_cycle_counter.read() << " - DCT Stage Debug ===" << std::endl;
            
            if (DEBUG_MODE == DEBUG_MODE_FULL) {
                // Print Y-channel DCT matrix in full debug mode
                print_matrix_debug("Y-DCT", y_dct_out);
                print_matrix_debug("Cb-DCT", cb_dct_out);
                print_matrix_debug("Cr-DCT", cr_dct_out);
            } else {
                // Print just corner values in verbose mode
                std::cout << "Y-DCT Corner Values:" << std::endl;
                std::cout << "DCT[0,0]: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_dct_out[0].read() << std::dec << "(" 
                          << fixed_to_double(y_dct_out[0].read()) << ")" << std::endl;
                std::cout << "DCT[0,7]: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_dct_out[7].read() << std::dec << "(" 
                          << fixed_to_double(y_dct_out[7].read()) << ")" << std::endl;
                std::cout << "DCT[7,0]: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_dct_out[56].read() << std::dec << "(" 
                          << fixed_to_double(y_dct_out[56].read()) << ")" << std::endl;
                std::cout << "DCT[7,7]: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_dct_out[63].read() << std::dec << "(" 
                          << fixed_to_double(y_dct_out[63].read()) << ")" << std::endl;
                
                std::cout << std::endl;
            }
        }
    }

    // Debug method to print quantization values
    void debug_print_quant_values() {
        if (DEBUG_MODE >= DEBUG_MODE_VERBOSE) {
            std::cout << "=== Cycle " << debug_cycle_counter.read() << " - Quantization Stage Debug ===" << std::endl;
            
            if (DEBUG_MODE == DEBUG_MODE_FULL) {
                // Print quantized matrices in full debug mode
                print_matrix_debug("Y-Quant", y_quant_out);
                print_matrix_debug("Cb-Quant", cb_quant_out);
                print_matrix_debug("Cr-Quant", cr_quant_out);
            } else {
                // Print DC coefficient and some AC coefficients
                std::cout << "Y-Quant Coefficients:" << std::endl;
                std::cout << "DC: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_quant_out[0].read() << std::dec << std::endl;
                std::cout << "AC[1]: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_quant_out[1].read() << std::dec << std::endl;
                std::cout << "AC[8]: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_quant_out[8].read() << std::dec << std::endl;
                std::cout << "AC[63]: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_quant_out[63].read() << std::dec << std::endl;
                
                std::cout << std::endl;
            }
        }
    }

    // Debug method to print zigzag values
    void debug_print_zigzag_values() {
        if (DEBUG_MODE >= DEBUG_MODE_MINIMAL) {
            std::cout << "=== Cycle " << debug_cycle_counter.read() << " - Zigzag Stage Debug ===" << std::endl;
            
            if (DEBUG_MODE >= DEBUG_MODE_VERBOSE) {
                // Print first 16 zigzag values in verbose mode
                std::cout << "Y-Zigzag First 16 Coefficients:" << std::endl;
                for (int i = 0; i < 16; i++) {
                    std::cout << "Z[" << i << "]: " << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                              << y_zigzag_out[i].read() << std::dec << " ";
                    
                    if ((i + 1) % 4 == 0) {
                        std::cout << std::endl;
                    }
                }
            } else {
                // Print just a minimal summary in minimal mode
                std::cout << "Y-Zigzag: DC=" << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << y_zigzag_out[0].read() << std::dec << std::endl;
                std::cout << "Cb-Zigzag: DC=" << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << cb_zigzag_out[0].read() << std::dec << std::endl;
                std::cout << "Cr-Zigzag: DC=" << std::hex << "0x" << std::setw(8) << std::setfill('0') 
                          << cr_zigzag_out[0].read() << std::dec << std::endl;
            }
            
            std::cout << std::endl;
        }
    }

    // Debug cycle counter update
    void update_debug_cycle() {
        if (!reset_n.read()) {
            debug_cycle_counter.write(0);
        } else {
            debug_cycle_counter.write(debug_cycle_counter.read() + 1);
        }
        
        // Print cycle marker in full debug mode
        if (DEBUG_MODE == DEBUG_MODE_FULL) {
            std::cout << "======== Debug Cycle " << debug_cycle_counter.read() << " ========" << std::endl;
        }
    }

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
        
        // Debug print after unpacking
        if (DEBUG_MODE >= DEBUG_MODE_FULL) {
            std::cout << "=== Input Unpack Debug ===" << std::endl;
            for (int i = 0; i < 4; i++) {  // Just show first 4 pixels
                std::cout << "Unpacked RGB[" << i << "]: R=" 
                          << r_signals[i].read() << " G=" 
                          << g_signals[i].read() << " B=" 
                          << b_signals[i].read() << std::endl;
            }
            std::cout << std::endl;
        }
    }

    void convert_for_dct() {
        // Convert from sc_int to sc_int for DCT processing
        for (int i = 0; i < PIXEL_COUNT; i++) {
            // Center Y, Cb, Cr around zero for DCT
            y_dct_in[i].write(y_raw[i].read() - 128);
            cb_dct_in[i].write(cb_raw[i].read() - 128);
            cr_dct_in[i].write(cr_raw[i].read() - 128);
        }
        
        // Debug print after conversion preparation for DCT
        if (DEBUG_MODE >= DEBUG_MODE_FULL) {
            std::cout << "=== DCT Input Preparation Debug ===" << std::endl;
            for (int i = 0; i < 4; i++) {  // Just show first 4 pixels
                std::cout << "DCT Input[" << i << "]: Y=" 
                          << y_dct_in[i].read() << " Cb=" 
                          << cb_dct_in[i].read() << " Cr=" 
                          << cr_dct_in[i].read() << std::endl;
            }
            std::cout << std::endl;
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
        
        // Debug print after packing output
        if (DEBUG_MODE >= DEBUG_MODE_FULL) {
            std::cout << "=== Output Pack Debug ===" << std::endl;
            std::cout << "Y Packed: First 32 bits = 0x" 
                      << std::hex << y_packed.to_uint64() << std::dec << std::endl;
            std::cout << "Cb Packed: First 32 bits = 0x" 
                      << std::hex << cb_packed.to_uint64() << std::dec << std::endl;
            std::cout << "Cr Packed: First 32 bits = 0x" 
                      << std::hex << cr_packed.to_uint64() << std::dec << std::endl;
            std::cout << std::endl;
        }
    }

    void init_dct_coeffs() {
        // Initialize DCT coefficients with actual values
        for (int i = 0; i < PIXEL_COUNT; i++) {
            if (i < 8) {
                dct_coeffs[i].write(0x00001000); // First row DCT coefficients
            } else if (i < 16) {
                dct_coeffs[i].write(0x00001555); // Second row DCT coefficients
            } else {
                dct_coeffs[i].write(0x00001000); // Other DCT coefficients
            }
        }
        
        // Debug print after coefficient initialization
        if (DEBUG_MODE >= DEBUG_MODE_FULL) {
            std::cout << "=== DCT Coefficient Init Debug ===" << std::endl;
            for (int i = 0; i < 8; i++) {  // Just show first row
                std::cout << "DCT Coeff[" << i << "]: 0x" 
                          << std::hex << dct_coeffs[i].read() << std::dec << std::endl;
            }
            std::cout << std::endl;
        }
    }

    void update_debug_signals() {
        // Copy intermediate signals to debug output ports
        for (int i = 0; i < PIXEL_COUNT; i++) {
            // YCbCr raw values
            debug_y_raw[i].write(y_raw[i].read());
            debug_cb_raw[i].write(cb_raw[i].read());
            debug_cr_raw[i].write(cr_raw[i].read());
            
            // DCT output values
            debug_y_dct[i].write(y_dct_out[i].read());
            debug_cb_dct[i].write(cb_dct_out[i].read());
            debug_cr_dct[i].write(cr_dct_out[i].read());
            
            // Quantized values
            debug_y_quant[i].write(y_quant_out[i].read());
            debug_cb_quant[i].write(cb_quant_out[i].read());
            debug_cr_quant[i].write(cr_quant_out[i].read());
        }
    }

    SC_CTOR(jpeg_compression_pipeline) {
        // Initialize debug cycle counter
        debug_cycle_counter.write(0);
        
        // Print debug header
        if (DEBUG_MODE > DEBUG_MODE_NONE) {
            std::cout << "\n========================================" << std::endl;
            std::cout << "JPEG Compression Pipeline - Debug Mode " << DEBUG_MODE << std::endl;
            std::cout << "========================================\n" << std::endl;
        }
        
        // RGB to YCbCr conversion with fixed formulas
        rgb2ycbcr_inst = new rgb2ycbcr_container_fixed<T, fracBits, DATA_WIDTH, PIXEL_COUNT, INPUT_WIDTH>("rgb2ycbcr_fixed");
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
        dct_y_inst = new dct_2d_8x8<T, fracBits, DATA_WIDTH, 8, MAP_TO_DCT_DEBUG(DEBUG_MODE)>("dct_y");
        dct_y_inst->clk(clk);
        dct_y_inst->reset_n(reset_n);
        
        // Connect Y channel inputs and coefficients
        for (int i = 0; i < PIXEL_COUNT; i++) {
            dct_y_inst->data_in_matrix[i](y_dct_in[i]);
            dct_y_inst->data_out_matrix[i](y_dct_out[i]);
            dct_y_inst->dct_coeffs[i](dct_coeffs[i]);
        }

        // DCT processing for Cb channel
        dct_cb_inst = new dct_2d_8x8<T, fracBits, DATA_WIDTH, 8, MAP_TO_DCT_DEBUG(DEBUG_MODE)>("dct_cb");
        dct_cb_inst->clk(clk);
        dct_cb_inst->reset_n(reset_n);
        
        // Connect Cb channel inputs and coefficients
        for (int i = 0; i < PIXEL_COUNT; i++) {
            dct_cb_inst->data_in_matrix[i](cb_dct_in[i]);
            dct_cb_inst->data_out_matrix[i](cb_dct_out[i]);
            dct_cb_inst->dct_coeffs[i](dct_coeffs[i]);
        }

        // DCT processing for Cr channel
        dct_cr_inst = new dct_2d_8x8<T, fracBits, DATA_WIDTH, 8, MAP_TO_DCT_DEBUG(DEBUG_MODE)>("dct_cr");
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
        
        // Method to update debug signals
        SC_METHOD(update_debug_signals);
        sensitive << clk.pos();
        for (int i = 0; i < PIXEL_COUNT; i++) {
            sensitive << y_raw[i] << cb_raw[i] << cr_raw[i];
            sensitive << y_dct_out[i] << cb_dct_out[i] << cr_dct_out[i];
            sensitive << y_quant_out[i] << cb_quant_out[i] << cr_quant_out[i];
        }
        
        // Debug methods
        SC_METHOD(update_debug_cycle);
        sensitive << clk.pos();
        reset_signal_is(reset_n, false);
        
        if (DEBUG_MODE >= DEBUG_MODE_MINIMAL) {
            SC_METHOD(debug_print_color_values);
            sensitive << clk.pos();
            
            SC_METHOD(debug_print_dct_values);
            sensitive << clk.pos();
            
            SC_METHOD(debug_print_quant_values);
            sensitive << clk.pos();
            
            SC_METHOD(debug_print_zigzag_values);
            sensitive << clk.pos();
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
        
        // Print debug footer
        if (DEBUG_MODE > DEBUG_MODE_NONE) {
            std::cout << "\n========================================" << std::endl;
            std::cout << "JPEG Compression Pipeline - Debug Complete" << std::endl;
            std::cout << "========================================\n" << std::endl;
        }
    }
};

#endif // JPEG_COMPRESSION_PIPELINE_SYSTEMC_H