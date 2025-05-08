module fixed_multiplier_shift (
    input  wire [31:0] a,
    input  wire [31:0] b,
    output wire [31:0] mul_res
);

    // 中间结果 - 需要足够位宽存储完整乘积
    reg [63:0] product;
    reg [31:0] a_reg;
    reg [31:0] b_reg;
    integer i;
    
    // 最终结果 - 取中间位
    assign mul_res = product[47:16];
    
    // 乘法过程 - 通过移位和加法实现
    always @(*) begin
        // 初始化
        product = 64'b0;
        a_reg = a;
        b_reg = b;
        
        // 处理符号
        // 取绝对值进行计算
        if (a_reg[31])
            a_reg = (~a_reg + 1'b1);
        if (b_reg[31])
            b_reg = (~b_reg + 1'b1);
            
        // 使用移位和加法进行乘法运算
        for (i = 0; i < 32; i = i + 1) begin
            if (b_reg[i])
                product = product + ({32'b0, a_reg} << i);
        end
        
        // 处理结果符号
        // 当a和b符号不同时，结果为负
        if (a[31] ^ b[31])
            product = ~product + 1'b1;
    end

endmodule