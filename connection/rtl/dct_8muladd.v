module dct_8muladd #
(
    parameter DATA_WIDTH = 32,      // Q16.16 格式
    parameter DATA_DEPTH = 8
)
(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*DATA_DEPTH-1:0] data_in,
    input  wire [DATA_WIDTH*DATA_DEPTH-1:0] coeff,
    output reg  [DATA_WIDTH-1:0] data_out
);

    // integer i;

    wire signed [DATA_WIDTH-1:0] data_array  [0:DATA_DEPTH-1];
    wire signed [DATA_WIDTH-1:0] coeff_array [0:DATA_DEPTH-1];
    wire signed [DATA_WIDTH-1:0] mult_out    [0:DATA_DEPTH-1];
    wire signed [DATA_WIDTH-1:0] add_chain   [0:DATA_DEPTH];

    assign add_chain[0] = 0;  // 初始化累加器

    // 拆分输入数据和系数
    genvar idx;
    generate
        for (idx = 0; idx < DATA_DEPTH; idx = idx + 1) begin : unpack_inputs
            assign data_array[idx]  = data_in [idx*DATA_WIDTH +: DATA_WIDTH];
            assign coeff_array[idx] = coeff    [idx*DATA_WIDTH +: DATA_WIDTH];
        end
    endgenerate

    // 实例化乘法器
    generate
        for (idx = 0; idx < DATA_DEPTH; idx = idx + 1) begin : mul_stage
            fixed_multiplier mul_inst (
                .a       (data_array[idx]),
                .b       (coeff_array[idx]),
                .mul_res (mult_out[idx])
            );
        end
    endgenerate

    // -------- 树状加法器结构 --------
    // 中间结果临时线网
    wire signed [DATA_WIDTH-1:0] sum_stage [0:DATA_DEPTH-2];  // 7 个中间节点
    genvar i;

    // Level 1: 4 pairwise additions
    generate
        for (i = 0; i < 4; i = i + 1) begin : add_level1
            fixed_adder add_inst (
                .a(mult_out[2*i]),
                .b(mult_out[2*i + 1]),
                .sum_out(sum_stage[i])
            );
        end
    endgenerate

    // Level 2: 2 additions
    generate
        for (i = 0; i < 2; i = i + 1) begin : add_level2
            fixed_adder add_inst (
                .a(sum_stage[2*i]),
                .b(sum_stage[2*i + 1]),
                .sum_out(sum_stage[4 + i])
            );
        end
    endgenerate

    // Level 3: final addition
    fixed_adder add_final (
        .a(sum_stage[4]),
        .b(sum_stage[5]),
        .sum_out(sum_stage[6])
    );


    // 输出最终值
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n)
            data_out <= 0;
        else
            data_out <= sum_stage[6];
    end

endmodule
