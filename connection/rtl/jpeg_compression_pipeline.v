module jpeg_compression_pipeline #(
    parameter DATA_WIDTH = 32,
    parameter INPUT_WIDTH = 8,
    parameter DATA_DEPTH = 8,
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 64 pixels (8x8 block)
) (
    input wire clk,
    input wire reset_n,
    // RGB inputs - 64 pixels, each with 8-bit R, G, B components
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all,
    // Final zigzag outputs for Y, Cb, Cr channels
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag
);

    // Stage 1: YCbCr Conversion
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_raw;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_raw;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_raw;

    rgb2ycbcr_container #(
        .fixed_point_length(DATA_WIDTH)
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
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_dct;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_dct;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_dct;

    dct_2d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dct_y_stage (
        .clk(clk),
        .reset_n(reset_n),
        .data_in_matrix(y_raw),
        .data_out_matrix(y_dct)
    );

    dct_2d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dct_cb_stage (
        .clk(clk),
        .reset_n(reset_n),
        .data_in_matrix(cb_raw),
        .data_out_matrix(cb_dct)
    );

    dct_2d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dct_cr_stage (
        .clk(clk),
        .reset_n(reset_n),
        .data_in_matrix(cr_raw),
        .data_out_matrix(cr_dct)
    );

    // Stage 3: Quantization for Y/Cb/Cr channels
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_quant;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_quant;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_quant;

    // Luma quantization (Y channel)
    quantize_array #(
        .USE_LUMA(1)  // Use luma quantization table
    ) quant_y_stage (
        .clk(clk),
        .pixels(y_dct),
        .q_result(y_quant)
    );

    // Chroma quantization (Cb and Cr channels)
    quantize_array #(
        .USE_LUMA(0)  // Use chroma quantization table
    ) quant_cb_stage (
        .clk(clk),
        .pixels(cb_dct),
        .q_result(cb_quant)
    );

    quantize_array #(
        .USE_LUMA(0)  // Use chroma quantization table
    ) quant_cr_stage (
        .clk(clk),
        .pixels(cr_dct),
        .q_result(cr_quant)
    );

    // Stage 4: Zigzag Reordering for Y/Cb/Cr channels
    zigzag_reorder zigzag_y_stage (
        .clk(clk),
        .input_matrix(y_quant),
        .zigzag_out(y_zigzag)
    );

    zigzag_reorder zigzag_cb_stage (
        .clk(clk),
        .input_matrix(cb_quant),
        .zigzag_out(cb_zigzag)
    );

    zigzag_reorder zigzag_cr_stage (
        .clk(clk),
        .input_matrix(cr_quant),
        .zigzag_out(cr_zigzag)
    );

endmodule