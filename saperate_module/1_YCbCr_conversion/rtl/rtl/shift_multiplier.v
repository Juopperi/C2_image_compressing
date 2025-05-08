module shift_multiplier #(
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
    
    // Results using shift and add operations with improved precision
    always @(*) begin
        case (coef_select)
            // n299 = 0.299 * 2^SCALE
            4'd0: begin
                // 0.299 ≈ 0.296875 + 0.00195313 + 0.00012207 = 0.29895
                // 0.296875 = 2^(-2) - 2^(-6)
                // 0.00195313 = 2^(-9)
                // 0.00012207 = 2^(-13)
                mult_result = ({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-2);  // data_in * 2^(SCALE-2)
                mult_result = mult_result - (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-6));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-9));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-13));
            end
            
            // n587 = 0.587 * 2^SCALE
            4'd1: begin
                // 0.587 ≈ 0.5 + 0.0859375 + 0.00097656 = 0.58691406
                // 0.5 = 2^(-1)
                // 0.0859375 = 2^(-4) + 2^(-5) + 2^(-8)
                // 0.00097656 = 2^(-10)
                mult_result = ({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-1);  // data_in * 2^(SCALE-1)
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-4));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-5));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-8));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-10));
            end
            
            // n114 = 0.114 * 2^SCALE
            4'd2: begin
                // 0.114 ≈ 0.125 - 0.01171875 + 0.00048828 = 0.11376953
                // 0.125 = 2^(-3)
                // 0.01171875 = 2^(-7) + 2^(-8)
                // 0.00048828 = 2^(-11)
                mult_result = ({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-3);  // data_in * 2^(SCALE-3)
                mult_result = mult_result - (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-7));
                mult_result = mult_result - (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-8));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-11));
            end
            
            // n1687 = 0.1687 * 2^SCALE
            4'd3: begin
                // 0.1687 ≈ 0.171875 - 0.00390625 + 0.00073242 = 0.16870117
                // 0.171875 = 2^(-3) + 2^(-5) + 2^(-6)
                // 0.00390625 = 2^(-8)
                // 0.00073242 = 2^(-11) + 2^(-13)
                mult_result = ({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-3);  // data_in * 2^(SCALE-3)
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-5));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-6));
                mult_result = mult_result - (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-8));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-11));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-13));
            end
            
            // n3313 = 0.3313 * 2^SCALE
            4'd4: begin
                // 0.3313 ≈ 0.328125 + 0.00292969 + 0.00024414 = 0.33129883
                // 0.328125 = 2^(-2) + 2^(-4) + 2^(-6)
                // 0.00292969 = 2^(-9) + 2^(-10)
                // 0.00024414 = 2^(-12)
                mult_result = ({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-2);  // data_in * 2^(SCALE-2)
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-4));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-6));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-9));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-10));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-12));
            end
            
            // n5 = 0.5 * 2^SCALE
            4'd5: begin
                // 0.5 = 2^(-1) - Exact coefficient
                mult_result = ({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-1);  // data_in * 2^(SCALE-1)
            end
            
            // n4187 = 0.4187 * 2^SCALE
            4'd6: begin
                // 0.4187 ≈ 0.421875 - 0.00390625 + 0.00073242 = 0.41870117
                // 0.421875 = 2^(-2) + 2^(-3) + 2^(-5)
                // 0.00390625 = 2^(-8)
                // 0.00073242 = 2^(-11) + 2^(-13)
                mult_result = ({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-2);  // data_in * 2^(SCALE-2)
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-3));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-5));
                mult_result = mult_result - (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-8));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-11));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-13));
            end
            
            // n0813 = 0.0813 * 2^SCALE
            4'd7: begin
                // 0.0813 ≈ 0.078125 + 0.00292969 + 0.00024414 = 0.08129883
                // 0.078125 = 2^(-4) + 2^(-5) + 2^(-7)
                // 0.00292969 = 2^(-9) + 2^(-10)
                // 0.00024414 = 2^(-12)
                mult_result = ({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-4);  // data_in * 2^(SCALE-4)
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-5));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-7));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-9));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-10));
                mult_result = mult_result + (({FIXED_POINT_LENGTH{1'b0}} | data_in) << (SCALE-12));
            end
            
            // n128 = 128 * 2^SCALE
            4'd8: begin
                mult_result = 128 << SCALE;
            end
            
            default: mult_result = 0;
        endcase
    end
    
    assign result = mult_result;
    
endmodule 