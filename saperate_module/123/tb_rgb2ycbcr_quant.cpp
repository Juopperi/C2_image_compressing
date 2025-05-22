// Updated testbench for 8-bit quantized output (8*64 instead of 16*64)

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdint>
#include <cmath>
#include <random>
#include <array>
#include "Vrgb2ycbcr_quant.h"
#include "verilated.h"

// FixedPoint class from gen_multi_inout.cpp
template <typename T, unsigned int F>
class FixedPoint {
private:
    T value;

public:
    FixedPoint() : value(0) {}

    // Construct from integer or floating point
    FixedPoint(double d) {
        value = static_cast<T>(d * (1 << F) + (d >= 0 ? 0.5 : -0.5));
    }

    // Conversion back to double
    double toDouble() const {
        return static_cast<double>(value) / (1 << F);
    }

    // Conversion to float
    float toFloat() const {
        return static_cast<float>(value) / (1 << F);
    }

    // Addition
    FixedPoint operator+(const FixedPoint& rhs) const {
        FixedPoint result;
        result.value = value + rhs.value;
        return result;
    }

    // Subtraction
    FixedPoint operator-(const FixedPoint& rhs) const {
        FixedPoint result;
        result.value = value - rhs.value;
        return result;
    }

    // Multiplication
    FixedPoint operator*(const FixedPoint& rhs) const {
        FixedPoint result;
        result.value = static_cast<T>(((int64_t)value * rhs.value) >> F);
        return result;
    }

    // Division
    FixedPoint operator/(const FixedPoint& rhs) const {
        FixedPoint result;
        result.value = static_cast<T>(((int64_t)value << F) / rhs.value);
        return result;
    }

    // Get raw value
    T getRaw() const {
        return value;
    }
};

// Use Q16.16 fixed-point format
using Fix = FixedPoint<int32_t, 16>;

// Constants
static constexpr int N = 8;  // 8x8 block size
static const double PI = std::acos(-1.0);

// RGB to YCbCr conversion
void rgb_to_ycbcr(uint8_t r, uint8_t g, uint8_t b, uint8_t &y, uint8_t &cb, uint8_t &cr) {
    // BT.601 standard
    y  = std::round(0.299*r + 0.587*g + 0.114*b - 128);
    cb = std::round(-0.169*r - 0.331*g + 0.500*b);
    cr = std::round(0.500*r - 0.419*g - 0.081*b);
}

// 正交 8×8 DCT 变换表
static double T[N][N];

void init_dct_matrix() {
    for (int u = 0; u < N; ++u)
        for (int x = 0; x < N; ++x)
            T[u][x] = std::cos((2.0 * x + 1.0) * u * PI / (2.0 * N));
}

// DCT scaling factor
inline double alpha(int u) { 
    return u == 0 ? std::sqrt(1.0 / N) : std::sqrt(2.0 / N); 
}

// 1D DCT transform
void dct1d_direct(const std::array<double, N>& in, std::array<double, N>& out) {
    for (int u = 0; u < N; ++u) {
        double sum = 0.0;
        for (int x = 0; x < N; ++x)
            sum += in[x] * T[u][x];
        out[u] = alpha(u) * sum;
    }
}

// 2D DCT transform
void dct2d(const double in[N][N], double out[N][N]) {
    double tmp[N][N];
    std::array<double, N> buf_in, buf_out;

    // Row transform
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) buf_in[j] = in[i][j];
        dct1d_direct(buf_in, buf_out);
        for (int j = 0; j < N; ++j) tmp[i][j] = buf_out[j];
    }
    
    // Column transform
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) buf_in[i] = tmp[i][j];
        dct1d_direct(buf_in, buf_out);
        for (int i = 0; i < N; ++i) out[i][j] = buf_out[i];
    }
}

