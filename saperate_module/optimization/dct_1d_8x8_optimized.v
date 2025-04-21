module dct_1d_8x8_optimized #(
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*64-1:0] data_in,           // 64 个像素值 f(i,j)
    input  wire [DATA_WIDTH*64-1:0] coeff_vector,      // 64 个系数 c(i,j)，保持原有32位格式
    output wire [DATA_WIDTH*64-1:0] dct_out            // 64 个 DCT 输出 F(i,j)
);

    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : DCT_ROW
            wire [DATA_WIDTH*8-1:0] row_data;
            wire [DATA_WIDTH*8-1:0] row_dct;

            assign row_data  = data_in[i*DATA_WIDTH*8 +: DATA_WIDTH*8];

            
            dct_1d_8x1_optimized #(
                .DATA_WIDTH(DATA_WIDTH)
            ) dct_unit_8x1 (
                .clk(clk),
                .reset_n(reset_n),
                .data_in(row_data),
                .coeff_vector(coeff_vector),  // 直接传递原始32位系数
                .dct_out(row_dct)
            );

            assign dct_out[i*DATA_WIDTH*8 +: DATA_WIDTH*8] = row_dct;
        end
    endgenerate

endmodule 