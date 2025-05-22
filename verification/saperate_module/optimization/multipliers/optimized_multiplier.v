module optimized_multiplier (
    input  wire [16:0] coeff,      // 17位系数（足够表示-1~1范围，含符号位）
    input  wire [31:0] data,       // 32位数据
    output wire [31:0] result      // 32位结果
);
    // 中间结果 - 49位足够存储17位×32位的积
    wire [48:0] product;
    
    // 使用乘法器并截断结果（保持与原32位乘法器相同的Q16.16格式）
    assign product = $signed(coeff) * $signed(data);
    assign result = product[47:16];
    
endmodule 