// 1D DCT with fixed-point arithmetic
void dct1d_direct_fixed(const std::array<Fix, N>& in, std::array<Fix, N>& out) {
    // Pre-compute T matrix in fixed-point format
    static Fix T_fixed[N][N];
    static bool initialized = false;
    
    if (!initialized) {
        for (int u = 0; u < N; ++u)
            for (int x = 0; x < N; ++x)
                T_fixed[u][x] = Fix(std::cos((2.0 * x + 1.0) * u * PI / (2.0 * N)));
        initialized = true;
    }
    
    // Compute normalization factors
    static const Fix sqrt1_N = Fix(std::sqrt(1.0 / N));
    static const Fix sqrt2_N = Fix(std::sqrt(2.0 / N));
    
    for (int u = 0; u < N; ++u) {
        Fix sum = Fix(0.0);
        for (int x = 0; x < N; ++x)
            sum = sum + in[x] * T_fixed[u][x];
        
        // Apply normalization factor
        if (u == 0)
            out[u] = sum * sqrt1_N;
        else
            out[u] = sum * sqrt2_N;
    }
}

// 2D DCT with fixed-point arithmetic
void dct2d_direct_fixed(const Fix in[N][N], Fix out[N][N]) {
    Fix tmp[N][N];
    std::array<Fix, N> buf_in, buf_out;

    // Row transform
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) buf_in[j] = in[i][j];
        dct1d_direct_fixed(buf_in, buf_out);
        for (int j = 0; j < N; ++j) tmp[i][j] = buf_out[j];
    }
    
    // Column transform
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) buf_in[i] = tmp[i][j];
        dct1d_direct_fixed(buf_in, buf_out);
        for (int i = 0; i < N; ++i) out[i][j] = buf_out[i];
    }
}

// JPEG quantization tables
static int jpeg_luma_quant_table[N][N] = {
    {16, 11, 10, 16, 24, 40, 51, 61},
    {12, 12, 14, 19, 26, 58, 60, 55},
    {14, 13, 16, 24, 40, 57, 69, 56},
    {14, 17, 22, 29, 51, 87, 80, 62},
    {18, 22, 37, 56, 68, 109, 103, 77},
    {24, 35, 55, 64, 81, 104, 113, 92},
    {49, 64, 78, 87, 103, 121, 120, 101},
    {72, 92, 95, 98, 112, 100, 103, 99}
};

static int jpeg_chroma_quant_table[N][N] = {
    {17, 18, 24, 47, 99, 99, 99, 99},
    {18, 21, 26, 66, 99, 99, 99, 99},
    {24, 26, 56, 99, 99, 99, 99, 99},
    {47, 66, 99, 99, 99, 99, 99, 99},
    {99, 99, 99, 99, 99, 99, 99, 99},
    {99, 99, 99, 99, 99, 99, 99, 99},
    {99, 99, 99, 99, 99, 99, 99, 99},
    {99, 99, 99, 99, 99, 99, 99, 99}
};

// Scale quantization table based on quality factor
void scale_quant_table(int quality, int quant_table[N][N], int scaled_table[N][N]) {
    if (quality < 1) quality = 1;
    if (quality > 100) quality = 100;
    
    int scale_factor;
    if (quality < 50)
        scale_factor = 5000 / quality;
    else
        scale_factor = 200 - quality * 2;
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int temp = (quant_table[i][j] * scale_factor + 50) / 100;
            if (temp < 1) temp = 1;
            if (temp > 255) temp = 255;
            scaled_table[i][j] = temp;
        }
    }
}

// Quantize DCT coefficients and clamp to 8-bit range
void quantize_block_8bit(const Fix dct[N][N], int quant_table[N][N], int8_t quantized[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            float coef = dct[i][j].toFloat();
            int temp = static_cast<int>(std::round(coef / quant_table[i][j]));
            
            // Clamp to 8-bit signed range [-128, 127]
            if (temp > 127) temp = 127;
            if (temp < -128) temp = -128;
            
            quantized[i][j] = static_cast<int8_t>(temp);
        }
    }
}

