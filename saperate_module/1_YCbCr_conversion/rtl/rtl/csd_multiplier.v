module csd_multiplier #(
    parameter INPUT_WIDTH = 8,
    parameter FIXED_POINT_LENGTH = 32,
    parameter SCALE = 16
)(
    input [INPUT_WIDTH-1:0] data_in,
    input [3:0] coef_select,  // Select which coefficient to use
    output [FIXED_POINT_LENGTH-1:0] result
);

    // Internal signals
    reg [FIXED_POINT_LENGTH-1:0] mult_result;
    
    // Results using CSD (Canonical Signed Digit) representation
    // CSD uses {-1, 0, 1} instead of {0, 1} to represent coefficients
    // This minimizes the number of non-zero digits and thus reduces operations
    always @(*) begin
        case (coef_select)
            // n299 = 0.299 * 2^SCALE
            4'd0: begin
                // CSD representation: 0.299 ≈ 0.01001010001 (binary: 0.010011)
                // Meaning 2^(-2) - 2^(-5) + 2^(-7) - 2^(-11)
                // Using fewer non-zero terms than standard binary
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-2));                // +2^(-2)
                mult_result = mult_result - (data_in << (SCALE-5));                // -2^(-5)
                mult_result = mult_result + (data_in << (SCALE-7));                // +2^(-7)
                mult_result = mult_result - (data_in << (SCALE-11));               // -2^(-11)
            end
            
            // n587 = 0.587 * 2^SCALE
            4'd1: begin
                // CSD representation: 0.587 ≈ 0.1001011 (binary: 0.1001011)
                // Meaning 2^(-1) - 2^(-4) + 2^(-6) + 2^(-7)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-1));                // +2^(-1)
                mult_result = mult_result - (data_in << (SCALE-4));                // -2^(-4)
                mult_result = mult_result + (data_in << (SCALE-6));                // +2^(-6)
                mult_result = mult_result + (data_in << (SCALE-7));                // +2^(-7)
            end
            
            // n114 = 0.114 * 2^SCALE
            4'd2: begin
                // CSD representation: 0.114 ≈ 0.00101001 (binary: 0.0001110)
                // Meaning 2^(-3) - 2^(-5) + 2^(-8)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-3));                // +2^(-3)
                mult_result = mult_result - (data_in << (SCALE-5));                // -2^(-5)
                mult_result = mult_result + (data_in << (SCALE-8));                // +2^(-8)
            end
            
            // n1687 = 0.1687 * 2^SCALE
            4'd3: begin
                // CSD representation: 0.1687 ≈ 0.0010101101 (binary: 0.0010101101)
                // Meaning 2^(-3) + 2^(-5) + 2^(-7) - 2^(-9) + 2^(-10)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-3));                // +2^(-3)
                mult_result = mult_result + (data_in << (SCALE-5));                // +2^(-5)
                mult_result = mult_result + (data_in << (SCALE-7));                // +2^(-7)
                mult_result = mult_result - (data_in << (SCALE-9));                // -2^(-9)
                mult_result = mult_result + (data_in << (SCALE-10));               // +2^(-10)
            end
            
            // n3313 = 0.3313 * 2^SCALE
            4'd4: begin
                // CSD representation: 0.3313 ≈ 0.0101010001 (binary: 0.0101010001)
                // Meaning 2^(-2) + 2^(-4) + 2^(-6) + 2^(-10)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-2));                // +2^(-2)
                mult_result = mult_result + (data_in << (SCALE-4));                // +2^(-4)
                mult_result = mult_result + (data_in << (SCALE-6));                // +2^(-6)
                mult_result = mult_result + (data_in << (SCALE-10));               // +2^(-10)
            end
            
            // n5 = 0.5 * 2^SCALE
            4'd5: begin
                // CSD representation: 0.5 = 0.1 = 2^(-1)
                // This is already minimal
                mult_result = data_in << (SCALE-1);                                // 2^(-1)
            end
            
            // n4187 = 0.4187 * 2^SCALE
            4'd6: begin
                // CSD representation: 0.4187 ≈ 0.0110101001 (binary: 0.0110101001)
                // Meaning 2^(-2) + 2^(-3) - 2^(-5) + 2^(-7) + 2^(-10)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-2));                // +2^(-2)
                mult_result = mult_result + (data_in << (SCALE-3));                // +2^(-3)
                mult_result = mult_result - (data_in << (SCALE-5));                // -2^(-5)
                mult_result = mult_result + (data_in << (SCALE-7));                // +2^(-7)
                mult_result = mult_result + (data_in << (SCALE-10));               // +2^(-10)
            end
            
            // n0813 = 0.0813 * 2^SCALE
            4'd7: begin
                // CSD representation: 0.0813 ≈ 0.00010100101 (binary: 0.00010100101)
                // Meaning 2^(-4) + 2^(-6) + 2^(-9) + 2^(-11)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-4));                // +2^(-4)
                mult_result = mult_result + (data_in << (SCALE-6));                // +2^(-6)
                mult_result = mult_result + (data_in << (SCALE-9));                // +2^(-9)
                mult_result = mult_result + (data_in << (SCALE-11));               // +2^(-11)
            end
            
            // n128 = 128 * 2^SCALE
            4'd8: begin
                mult_result = 128 << SCALE;                                         // 128*2^16
            end
            
            default: mult_result = 0;
        endcase
    end
    
    assign result = mult_result;
    
endmodule 