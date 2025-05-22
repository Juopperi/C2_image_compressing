// (* use_dsp="no", use_dsp48="no" *)
module lut_multiplier #(
    parameter int IN_W     = 32,   // 数据位宽 (>= 像素 + FRAC)
    parameter int CONST_W  = 16   // 常量位宽
)(
    input  logic signed [IN_W-1:0]    a,      // 输入数据
    input  logic signed [CONST_W-1:0] b,      // 常量系数
    output logic signed [IN_W-1:0]    result  // 乘法结果
);

    localparam int FRAC     = CONST_W - 1;     // 小数位

    // 内部更宽的乘法结果寄存器
    // (* use_dsp="no", use_dsp48="no" *) 
    logic signed [IN_W+CONST_W-1:0] p;
    
    // 执行乘法并右移，实现定点数乘法
    always_comb begin
        p = a * b;         // 全精度乘法
        result = p >>> FRAC; // 右移FRAC位，截断保持IN_W位宽
    end

endmodule
