module dct_2d_col #(
    parameter DATA_WIDTH = 32,
    parameter DATA_DEPTH = 8
)(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*DATA_DEPTH-1:0] data_in,
    input  wire [DATA_WIDTH*DATA_DEPTH-1:0] coeff_stage1,  // 第一阶段的 DCT 系数
    input  wire [DATA_WIDTH*DATA_DEPTH-1:0] coeff_stage2,  // 第二阶段的 DCT 系数
    output wire [DATA_WIDTH*DATA_DEPTH-1:0] data_out_final
    // output wire [DATA_WIDTH*DATA_DEPTH-1:0] stage1_output,
    // output wire [DATA_WIDTH*DATA_DEPTH-1:0] stage1_coeff_used,
    // output wire [DATA_WIDTH*DATA_DEPTH-1:0] stage2_coeff_used
);

    // 第一阶段输出
    wire [DATA_WIDTH*DATA_DEPTH-1:0] data_mid;

    // stage1
    dct_1d #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dct_stage1 (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_in),
        .coeff(coeff_stage1),
        .data_out(data_mid)
    );

    // stage2
    dct_1d #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dct_stage2 (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_mid),
        .coeff(coeff_stage2),
        .data_out(data_out_final)
    );

    // 输出暴露
    // assign stage1_output     = data_mid;
    // assign stage1_coeff_used = coeff_stage1;
    // assign stage2_coeff_used = coeff_stage2;

endmodule