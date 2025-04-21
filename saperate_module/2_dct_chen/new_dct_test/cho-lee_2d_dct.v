module cho_lee_2d_dct #(
    parameter DATA_WIDTH = 16,            // 数据位宽
    parameter INTERNAL_WIDTH = DATA_WIDTH + 8         // 内部计算位宽
)(
    input  wire                     clk,          // 时钟信号
    input  wire                     rst_n,        // 低电平有效复位信号
    input  wire                     start,        // 开始信号
    input  wire [DATA_WIDTH-1:0]    data_in,      // 输入数据 (按行优先顺序输入8x8块)
    input  wire                     data_in_valid, // 输入数据有效
    output reg  [DATA_WIDTH-1:0]    data_out,     // 输出DCT系数
    output reg                      data_out_valid,// 输出数据有效
    output reg                      busy,         // 模块忙状态
    output reg                      done          // 完成信号
);

    // 状态定义
    localparam IDLE              = 4'd0;  // 空闲状态
    localparam LOAD_DATA         = 4'd1;  // 加载8x8数据
    localparam ROW_DCT_START     = 4'd2;  // 开始行DCT
    localparam ROW_DCT_CALC      = 4'd3;  // 计算行DCT
    localparam ROW_DCT_WAIT      = 4'd4;  // 等待行DCT完成
    localparam TRANSPOSE_DATA    = 4'd5;  // 转置中间结果
    localparam COL_DCT_START     = 4'd6;  // 开始列DCT
    localparam COL_DCT_CALC      = 4'd7;  // 计算列DCT
    localparam COL_DCT_WAIT      = 4'd8;  // 等待列DCT完成
    localparam OUTPUT_RESULT     = 4'd9;  // 输出结果
    localparam DONE_STATE        = 4'd10; // 处理完成

    // DCT系数，使用Q8.8定点数表示
    // C_n = cos(n*π/16) * 2^8
    localparam signed [15:0] C1 = 16'sd251;  // cos(π/16)  * 256 ≈ 0.9808 * 256
    localparam signed [15:0] C2 = 16'sd236;  // cos(2π/16) * 256 ≈ 0.9239 * 256
    localparam signed [15:0] C3 = 16'sd213;  // cos(3π/16) * 256 ≈ 0.8315 * 256
    localparam signed [15:0] C4 = 16'sd181;  // cos(4π/16) * 256 ≈ 0.7071 * 256
    localparam signed [15:0] C5 = 16'sd142;  // cos(5π/16) * 256 ≈ 0.5556 * 256
    localparam signed [15:0] C6 = 16'sd98;   // cos(6π/16) * 256 ≈ 0.3827 * 256
    localparam signed [15:0] C7 = 16'sd50;   // cos(7π/16) * 256 ≈ 0.1951 * 256

    // 寄存器和存储器
    reg [3:0] state, next_state;           // 状态寄存器
    reg [5:0] data_counter;                // 数据计数器
    reg [2:0] row_counter, col_counter;    // 行列计数器
    reg [2:0] dct_row_idx, dct_col_idx;    // DCT处理行/列索引
    
    // 输入数据缓存 (8x8矩阵)
    reg signed [DATA_WIDTH-1:0] input_buffer [0:7][0:7];
    
    // 行变换后的中间结果缓存
    reg signed [INTERNAL_WIDTH-1:0] row_dct_result [0:7][0:7];
    
    // 最终的DCT结果缓存
    reg signed [INTERNAL_WIDTH-1:0] final_dct_result [0:7][0:7];
    
    // 1D-DCT处理的临时寄存器
    reg signed [DATA_WIDTH-1:0] dct_in [0:7];
    reg signed [INTERNAL_WIDTH-1:0] dct_out [0:7];
    
    // 1D-DCT计算的中间结果
    reg signed [INTERNAL_WIDTH-1:0] a0, a1, a2, a3, a4, a5, a6, a7;
    reg signed [INTERNAL_WIDTH-1:0] b0, b1, b2, b3, b4, b5, b6, b7;
    
    // 乘法结果可能会变大，用更宽的位宽
    reg signed [INTERNAL_WIDTH*2-1:0] mult_temp;
    
    // 1D-DCT状态
    reg [1:0] dct_1d_state;
    localparam DCT_1D_STAGE1 = 2'b00;
    localparam DCT_1D_STAGE2 = 2'b01;
    localparam DCT_1D_STAGE3 = 2'b10;
    localparam DCT_1D_DONE   = 2'b11;
    
    // 输出数据索引
    reg [5:0] output_idx;

    // 状态寄存器更新
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            state <= IDLE;
        else
            state <= next_state;
    end

    // 状态转换逻辑
    always @(*) begin
        case (state)
            IDLE: 
                next_state = start ? LOAD_DATA : IDLE;
                
            LOAD_DATA: 
                next_state = (data_counter == 6'd63 && data_in_valid) ? ROW_DCT_START : LOAD_DATA;
                
            ROW_DCT_START: 
                next_state = ROW_DCT_CALC;
                
            ROW_DCT_CALC: 
                next_state = ROW_DCT_WAIT;
                
            ROW_DCT_WAIT: 
                next_state = (dct_1d_state == DCT_1D_DONE) ? 
                            ((dct_row_idx == 3'd7) ? TRANSPOSE_DATA : ROW_DCT_START) : ROW_DCT_WAIT;
                            
            TRANSPOSE_DATA: 
                next_state = COL_DCT_START;
                
            COL_DCT_START: 
                next_state = COL_DCT_CALC;
                
            COL_DCT_CALC: 
                next_state = COL_DCT_WAIT;
                
            COL_DCT_WAIT: 
                next_state = (dct_1d_state == DCT_1D_DONE) ? 
                            ((dct_col_idx == 3'd7) ? OUTPUT_RESULT : COL_DCT_START) : COL_DCT_WAIT;
                            
            OUTPUT_RESULT: 
                next_state = (output_idx == 6'd63) ? DONE_STATE : OUTPUT_RESULT;
                
            DONE_STATE: 
                next_state = IDLE;
                
            default: 
                next_state = IDLE;
        endcase
    end

    // 主状态机处理逻辑
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // 复位所有控制寄存器
            data_counter <= 6'd0;
            row_counter <= 3'd0;
            col_counter <= 3'd0;
            dct_row_idx <= 3'd0;
            dct_col_idx <= 3'd0;
            output_idx <= 6'd0;
            busy <= 1'b0;
            done <= 1'b0;
            data_out_valid <= 1'b0;
        end
        else begin
            case (state)
                IDLE: begin
                    data_counter <= 6'd0;
                    row_counter <= 3'd0;
                    col_counter <= 3'd0;
                    dct_row_idx <= 3'd0;
                    dct_col_idx <= 3'd0;
                    output_idx <= 6'd0;
                    busy <= start;
                    done <= 1'b0;
                    data_out_valid <= 1'b0;
                end
                
                LOAD_DATA: begin
                    if (data_in_valid) begin
                        input_buffer[row_counter][col_counter] <= data_in;
                        
                        // 更新行列计数器
                        if (col_counter == 3'd7) begin
                            col_counter <= 3'd0;
                            row_counter <= row_counter + 1'd1;
                        end
                        else begin
                            col_counter <= col_counter + 1'd1;
                        end
                        
                        data_counter <= data_counter + 1'd1;
                    end
                end
                
                ROW_DCT_START: begin
                    // 加载当前行数据到DCT输入寄存器
                    dct_in[0] <= input_buffer[dct_row_idx][0];
                    dct_in[1] <= input_buffer[dct_row_idx][1];
                    dct_in[2] <= input_buffer[dct_row_idx][2];
                    dct_in[3] <= input_buffer[dct_row_idx][3];
                    dct_in[4] <= input_buffer[dct_row_idx][4];
                    dct_in[5] <= input_buffer[dct_row_idx][5];
                    dct_in[6] <= input_buffer[dct_row_idx][6];
                    dct_in[7] <= input_buffer[dct_row_idx][7];
                    
                    dct_1d_state <= DCT_1D_STAGE1;
                end
                
                ROW_DCT_CALC: begin
                    // 1D-DCT计算开始
                end
                
                ROW_DCT_WAIT: begin
                    if (dct_1d_state == DCT_1D_DONE) begin
                        // 存储行DCT结果
                        row_dct_result[dct_row_idx][0] <= dct_out[0];
                        row_dct_result[dct_row_idx][1] <= dct_out[1];
                        row_dct_result[dct_row_idx][2] <= dct_out[2];
                        row_dct_result[dct_row_idx][3] <= dct_out[3];
                        row_dct_result[dct_row_idx][4] <= dct_out[4];
                        row_dct_result[dct_row_idx][5] <= dct_out[5];
                        row_dct_result[dct_row_idx][6] <= dct_out[6];
                        row_dct_result[dct_row_idx][7] <= dct_out[7];
                        
                        // 处理下一行
                        if (dct_row_idx < 3'd7)
                            dct_row_idx <= dct_row_idx + 1'd1;
                    end
                end
                
                TRANSPOSE_DATA: begin
                    // 不需要额外操作，在后续处理中直接按列读取
                    dct_col_idx <= 3'd0;
                end
                
                COL_DCT_START: begin
                    // 加载当前列数据到DCT输入寄存器
                    dct_in[0] <= row_dct_result[0][dct_col_idx][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    dct_in[1] <= row_dct_result[1][dct_col_idx][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    dct_in[2] <= row_dct_result[2][dct_col_idx][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    dct_in[3] <= row_dct_result[3][dct_col_idx][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    dct_in[4] <= row_dct_result[4][dct_col_idx][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    dct_in[5] <= row_dct_result[5][dct_col_idx][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    dct_in[6] <= row_dct_result[6][dct_col_idx][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    dct_in[7] <= row_dct_result[7][dct_col_idx][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    
                    dct_1d_state <= DCT_1D_STAGE1;
                end
                
                COL_DCT_CALC: begin
                    // 1D-DCT计算开始
                end
                
                COL_DCT_WAIT: begin
                    if (dct_1d_state == DCT_1D_DONE) begin
                        // 存储列DCT结果
                        final_dct_result[0][dct_col_idx] <= dct_out[0];
                        final_dct_result[1][dct_col_idx] <= dct_out[1];
                        final_dct_result[2][dct_col_idx] <= dct_out[2];
                        final_dct_result[3][dct_col_idx] <= dct_out[3];
                        final_dct_result[4][dct_col_idx] <= dct_out[4];
                        final_dct_result[5][dct_col_idx] <= dct_out[5];
                        final_dct_result[6][dct_col_idx] <= dct_out[6];
                        final_dct_result[7][dct_col_idx] <= dct_out[7];
                        
                        // 处理下一列
                        if (dct_col_idx < 3'd7)
                            dct_col_idx <= dct_col_idx + 1'd1;
                    end
                end
                
                OUTPUT_RESULT: begin
                    // 按ZigZag顺序输出结果
                    // 简化版本：按顺序输出
                    data_out <= final_dct_result[output_idx[5:3]][output_idx[2:0]][INTERNAL_WIDTH-1:INTERNAL_WIDTH-DATA_WIDTH];
                    data_out_valid <= 1'b1;
                    output_idx <= output_idx + 1'd1;
                end
                
                DONE_STATE: begin
                    data_out_valid <= 1'b0;
                    busy <= 1'b0;
                    done <= 1'b1;
                end
                
                default: begin
                    // 默认状态不做操作
                end
            endcase
        end
    end

    // 1D-DCT计算逻辑
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // 复位DCT计算寄存器
            a0 <= 0; a1 <= 0; a2 <= 0; a3 <= 0;
            a4 <= 0; a5 <= 0; a6 <= 0; a7 <= 0;
            b0 <= 0; b1 <= 0; b2 <= 0; b3 <= 0;
            b4 <= 0; b5 <= 0; b6 <= 0; b7 <= 0;
            
            dct_out[0] <= 0; dct_out[1] <= 0; dct_out[2] <= 0; dct_out[3] <= 0;
            dct_out[4] <= 0; dct_out[5] <= 0; dct_out[6] <= 0; dct_out[7] <= 0;
        end
        else if ((state == ROW_DCT_CALC) || (state == COL_DCT_CALC)) begin
            case (dct_1d_state)
                DCT_1D_STAGE1: begin
                    // Cho-Lee算法的奇偶分解
                    a0 <= dct_in[0] + dct_in[7];
                    a1 <= dct_in[1] + dct_in[6];
                    a2 <= dct_in[2] + dct_in[5];
                    a3 <= dct_in[3] + dct_in[4];
                    a4 <= dct_in[3] - dct_in[4];
                    a5 <= dct_in[2] - dct_in[5];
                    a6 <= dct_in[1] - dct_in[6];
                    a7 <= dct_in[0] - dct_in[7];
                    
                    dct_1d_state <= DCT_1D_STAGE2;
                end
                
                DCT_1D_STAGE2: begin
                    // 继续Cho-Lee算法的计算
                    b0 <= a0 + a3;
                    b1 <= a1 + a2;
                    b2 <= a1 - a2;
                    b3 <= a0 - a3;
                    
                    // 使用DCT系数计算
                    mult_temp <= C4 * (a4 + a7);
                    b4 <= mult_temp[23:8]; // 取Q8.8的结果
                    
                    mult_temp <= (C1 * a5) - (C7 * a6);
                    b5 <= mult_temp[23:8];
                    
                    mult_temp <= (C5 * a5) + (C3 * a6);
                    b6 <= mult_temp[23:8];
                    
                    mult_temp <= (C3 * a4) - (C5 * a7);
                    b7 <= mult_temp[23:8];
                    
                    dct_1d_state <= DCT_1D_STAGE3;
                end
                
                DCT_1D_STAGE3: begin
                    // 计算最终DCT系数
                    dct_out[0] <= b0 + b1;
                    
                    mult_temp <= C4 * (b0 - b1);
                    dct_out[4] <= mult_temp[23:8];
                    
                    mult_temp <= (C2 * b2) + (C6 * b3);
                    dct_out[2] <= mult_temp[23:8];
                    
                    mult_temp <= (C6 * b2) - (C2 * b3);
                    dct_out[6] <= mult_temp[23:8];
                    
                    // 奇数项
                    dct_out[1] <= b4 + b6;
                    dct_out[3] <= b7 - b5;
                    dct_out[5] <= b4 - b6;
                    dct_out[7] <= b5 + b7;
                    
                    dct_1d_state <= DCT_1D_DONE;
                end
                
                DCT_1D_DONE: begin
                    // 计算完成，等待主状态机切换
                end
                
                default: begin
                    // 默认情况不做操作
                end
            endcase
        end
    end

endmodule