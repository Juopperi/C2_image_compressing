module jpeg_pipeline_wrapper_optimized #(
    parameter DATA_WIDTH = 32,
    parameter INPUT_WIDTH = 8,
    parameter DATA_DEPTH = 8,
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 64 pixels
) (
    input wire clk,
    input wire reset_n,
    // 块输入接口
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] block_r,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] block_g,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] block_b,
    // 压缩输出接口
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] zigzag_y,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] zigzag_cb,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] zigzag_cr
);

    // 实例化优化版本的JPEG流水线
    jpeg_compression_pipeline_optimized #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) jpeg_pipeline_inst (
        .clk(clk),
        .reset_n(reset_n),
        .r_all(block_r),
        .g_all(block_g),
        .b_all(block_b),
        .y_zigzag(zigzag_y),
        .cb_zigzag(zigzag_cb),
        .cr_zigzag(zigzag_cr)
    );

endmodule 