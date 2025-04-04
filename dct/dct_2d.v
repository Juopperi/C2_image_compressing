module dct_2d_8x8_full #(
    parameter DATA_WIDTH = 32,
    parameter DATA_DEPTH = 8
)(
    input  wire clk,
    input  wire reset_n,

    input  wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] data_in_matrix,       // 64 个像素值
    input  wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] coeff_stage1_all,     // 第一阶段的 64 个乘数
    input  wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] coeff_stage2_all,     // 第二阶段的 64 个乘数

    output wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] data_out_matrix       // 输出结果 8x8
);

    // 8 个列输入、系数、输出（每个 8 元素）
    wire [DATA_WIDTH*DATA_DEPTH-1:0] col_data    [0:DATA_DEPTH-1];
    wire [DATA_WIDTH*DATA_DEPTH-1:0] col_coeff1  [0:DATA_DEPTH-1];
    wire [DATA_WIDTH*DATA_DEPTH-1:0] col_coeff2  [0:DATA_DEPTH-1];
    wire [DATA_WIDTH*DATA_DEPTH-1:0] col_out     [0:DATA_DEPTH-1];

    genvar col, row;
    generate
        for (col = 0; col < DATA_DEPTH; col = col + 1) begin : gen_columns
            for (row = 0; row < DATA_DEPTH; row = row + 1) begin : gen_unpack
                // 提取列数据
                assign col_data[col][row*DATA_WIDTH +: DATA_WIDTH] =
                    data_in_matrix[(row*DATA_DEPTH + col)*DATA_WIDTH +: DATA_WIDTH];

                assign col_coeff1[col][row*DATA_WIDTH +: DATA_WIDTH] =
                    coeff_stage1_all[(row*DATA_DEPTH + col)*DATA_WIDTH +: DATA_WIDTH];

                assign col_coeff2[col][row*DATA_WIDTH +: DATA_WIDTH] =
                    coeff_stage2_all[(row*DATA_DEPTH + col)*DATA_WIDTH +: DATA_WIDTH];
            end

            // 每列一个 dct_2d_col 模块
            dct_2d_col #(
                .DATA_WIDTH(DATA_WIDTH),
                .DATA_DEPTH(DATA_DEPTH)
            ) dct_col_inst (
                .clk(clk),
                .reset_n(reset_n),
                .data_in(col_data[col]),
                .coeff_stage1(col_coeff1[col]),
                .coeff_stage2(col_coeff2[col]),
                .data_out_final(col_out[col])
            );

            // 将输出打包成矩阵输出（行主序）
            for (row = 0; row < DATA_DEPTH; row = row + 1) begin : gen_out_pack
                assign data_out_matrix[(row*DATA_DEPTH + col)*DATA_WIDTH +: DATA_WIDTH] =
                    col_out[col][row*DATA_WIDTH +: DATA_WIDTH];
            end
        end
    endgenerate

endmodule
