#ifndef DCT_SYSTEMC_H
#define DCT_SYSTEMC_H

#include <systemc.h>
#include "FixedPoint.h"

// Fixed point multiplier for DCT coefficients
template<typename T = int32_t, int fracBits = 16>
SC_MODULE(fixed_multiplier) {
    sc_in<sc_int<sizeof(T)*8>> a;
    sc_in<sc_int<sizeof(T)*8>> b;
    sc_out<sc_int<sizeof(T)*8>> mul_res;

    void multiply() {
        // Get input values
        T a_val = a.read();
        T b_val = b.read();

        // Create FixedPoint objects
        FixedPoint<T, fracBits> fp_a = FixedPoint<T, fracBits>::fromRaw(a_val);
        FixedPoint<T, fracBits> fp_b = FixedPoint<T, fracBits>::fromRaw(b_val);

        // Perform multiplication
        FixedPoint<T, fracBits> result = fp_a * fp_b;

        // Write result
        mul_res.write(result.raw());
    }

    SC_CTOR(fixed_multiplier) {
        SC_METHOD(multiply);
        sensitive << a << b;
    }
};

// Fixed point adder
template<typename T = int32_t, int fracBits = 16>
SC_MODULE(fixed_adder) {
    sc_in<sc_int<sizeof(T)*8>> a;
    sc_in<sc_int<sizeof(T)*8>> b;
    sc_out<sc_int<sizeof(T)*8>> sum_out;

    void add() {
        // Get input values
        T a_val = a.read();
        T b_val = b.read();

        // Create FixedPoint objects
        FixedPoint<T, fracBits> fp_a = FixedPoint<T, fracBits>::fromRaw(a_val);
        FixedPoint<T, fracBits> fp_b = FixedPoint<T, fracBits>::fromRaw(b_val);

        // Perform addition
        FixedPoint<T, fracBits> result = fp_a + fp_b;

        // Write result
        sum_out.write(result.raw());
    }

    SC_CTOR(fixed_adder) {
        SC_METHOD(add);
        sensitive << a << b;
    }
};

// 8-element multiply-accumulate module
template<typename T = int32_t, int fracBits = 16, int DATA_WIDTH = sizeof(T)*8, int DATA_DEPTH = 8>
SC_MODULE(dct_8muladd) {
    sc_in<bool> clk;
    sc_in<bool> reset_n;
    sc_in<sc_int<DATA_WIDTH>> data_in[DATA_DEPTH];
    sc_in<sc_int<DATA_WIDTH>> coeff[DATA_DEPTH];
    sc_out<sc_int<DATA_WIDTH>> data_out;

    // Internal signals
    sc_signal<sc_int<DATA_WIDTH>> mult_out[DATA_DEPTH];
    sc_signal<sc_int<DATA_WIDTH>> sum_stage[DATA_DEPTH-1]; // For tree adder

    // Submodules
    fixed_multiplier<T, fracBits>* multipliers[DATA_DEPTH];
    fixed_adder<T, fracBits>* adders[DATA_DEPTH-1];

    void register_output() {
        if (!reset_n.read()) {
            data_out.write(0);
        } else {
            // Final sum is in the last sum_stage element
            data_out.write(sum_stage[DATA_DEPTH-2].read());
        }
    }

    SC_CTOR(dct_8muladd) {
        // Create multiplier instances
        for (int i = 0; i < DATA_DEPTH; i++) {
            char name[20];
            sprintf(name, "multiplier_%d", i);
            multipliers[i] = new fixed_multiplier<T, fracBits>(name);
            multipliers[i]->a(data_in[i]);
            multipliers[i]->b(coeff[i]);
            multipliers[i]->mul_res(mult_out[i]);
        }

        // Create tree adder structure
        // Level 1: 4 pairwise additions
        for (int i = 0; i < 4; i++) {
            char name[20];
            sprintf(name, "adder_l1_%d", i);
            adders[i] = new fixed_adder<T, fracBits>(name);
            adders[i]->a(mult_out[2*i]);
            adders[i]->b(mult_out[2*i+1]);
            adders[i]->sum_out(sum_stage[i]);
        }

        // Level 2: 2 additions
        for (int i = 0; i < 2; i++) {
            char name[20];
            sprintf(name, "adder_l2_%d", i);
            adders[4+i] = new fixed_adder<T, fracBits>(name);
            adders[4+i]->a(sum_stage[2*i]);
            adders[4+i]->b(sum_stage[2*i+1]);
            adders[4+i]->sum_out(sum_stage[4+i]);
        }

        // Level 3: final addition
        adders[6] = new fixed_adder<T, fracBits>("adder_final");
        adders[6]->a(sum_stage[4]);
        adders[6]->b(sum_stage[5]);
        adders[6]->sum_out(sum_stage[6]);

        // Register output
        SC_METHOD(register_output);
        sensitive << clk.pos();
        reset_signal_is(reset_n, false);
    }

    ~dct_8muladd() {
        for (int i = 0; i < DATA_DEPTH; i++)
            delete multipliers[i];
        for (int i = 0; i < DATA_DEPTH-1; i++)
            delete adders[i];
    }
};

