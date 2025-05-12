module ycbcr_conversion #(
    parameter SCALE = 20,                  // 增加定点精度从16到20
    parameter FIXED_POINT_LENGTH = 32,
    parameter INPUT_WIDTH = 8
)(
    input wire clk,
    input wire [INPUT_WIDTH-1:0] input_R,
    input wire [INPUT_WIDTH-1:0] input_G, 
    input wire [INPUT_WIDTH-1:0] input_B,
    output wire [FIXED_POINT_LENGTH-1:0] output_Y,
    output wire [FIXED_POINT_LENGTH-1:0] output_Cb,
    output wire [FIXED_POINT_LENGTH-1:0] output_Cr
);

    // 中间结果
    wire [FIXED_POINT_LENGTH-1:0] R_n299_result;
    wire [FIXED_POINT_LENGTH-1:0] G_n587_result;
    wire [FIXED_POINT_LENGTH-1:0] B_n144_result;
    wire [FIXED_POINT_LENGTH-1:0] R_n1687_result;
    wire [FIXED_POINT_LENGTH-1:0] G_n3313_result;
    wire [FIXED_POINT_LENGTH-1:0] B_n5_result;
    wire [FIXED_POINT_LENGTH-1:0] R_n5_result;
    wire [FIXED_POINT_LENGTH-1:0] G_n4187_result;
    wire [FIXED_POINT_LENGTH-1:0] B_n0813_result;
    wire [FIXED_POINT_LENGTH-1:0] n128_result;
    
    // 用于额外精度的扩展中间结果 - 增加4位额外精度
    wire [FIXED_POINT_LENGTH+4-1:0] Y_ext, Cb_ext, Cr_ext;
    
    // 寄存器输出
    reg [FIXED_POINT_LENGTH-1:0] Y_reg;
    reg [FIXED_POINT_LENGTH-1:0] Cb_reg;
    reg [FIXED_POINT_LENGTH-1:0] Cr_reg;
    
    // 使用优化的CSD乘法器
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_R_n299 (
        .data_in(input_R),
        .coef_select(4'd0),  // n299
        .result(R_n299_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_G_n587 (
        .data_in(input_G),
        .coef_select(4'd1),  // n587
        .result(G_n587_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_B_n144 (
        .data_in(input_B),
        .coef_select(4'd2),  // n144
        .result(B_n144_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_R_n1687 (
        .data_in(input_R),
        .coef_select(4'd3),  // n1687
        .result(R_n1687_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_G_n3313 (
        .data_in(input_G),
        .coef_select(4'd4),  // n3313
        .result(G_n3313_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_B_n5 (
        .data_in(input_B),
        .coef_select(4'd5),  // n5
        .result(B_n5_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_R_n5 (
        .data_in(input_R),
        .coef_select(4'd5),  // n5
        .result(R_n5_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_G_n4187 (
        .data_in(input_G),
        .coef_select(4'd6),  // n4187
        .result(G_n4187_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_B_n0813 (
        .data_in(input_B),
        .coef_select(4'd7),  // n0813
        .result(B_n0813_result)
    );
    
    csd_multiplier_improved #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .SCALE(SCALE)
    ) mult_n128 (
        .data_in(8'd0),  // 常数不使用输入
        .coef_select(4'd8),  // n128
        .result(n128_result)
    );
    
    // 使用扩展精度计算中间结果
    assign Y_ext = {R_n299_result, 4'b0000} + {G_n587_result, 4'b0000} + {B_n144_result, 4'b0000} - {n128_result, 4'b0000};
    assign Cb_ext = {B_n5_result, 4'b0000} - {R_n1687_result, 4'b0000} - {G_n3313_result, 4'b0000};
    assign Cr_ext = {R_n5_result, 4'b0000} - {G_n4187_result, 4'b0000} - {B_n0813_result, 4'b0000};
    
    // 处理RGB到YCbCr转换，包括适当的舍入
    always @(posedge clk) begin
        // 先进行中间结果计算，然后添加舍入位，最后截取到原始位宽
        Y_reg <= Y_ext[FIXED_POINT_LENGTH+4-1:4] + (Y_ext[3] ? 1'b1 : 1'b0);  // 四舍五入
        Cb_reg <= Cb_ext[FIXED_POINT_LENGTH+4-1:4] + (Cb_ext[3] ? 1'b1 : 1'b0);
        Cr_reg <= Cr_ext[FIXED_POINT_LENGTH+4-1:4] + (Cr_ext[3] ? 1'b1 : 1'b0);
    end
    
    // 分配输出
    assign output_Y = Y_reg;
    assign output_Cb = Cb_reg;
    assign output_Cr = Cr_reg;

endmodule