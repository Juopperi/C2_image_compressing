
module quantize_array #(
    parameter USE_LUMA = 1  // 1: 使用 luma_qtable_inv, 0: chroma_qtable_inv
)(
    input  wire                   clk,         // 可用于时序约束/多周期路径
    input  wire [32*64-1:0]       pixels,      // 输入像素数组 (64 x 32-bit Q16.16)
    output wire [32*64-1:0]       q_result     // 输出乘法结果数组
);

    `include "inverse_qtables.vh"  // 包含 luma_qtable_inv, chroma_qtable_inv

    wire [32*64-1:0] inv_table;
    assign inv_table = (USE_LUMA) ? luma_qtable_inv : chroma_qtable_inv;

    genvar i;
    generate
        for (i = 0; i < 64; i = i + 1) begin : GEN_MULTS
            wire [31:0] pixel_i    = pixels[32*i +: 32];
            wire [31:0] inv_i      = inv_table[32*i +: 32];
            wire [31:0] result_i;

            fixed_multiplier u_mul (
                .a(pixel_i),
                .b(inv_i),
                .mul_res(result_i)
            );

            // assign result_i = (pixel_i * inv_i) >>> 16;

            assign q_result[32*i +: 32] = result_i;
        end
    endgenerate

endmodule
