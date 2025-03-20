module integer_to_fixed #(
    parameter INT_BITS = 16,  // 整数位数
    parameter FRAC_BITS = 16,  // 小数位数
    parameter INPUT_BITS = 8
) (
    input [INPUT_BITS-1:0] integer_in,     // 64位整数输入
    output reg [INT_BITS+FRAC_BITS-1:0] fixed // 固定小数输出
);

    // 转换逻辑
    always @(*) begin
        // 将整数左移以适应小数部分
        fixed = integer_in << FRAC_BITS;
    end

endmodule