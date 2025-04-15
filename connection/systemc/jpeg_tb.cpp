#include <systemc.h>
#include <cstdlib>  // for rand()
#include <ctime>    // for time()
#include <iomanip>  // for setw, setfill
#include <fstream>  // for file I/O
#include <string>   // for string manipulation
#include "jpeg_compression_pipeline_systemc.h"

// 定义测试模式，放在全局范围内而非类内
enum TestMode {
    TEST_MODE_BASIC = 0,      // Basic test
    TEST_MODE_RANDOM = 1,     // Random data test
    TEST_MODE_PATTERN = 2,    // Pattern-based test
    TEST_MODE_DEBUG = 3,      // Debug-focused test
    TEST_MODE_EXHAUSTIVE = 4, // Exhaustive test
    TEST_MODE_FILE_IO = 5     // Read from file and write to file
};

// Helper function to convert 8-bit value to binary string
std::string to_binary(unsigned char value) {
    std::string result = "";
    for (int i = 7; i >= 0; i--) {
        result += ((value >> i) & 0x1) ? '1' : '0';
    }
    return result;
}

// Helper function to convert hex value to binary string with spaces
std::string hex_to_binary_spaced(uint32_t value, int bits = 32) {
    std::string result = "";
    for (int i = bits - 1; i >= 0; i--) {
        result += ((value >> i) & 0x1) ? '1' : '0';
        if (i % 8 == 0 && i > 0) {
            result += " ";
        }
    }
    return result;
}

