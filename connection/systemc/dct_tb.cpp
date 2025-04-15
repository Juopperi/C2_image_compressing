//
// Created by wuche on 25-4-14.
//
#include <systemc.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdint>
#include <random>
#include "FixedPoint.h"
#include "dct_systemc.h"

// Test bench for DCT modules
SC_MODULE(dct_testbench) {
    // Parameters
    static const int DATA_WIDTH = 32;
    static const int FRAC_BITS = 16;
    static const int N = 8;

    // Clock and reset
    sc_clock clk;
    sc_signal<bool> reset_n;

    // Signals for input data and coefficients
    sc_signal<sc_int<DATA_WIDTH>> input_data[64];
    sc_signal<sc_int<DATA_WIDTH>> dct_coeffs[64];
    sc_signal<sc_int<DATA_WIDTH>> output_data[64];

    // Module instance
    dct_2d_8x8<int32_t, FRAC_BITS>* dct_inst;

    // Helper function to load coefficients from file
    void load_dct_coeff_matrix(const std::string& filename) {
        std::ifstream fin(filename);
        if (!fin) {
            std::cerr << "Error: Cannot open " << filename << std::endl;
            sc_stop();
            return;
        }

        std::string hex;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                fin >> hex;
                uint32_t raw = std::stoul(hex, nullptr, 16);
                dct_coeffs[i*8 + j].write(static_cast<int32_t>(raw));
            }
        }
        fin.close();
        std::cout << "DCT coefficients loaded from " << filename << std::endl;
    }

    // Helper function to generate random input data
    void generate_random_input(int lower, int upper) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dist(lower, upper);

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                float value = static_cast<float>(dist(gen));
                FixedPoint<int32_t, FRAC_BITS> fp(value);
                input_data[i*8 + j].write(fp.raw());
            }
        }
        std::cout << "Random input data generated with values between " << lower << " and " << upper << std::endl;
    }

    // Helper function to load input data from file
    void load_input_data(const std::string& filename) {
        std::ifstream fin(filename);
        if (!fin) {
            std::cerr << "Error: Cannot open " << filename << std::endl;
            sc_stop();
            return;
        }

        std::string hex;
        int count = 0;
        for (int i = 0; i < 64; ++i) {
            if (!(fin >> hex)) {
                std::cerr << "Error: File contains fewer than 64 values (read " << i << ")" << std::endl;
                break;
            }
            
            try {
                uint32_t raw = std::stoul(hex, nullptr, 16);
                input_data[i].write(static_cast<int32_t>(raw));
                count++;
            } catch (const std::exception& e) {
                std::cerr << "Error converting value at line " << (i+1) << ": " << e.what() << std::endl;
                break;
            }
        }
        fin.close();
        std::cout << "Loaded " << count << " values from input file" << std::endl;
    }

    // Helper function to save output data to file
    void save_output_data(const std::string& filename) {
        std::ofstream fout(filename);
        if (!fout) {
            std::cerr << "Error: Cannot open " << filename << " for writing" << std::endl;
            return;
        }

        for (int i = 0; i < 64; ++i) {
            fout << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                 << static_cast<uint32_t>(output_data[i].read()) << std::endl;
        }
        fout.close();
        std::cout << "Output data saved to " << filename << std::endl;
    }

    // Helper function to print matrix
    void print_matrix(const sc_signal<sc_int<DATA_WIDTH>>* data, const std::string& label) {
        std::cout << "\n" << label << ":\n";
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                FixedPoint<int32_t, FRAC_BITS> fp = FixedPoint<int32_t, FRAC_BITS>::fromRaw(data[i*8 + j].read());
                std::cout << std::fixed << std::setprecision(2) << std::setw(8) << fp.toFloat() << " ";
            }
            std::cout << std::endl;
        }
    }

    void stimulus() {
        // Reset the system
        reset_n.write(false);
        wait(10, SC_NS);
        reset_n.write(true);

        // Load coefficients
        load_dct_coeff_matrix("dct_coeff_matrix.mem");

        // Option 1: Generate random input
        generate_random_input(1, 1);
        // Option 2: Load input from file
        // load_input_data("input_2048.mem");

        wait(500, SC_NS);


        // Print input matrix
        print_matrix(input_data, "Input Matrix");

        // Wait for DCT calculation to complete (this depends on pipeline depth)
        wait(500, SC_NS);

        // Print output matrix
        print_matrix(output_data, "Output DCT Matrix");

        // Save output to file
        save_output_data("systemc_output.mem");

        // End simulation
        std::cout << "Simulation completed." << std::endl;
        sc_stop();
    }

    SC_CTOR(dct_testbench) : clk("clk", 10, SC_NS) {
        // Create DCT instance
        dct_inst = new dct_2d_8x8<int32_t, FRAC_BITS>("dct_2d");

        // Connect signals
        dct_inst->clk(clk);
        dct_inst->reset_n(reset_n);

        // Connect input, coefficients, and output signals
        for (int i = 0; i < 64; ++i) {
            dct_inst->data_in_matrix[i](input_data[i]);
            dct_inst->dct_coeffs[i](dct_coeffs[i]);
            dct_inst->data_out_matrix[i](output_data[i]);
        }

        // Stimulus process
        SC_THREAD(stimulus);
    }

    ~dct_testbench() {
        delete dct_inst;
    }
};

int sc_main(int argc, char* argv[]) {
    // Create and run the test bench
    dct_testbench tb("testbench");

    std::cout << "Starting DCT SystemC simulation..." << std::endl;
    sc_start();

    return 0;
}