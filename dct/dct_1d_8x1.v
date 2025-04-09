module dct_1d_8x1 #(
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*8-1:0] data_in,           // 输入数据 f(0~7)
    input  wire [DATA_WIDTH*8-1:0] coeff_vector,     // 所有系数 [F0_coeffs, F1_coeffs, ..., F7_coeffs]
    output wire [DATA_WIDTH*8-1:0] dct_out            // 输出 F(0~7)
);

    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : DCT_ROW
            wire [DATA_WIDTH*8-1:0] coeff_i;
            // assign coeff_i = coeff_matrix[i*DATA_WIDTH*8 +: DATA_WIDTH*8];  // 选出第 i 行系数

            dct_8muladd #(
                .DATA_WIDTH(DATA_WIDTH),
                .DATA_DEPTH(8)
            ) dct_unit (
                .clk(clk),
                .reset_n(reset_n),
                .data_in(data_in),
                .coeff(coeff_vector),
                .data_out(dct_out[i*DATA_WIDTH +: DATA_WIDTH])
            );
        end
    endgenerate

endmodule
