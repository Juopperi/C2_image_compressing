(* use_dsp="no", use_dsp48="no" *)
module lut_multiplier_no_dsp_quantization #(
    parameter int IN_W     = 32   // 数据位宽 (>= 像素 + FRAC)
)(
    input  logic signed [IN_W-1:0]    a,      // 输入数据
    input  logic signed [IN_W-1:0]    b,      // 常量系数
    output logic signed [IN_W-1:0]    result  // 乘法结果
);

    localparam int CONST_W  = 16;   // 常量位宽

    // 内部更宽的乘法结果寄存器
    (* use_dsp="no", use_dsp48="no" *) 
    logic signed [IN_W+CONST_W-1:0] p;

    wire [CONST_W-1:0] b_truncated = b[CONST_W-1:0];
    
    // 执行乘法并右移，实现定点数乘法
    always_comb begin
        p = a * b_truncated;         // 全精度乘法
        result = p >>> CONST_W; // 右移FRAC位，截断保持IN_W位宽
    end

endmodule
