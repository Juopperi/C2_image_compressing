module dct_1d_8x8 #(
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*8-1:0] data_in,           // 输入 f(0~7)
    input  wire [DATA_WIDTH*8*8-1:0] coeff_vector,    // 8 行系数，每行 8 个
    output wire [DATA_WIDTH*8-1:0] dct_out            // 输出 F(0~7)
);

    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : DCT_ROW
            wire [DATA_WIDTH*8-1:0] coeff_i;

            // 提取第 i 行的系数（8 个）
            assign coeff_i = coeff_vector[i*DATA_WIDTH*8 +: DATA_WIDTH*8];

            dct_8muladd #(
                .DATA_WIDTH(DATA_WIDTH),
                .DATA_DEPTH(8)
            ) dct_unit (
                .clk(clk),
                .reset_n(reset_n),
                .data_in(data_in),
                .coeff(coeff_i),
                .data_out(dct_out[i*DATA_WIDTH +: DATA_WIDTH])
            );
        end
    endgenerate

endmodule
