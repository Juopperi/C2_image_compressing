module multi_integer_to_fixed #(
    parameter INT_BITS = 16,   // 整数位数
    parameter FRAC_BITS = 16,  // 小数位数
    parameter INPUT_BITS = 8,  // 输入位数
    parameter NUM_INTEGERS = 64 // 输入整数的数量
) (
    input  [NUM_INTEGERS*INPUT_BITS-1:0] integers,  // 打包的一维输入整数总线
    output [NUM_INTEGERS*(INT_BITS+FRAC_BITS)-1:0] fixed_array // 打包的一维输出定点数总线
);

    genvar i;
    generate
        for (i = 0; i < NUM_INTEGERS; i = i + 1) begin : convert_loop
            // 解析单个输入整数
            wire [INPUT_BITS-1:0] integer_in = integers[i*INPUT_BITS +: INPUT_BITS];

            // 单个定点数输出
            wire [INT_BITS+FRAC_BITS-1:0] fixed_out;

            // 实例化 integer_to_fixed
            integer_to_fixed #(
                .INT_BITS(INT_BITS),
                .FRAC_BITS(FRAC_BITS),
                .INPUT_BITS(INPUT_BITS)
            ) converter (
                .integer_in(integer_in),
                .fixed(fixed_out)
            );

            // 组合输出定点数
            assign fixed_array[i*(INT_BITS+FRAC_BITS) +: (INT_BITS+FRAC_BITS)] = fixed_out;
        end
    endgenerate

endmodule
