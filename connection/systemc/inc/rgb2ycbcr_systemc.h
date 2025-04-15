#ifndef RGB2YCBCR_SYSTEMC_FIXED_H
#define RGB2YCBCR_SYSTEMC_FIXED_H

#include <systemc.h>
#include "fixed_point.h"

// Debug enable flag for RGB to YCbCr
#define RGB2YCBCR_DEBUG 0

// Conversion module for RGB to YCbCr transformation with fixed-point math
template<typename T = int, int fracBits = 16, int fixed_point_length = 32, int input_width = 8>
SC_MODULE(conversion_fixed) {
    // Input ports
    sc_in<sc_uint<input_width>> input_R;
    sc_in<sc_uint<input_width>> input_G;
    sc_in<sc_uint<input_width>> input_B;
    sc_in<bool> clk;

    // Output ports - changed from sc_uint to sc_int to match calculation results
    sc_out<sc_int<fixed_point_length>> output_Y;
    sc_out<sc_int<fixed_point_length>> output_Cb;
    sc_out<sc_int<fixed_point_length>> output_Cr;

    // Constants for RGB to YCbCr conversion (scaled by 2^fracBits)
    // Y = 0.299R + 0.587G + 0.114B
    // Cb = -0.1687R - 0.3313G + 0.5B + 128
    // Cr = 0.5R - 0.4187G - 0.0813B + 128
    
    const T Y_R_COEFF  = static_cast<T>(0.299 * (1 << fracBits));
    const T Y_G_COEFF  = static_cast<T>(0.587 * (1 << fracBits));
    const T Y_B_COEFF  = static_cast<T>(0.114 * (1 << fracBits));
    
    const T CB_R_COEFF = static_cast<T>(-0.1687 * (1 << fracBits));
    const T CB_G_COEFF = static_cast<T>(-0.3313 * (1 << fracBits));
    const T CB_B_COEFF = static_cast<T>(0.5 * (1 << fracBits));
    
    const T CR_R_COEFF = static_cast<T>(0.5 * (1 << fracBits));
    const T CR_G_COEFF = static_cast<T>(-0.4187 * (1 << fracBits));
    const T CR_B_COEFF = static_cast<T>(-0.0813 * (1 << fracBits));
    
    const T OFFSET_128 = static_cast<T>(128 << fracBits);

    // Internal signals for fixed-point multiplier and adder
    sc_signal<sc_int<fixed_point_length>> r_fixed_sig;
    sc_signal<sc_int<fixed_point_length>> g_fixed_sig;
    sc_signal<sc_int<fixed_point_length>> b_fixed_sig;
    
    // Coefficient signals
    sc_signal<sc_int<fixed_point_length>> y_r_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> y_g_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> y_b_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> cb_r_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> cb_g_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> cb_b_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> cr_r_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> cr_g_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> cr_b_coeff_sig;
    sc_signal<sc_int<fixed_point_length>> offset_128_sig;
    
    // Multiplication result signals
    sc_signal<sc_int<fixed_point_length>> y_r_mult_res;
    sc_signal<sc_int<fixed_point_length>> y_g_mult_res;
    sc_signal<sc_int<fixed_point_length>> y_b_mult_res;
    sc_signal<sc_int<fixed_point_length>> cb_r_mult_res;
    sc_signal<sc_int<fixed_point_length>> cb_g_mult_res;
    sc_signal<sc_int<fixed_point_length>> cb_b_mult_res;
    sc_signal<sc_int<fixed_point_length>> cr_r_mult_res;
    sc_signal<sc_int<fixed_point_length>> cr_g_mult_res;
    sc_signal<sc_int<fixed_point_length>> cr_b_mult_res;
    
    // Addition result signals
    sc_signal<sc_int<fixed_point_length>> y_rg_add_res;
    sc_signal<sc_int<fixed_point_length>> y_final_res;
    sc_signal<sc_int<fixed_point_length>> cb_rg_add_res;
    sc_signal<sc_int<fixed_point_length>> cb_final_res;
    sc_signal<sc_int<fixed_point_length>> cr_rg_add_res;
    sc_signal<sc_int<fixed_point_length>> cr_final_res;
    
    // Multiplier modules
    fixed_multiplier<T, fracBits> *y_r_mult, *y_g_mult, *y_b_mult;
    fixed_multiplier<T, fracBits> *cb_r_mult, *cb_g_mult, *cb_b_mult;
    fixed_multiplier<T, fracBits> *cr_r_mult, *cr_g_mult, *cr_b_mult;
    
    // Adder modules
    fixed_adder<T, fracBits> *y_rg_add, *y_rgb_add;
    fixed_adder<T, fracBits> *cb_rg_add, *cb_rgb_add;
    fixed_adder<T, fracBits> *cr_rg_add, *cr_rgb_add;

    // Helper to print a fixed-point value for debugging
    void debug_print_fixed(const char* label, T value) {
        if (RGB2YCBCR_DEBUG) {
            double double_val = static_cast<double>(value) / (1 << fracBits);
            std::cout << label << " = 0x" << std::hex << value 
                      << std::dec << " (" << double_val << ")" << std::endl;
        }
    }
    
    void initialize_constants() {
        // Initialize coefficient signals
        y_r_coeff_sig.write(Y_R_COEFF);
        y_g_coeff_sig.write(Y_G_COEFF);
        y_b_coeff_sig.write(Y_B_COEFF);
        cb_r_coeff_sig.write(CB_R_COEFF);
        cb_g_coeff_sig.write(CB_G_COEFF);
        cb_b_coeff_sig.write(CB_B_COEFF);
        cr_r_coeff_sig.write(CR_R_COEFF);
        cr_g_coeff_sig.write(CR_G_COEFF);
        cr_b_coeff_sig.write(CR_B_COEFF);
        offset_128_sig.write(-OFFSET_128); // Negative for Y, positive for Cb/Cr
    }

    void convert() {
        // Read input values
        sc_uint<input_width> r_val = input_R.read();
        sc_uint<input_width> g_val = input_G.read();
        sc_uint<input_width> b_val = input_B.read();

        // Debug print input values
        if (RGB2YCBCR_DEBUG) {
            std::cout << "RGB2YCbCr Convert: R=" << r_val << " G=" << g_val << " B=" << b_val << std::endl;
        }

        // Convert to fixed point (scale to fixed-point)
        T r_fixed = static_cast<T>(r_val.to_int()) << fracBits;
        T g_fixed = static_cast<T>(g_val.to_int()) << fracBits;
        T b_fixed = static_cast<T>(b_val.to_int()) << fracBits;
        
        // Set input signals for multipliers
        r_fixed_sig.write(r_fixed);
        g_fixed_sig.write(g_fixed);
        b_fixed_sig.write(b_fixed);
        
        // Debug print fixed-point values
        if (RGB2YCBCR_DEBUG) {
            debug_print_fixed("R_fixed", r_fixed);
            debug_print_fixed("G_fixed", g_fixed);
            debug_print_fixed("B_fixed", b_fixed);
        }

        // The calculation is now performed by the multiplier and adder modules
        // Read the final results
        sc_int<fixed_point_length> Y_fixed = y_final_res.read();
        sc_int<fixed_point_length> Cb_fixed = cb_final_res.read();
        sc_int<fixed_point_length> Cr_fixed = cr_final_res.read();

        // Debug print results
        if (RGB2YCBCR_DEBUG) {
            debug_print_fixed("Y_fixed", Y_fixed);
            debug_print_fixed("Cb_fixed", Cb_fixed);
            debug_print_fixed("Cr_fixed", Cr_fixed);
        }

        // Output results
        output_Y.write(Y_fixed);
        output_Cb.write(Cb_fixed);
        output_Cr.write(Cr_fixed);
    }

    SC_CTOR(conversion_fixed) {
        // Create multiplier instances
        y_r_mult = new fixed_multiplier<T, fracBits>("y_r_mult");
        y_g_mult = new fixed_multiplier<T, fracBits>("y_g_mult");
        y_b_mult = new fixed_multiplier<T, fracBits>("y_b_mult");
        cb_r_mult = new fixed_multiplier<T, fracBits>("cb_r_mult");
        cb_g_mult = new fixed_multiplier<T, fracBits>("cb_g_mult");
        cb_b_mult = new fixed_multiplier<T, fracBits>("cb_b_mult");
        cr_r_mult = new fixed_multiplier<T, fracBits>("cr_r_mult");
        cr_g_mult = new fixed_multiplier<T, fracBits>("cr_g_mult");
        cr_b_mult = new fixed_multiplier<T, fracBits>("cr_b_mult");
        
        // Connect multiplier inputs and outputs
        y_r_mult->a(r_fixed_sig);
        y_r_mult->b(y_r_coeff_sig);
        y_r_mult->mul_res(y_r_mult_res);
        
        y_g_mult->a(g_fixed_sig);
        y_g_mult->b(y_g_coeff_sig);
        y_g_mult->mul_res(y_g_mult_res);
        
        y_b_mult->a(b_fixed_sig);
        y_b_mult->b(y_b_coeff_sig);
        y_b_mult->mul_res(y_b_mult_res);
        
        cb_r_mult->a(r_fixed_sig);
        cb_r_mult->b(cb_r_coeff_sig);
        cb_r_mult->mul_res(cb_r_mult_res);
        
        cb_g_mult->a(g_fixed_sig);
        cb_g_mult->b(cb_g_coeff_sig);
        cb_g_mult->mul_res(cb_g_mult_res);
        
        cb_b_mult->a(b_fixed_sig);
        cb_b_mult->b(cb_b_coeff_sig);
        cb_b_mult->mul_res(cb_b_mult_res);
        
        cr_r_mult->a(r_fixed_sig);
        cr_r_mult->b(cr_r_coeff_sig);
        cr_r_mult->mul_res(cr_r_mult_res);
        
        cr_g_mult->a(g_fixed_sig);
        cr_g_mult->b(cr_g_coeff_sig);
        cr_g_mult->mul_res(cr_g_mult_res);
        
        cr_b_mult->a(b_fixed_sig);
        cr_b_mult->b(cr_b_coeff_sig);
        cr_b_mult->mul_res(cr_b_mult_res);
        
        // Create adder instances
        y_rg_add = new fixed_adder<T, fracBits>("y_rg_add");
        y_rgb_add = new fixed_adder<T, fracBits>("y_rgb_add");
        cb_rg_add = new fixed_adder<T, fracBits>("cb_rg_add");
        cb_rgb_add = new fixed_adder<T, fracBits>("cb_rgb_add");
        cr_rg_add = new fixed_adder<T, fracBits>("cr_rg_add");
        cr_rgb_add = new fixed_adder<T, fracBits>("cr_rgb_add");
        
        // Connect adder inputs and outputs
        y_rg_add->a(y_r_mult_res);
        y_rg_add->b(y_g_mult_res);
        y_rg_add->sum_out(y_rg_add_res);
        
        y_rgb_add->a(y_rg_add_res);
        y_rgb_add->b(y_b_mult_res);
        y_rgb_add->sum_out(y_final_res);
        
        cb_rg_add->a(cb_r_mult_res);
        cb_rg_add->b(cb_g_mult_res);
        cb_rg_add->sum_out(cb_rg_add_res);
        
        cb_rgb_add->a(cb_rg_add_res);
        cb_rgb_add->b(cb_b_mult_res);
        cb_rgb_add->sum_out(cb_final_res);
        
        cr_rg_add->a(cr_r_mult_res);
        cr_rg_add->b(cr_g_mult_res);
        cr_rg_add->sum_out(cr_rg_add_res);
        
        cr_rgb_add->a(cr_rg_add_res);
        cr_rgb_add->b(cr_b_mult_res);
        cr_rgb_add->sum_out(cr_final_res);
        
        // Initialize constants
        SC_METHOD(initialize_constants);
        
        // Register convert method
        SC_METHOD(convert);
        sensitive << clk.pos();
    }
    
    ~conversion_fixed() {
        // Free allocated modules
        delete y_r_mult;
        delete y_g_mult;
        delete y_b_mult;
        delete cb_r_mult;
        delete cb_g_mult;
        delete cb_b_mult;
        delete cr_r_mult;
        delete cr_g_mult;
        delete cr_b_mult;
        
        delete y_rg_add;
        delete y_rgb_add;
        delete cb_rg_add;
        delete cb_rgb_add;
        delete cr_rg_add;
        delete cr_rgb_add;
    }
};

