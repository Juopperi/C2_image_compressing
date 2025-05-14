module dct_1d_8x1 #(
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire reset_n,
    input  wire [DATA_WIDTH*8-1:0] data_in,
    input  wire [DATA_WIDTH*64-1:0] coeff_vector,  // 输入完整系数矩阵
    input  wire start,                             // 开始计算信号
    output wire [DATA_WIDTH*8-1:0] dct_out,
    output wire valid                              // 输出有效信号
);

    // 状态定义
    reg [2:0] state;       // 8个状态，表示处理8行DCT
    reg [2:0] next_state;
    
    // 结果寄存器组
    reg signed [DATA_WIDTH-1:0] results [0:7];
    reg result_valid;
    
    // 系数选择
    wire [DATA_WIDTH*8-1:0] current_coeff;
    assign current_coeff = coeff_vector[(7 - state)*DATA_WIDTH*8 +: DATA_WIDTH*8];
    
    // 当前计算结果
    wire signed [DATA_WIDTH-1:0] dct_result_raw;
    wire signed [DATA_WIDTH-1:0] dct_result_fixed;
    
    // 仅实例化一个乘加模块
    dct_8muladd #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(8)
    ) dct_unit (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_in),
        .coeff(current_coeff),
        .data_out(dct_result_raw)
    );
    
    // 对第 1/3/5/7 项做补码取负，其余保持原样
    assign dct_result_fixed = (state % 2 == 1) ? -dct_result_raw : dct_result_raw;
    
    // 状态机
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            state <= 3'd0;
            result_valid <= 1'b0;
        end else begin
            state <= next_state;
            
            // 保存计算结果
            if (state < 3'd7 || next_state == 3'd0) begin
                results[state] <= dct_result_fixed;
            end
            
            // 所有行计算完成，设置valid信号
            result_valid <= (state == 3'd7 && next_state == 3'd0);
        end
    end
    
    // 状态转换逻辑
    always @(*) begin
        if (state == 3'd7 || (state == 3'd0 && !start)) begin
            next_state = 3'd0;
        end else if (start || state != 3'd0) begin
            next_state = state + 3'd1;
        end else begin
            next_state = state;
        end
    end
    
    // 输出映射
    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : OUTPUT_MAP
            assign dct_out[i*DATA_WIDTH +: DATA_WIDTH] = results[i];
        end
    endgenerate
    
    assign valid = result_valid;

endmodule