// 1D DCT for a single row/column (8x1)
template<typename T = int32_t, int fracBits = 16, int DATA_WIDTH = sizeof(T)*8>
SC_MODULE(dct_1d_8x1) {
    sc_in<bool> clk;
    sc_in<bool> reset_n;
    sc_in<sc_int<DATA_WIDTH>> data_in[8];
    sc_in<sc_int<DATA_WIDTH>> coeff_vector[64]; // Full coefficient matrix
    sc_out<sc_int<DATA_WIDTH>> dct_out[8];

    // Internal signals
    sc_signal<sc_int<DATA_WIDTH>> dct_result_raw[8];
    sc_signal<sc_int<DATA_WIDTH>> coeff_row[8][8];

    // Submodules
    dct_8muladd<T, fracBits>* dct_units[8];

    void extract_coeffs() {
        // Extract coefficient rows from the matrix
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                // Note: In Verilog, the coefficients are extracted with row reversal
                // Here we're extracting row i from the coeff_vector
                coeff_row[i][j].write(coeff_vector[i*8 + j].read());
            }
        }
    }

    void fix_sign() {
        // Apply sign fixing for odd indices (as in Verilog code)
        for (int i = 0; i < 8; i++) {
            if (i % 2 == 1) {
                // Negate odd indices
                dct_out[i].write(-dct_result_raw[i].read());
            } else {
                // Keep even indices as is
                dct_out[i].write(dct_result_raw[i].read());
            }
        }
    }

    SC_CTOR(dct_1d_8x1) {
        // Create DCT 8muladd units
        for (int i = 0; i < 8; i++) {
            char name[20];
            sprintf(name, "dct_unit_%d", i);
            dct_units[i] = new dct_8muladd<T, fracBits>(name);
            
            dct_units[i]->clk(clk);
            dct_units[i]->reset_n(reset_n);
            
            // Connect inputs
            for (int j = 0; j < 8; j++) {
                dct_units[i]->data_in[j](data_in[j]);
                dct_units[i]->coeff[j](coeff_row[i][j]);
            }
            
            // Connect output
            dct_units[i]->data_out(dct_result_raw[i]);
        }

        // Method to extract coefficients
        SC_METHOD(extract_coeffs);
        for (int i = 0; i < 64; i++) {
            sensitive << coeff_vector[i];
        }

        // Method to fix sign of DCT results
        SC_METHOD(fix_sign);
        for (int i = 0; i < 8; i++) {
            sensitive << dct_result_raw[i];
        }
    }

    ~dct_1d_8x1() {
        for (int i = 0; i < 8; i++) {
            delete dct_units[i];
        }
    }
};