// Test bench for JPEG compression pipeline with detailed input output and intermediate values
SC_MODULE(jpeg_testbench) {
    // Clock and reset signals
    sc_clock clk;
    sc_signal<bool> reset_n;
    
    // Input signals
    sc_signal<sc_bv<8 * 64>> r_all;
    sc_signal<sc_bv<8 * 64>> g_all;
    sc_signal<sc_bv<8 * 64>> b_all;
    
    // Output signals
    sc_signal<sc_bv<32 * 64>> y_zigzag;
    sc_signal<sc_bv<32 * 64>> cb_zigzag;
    sc_signal<sc_bv<32 * 64>> cr_zigzag;
    
    // Intermediate signals for debugging
    sc_signal<sc_int<32>> debug_y_raw[64];
    sc_signal<sc_int<32>> debug_cb_raw[64];
    sc_signal<sc_int<32>> debug_cr_raw[64];
    
    sc_signal<sc_int<32>> debug_y_dct[64];
    sc_signal<sc_int<32>> debug_cb_dct[64];
    sc_signal<sc_int<32>> debug_cr_dct[64];
    
    sc_signal<sc_int<32>> debug_y_quant[64];
    sc_signal<sc_int<32>> debug_cb_quant[64];
    sc_signal<sc_int<32>> debug_cr_quant[64];
    
    // JPEG compression pipeline instance with debug mode
    jpeg_compression_pipeline<int32_t, 16, 32, 8, 64, DEBUG_MODE_VERBOSE>* jpeg_inst;
    
    // Test configuration
    TestMode test_mode;
    
    // Array to store generated RGB data
    unsigned char r_values[64];
    unsigned char g_values[64];
    unsigned char b_values[64];
    
    // Helper to print a value in fixed-point format
    void print_fixed_point(int32_t value) {
        // Convert raw value to double
        double double_val = static_cast<double>(value) / (1 << 16); // Assuming 16 fracBits
        std::cout << "0x" << std::hex << value << std::dec << " (" << double_val << ")";
    }
    
    // Generate a simple pattern for testing
    void generate_pattern() {
        // Create a checkerboard pattern
        for (int i = 0; i < 64; i++) {
            int row = i / 8;
            int col = i % 8;
            
            if ((row + col) % 2 == 0) {
                // White square
                r_values[i] = 240;
                g_values[i] = 240;
                b_values[i] = 240;
            } else {
                // Black square
                r_values[i] = 16;
                g_values[i] = 16;
                b_values[i] = 16;
            }
        }
        
        // Output the pattern as a visual matrix
        std::cout << "\n=== Generated Pattern Matrix ===" << std::endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                int idx = row * 8 + col;
                // Print a visual representation (# for black, space for white)
                std::cout << (((row + col) % 2 == 0) ? "   " : " # ");
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    
    // Generate a gradient pattern for testing
    void generate_gradient() {
        for (int i = 0; i < 64; i++) {
            int row = i / 8;
            int col = i % 8;
            
            // Create a gradient across the block
            r_values[i] = 32 * row;
            g_values[i] = 32 * col;
            b_values[i] = 128;
        }
        
        // Output the pattern as visual matrices
        std::cout << "\n=== Generated Gradient Matrices ===" << std::endl;
        
        // R channel
        std::cout << "R Channel (row gradient):" << std::endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                std::cout << std::setw(3) << std::setfill(' ') << (int)r_values[row * 8 + col] << " ";
            }
            std::cout << std::endl;
        }
        
        // G channel
        std::cout << "\nG Channel (column gradient):" << std::endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                std::cout << std::setw(3) << std::setfill(' ') << (int)g_values[row * 8 + col] << " ";
            }
            std::cout << std::endl;
        }
        
        // B channel
        std::cout << "\nB Channel (constant):" << std::endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                std::cout << std::setw(3) << std::setfill(' ') << (int)b_values[row * 8 + col] << " ";
            }
            std::cout << std::endl;
        }
        
        std::cout << std::endl;
    }
    
    // Helper function to read input data from memory files
    bool read_input_from_files() {
        std::ifstream r_file("input_R.mem");
        std::ifstream g_file("input_G.mem");
        std::ifstream b_file("input_B.mem");
        
        if (!r_file.is_open() || !g_file.is_open() || !b_file.is_open()) {
            std::cerr << "Error: Could not open one or more input files." << std::endl;
            return false;
        }
        
        std::cout << "Reading RGB values from input files..." << std::endl;
        
        // Read the 64 values for each channel
        for (int i = 0; i < 64; i++) {
            std::string r_hex, g_hex, b_hex;
            int r_val, g_val, b_val;
            
            // Try to read hex strings
            if (!(r_file >> r_hex) || !(g_file >> g_hex) || !(b_file >> b_hex)) {
                std::cerr << "Error: Could not read enough values from input files." << std::endl;
                return false;
            }
            
            // Convert hex strings to integers (as 8-bit values, not fixed-point)
            try {
                r_val = std::stoi(r_hex, nullptr, 16);
                g_val = std::stoi(g_hex, nullptr, 16);
                b_val = std::stoi(b_hex, nullptr, 16);
            } catch (const std::exception& e) {
                std::cerr << "Error converting hex values: " << e.what() << std::endl;
                return false;
            }
            
            // Ensure values are within 0-255 range (8-bit)
            r_values[i] = static_cast<unsigned char>(std::min(255, std::max(0, r_val)));
            g_values[i] = static_cast<unsigned char>(std::min(255, std::max(0, g_val)));
            b_values[i] = static_cast<unsigned char>(std::min(255, std::max(0, b_val)));
        }
        
        r_file.close();
        g_file.close();
        b_file.close();
        
        // Print the loaded matrices (as 8-bit integer values)
        std::cout << "\n=== Input Matrix from Files (8-bit RGB values) ===" << std::endl;
        
        // Print R channel
        std::cout << "R Channel:" << std::endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                std::cout << std::setw(3) << std::setfill(' ') << (int)r_values[row*8 + col] << " ";
            }
            std::cout << std::endl;
        }
        
        // Print G channel
        std::cout << "\nG Channel:" << std::endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                std::cout << std::setw(3) << std::setfill(' ') << (int)g_values[row*8 + col] << " ";
            }
            std::cout << std::endl;
        }
        
        // Print B channel
        std::cout << "\nB Channel:" << std::endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                std::cout << std::setw(3) << std::setfill(' ') << (int)b_values[row*8 + col] << " ";
            }
            std::cout << std::endl;
        }
        
        return true;
    }
    
    // Helper function to write output data to files
    void write_output_to_files() {
        std::ofstream y_file("actual_output_Y.mem");
        std::ofstream cb_file("actual_output_Cb.mem");
        std::ofstream cr_file("actual_output_Cr.mem");
        
        if (!y_file.is_open() || !cb_file.is_open() || !cr_file.is_open()) {
            std::cerr << "Error: Could not open output files for writing." << std::endl;
            return;
        }
        
        std::cout << "\nWriting output to files..." << std::endl;
        
        // Read results from signals
        sc_bv<32 * 64> y_result = y_zigzag.read();
        sc_bv<32 * 64> cb_result = cb_zigzag.read();
        sc_bv<32 * 64> cr_result = cr_zigzag.read();
        
        // Write all 64 values for each channel
        for (int i = 0; i < 64; i++) {
            // Extract 32-bit values
            int32_t y_value = 0;
            int32_t cb_value = 0;
            int32_t cr_value = 0;
            
            for (int j = 0; j < 32; j++) {
                if (y_result[(i * 32) + j]) y_value |= (1 << j);
                if (cb_result[(i * 32) + j]) cb_value |= (1 << j);
                if (cr_result[(i * 32) + j]) cr_value |= (1 << j);
            }
            
            // Handle sign extension for signed values
            y_file << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << y_value << std::endl;
            cb_file << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << cb_value << std::endl;
            cr_file << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << cr_value << std::endl;
            
            // Print first few values for verification
            if (i < 4) {
                std::cout << "Writing Pixel[" << i << "]: ";
                std::cout << "Y=0x" << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << y_value;
                std::cout << " Cb=0x" << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << cb_value;
                std::cout << " Cr=0x" << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << cr_value;
                std::cout << std::dec << std::endl;
            }
        }
        
        y_file.close();
        cb_file.close();
        cr_file.close();
        
        std::cout << "Output successfully written to actual_output_Y.mem, actual_output_Cb.mem, and actual_output_Cr.mem" << std::endl;
    }
    
    // Test stimulus generation with detailed input display and intermediate value monitoring
    void generate_stimulus() {
        // Reset sequence
        reset_n.write(false);
        wait(10, SC_NS);
        reset_n.write(true);
        
        // Generate input data - 8x8 RGB block with values based on test mode
        sc_bv<8 * 64> r_data;
        sc_bv<8 * 64> g_data;
        sc_bv<8 * 64> b_data;
        
        std::cout << "=== Generating Input Data (Mode " << test_mode << ") ===" << std::endl;
        
        // Generate data based on test mode
        switch (test_mode) {
            case TEST_MODE_FILE_IO:
                if (!read_input_from_files()) {
                    std::cerr << "Error reading input files. Aborting simulation." << std::endl;
                    sc_stop();
                    return;
                }
                break;
                
            case TEST_MODE_PATTERN:
                generate_pattern();
                break;
                
            case TEST_MODE_DEBUG:
                generate_gradient();
                break;
                
            case TEST_MODE_BASIC:
                // Fill with a single value for basic testing
                for (int i = 0; i < 64; i++) {
                    r_values[i] = 128;
                    g_values[i] = 128;
                    b_values[i] = 128;
                }
                std::cout << "Basic test mode: All pixels set to RGB(128,128,128)" << std::endl;
                break;
                
            case TEST_MODE_RANDOM:
            default:
                // Fill with random values
                std::cout << "Format: Pixel[row,col]: R=value(binary) G=value(binary) B=value(binary)" << std::endl;
                std::cout << "----------------------------------------" << std::endl;
                
                for (int i = 0; i < 64; i++) {
                    int row = i / 8;
                    int col = i % 8;
                    
                    // Generate random RGB values between 0-255
                    r_values[i] = rand() % 256;
                    g_values[i] = rand() % 256;
                    b_values[i] = rand() % 256;
                    
                    // Print pixel information
                    std::cout << "Pixel[" << row << "," << col << "]: ";
                    std::cout << "R=" << std::setw(3) << std::setfill(' ') << (int)r_values[i] << "(" << to_binary(r_values[i]) << ") ";
                    std::cout << "G=" << std::setw(3) << std::setfill(' ') << (int)g_values[i] << "(" << to_binary(g_values[i]) << ") ";
                    std::cout << "B=" << std::setw(3) << std::setfill(' ') << (int)b_values[i] << "(" << to_binary(b_values[i]) << ")" << std::endl;
                }
                break;
        }
        
        // Convert to binary and store in bit vector - each RGB value is 8 bits (not fixed-point)
        for (int i = 0; i < 64; i++) {
            for (int j = 0; j < 8; j++) {
                r_data[(i * 8) + j] = (r_values[i] >> j) & 0x1;
                g_data[(i * 8) + j] = (g_values[i] >> j) & 0x1;
                b_data[(i * 8) + j] = (b_values[i] >> j) & 0x1;
            }
        }
        
        // Write the data to the input ports
        r_all.write(r_data);
        g_all.write(g_data);
        b_all.write(b_data);

        wait(100, SC_NS); // Wait for the clock to stabilize
        
        // Print the entire 8x8 input matrix if not already printed
        if (test_mode == TEST_MODE_RANDOM) {
            std::cout << "\n=== Input Matrix Visualization ===" << std::endl;
            
            // Print R channel
            std::cout << "R Channel:" << std::endl;
            for (int row = 0; row < 8; row++) {
                for (int col = 0; col < 8; col++) {
                    std::cout << std::setw(3) << std::setfill(' ') << (int)r_values[row*8 + col] << " ";
                }
                std::cout << std::endl;
            }
            
            // Print G channel
            std::cout << "\nG Channel:" << std::endl;
            for (int row = 0; row < 8; row++) {
                for (int col = 0; col < 8; col++) {
                    std::cout << std::setw(3) << std::setfill(' ') << (int)g_values[row*8 + col] << " ";
                }
                std::cout << std::endl;
            }
            
            // Print B channel
            std::cout << "\nB Channel:" << std::endl;
            for (int row = 0; row < 8; row++) {
                for (int col = 0; col < 8; col++) {
                    std::cout << std::setw(3) << std::setfill(' ') << (int)b_values[row*8 + col] << " ";
                }
                std::cout << std::endl;
            }
        }
        
        std::cout << "\nInput data generation complete!" << std::endl;
        std::cout << "Processing JPEG compression pipeline..." << std::endl;
        
        // Wait for pipeline stages to process - timing depends on test mode
        int wait_time;
        switch (test_mode) {
            case TEST_MODE_DEBUG:
            case TEST_MODE_EXHAUSTIVE:
                wait_time = 800;
                break;
            default:
                wait_time = 400;
                break;
        }
        
        wait(wait_time, SC_NS);
        
        // For file I/O mode, write outputs to files
        if (test_mode == TEST_MODE_FILE_IO) {
            write_output_to_files();
        }
        // Print results if not in debug mode (debug mode already prints details)
        else if (test_mode != TEST_MODE_DEBUG) {
            // Read results
            sc_bv<32 * 64> y_result = y_zigzag.read();
            sc_bv<32 * 64> cb_result = cb_zigzag.read();
            sc_bv<32 * 64> cr_result = cr_zigzag.read();
            
            // Print results header
            std::cout << "\n=== Final Zigzag Output Visualization ===" << std::endl;
            
            // Print the first N values based on test mode
            int values_to_show = (test_mode == TEST_MODE_EXHAUSTIVE) ? 16 : 8;
            
            std::cout << "\nY Channel Zigzag Output (First " << values_to_show << " values):" << std::endl;
            for (int i = 0; i < values_to_show; i++) {
                std::cout << "Y[" << i << "]: ";
                
                // Extract 32-bit value
                uint32_t y_value = 0;
                for (int j = 0; j < 32; j++) {
                    if (y_result[(i * 32) + j]) {
                        y_value |= (1 << j);
                    }
                }
                
                // Print hex and binary representation
                std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << y_value << std::dec;
                std::cout << " (" << hex_to_binary_spaced(y_value) << ")" << std::endl;
            }
            
            std::cout << "\nCb Channel Zigzag Output (First " << values_to_show << " values):" << std::endl;
            for (int i = 0; i < values_to_show; i++) {
                std::cout << "Cb[" << i << "]: ";
                
                // Extract 32-bit value
                uint32_t cb_value = 0;
                for (int j = 0; j < 32; j++) {
                    if (cb_result[(i * 32) + j]) {
                        cb_value |= (1 << j);
                    }
                }
                
                // Print hex and binary representation
                std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << cb_value << std::dec;
                std::cout << " (" << hex_to_binary_spaced(cb_value) << ")" << std::endl;
            }
            
            std::cout << "\nCr Channel Zigzag Output (First " << values_to_show << " values):" << std::endl;
            for (int i = 0; i < values_to_show; i++) {
                std::cout << "Cr[" << i << "]: ";
                
                // Extract 32-bit value
                uint32_t cr_value = 0;
                for (int j = 0; j < 32; j++) {
                    if (cr_result[(i * 32) + j]) {
                        cr_value |= (1 << j);
                    }
                }
                
                // Print hex and binary representation
                std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << cr_value << std::dec;
                std::cout << " (" << hex_to_binary_spaced(cr_value) << ")" << std::endl;
            }
        }
        
        // Additional debug output for exhaustive mode
        if (test_mode == TEST_MODE_EXHAUSTIVE) {
            // Print results from debug signals
            std::cout << "\n=== Debug Signal Values ===" << std::endl;
            
            // Print Y channel raw, DCT, and quantized values for comparison
            std::cout << "Y Channel Processing Compare (First 4 values):" << std::endl;
            for (int i = 0; i < 4; i++) {
                std::cout << "Y[" << i << "]: "
                         << "Raw=0x" << std::hex << debug_y_raw[i].read()
                         << " DCT=0x" << debug_y_dct[i].read()
                         << " Quant=0x" << debug_y_quant[i].read() << std::dec << std::endl;
            }
            
            // Print Cb channel raw, DCT, and quantized values
            std::cout << "Cb Channel Processing Compare (First 4 values):" << std::endl;
            for (int i = 0; i < 4; i++) {
                std::cout << "Cb[" << i << "]: "
                         << "Raw=0x" << std::hex << debug_cb_raw[i].read()
                         << " DCT=0x" << debug_cb_dct[i].read()
                         << " Quant=0x" << debug_cb_quant[i].read() << std::dec << std::endl;
            }
            
            // Print Cr channel raw, DCT, and quantized values
            std::cout << "Cr Channel Processing Compare (First 4 values):" << std::endl;
            for (int i = 0; i < 4; i++) {
                std::cout << "Cr[" << i << "]: "
                         << "Raw=0x" << std::hex << debug_cr_raw[i].read()
                         << " DCT=0x" << debug_cr_dct[i].read()
                         << " Quant=0x" << debug_cr_quant[i].read() << std::dec << std::endl;
            }
        }
        
        std::cout << "\nSimulation complete!" << std::endl;
        
        // End simulation
        sc_stop();
    }
    
    SC_CTOR(jpeg_testbench) : clk("clk", 10, SC_NS), test_mode(TEST_MODE_RANDOM) {
        // Create JPEG compression pipeline instance with debug mode
        jpeg_inst = new jpeg_compression_pipeline<int32_t, 16, 32, 8, 64, DEBUG_MODE_VERBOSE>("jpeg_compression");
        
        // Connect ports
        jpeg_inst->clk(clk);
        jpeg_inst->reset_n(reset_n);
        jpeg_inst->r_all(r_all);
        jpeg_inst->g_all(g_all);
        jpeg_inst->b_all(b_all);
        jpeg_inst->y_zigzag(y_zigzag);
        jpeg_inst->cb_zigzag(cb_zigzag);
        jpeg_inst->cr_zigzag(cr_zigzag);
        
        // Connect debug signals
        for (int i = 0; i < 64; i++) {
            jpeg_inst->debug_y_raw[i](debug_y_raw[i]);
            jpeg_inst->debug_cb_raw[i](debug_cb_raw[i]);
            jpeg_inst->debug_cr_raw[i](debug_cr_raw[i]);
            
            jpeg_inst->debug_y_dct[i](debug_y_dct[i]);
            jpeg_inst->debug_cb_dct[i](debug_cb_dct[i]);
            jpeg_inst->debug_cr_dct[i](debug_cr_dct[i]);
            
            jpeg_inst->debug_y_quant[i](debug_y_quant[i]);
            jpeg_inst->debug_cb_quant[i](debug_cb_quant[i]);
            jpeg_inst->debug_cr_quant[i](debug_cr_quant[i]);
        }
        
        // Register test process
        SC_THREAD(generate_stimulus);
        sensitive << clk.posedge_event();
    }
    
    ~jpeg_testbench() {
        delete jpeg_inst;
    }
    
    // Set test mode
    void set_test_mode(TestMode mode) {
        test_mode = mode;
    }
};

