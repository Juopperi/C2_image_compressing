module dct_1d #
(
    parameter DATA_WIDTH = 32,
    parameter DATA_DEPTH = 8
)
(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*DATA_DEPTH-1:0] data_in,
    input  wire [DATA_WIDTH*DATA_DEPTH*DATA_DEPTH-1:0] coeff_matrix, // 8 行，每行8个系数
    output wire [DATA_WIDTH*DATA_DEPTH-1:0] data_out // 输出8个DCT值
);

    genvar i;
    generate
        for (i = 0; i < DATA_DEPTH; i = i + 1) begin : dct_units
            wire [DATA_WIDTH*DATA_DEPTH-1:0] coeff_row;
            assign coeff_row = coeff_matrix[i*DATA_WIDTH*DATA_DEPTH +: DATA_WIDTH*DATA_DEPTH];

            dct_8muladd #(
                .DATA_WIDTH(DATA_WIDTH),
                .DATA_DEPTH(DATA_DEPTH)
            ) u_dct_8muladd (
                .clk(clk),
                .reset_n(reset_n),
                .data_in(data_in),
                .coeff(coeff_row),
                .data_out(data_out[i*DATA_WIDTH +: DATA_WIDTH])
            );
        end
    endgenerate

endmodule