// 1D DCT for all rows/columns (8x8)
template<typename T = int32_t, int fracBits = 16, int DATA_WIDTH = sizeof(T)*8>
SC_MODULE(dct_1d_8x8) {
    sc_in<bool> clk;
    sc_in<bool> reset_n;
    sc_in<sc_int<DATA_WIDTH>> data_in[64];        // 64 input pixels
    sc_in<sc_int<DATA_WIDTH>> coeff_vector[64];   // 64 coefficients
    sc_out<sc_int<DATA_WIDTH>> dct_out[64];       // 64 DCT outputs

    // Internal signals for row data
    sc_signal<sc_int<DATA_WIDTH>> row_data[8][8];
    sc_signal<sc_int<DATA_WIDTH>> row_dct[8][8];

    // Submodules for processing each row
    dct_1d_8x1<T, fracBits>* dct_units[8];

    void extract_rows() {
        // Extract rows from the input data
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                row_data[i][j].write(data_in[i*8 + j].read());
            }
        }
    }

    void combine_outputs() {
        // Combine DCT results back to output
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                dct_out[i*8 + j].write(row_dct[i][j].read());
            }
        }
    }

    SC_CTOR(dct_1d_8x8) {
        // Create DCT 1D 8x1 units for each row
        for (int i = 0; i < 8; i++) {
            char name[20];
            sprintf(name, "dct_unit_8x1_%d", i);
            dct_units[i] = new dct_1d_8x1<T, fracBits>(name);
            
            dct_units[i]->clk(clk);
            dct_units[i]->reset_n(reset_n);
            
            // Connect row inputs
            for (int j = 0; j < 8; j++) {
                dct_units[i]->data_in[j](row_data[i][j]);
            }
            
            // Connect coefficient inputs
            for (int j = 0; j < 64; j++) {
                dct_units[i]->coeff_vector[j](coeff_vector[j]);
            }
            
            // Connect row outputs
            for (int j = 0; j < 8; j++) {
                dct_units[i]->dct_out[j](row_dct[i][j]);
            }
        }

        // Method to extract rows from input
        SC_METHOD(extract_rows);
        for (int i = 0; i < 64; i++) {
            sensitive << data_in[i];
        }

        // Method to combine outputs
        SC_METHOD(combine_outputs);
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                sensitive << row_dct[i][j];
            }
        }
    }

    ~dct_1d_8x8() {
        for (int i = 0; i < 8; i++) {
            delete dct_units[i];
        }
    }
};

// 2D DCT module (8x8)
template<typename T = int32_t, int fracBits = 16, int DATA_WIDTH = sizeof(T)*8, int DATA_DEPTH = 8>
SC_MODULE(dct_2d_8x8) {
    sc_in<bool> clk;
    sc_in<bool> reset_n;
    sc_in<sc_int<DATA_WIDTH>> data_in_matrix[64];     // 64 input pixels
    sc_out<sc_int<DATA_WIDTH>> data_out_matrix[64];   // 64 DCT outputs
    sc_in<sc_int<DATA_WIDTH>> dct_coeffs[64];         // 64 DCT coefficients

    // Internal signals for intermediate results
    sc_signal<sc_int<DATA_WIDTH>> row_dct_flat[64];
    sc_signal<sc_int<DATA_WIDTH>> col_data_flat[64];
    sc_signal<sc_int<DATA_WIDTH>> final_dct_transposed[64];

    // Submodules for row and column DCT
    dct_1d_8x8<T, fracBits>* row_dct_inst;
    dct_1d_8x8<T, fracBits>* col_dct_inst;

    void transpose_after_row() {
        // Transpose from row format to column format
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                col_data_flat[j*8 + i].write(row_dct_flat[i*8 + j].read());
            }
        }
    }

    void transpose_final() {
        // Transpose back to original format
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                data_out_matrix[i*8 + j].write(final_dct_transposed[j*8 + i].read());
            }
        }
    }

    SC_CTOR(dct_2d_8x8) {
        // Create row DCT instance
        row_dct_inst = new dct_1d_8x8<T, fracBits>("row_dct");
        row_dct_inst->clk(clk);
        row_dct_inst->reset_n(reset_n);
        
        // Connect inputs and coefficients
        for (int i = 0; i < 64; i++) {
            row_dct_inst->data_in[i](data_in_matrix[i]);
            row_dct_inst->coeff_vector[i](dct_coeffs[i]);
        }
        
        // Connect row DCT outputs
        for (int i = 0; i < 64; i++) {
            row_dct_inst->dct_out[i](row_dct_flat[i]);
        }

        // Create column DCT instance
        col_dct_inst = new dct_1d_8x8<T, fracBits>("col_dct");
        col_dct_inst->clk(clk);
        col_dct_inst->reset_n(reset_n);
        
        // Connect transposed data and coefficients
        for (int i = 0; i < 64; i++) {
            col_dct_inst->data_in[i](col_data_flat[i]);
            col_dct_inst->coeff_vector[i](dct_coeffs[i]);
        }
        
        // Connect column DCT outputs
        for (int i = 0; i < 64; i++) {
            col_dct_inst->dct_out[i](final_dct_transposed[i]);
        }

        // Method to transpose after row DCT
        SC_METHOD(transpose_after_row);
        for (int i = 0; i < 64; i++) {
            sensitive << row_dct_flat[i];
        }

        // Method to transpose final results
        SC_METHOD(transpose_final);
        for (int i = 0; i < 64; i++) {
            sensitive << final_dct_transposed[i];
        }
    }

    ~dct_2d_8x8() {
        delete row_dct_inst;
        delete col_dct_inst;
    }
};

#endif // DCT_SYSTEMC_H