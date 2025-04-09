module dct_2d_8x8 #(
    parameter DATA_WIDTH = 32,
    parameter DATA_DEPTH = 8
)(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] data_in_matrix,     // 64个像素输入
    output wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] data_out_matrix     // 64个 DCT 输出
);

    localparam TOTAL_WIDTH = DATA_WIDTH * DATA_DEPTH; // = 256

    // --------- 包含定义的系数 ---------
    `include "dct_coeffs.vh"

    // --------- 行方向 DCT ---------
    wire [DATA_WIDTH*64-1:0] row_dct_flat;

    dct_1d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH)
    ) row_dct_inst (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_in_matrix),
        .coeff_vector(dct_coeffs),
        .dct_out(row_dct_flat)
    );

    // --------- 矩阵转置 (8x8) ---------
    wire [DATA_WIDTH*64-1:0] col_data_flat;

    genvar i, j;
    generate
        for (i = 0; i < 8; i = i + 1) begin : TRANS_ROW
            for (j = 0; j < 8; j = j + 1) begin : TRANS_COL
                assign col_data_flat[j*8*DATA_WIDTH + i*DATA_WIDTH +: DATA_WIDTH] =
                       row_dct_flat[i*8*DATA_WIDTH + j*DATA_WIDTH +: DATA_WIDTH];
            end
        end
    endgenerate

    // --------- 列方向 DCT ---------
    wire [DATA_WIDTH*64-1:0] final_dct_out;

    dct_1d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH)
    ) col_dct_inst (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(col_data_flat),
        .coeff_vector(dct_coeffs),
        .dct_out(final_dct_out)
    );

    assign data_out_matrix = final_dct_out;

endmodule