// Container module that instantiates multiple conversion modules
template<typename T = int, int fracBits = 16, int fixed_point_length = 32, int num_pixels = 64, int input_width = 8>
SC_MODULE(rgb2ycbcr_container_fixed) {
    // Input ports
    sc_in<bool> clk;
    sc_in<sc_uint<input_width>> r_in[num_pixels];
    sc_in<sc_uint<input_width>> g_in[num_pixels];
    sc_in<sc_uint<input_width>> b_in[num_pixels];

    // Output ports - changed from sc_uint to sc_int to match calculation results
    sc_out<sc_int<fixed_point_length>> y_out[num_pixels];
    sc_out<sc_int<fixed_point_length>> cb_out[num_pixels];
    sc_out<sc_int<fixed_point_length>> cr_out[num_pixels];

    // Array of conversion modules
    conversion_fixed<T, fracBits, fixed_point_length, input_width>* converters[num_pixels];

    // Debug output method
    void debug_monitor() {
        if (RGB2YCBCR_DEBUG) {
            static int cycle_count = 0;
            cycle_count++;
            
            if (cycle_count % 10 == 0) {  // Only print every 10 cycles
                std::cout << "=== RGB2YCbCr Container Debug (Cycle " << cycle_count << ") ===" << std::endl;
                
                // Print first 4 values
                for (int i = 0; i < 4; i++) {
                    std::cout << "Pixel[" << i << "]: ";
                    std::cout << "R=" << r_in[i].read() << " G=" << g_in[i].read() << " B=" << b_in[i].read();
                    std::cout << " -> Y=0x" << std::hex << y_out[i].read() << std::dec;
                    std::cout << " Cb=0x" << std::hex << cb_out[i].read() << std::dec;
                    std::cout << " Cr=0x" << std::hex << cr_out[i].read() << std::dec << std::endl;
                }
                std::cout << std::endl;
            }
        }
    }

    SC_CTOR(rgb2ycbcr_container_fixed) {
        // Instantiate num_pixels converters
        for (int i = 0; i < num_pixels; i++) {
            char name[20];
            sprintf(name, "converter_fixed_%d", i);

            converters[i] = new conversion_fixed<T, fracBits, fixed_point_length, input_width>(name);

            // Connect ports
            converters[i]->clk(clk);
            converters[i]->input_R(r_in[i]);
            converters[i]->input_G(g_in[i]);
            converters[i]->input_B(b_in[i]);
            converters[i]->output_Y(y_out[i]);
            converters[i]->output_Cb(cb_out[i]);
            converters[i]->output_Cr(cr_out[i]);
        }
        
        // Only add debug method if debug is enabled
        if (RGB2YCBCR_DEBUG) {
            SC_METHOD(debug_monitor);
            sensitive << clk.pos();
        }
    }

    ~rgb2ycbcr_container_fixed() {
        // Free the dynamically allocated converters
        for (int i = 0; i < num_pixels; i++) {
            delete converters[i];
        }
    }
};

#endif // RGB2YCBCR_SYSTEMC_FIXED_H