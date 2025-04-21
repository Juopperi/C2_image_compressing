module dct_1d_fusion #(
    parameter DATA_WIDTH = 32
)(
    input  wire clk,               // 时钟信号
    input  wire reset_n,           // 低电平有效复位
    input  wire start,             // 开始计算信号
    input  wire mode_sel,          // 模式选择: 0-Chen算法, 1-矩阵乘法
    
    // 输入数据 (共用)
    input  wire [DATA_WIDTH-1:0] x0,
    input  wire [DATA_WIDTH-1:0] x1,
    input  wire [DATA_WIDTH-1:0] x2,
    input  wire [DATA_WIDTH-1:0] x3,
    input  wire [DATA_WIDTH-1:0] x4,
    input  wire [DATA_WIDTH-1:0] x5,
    input  wire [DATA_WIDTH-1:0] x6,
    input  wire [DATA_WIDTH-1:0] x7,
    
    // 矩阵乘法所需的系数矩阵
    input  wire [DATA_WIDTH*64-1:0] coeff_vector,
    
    // 输出结果 (共用)
    output wire [DATA_WIDTH-1:0] y0,
    output wire [DATA_WIDTH-1:0] y1,
    output wire [DATA_WIDTH-1:0] y2,
    output wire [DATA_WIDTH-1:0] y3,
    output wire [DATA_WIDTH-1:0] y4,
    output wire [DATA_WIDTH-1:0] y5,
    output wire [DATA_WIDTH-1:0] y6,
    output wire [DATA_WIDTH-1:0] y7,
    
    output wire valid              // 输出有效信号
);

    // 打包输入数据为一个总线
    wire [DATA_WIDTH*8-1:0] data_in_packed;
    assign data_in_packed = {x0, x1, x2, x3, x4, x5, x6, x7};
    
    // 打包输出数据为一个总线
    wire [DATA_WIDTH*8-1:0] matrix_dct_out;
    
    // Chen算法输出
    wire [DATA_WIDTH-1:0] chen_y0, chen_y1, chen_y2, chen_y3, chen_y4, chen_y5, chen_y6, chen_y7;
    wire chen_valid;
    
    // 矩阵乘法算法输出
    wire matrix_valid;
    
    // 实例化Chen DCT模块
    chen_1d_dct #(
        // 使用模块参数
    ) chen_dct_inst (
        .clk(clk),
        .rst_n(reset_n),
        .start(start && !mode_sel),  // 仅在Chen模式下启动
        .x0(x0),
        .x1(x1),
        .x2(x2),
        .x3(x3),
        .x4(x4),
        .x5(x5),
        .x6(x6),
        .x7(x7),
        .y0(chen_y0),
        .y1(chen_y1),
        .y2(chen_y2),
        .y3(chen_y3),
        .y4(chen_y4),
        .y5(chen_y5),
        .y6(chen_y6),
        .y7(chen_y7),
        .valid(chen_valid)
    );
    
    // 实例化矩阵乘法DCT模块
    dct_1d_8x1 #(
        .DATA_WIDTH(DATA_WIDTH)
    ) matrix_dct_inst (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_in_packed),
        .coeff_vector(coeff_vector),
        .start(start && mode_sel),   // 仅在矩阵模式下启动
        .dct_out(matrix_dct_out),
        .valid(matrix_valid)
    );
    
    // 根据模式选择输出结果
    reg mode_reg;
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n)
            mode_reg <= 1'b0;
        else if (start)
            mode_reg <= mode_sel;
    end
    
    // 分解矩阵DCT输出到单独的信号
    wire [DATA_WIDTH-1:0] matrix_y0 = matrix_dct_out[0 * DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] matrix_y1 = matrix_dct_out[1 * DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] matrix_y2 = matrix_dct_out[2 * DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] matrix_y3 = matrix_dct_out[3 * DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] matrix_y4 = matrix_dct_out[4 * DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] matrix_y5 = matrix_dct_out[5 * DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] matrix_y6 = matrix_dct_out[6 * DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] matrix_y7 = matrix_dct_out[7 * DATA_WIDTH +: DATA_WIDTH];
    
    // 多路复用器选择输出
    assign y0 = mode_reg ? matrix_y0 : chen_y0;
    assign y1 = mode_reg ? matrix_y1 : chen_y1;
    assign y2 = mode_reg ? matrix_y2 : chen_y2;
    assign y3 = mode_reg ? matrix_y3 : chen_y3;
    assign y4 = mode_reg ? matrix_y4 : chen_y4;
    assign y5 = mode_reg ? matrix_y5 : chen_y5;
    assign y6 = mode_reg ? matrix_y6 : chen_y6;
    assign y7 = mode_reg ? matrix_y7 : chen_y7;
    
    // 输出有效信号
    assign valid = mode_reg ? matrix_valid : chen_valid;

endmodule 