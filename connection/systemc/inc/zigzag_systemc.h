#ifndef ZIGZAG_SYSTEMC_H
#define ZIGZAG_SYSTEMC_H

#include <systemc.h>

// Zigzag scan ordering
const int zigzag_order[64] = {
    0,  1,  8, 16,  9,  2,  3, 10,
    17, 24, 32, 25, 18, 11,  4,  5,
    12, 19, 26, 33, 40, 48, 41, 34,
    27, 20, 13,  6,  7, 14, 21, 28,
    35, 42, 49, 56, 57, 50, 43, 36,
    29, 22, 15, 23, 30, 37, 44, 51,
    58, 59, 52, 45, 38, 31, 39, 46,
    53, 60, 61, 54, 47, 55, 62, 63
};

// Debug reordering - can be enabled for additional debug
template<typename T, int DATA_WIDTH>
SC_MODULE(debug_zigzag_monitor) {
    sc_in<bool> clk;
    sc_in<sc_int<DATA_WIDTH>> input_matrix[64];   // Original matrix
    sc_in<sc_int<DATA_WIDTH>> zigzag_out[64];     // Zigzag reordered
    
    void monitor_zigzag() {
        static int count = 0;
        count++;
        
        // Only print occasionally to avoid flooding the output
        if (count % 20 == 0) {
            std::cout << "=== Zigzag Monitor - Iteration " << count << " ===" << std::endl;
            
            // Print first few entries from source and zigzag result
            for (int i = 0; i < 8; i++) {
                int src_idx = i;
                int zigzag_idx = zigzag_order[i];
                
                std::cout << "Source[" << src_idx << "] = " << std::hex << "0x" 
                          << input_matrix[src_idx].read() << std::dec 
                          << " -> Zigzag[" << i << "] = " << std::hex << "0x" 
                          << zigzag_out[i].read() << std::dec << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
    SC_CTOR(debug_zigzag_monitor) {
        SC_METHOD(monitor_zigzag);
        sensitive << clk.pos();
    }
};

// Zigzag reordering module
template<typename T, int DATA_WIDTH>
SC_MODULE(zigzag_reorder) {
    sc_in<bool> clk;
    sc_in<sc_int<DATA_WIDTH>> input_matrix[64];   // 64 input values in 8x8 order
    sc_out<sc_int<DATA_WIDTH>> zigzag_out[64];    // 64 output values in zigzag order
    
    // Optional debug monitor
    debug_zigzag_monitor<T, DATA_WIDTH>* debug_monitor;
    bool enable_debug;
    
    void reorder() {
        // Apply zigzag reordering
        for (int i = 0; i < 64; i++) {
            int input_idx = zigzag_order[i];
            zigzag_out[i].write(input_matrix[input_idx].read());
        }
    }
    
    SC_CTOR(zigzag_reorder) : enable_debug(false) {
        SC_METHOD(reorder);
        for (int i = 0; i < 64; i++) {
            sensitive << input_matrix[i];
        }
        
        // Create debug monitor but disable by default
        debug_monitor = NULL;
    }
    
    // Enable debugging with monitor
    void enable_debugging() {
        if (!debug_monitor && !enable_debug) {
            debug_monitor = new debug_zigzag_monitor<T, DATA_WIDTH>("zigzag_monitor");
            debug_monitor->clk(clk);
            
            for (int i = 0; i < 64; i++) {
                debug_monitor->input_matrix[i](input_matrix[i]);
                debug_monitor->zigzag_out[i](zigzag_out[i]);
            }
            
            enable_debug = true;
        }
    }
    
    ~zigzag_reorder() {
        if (debug_monitor) {
            delete debug_monitor;
        }
    }
};

#endif // ZIGZAG_SYSTEMC_H