// Generate a block of test data and its expected output
void generate_test_block(
    int block_idx,
    int lower, int upper, int quality,
    std::vector<uint8_t>& r_input,
    std::vector<uint8_t>& g_input,
    std::vector<uint8_t>& b_input,
    std::vector<int8_t>& y_quant_output,   // Changed to int8_t
    std::vector<int8_t>& cb_quant_output,  // Changed to int8_t
    std::vector<int8_t>& cr_quant_output   // Changed to int8_t
) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(lower, upper);
    
    // Scaled quantization tables
    static int scaled_luma_table[N][N];
    static int scaled_chroma_table[N][N];
    static bool tables_initialized = false;
    
    if (!tables_initialized) {
        scale_quant_table(quality, jpeg_luma_quant_table, scaled_luma_table);
        scale_quant_table(quality, jpeg_chroma_quant_table, scaled_chroma_table);
        tables_initialized = true;
    }
    
    // For each 8x8 block
    uint8_t rgb_input[N][N][3];      // RGB input
    uint8_t ycbcr_input[N][N][3];    // YCbCr data
    
    Fix y_input_fixed[N][N];         // Y component in fixed-point
    Fix y_output_fixed[N][N];        // Y DCT coefficients
    int8_t y_quantized[N][N];        // Y quantized coefficients (8-bit)
    
    Fix cb_input_fixed[N][N];        // Cb component in fixed-point
    Fix cb_output_fixed[N][N];       // Cb DCT coefficients
    int8_t cb_quantized[N][N];       // Cb quantized coefficients (8-bit)
    
    Fix cr_input_fixed[N][N];        // Cr component in fixed-point
    Fix cr_output_fixed[N][N];       // Cr DCT coefficients
    int8_t cr_quantized[N][N];       // Cr quantized coefficients (8-bit)
    
    // 1. Generate random RGB block data
    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            // Generate RGB pixel values
            rgb_input[r][c][0] = static_cast<uint8_t>(dist(gen)); // R
            rgb_input[r][c][1] = static_cast<uint8_t>(dist(gen)); // G
            rgb_input[r][c][2] = static_cast<uint8_t>(dist(gen)); // B
            
            // Store RGB values in the output vectors
            r_input.push_back(rgb_input[r][c][0]);
            g_input.push_back(rgb_input[r][c][1]);
            b_input.push_back(rgb_input[r][c][2]);
            
            // 2. Convert RGB to YCbCr
            rgb_to_ycbcr(
                rgb_input[r][c][0], rgb_input[r][c][1], rgb_input[r][c][2],
                ycbcr_input[r][c][0], ycbcr_input[r][c][1], ycbcr_input[r][c][2]
            );
            
            // 3. Convert YCbCr to fixed-point format
            y_input_fixed[r][c] = Fix(static_cast<double>(ycbcr_input[r][c][0]));   // Y
            cb_input_fixed[r][c] = Fix(static_cast<double>(ycbcr_input[r][c][1]));  // Cb
            cr_input_fixed[r][c] = Fix(static_cast<double>(ycbcr_input[r][c][2]));  // Cr
        }
    }
    
    // 4. Calculate DCT and quantize each component (8-bit output)
    dct2d_direct_fixed(y_input_fixed, y_output_fixed);
    quantize_block_8bit(y_output_fixed, scaled_luma_table, y_quantized);
    
    dct2d_direct_fixed(cb_input_fixed, cb_output_fixed);
    quantize_block_8bit(cb_output_fixed, scaled_chroma_table, cb_quantized);
    
    dct2d_direct_fixed(cr_input_fixed, cr_output_fixed);
    quantize_block_8bit(cr_output_fixed, scaled_chroma_table, cr_quantized);
    
    // 5. Store quantized outputs in the output vectors
    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            y_quant_output.push_back(y_quantized[r][c]);
            cb_quant_output.push_back(cb_quantized[r][c]);
            cr_quant_output.push_back(cr_quantized[r][c]);
        }
    }
}

