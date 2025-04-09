`include "dct_coeffs.vh"

module dct_2d_8x8 #(
    parameter DATA_WIDTH = 32,
    parameter DATA_DEPTH = 8
)(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] data_in_matrix,     // 64 个像素输入
    output wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] data_out_matrix     // 64 个 DCT 输出
);

    localparam TOTAL_WIDTH = DATA_WIDTH * DATA_DEPTH;

    wire [TOTAL_WIDTH-1:0] row_data_in [0:7];     // 每行输入
    wire [TOTAL_WIDTH-1:0] row_dct_out [0:7];     // 每行输出
    wire [TOTAL_WIDTH-1:0] col_dct_out [0:7];     // 最终输出（每列 DCT）

    wire [DATA_WIDTH*64-1:0] dct_coeffs = `DCT_COEFFS_8x8;

    // ----------------------------
    // 将 data_in_matrix 拆成 8 行
    genvar i, j;
    generate
        for (i = 0; i < 8; i = i + 1) begin : UNPACK_INPUT_ROWS
            assign row_data_in[i] = data_in_matrix[i*TOTAL_WIDTH +: TOTAL_WIDTH];
        end
    endgenerate

    // ----------------------------


    wire [TOTAL_WIDTH-1:0] row_dct_result [0:7];

    generate
        for (i = 0; i < 8; i = i + 1) begin : ROW_DCT
            wire [DATA_WIDTH*8-1:0] coeff_row_i;
            assign coeff_row_i = dct_coeffs[i*DATA_WIDTH*8 +: DATA_WIDTH*8];  // 提取第 i 行

            dct_1d_8x8 #(
                .DATA_WIDTH(DATA_WIDTH)
            ) row_dct_inst (
                .clk(clk),
                .reset_n(reset_n),
                .data_in(row_data_in[i]),
                .coeff_vector(coeff_row_i),
                .dct_out(row_dct_result[i])
            );
        end
    endgenerate

    // ----------------------------
    // 转置中间结果（行DCT输出）变为列输入
    wire [DATA_WIDTH*8-1:0] col_data_in [0:7];

    generate
        for (i = 0; i < 8; i = i + 1) begin : COL_TRANSPOSE
            for (j = 0; j < 8; j = j + 1) begin : COL_EACH
                assign col_data_in[j][i*DATA_WIDTH +: DATA_WIDTH] =
                       row_dct_result[i][j*DATA_WIDTH +: DATA_WIDTH];
            end
        end
    endgenerate

    // ----------------------------
    // 列方向 DCT：对中间列进行 DCT
    wire [TOTAL_WIDTH-1:0] col_dct_result [0:7];

    generate
        for (i = 0; i < 8; i = i + 1) begin : COL_DCT
            wire [DATA_WIDTH*8-1:0] coeff_col_i;
            assign coeff_col_i = dct_coeffs[i*DATA_WIDTH*8 +: DATA_WIDTH*8];  // 复用行系数作为列变换

            dct_1d_8x8 #(
                .DATA_WIDTH(DATA_WIDTH)
            ) col_dct_inst (
                .clk(clk),
                .reset_n(reset_n),
                .data_in(col_data_in[i]),
                .coeff_vector(coeff_col_i),
                .dct_out(col_dct_result[i])
            );
        end
    endgenerate

    // ----------------------------
    // 打包最终输出
    generate
        for (i = 0; i < 8; i = i + 1) begin : PACK_OUTPUT
            assign data_out_matrix[i*TOTAL_WIDTH +: TOTAL_WIDTH] = col_dct_result[i];
        end
    endgenerate

endmodule
