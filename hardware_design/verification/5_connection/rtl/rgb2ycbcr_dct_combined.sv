// ============================================================================
// RGB to YCbCr + 2D DCT Combined Module
// - Takes RGB input (64 8-bit pixels)
// - Converts to YCbCr
// - Performs 2D DCT on Y, Cb, Cr components
// ============================================================================
`timescale 1ns/1ps
module rgb2ycbcr_dct_combined #(
    parameter int FIXED_POINT_LENGTH = 32,
    parameter int FRAC_BITS = 8,
    parameter int INPUT_WIDTH = 8
)(
    input  logic                                 clk,
    input  logic                                 rst_n,

    // ---------- RGB 输入接口 (64 pixels) ----------
    input  logic                                 in_valid,
    output logic                                 in_ready,
    input  logic       [8*64-1:0]                r_all,    // 64个8位R
    input  logic       [8*64-1:0]                g_all,    // 64个8位G
    input  logic       [8*64-1:0]                b_all,    // 64个8位B

    // ---------- DCT 输出接口 (全部YCbCr分量) ----------
    output logic                                 out_valid,
    input  logic                                 out_ready,
    output logic signed [FIXED_POINT_LENGTH*64-1:0] dct_y_out,   // Y component DCT coefficients
    output logic signed [FIXED_POINT_LENGTH*64-1:0] dct_cb_out,  // Cb component DCT coefficients
    output logic signed [FIXED_POINT_LENGTH*64-1:0] dct_cr_out   // Cr component DCT coefficients
);

    // Internal YCbCr signals
    logic [FIXED_POINT_LENGTH*64-1:0] y_all;
    logic [FIXED_POINT_LENGTH*64-1:0] cb_all;
    logic [FIXED_POINT_LENGTH*64-1:0] cr_all;
    
    // Internal ready/valid signals
    logic y_in_ready, cb_in_ready, cr_in_ready;
    logic y_out_valid, cb_out_valid, cr_out_valid;
    
    // Combine ready/valid signals
    assign in_ready = y_in_ready & cb_in_ready & cr_in_ready;
    assign out_valid = y_out_valid & cb_out_valid & cr_out_valid;

    // RGB to YCbCr converter
    rgb2ycbcr_container #(
        .fixed_point_length(FIXED_POINT_LENGTH),
        .input_width(INPUT_WIDTH)
    ) u_rgb2ycbcr (
        .clk(clk),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_all(y_all),
        .cb_all(cb_all),
        .cr_all(cr_all)
    );

    // 2D DCT module for Y component
    dct8x8_chen_2d_parallel #(
        .IN_W(FIXED_POINT_LENGTH),
        .FRAC(FRAC_BITS)
    ) u_dct_y (
        .clk(clk),
        .rst_n(rst_n),
        
        .in_valid(in_valid),
        .in_ready(y_in_ready),
        .in_data(y_all),
        
        .out_valid(y_out_valid),
        .out_ready(out_ready),
        .out_data(dct_y_out)
    );
    
    // 2D DCT module for Cb component
    dct8x8_chen_2d_parallel #(
        .IN_W(FIXED_POINT_LENGTH),
        .FRAC(FRAC_BITS)
    ) u_dct_cb (
        .clk(clk),
        .rst_n(rst_n),
        
        .in_valid(in_valid),
        .in_ready(cb_in_ready),
        .in_data(cb_all),
        
        .out_valid(cb_out_valid),
        .out_ready(out_ready),
        .out_data(dct_cb_out)
    );
    
    // 2D DCT module for Cr component
    dct8x8_chen_2d_parallel #(
        .IN_W(FIXED_POINT_LENGTH),
        .FRAC(FRAC_BITS)
    ) u_dct_cr (
        .clk(clk),
        .rst_n(rst_n),
        
        .in_valid(in_valid),
        .in_ready(cr_in_ready),
        .in_data(cr_all),
        
        .out_valid(cr_out_valid),
        .out_ready(out_ready),
        .out_data(dct_cr_out)
    );

endmodule 