// Main test function
int main(int argc, char** argv) {
    // Initialize Verilated context
    Verilated::commandArgs(argc, argv);
    
    // Initialize DCT cosine matrix
    init_dct_matrix();
    
    // Parameters for test generation
    int lower = 0;
    int upper = 0;
    int num_blocks = 2;
    int quality = 50;
    
    // Parse command line arguments if provided
    if (argc >= 4) {
        lower = std::stoi(argv[1]);
        upper = std::stoi(argv[2]);
        num_blocks = std::stoi(argv[3]);
        if (argc >= 5) {
            quality = std::stoi(argv[4]);
        }
    }
    
    std::cout << "Generating " << num_blocks << " test blocks with quality factor " 
              << quality << ", input range [" << lower << ", " << upper << "]" << std::endl;
    
    // Generate test vectors (Changed to int8_t)
    std::vector<uint8_t> r_input;
    std::vector<uint8_t> g_input;
    std::vector<uint8_t> b_input;
    std::vector<int8_t> expected_y_quant;   // Changed to int8_t
    std::vector<int8_t> expected_cb_quant;  // Changed to int8_t
    std::vector<int8_t> expected_cr_quant;  // Changed to int8_t
    
    for (int block = 0; block < num_blocks; ++block) {
        generate_test_block(
            block, lower, upper, quality,
            r_input, g_input, b_input,
            expected_y_quant, expected_cb_quant, expected_cr_quant
        );
    }
    
    // Create an instance of the model
    Vrgb2ycbcr_quant* tb = new Vrgb2ycbcr_quant();
    
    // Check that we have data
    if (r_input.empty() || g_input.empty() || b_input.empty()) {
        std::cerr << "Error: Failed to generate test vectors." << std::endl;
        delete tb;
        return 1;
    }
    
    // Simulation variables
    int clock_cycle = 0;
    int errors = 0;
    int component_tested = 0;  // 0: Y, 1: Cb, 2: Cr
    const char* component_names[] = {"Y", "Cb", "Cr"};
    
    // Test all blocks
    const int PIXELS_PER_BLOCK = 64;  // 8x8 block
    for (int block = 0; block < num_blocks; block++) {
        std::cout << "Testing block " << block + 1 << "/" << num_blocks << std::endl;
        
        // Test each component (Y, Cb, Cr)
        for (component_tested = 0; component_tested < 3; component_tested++) {
            // Reset the model
            tb->rst_n = 0;
            tb->clk = 0;
            tb->in_valid = 0;
            tb->out_ready = 0;
            tb->component_sel = component_tested;
            
            // Toggle clock several times during reset
            for (int i = 0; i < 5; i++) {
                tb->clk = !tb->clk;
                tb->eval();
                tb->clk = !tb->clk;
                tb->eval();
            }
            
            // Release reset
            tb->rst_n = 1;
            tb->eval();
            
            // Clock cycle for stability
            tb->clk = !tb->clk;
            tb->eval();
            tb->clk = !tb->clk;
            tb->eval();
            
            // Prepare input data for this block
            for (int i = 0; i < PIXELS_PER_BLOCK; i++) {
                int idx = block * PIXELS_PER_BLOCK + i;
                // Set RGB inputs - assuming the module expects all 64 pixels at once in a packed format
                int bit_pos = i * 8;  // 8 bits per pixel
                
                // For r_all - assign r_input values to respective bit positions
                if (i < r_input.size()) {
                    // Calculate which 32-bit chunk this pixel belongs to
                    int chunk_idx = (bit_pos / 32);
                    // Calculate bit position within that chunk
                    int local_bit_pos = bit_pos % 32;
                    
                    // Create a mask for the current byte position in this chunk
                    uint32_t mask = 0xFF << local_bit_pos;
                    // Clear the bits at the position
                    ((uint32_t*)(&tb->r_all))[chunk_idx] &= ~mask;
                    // Set the new value
                    ((uint32_t*)(&tb->r_all))[chunk_idx] |= (static_cast<uint32_t>(r_input[idx]) << local_bit_pos);
                }
                
                // For g_all
                if (i < g_input.size()) {
                    int chunk_idx = (bit_pos / 32);
                    int local_bit_pos = bit_pos % 32;
                    
                    uint32_t mask = 0xFF << local_bit_pos;
                    ((uint32_t*)(&tb->g_all))[chunk_idx] &= ~mask;
                    ((uint32_t*)(&tb->g_all))[chunk_idx] |= (static_cast<uint32_t>(g_input[idx]) << local_bit_pos);
                }
                
                // For b_all
                if (i < b_input.size()) {
                    int chunk_idx = (bit_pos / 32);
                    int local_bit_pos = bit_pos % 32;
                    
                    uint32_t mask = 0xFF << local_bit_pos;
                    ((uint32_t*)(&tb->b_all))[chunk_idx] &= ~mask;
                    ((uint32_t*)(&tb->b_all))[chunk_idx] |= (static_cast<uint32_t>(b_input[idx]) << local_bit_pos);
                }
            }
            
            // Start processing
            tb->in_valid = 1;
            
            // Wait until module is ready to accept input
            while (!tb->in_ready) {
                tb->clk = !tb->clk;
                tb->eval();
                tb->clk = !tb->clk;
                tb->eval();
                clock_cycle++;
            }
            
            // Clock one cycle with valid input
            tb->clk = !tb->clk;
            tb->eval();
            tb->clk = !tb->clk;
            tb->eval();
            clock_cycle++;
            
            // Deassert in_valid after one cycle
            tb->in_valid = 0;
            
            // Wait for processing to complete
            bool output_received = false;
            int timeout_cycles = 10000;  // Prevent infinite loops
            
            while (!output_received && timeout_cycles > 0) {
                tb->clk = !tb->clk;
                tb->eval();
                tb->clk = !tb->clk;
                tb->eval();
                clock_cycle++;
                timeout_cycles--;
                
                // Check if output is valid
                if (tb->out_valid) {
                    // Set ready to receive output
                    tb->out_ready = 1;
                    
                    // Get expected output based on current component
                    std::vector<int8_t>* expected_output;  // Changed to int8_t*
                    if (component_tested == 0) {
                        expected_output = &expected_y_quant;
                    } else if (component_tested == 1) {
                        expected_output = &expected_cb_quant;
                    } else {
                        expected_output = &expected_cr_quant;
                    }
                    
                    // Check output for this block
                    for (int i = 0; i < PIXELS_PER_BLOCK; i++) {
                        int idx = block * PIXELS_PER_BLOCK + i;
                        // Extract the 8-bit value from the packed output (Changed from 16-bit to 8-bit)
                        int bit_pos = i * 8;  // 8 bits per coefficient (Changed from 16)
                        
                        // Calculate which 32-bit chunk this coefficient belongs to
                        int chunk_idx = bit_pos / 32;
                        // Calculate bit position within that chunk
                        int local_bit_pos = bit_pos % 32;
                        
                        // Extract 8-bit value (Changed from 16-bit extraction)
                        int8_t actual_value = (((uint32_t*)(&tb->out_data))[chunk_idx] >> local_bit_pos) & 0xFF;
                        
                        // Convert to signed 8-bit if needed
                        if (actual_value > 127) {
                            actual_value = actual_value - 256;  // Convert from unsigned to signed representation
                        }
                        
                        int8_t expected_value = (*expected_output)[idx];
                        
                        // Enhanced error reporting with better formatting
                        if (actual_value != expected_value) {
                            std::cout << "❌ Error in block " << std::setw(2) << block 
                                      << ", component " << std::setw(2) << component_names[component_tested] 
                                      << ", pixel " << std::setw(2) << i << ": "
                                      << "Expected 0x" << std::hex << std::setw(2) << std::setfill('0') 
                                      << (expected_value & 0xFF) << " (" << std::dec << std::setw(4) << (int)expected_value << "), "
                                      << "got 0x" << std::hex << std::setw(2) << std::setfill('0') 
                                      << (actual_value & 0xFF) << " (" << std::dec << std::setw(4) << (int)actual_value << ")"
                                      << " [diff: " << std::dec << std::showpos << ((int)actual_value - (int)expected_value) 
                                      << std::noshowpos << "]" << std::endl;
                            errors++;
                        }
                    }
                    
                    output_received = true;
                }
            }
            
            if (timeout_cycles <= 0) {
                std::cerr << "Error: Timeout waiting for output from module for component "
                          << component_names[component_tested] << std::endl;
                errors++;
            }
            
            // Reset out_ready
            tb->out_ready = 0;
            
            // Additional clock cycles for stability
            for (int i = 0; i < 5; i++) {
                tb->clk = !tb->clk;
                tb->eval();
                tb->clk = !tb->clk;
                tb->eval();
            }
        }
    }
    
    // Report results
    std::cout << "\n" << std::string(50, '=') << std::endl;
    if (errors == 0) {
        std::cout << "🎉 All tests passed successfully!" << std::endl;
    } else {
        std::cout << "❌ Tests completed with " << errors << " errors." << std::endl;
    }
    std::cout << "Total clock cycles: " << clock_cycle << std::endl;
    std::cout << std::string(50, '=') << std::endl;
    
    // Clean up
    delete tb;
    
    return errors ? 1 : 0;
}