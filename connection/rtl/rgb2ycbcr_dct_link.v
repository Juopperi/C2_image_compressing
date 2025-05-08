// RGB2YCbCr + DCT 连接模块，用于分步验证
// 将RGB转YCbCr转换器与DCT模块相连接，不包含量化和zigzag部分
`timescale 1ns / 1ps

module rgb2ycbcr_dct_link #(
    parameter DATA_WIDTH = 32,
    parameter INPUT_WIDTH = 8,
    parameter DATA_DEPTH = 8,
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 64 pixels (8x8 block)
) (
    input wire clk,
    input wire reset_n,
    // RGB输入 - 64个像素，每个像素有8位R, G, B分量
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all,
    
    // YCbCr原始输出 - 用于调试
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_raw,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_raw,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_raw,
    
    // DCT输出 - Y, Cb, Cr通道的DCT系数
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_dct,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_dct,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_dct,
    
    // DCT状态信号 - 用于知道何时输出有效
    output wire y_out_valid,
    output wire cb_out_valid, 
    output wire cr_out_valid
);

    // Stage 1: YCbCr Conversion
    rgb2ycbcr_container #(
        .fixed_point_length(DATA_WIDTH),
        .input_width(INPUT_WIDTH)
    ) ycbcr_stage (
        .clk(clk),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_all(y_raw),
        .cb_all(cb_raw),
        .cr_all(cr_raw)
    );

    // Stage 2: DCT Transform for Y/Cb/Cr channels
    wire y_in_ready;
    reg y_in_valid = 1'b1;
    reg y_out_ready = 1'b1;

    // DCT模块 - Y通道
    dct8x8_chen_2d #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (16)         // 与固定点格式匹配
    ) dct_y_stage (
        .clk(clk),
        .rst_n(reset_n),
        .in_valid(y_in_valid),
        .in_ready(y_in_ready),
        .in_data(y_raw),
        .out_valid(y_out_valid),
        .out_ready(y_out_ready),
        .out_data(y_dct)
    );

    wire cb_in_ready;
    reg cb_in_valid = 1'b1;
    reg cb_out_ready = 1'b1;

    // DCT模块 - Cb通道
    dct8x8_chen_2d #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (16)         // 与固定点格式匹配
    ) dct_cb_stage (
        .clk(clk),
        .rst_n(reset_n),
        .in_valid(cb_in_valid),
        .in_ready(cb_in_ready),
        .in_data(cb_raw),
        .out_valid(cb_out_valid),
        .out_ready(cb_out_ready),
        .out_data(cb_dct)
    );

    wire cr_in_ready;
    reg cr_in_valid = 1'b1;
    reg cr_out_ready = 1'b1;

    // DCT模块 - Cr通道
    dct8x8_chen_2d #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (16)         // 与固定点格式匹配
    ) dct_cr_stage (
        .clk(clk),
        .rst_n(reset_n),
        .in_valid(cr_in_valid),
        .in_ready(cr_in_ready),
        .in_data(cr_raw),
        .out_valid(cr_out_valid),
        .out_ready(cr_out_ready),
        .out_data(cr_dct)
    );

endmodule 