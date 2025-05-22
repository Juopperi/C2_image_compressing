module jpeg_compression_pipeline_only_y #(
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
    // Final zigzag output for Y channel only
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag
);

    // Stage 1: YCbCr Conversion (only Y is used)
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_raw;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_raw;  // Unused
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_raw;  // Unused

    rgb2ycbcr_container #(
        .fixed_point_length(DATA_WIDTH)
    ) ycbcr_stage (
        .clk(clk),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_all(y_raw),
        .cb_all(cb_raw),  // Unused
        .cr_all(cr_raw)   // Unused
    );

    // Stage 2: DCT Transform for Y channel
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_dct;

    wire y_in_ready;
    wire y_out_valid;
    reg y_in_valid = 1'b1;
    reg y_out_ready = 1'b1;

    dct8x8_chen_2d #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (8)         // Fraction bits
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

    // Stage 3: Quantization for Y channel
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_quant;

    quantize_array #(
        .USE_LUMA(1)  // Use luma quantization table
    ) quant_y_stage (
        .clk(clk),
        .pixels(y_dct),
        .q_result(y_quant)
    );

    // Stage 4: Zigzag Reordering for Y channel
    zigzag_reorder zigzag_y_stage (
        .clk(clk),
        .input_matrix(y_quant),
        .zigzag_out(y_zigzag)
    );

assign cb_zigzag = 0;
assign cr_zigzag = 0;

endmodule
