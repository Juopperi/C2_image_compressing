#include <systemc.h>
#include "FixedPoint.h"
#include "rgb2ycbcr_systemc.h"
#include <iostream>
#include <iomanip>

// Test bench for rgb2ycbcr_container
SC_MODULE(testbench) {
    // Define parameters
    static const int NUM_PIXELS = 64;
    static const int FIXED_POINT_LENGTH = 32;
    static const int INPUT_WIDTH = 8;
    static const int FRAC_BITS = 16;
    
    // Clock signal
    sc_clock clk;
    
    // Input signals for individual pixel approach
    sc_signal<sc_uint<INPUT_WIDTH>> r_in[NUM_PIXELS];
    sc_signal<sc_uint<INPUT_WIDTH>> g_in[NUM_PIXELS];
    sc_signal<sc_uint<INPUT_WIDTH>> b_in[NUM_PIXELS];
    
    // Output signals for individual pixel approach
    sc_signal<sc_uint<FIXED_POINT_LENGTH>> y_out[NUM_PIXELS];
    sc_signal<sc_uint<FIXED_POINT_LENGTH>> cb_out[NUM_PIXELS];
    sc_signal<sc_uint<FIXED_POINT_LENGTH>> cr_out[NUM_PIXELS];
    
    // Input signals for packed approach
    sc_signal<sc_bv<INPUT_WIDTH * NUM_PIXELS>> r_all;
    sc_signal<sc_bv<INPUT_WIDTH * NUM_PIXELS>> g_all;
    sc_signal<sc_bv<INPUT_WIDTH * NUM_PIXELS>> b_all;
    
    // Output signals for packed approach
    sc_signal<sc_bv<FIXED_POINT_LENGTH * NUM_PIXELS>> y_all;
    sc_signal<sc_bv<FIXED_POINT_LENGTH * NUM_PIXELS>> cb_all;
    sc_signal<sc_bv<FIXED_POINT_LENGTH * NUM_PIXELS>> cr_all;
    
    // Instances of the modules to be tested
    rgb2ycbcr_container<int, FRAC_BITS, FIXED_POINT_LENGTH, NUM_PIXELS, INPUT_WIDTH>* container;
    rgb2ycbcr_container_packed<int, FRAC_BITS, FIXED_POINT_LENGTH, NUM_PIXELS, INPUT_WIDTH>* container_packed;
    
    void stimulus() {
        // Initialize test values
        std::cout << "Applying stimulus..." << std::endl;
        
        // Set some test values for all pixels
        for (int i = 0; i < NUM_PIXELS; i++) {
            r_in[i].write(i % 256);            // R: 0, 1, 2, ...
            g_in[i].write((i + 85) % 256);     // G: 85, 86, 87, ...
            b_in[i].write((i + 170) % 256);    // B: 170, 171, 172, ...
        }
        
        // Create packed inputs
        sc_bv<INPUT_WIDTH * NUM_PIXELS> r_packed;
        sc_bv<INPUT_WIDTH * NUM_PIXELS> g_packed;
        sc_bv<INPUT_WIDTH * NUM_PIXELS> b_packed;
        
        for (int i = 0; i < NUM_PIXELS; i++) {
            sc_uint<INPUT_WIDTH> r_val = i % 256;
            sc_uint<INPUT_WIDTH> g_val = (i + 85) % 256;
            sc_uint<INPUT_WIDTH> b_val = (i + 170) % 256;
            
            for (int j = 0; j < INPUT_WIDTH; j++) {
                // Convert the sc_uint_bitref to bool before assigning to sc_bitref
                r_packed[(i * INPUT_WIDTH) + j] = (r_val[j] == 1);
                g_packed[(i * INPUT_WIDTH) + j] = (g_val[j] == 1);
                b_packed[(i * INPUT_WIDTH) + j] = (b_val[j] == 1);
            }
        }
        
        r_all.write(r_packed);
        g_all.write(g_packed);
        b_all.write(b_packed);
        
        // Wait for results
        wait(20, SC_NS);
        
        // Display results for a few pixels
        std::cout << "\nResults from individual pixel approach:" << std::endl;
        for (int i = 0; i < 5; i++) {
            sc_uint<FIXED_POINT_LENGTH> y_val = y_out[i].read();
            sc_uint<FIXED_POINT_LENGTH> cb_val = cb_out[i].read();
            sc_uint<FIXED_POINT_LENGTH> cr_val = cr_out[i].read();
            
            // Convert raw fixed-point values to float for display
            FixedPoint<int, FRAC_BITS> y = FixedPoint<int, FRAC_BITS>::fromRaw(y_val.to_int());
            FixedPoint<int, FRAC_BITS> cb = FixedPoint<int, FRAC_BITS>::fromRaw(cb_val.to_int());
            FixedPoint<int, FRAC_BITS> cr = FixedPoint<int, FRAC_BITS>::fromRaw(cr_val.to_int());
            
            std::cout << "Pixel " << i << ": R=" << (int)r_in[i].read() 
                      << ", G=" << (int)g_in[i].read() 
                      << ", B=" << (int)b_in[i].read()
                      << " -> Y=" << std::fixed << std::setprecision(2) << y.toFloat()
                      << ", Cb=" << cb.toFloat() 
                      << ", Cr=" << cr.toFloat() << std::endl;
        }
        
        // Display results from packed approach for a few pixels
        std::cout << "\nResults from packed approach:" << std::endl;
        for (int i = 0; i < 5; i++) {
            // Extract values from packed outputs
            sc_uint<FIXED_POINT_LENGTH> y_val = 0;
            sc_uint<FIXED_POINT_LENGTH> cb_val = 0;
            sc_uint<FIXED_POINT_LENGTH> cr_val = 0;
            
            for (int j = 0; j < FIXED_POINT_LENGTH; j++) {
                y_val[j] = y_all.read()[(i * FIXED_POINT_LENGTH) + j].to_bool();
                cb_val[j] = cb_all.read()[(i * FIXED_POINT_LENGTH) + j].to_bool();
                cr_val[j] = cr_all.read()[(i * FIXED_POINT_LENGTH) + j].to_bool();
            }
            
            // Convert raw fixed-point values to float for display
            FixedPoint<int, FRAC_BITS> y = FixedPoint<int, FRAC_BITS>::fromRaw(y_val.to_int());
            FixedPoint<int, FRAC_BITS> cb = FixedPoint<int, FRAC_BITS>::fromRaw(cb_val.to_int());
            FixedPoint<int, FRAC_BITS> cr = FixedPoint<int, FRAC_BITS>::fromRaw(cr_val.to_int());
            
            std::cout << "Pixel " << i << ": R=" << (i % 256)
                      << ", G=" << ((i + 85) % 256)
                      << ", B=" << ((i + 170) % 256)
                      << " -> Y=" << std::fixed << std::setprecision(2) << y.toFloat()
                      << ", Cb=" << cb.toFloat() 
                      << ", Cr=" << cr.toFloat() << std::endl;
        }
        
        std::cout << "\nSimulation completed." << std::endl;
        sc_stop();
    }
    
    SC_CTOR(testbench) : clk("clk", 10, SC_NS) {
        // Instantiate container with individual pixel signals
        container = new rgb2ycbcr_container<int, FRAC_BITS, FIXED_POINT_LENGTH, NUM_PIXELS, INPUT_WIDTH>("container");
        container->clk(clk);
        
        // Connect individual pixel signals
        for (int i = 0; i < NUM_PIXELS; i++) {
            container->r_in[i](r_in[i]);
            container->g_in[i](g_in[i]);
            container->b_in[i](b_in[i]);
            container->y_out[i](y_out[i]);
            container->cb_out[i](cb_out[i]);
            container->cr_out[i](cr_out[i]);
        }
        
        // Instantiate container with packed signals
        container_packed = new rgb2ycbcr_container_packed<int, FRAC_BITS, FIXED_POINT_LENGTH, NUM_PIXELS, INPUT_WIDTH>("container_packed");
        container_packed->clk(clk);
        container_packed->r_all(r_all);
        container_packed->g_all(g_all);
        container_packed->b_all(b_all);
        container_packed->y_all(y_all);
        container_packed->cb_all(cb_all);
        container_packed->cr_all(cr_all);
        
        // Stimulus process
        SC_THREAD(stimulus);
        sensitive << clk.posedge_event();
    }
    
    ~testbench() {
        delete container;
        delete container_packed;
    }
};

int sc_main(int argc, char* argv[]) {
    // Create and start the test bench
    testbench tb("tb");
    
    std::cout << "Starting simulation..." << std::endl;
    sc_start();
    
    return 0;
}