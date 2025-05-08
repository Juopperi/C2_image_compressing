module ycbcr_conversion #(
    parameter SCALE = 16,
    parameter FIXED_POINT_LENGTH = 32,
    parameter INPUT_WIDTH = 8
)(
    input wire clk,
    input wire [INPUT_WIDTH-1:0] input_R,
    input wire [INPUT_WIDTH-1:0] input_G, 
    input wire [INPUT_WIDTH-1:0] input_B,
    output wire [FIXED_POINT_LENGTH-1:0] output_Y,
    output wire [FIXED_POINT_LENGTH-1:0] output_Cb,
    output wire [FIXED_POINT_LENGTH-1:0] output_Cr
);

    // Intermediate results
    wire [FIXED_POINT_LENGTH-1:0] R_n299_result;
    wire [FIXED_POINT_LENGTH-1:0] G_n587_result;
    wire [FIXED_POINT_LENGTH-1:0] B_n144_result;
    wire [FIXED_POINT_LENGTH-1:0] R_n1687_result;
    wire [FIXED_POINT_LENGTH-1:0] G_n3313_result;
    wire [FIXED_POINT_LENGTH-1:0] B_n5_result;
    wire [FIXED_POINT_LENGTH-1:0] R_n5_result;
    wire [FIXED_POINT_LENGTH-1:0] G_n4187_result;
    wire [FIXED_POINT_LENGTH-1:0] B_n0813_result;
    wire [FIXED_POINT_LENGTH-1:0] n128_result;
    
    // Registered outputs
    reg [FIXED_POINT_LENGTH-1:0] Y_reg;
    reg [FIXED_POINT_LENGTH-1:0] Cb_reg;
    reg [FIXED_POINT_LENGTH-1:0] Cr_reg;
    
    // Use shift multipliers for each coefficient
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_R_n299 (
        .data_in(input_R),
        .coef_select(4'd0),  // n299
        .result(R_n299_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_G_n587 (
        .data_in(input_G),
        .coef_select(4'd1),  // n587
        .result(G_n587_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_B_n144 (
        .data_in(input_B),
        .coef_select(4'd2),  // n144
        .result(B_n144_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_R_n1687 (
        .data_in(input_R),
        .coef_select(4'd3),  // n1687
        .result(R_n1687_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_G_n3313 (
        .data_in(input_G),
        .coef_select(4'd4),  // n3313
        .result(G_n3313_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_B_n5 (
        .data_in(input_B),
        .coef_select(4'd5),  // n5
        .result(B_n5_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_R_n5 (
        .data_in(input_R),
        .coef_select(4'd5),  // n5
        .result(R_n5_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_G_n4187 (
        .data_in(input_G),
        .coef_select(4'd6),  // n4187
        .result(G_n4187_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_B_n0813 (
        .data_in(input_B),
        .coef_select(4'd7),  // n0813
        .result(B_n0813_result)
    );
    
    shift_multiplier #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_n128 (
        .data_in(8'd0),  // Not used for constant
        .coef_select(4'd8),  // n128
        .result(n128_result)
    );
    
    // Process RGB to YCbCr conversion
    always @(posedge clk) begin
        // Y = 0.299*R + 0.587*G + 0.114*B
        Y_reg <= R_n299_result + G_n587_result + B_n144_result;
        
        // Cb = 0.5*B - 0.1687*R - 0.3313*G + 128
        Cb_reg <= B_n5_result - R_n1687_result - G_n3313_result + n128_result;
        
        // Cr = 0.5*R - 0.4187*G - 0.0813*B + 128
        Cr_reg <= R_n5_result - G_n4187_result - B_n0813_result + n128_result;
    end
    
    // Assign outputs
    assign output_Y = Y_reg;
    assign output_Cb = Cb_reg;
    assign output_Cr = Cr_reg;

endmodule 