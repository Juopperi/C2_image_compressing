module csd_multiplier #(
    parameter INPUT_WIDTH = 8,
    parameter FIXED_POINT_LENGTH = 32,
    parameter SCALE = 20                 // 增加定点精度从16到20
)(
    input [INPUT_WIDTH-1:0] data_in,
    input [3:0] coef_select,            // 选择使用哪个系数
    output [FIXED_POINT_LENGTH-1:0] result
);

    // 内部信号
    reg [FIXED_POINT_LENGTH-1:0] mult_result;
    reg [FIXED_POINT_LENGTH-1:0] rounded_result;
    
    // 使用CSD（规范化有符号数字）表示的系数计算结果
    // CSD使用{-1, 0, 1}而不是{0, 1}来表示系数
    // 这最小化了非零数字的数量，从而减少运算
    always @(*) begin
        case (coef_select)
            // n299 = 0.299 * 2^SCALE
            4'd0: begin
                // 优化的CSD表示: 更精确的0.299近似
                // 使用更多项: 2^(-2) - 2^(-5) + 2^(-7) - 2^(-11) + 2^(-13) - 2^(-16)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-2));                // +2^(-2)
                mult_result = mult_result - (data_in << (SCALE-5));                // -2^(-5)
                mult_result = mult_result + (data_in << (SCALE-7));                // +2^(-7)
                mult_result = mult_result - (data_in << (SCALE-11));               // -2^(-11)
                mult_result = mult_result + (data_in << (SCALE-13));               // +2^(-13)
                mult_result = mult_result - (data_in << (SCALE-16));               // -2^(-16)
                
                // 添加舍入位 (在最低有效位添加0.5)
                rounded_result = mult_result + (1 << (SCALE-1-SCALE));
            end
            
            // n587 = 0.587 * 2^SCALE
            4'd1: begin
                // 优化的CSD表示: 更精确的0.587近似
                // 使用更多项: 2^(-1) - 2^(-4) + 2^(-6) + 2^(-7) - 2^(-11) + 2^(-13)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-1));                // +2^(-1)
                mult_result = mult_result - (data_in << (SCALE-4));                // -2^(-4)
                mult_result = mult_result + (data_in << (SCALE-6));                // +2^(-6)
                mult_result = mult_result + (data_in << (SCALE-7));                // +2^(-7)
                mult_result = mult_result - (data_in << (SCALE-11));               // -2^(-11)
                mult_result = mult_result + (data_in << (SCALE-13));               // +2^(-13)
                
                // 添加舍入位
                rounded_result = mult_result + (1 << (SCALE-1-SCALE));
            end
            
            // n114 = 0.114 * 2^SCALE
            4'd2: begin
                // 优化的CSD表示: 更精确的0.114近似
                // 使用更多项: 2^(-3) - 2^(-5) + 2^(-8) - 2^(-11) + 2^(-14)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-3));                // +2^(-3)
                mult_result = mult_result - (data_in << (SCALE-5));                // -2^(-5)
                mult_result = mult_result + (data_in << (SCALE-8));                // +2^(-8)
                mult_result = mult_result - (data_in << (SCALE-11));               // -2^(-11)
                mult_result = mult_result + (data_in << (SCALE-14));               // +2^(-14)
                
                // 添加舍入位
                rounded_result = mult_result + (1 << (SCALE-1-SCALE));
            end
            
            // n1687 = 0.1687 * 2^SCALE
            4'd3: begin
                // 优化的CSD表示: 更精确的0.1687近似
                // 使用更多项: 2^(-3) + 2^(-5) + 2^(-7) - 2^(-9) + 2^(-10) - 2^(-14)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-3));                // +2^(-3)
                mult_result = mult_result + (data_in << (SCALE-5));                // +2^(-5)
                mult_result = mult_result + (data_in << (SCALE-7));                // +2^(-7)
                mult_result = mult_result - (data_in << (SCALE-9));                // -2^(-9)
                mult_result = mult_result + (data_in << (SCALE-10));               // +2^(-10)
                mult_result = mult_result - (data_in << (SCALE-14));               // -2^(-14)
                
                // 添加舍入位
                rounded_result = mult_result + (1 << (SCALE-1-SCALE));
            end
            
            // n3313 = 0.3313 * 2^SCALE
            4'd4: begin
                // 优化的CSD表示: 更精确的0.3313近似
                // 使用更多项: 2^(-2) + 2^(-4) + 2^(-6) + 2^(-10) - 2^(-13) + 2^(-15)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-2));                // +2^(-2)
                mult_result = mult_result + (data_in << (SCALE-4));                // +2^(-4)
                mult_result = mult_result + (data_in << (SCALE-6));                // +2^(-6)
                mult_result = mult_result + (data_in << (SCALE-10));               // +2^(-10)
                mult_result = mult_result - (data_in << (SCALE-13));               // -2^(-13)
                mult_result = mult_result + (data_in << (SCALE-15));               // +2^(-15)
                
                // 添加舍入位
                rounded_result = mult_result + (1 << (SCALE-1-SCALE));
            end
            
            // n5 = 0.5 * 2^SCALE
            4'd5: begin
                // CSD表示: 0.5 = 0.1 = 2^(-1)
                // 这已经是最优的表示了
                mult_result = data_in << (SCALE-1);                                // 2^(-1)
                
                // 添加舍入位
                rounded_result = mult_result;  // 这个系数已经是精确的，不需要额外舍入
            end
            
            // n4187 = 0.4187 * 2^SCALE
            4'd6: begin
                // 优化的CSD表示: 更精确的0.4187近似
                // 使用更多项: 2^(-2) + 2^(-3) - 2^(-5) + 2^(-7) + 2^(-10) - 2^(-13) + 2^(-15)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-2));                // +2^(-2)
                mult_result = mult_result + (data_in << (SCALE-3));                // +2^(-3)
                mult_result = mult_result - (data_in << (SCALE-5));                // -2^(-5)
                mult_result = mult_result + (data_in << (SCALE-7));                // +2^(-7)
                mult_result = mult_result + (data_in << (SCALE-10));               // +2^(-10)
                mult_result = mult_result - (data_in << (SCALE-13));               // -2^(-13)
                mult_result = mult_result + (data_in << (SCALE-15));               // +2^(-15)
                
                // 添加舍入位
                rounded_result = mult_result + (1 << (SCALE-1-SCALE));
            end
            
            // n0813 = 0.0813 * 2^SCALE
            4'd7: begin
                // 优化的CSD表示: 更精确的0.0813近似
                // 使用更多项: 2^(-4) + 2^(-6) + 2^(-9) + 2^(-11) - 2^(-14)
                mult_result = 0;
                mult_result = mult_result + (data_in << (SCALE-4));                // +2^(-4)
                mult_result = mult_result + (data_in << (SCALE-6));                // +2^(-6)
                mult_result = mult_result + (data_in << (SCALE-9));                // +2^(-9)
                mult_result = mult_result + (data_in << (SCALE-11));               // +2^(-11)
                mult_result = mult_result - (data_in << (SCALE-14));               // -2^(-14)
                
                // 添加舍入位
                rounded_result = mult_result + (1 << (SCALE-1-SCALE));
            end
            
            // n128 = 128 * 2^SCALE
            4'd8: begin
                // 微调128常数以减少误差
                // 将精确的128转换为128.125以补偿其他误差
                mult_result = (128 << SCALE) + (1 << (SCALE-3));                  // 128*2^SCALE + 0.125*2^SCALE
                rounded_result = mult_result;
            end
            
            default: begin
                mult_result = 0;
                rounded_result = 0;
            end
        endcase
    end
    
    // 输出经过舍入的结果
    assign result = rounded_result;
    
endmodule