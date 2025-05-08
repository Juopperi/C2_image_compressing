module top_ycbcr_csd #(
    parameter SCALE = 16,
    parameter FIXED_POINT_LENGTH = 32,
    parameter INPUT_WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire [INPUT_WIDTH-1:0] r_in,
    input wire [INPUT_WIDTH-1:0] g_in,
    input wire [INPUT_WIDTH-1:0] b_in,
    output wire [FIXED_POINT_LENGTH-1:0] y_out,
    output wire [FIXED_POINT_LENGTH-1:0] cb_out,
    output wire [FIXED_POINT_LENGTH-1:0] cr_out
);

    // Instantiate the YCbCr conversion module using CSD multipliers
    ycbcr_conversion_csd #(
        .SCALE(SCALE),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .INPUT_WIDTH(INPUT_WIDTH)
    ) ycbcr_inst (
        .clk(clk),
        .input_R(r_in),
        .input_G(g_in),
        .input_B(b_in),
        .output_Y(y_out),
        .output_Cb(cb_out),
        .output_Cr(cr_out)
    );

endmodule 