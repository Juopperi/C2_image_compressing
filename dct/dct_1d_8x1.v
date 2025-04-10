module dct_1d_8x1 #(
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*8-1:0] data_in,
    input  wire [DATA_WIDTH*64-1:0] coeff_vector,  // 输入完整系数矩阵
    output wire [DATA_WIDTH*8-1:0] dct_out
);

    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : DCT_ROW
            wire [DATA_WIDTH*8-1:0] coeff_i;
            assign coeff_i = coeff_vector[(7 - i)*DATA_WIDTH*8 +: DATA_WIDTH*8];  // 行翻转提取

            wire signed [DATA_WIDTH-1:0] dct_result_raw;
            wire signed [DATA_WIDTH-1:0] dct_result_fixed;

            dct_8muladd #(
                .DATA_WIDTH(DATA_WIDTH),
                .DATA_DEPTH(8)
            ) dct_unit (
                .clk(clk),
                .reset_n(reset_n),
                .data_in(data_in),
                .coeff(coeff_i),
                .data_out(dct_result_raw)
            );

            // 对第 1/3/5/7 项做补码取负，其余保持原样
            assign dct_result_fixed = (i % 2 == 1) ? -dct_result_raw : dct_result_raw;

            assign dct_out[i*DATA_WIDTH +: DATA_WIDTH] = dct_result_fixed;
        end
    endgenerate

endmodule
