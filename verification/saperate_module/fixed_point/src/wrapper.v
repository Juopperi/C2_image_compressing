module wrapper #(
    parameter INT_BITS = 16,   // 整数位数
    parameter FRAC_BITS = 16,  // 小数位数
    parameter INPUT_BITS = 8,  // 输入位数
    parameter NUM_INTEGERS = 64 // 输入整数的数量
) (
    input  [NUM_INTEGERS*INPUT_BITS-1:0] integers,  // 打包的一维输入整数总线
    output [NUM_INTEGERS*(INT_BITS+FRAC_BITS)-1:0] fixed_array // 打包的一维输出定点数总线
);

    // 直接实例化 multi_integer_to_fixed
    multi_integer_to_fixed #(
        .INT_BITS(INT_BITS),
        .FRAC_BITS(FRAC_BITS),
        .INPUT_BITS(INPUT_BITS),
        .NUM_INTEGERS(NUM_INTEGERS)
    ) multi_converter (
        .integers(integers),
        .fixed_array(fixed_array)
    );

endmodule