int sc_main(int argc, char* argv[]) {
    // Parse command line arguments for test mode
    TestMode mode = TEST_MODE_FILE_IO; // Default to file I/O mode
    if (argc > 1) {
        int mode_arg = atoi(argv[1]);
        if (mode_arg >= TEST_MODE_BASIC && mode_arg <= TEST_MODE_FILE_IO) {
            mode = static_cast<TestMode>(mode_arg);
        }
    }
    
    // Create and run test bench
    jpeg_testbench tb("testbench");
    
    // Set test mode
    tb.set_test_mode(mode);
    
    // Output simulation info
    std::cout << "=== JPEG Compression Pipeline Simulation ===" << std::endl;
    std::cout << "Test Mode: ";
    
    switch (mode) {
        case TEST_MODE_BASIC:
            std::cout << "Basic (Constant Values)" << std::endl;
            break;
        case TEST_MODE_RANDOM:
            std::cout << "Random RGB Values" << std::endl;
            break;
        case TEST_MODE_PATTERN:
            std::cout << "Pattern-based (Checkerboard)" << std::endl;
            break;
        case TEST_MODE_DEBUG:
            std::cout << "Debug-focused (Gradient)" << std::endl;
            break;
        case TEST_MODE_EXHAUSTIVE:
            std::cout << "Exhaustive (Full Debug)" << std::endl;
            break;
        case TEST_MODE_FILE_IO:
            std::cout << "File I/O (Read from input files, write to output files)" << std::endl;
            break;
    }
    
    std::cout << "=============================================" << std::endl;
    
    // Start simulation
    sc_start();
    
    return 0;
}