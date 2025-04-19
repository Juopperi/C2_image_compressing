module chen_1d_dct #(
    parameter DATA_WIDTH = 32
)(
    input wire clk,              // 时钟信号
    input wire rst_n,            // 低电平有效复位信号
    input wire start,            // 开始信号
    input wire [8*DATA_WIDTH-1:0] x,  // 输入数据向量
    output reg [8*DATA_WIDTH-1:0] y,  // 输出DCT系数向量
    output reg valid             // 输出有效信号
);

    // 状态定义
    localparam IDLE     = 2'b00;
    localparam STAGE1   = 2'b01;
    localparam STAGE2   = 2'b10;
    localparam DONE     = 2'b11;

    // DCT系数，使用Q8.8定点数表示
    localparam PI = 3.1415926535897932;
    localparam SCALE = 256.0; // 2^8

    // C_n = cos(n*π/16) * 2^8
    localparam integer C0 = $rtoi($cos(PI * 0 / 16.0) * SCALE + 0.5); // 1.000
    localparam integer C1 = $rtoi($cos(PI * 1 / 16.0) * SCALE + 0.5); // 0.9808
    localparam integer C2 = $rtoi($cos(PI * 2 / 16.0) * SCALE + 0.5); // 0.9239
    localparam integer C3 = $rtoi($cos(PI * 3 / 16.0) * SCALE + 0.5); // 0.8315
    localparam integer C4 = $rtoi($cos(PI * 4 / 16.0) * SCALE + 0.5); // 0.7071
    localparam integer C5 = $rtoi($cos(PI * 5 / 16.0) * SCALE + 0.5); // 0.5556
    localparam integer C6 = $rtoi($cos(PI * 6 / 16.0) * SCALE + 0.5); // 0.3827
    localparam integer C7 = $rtoi($cos(PI * 7 / 16.0) * SCALE + 0.5); // 0.1951

    // 状态寄存器
    reg [1:0] state, next_state;

    // 中间计算结果寄存器
    reg signed [DATA_WIDTH-1:0] a0, a1, a2, a3, a4, a5, a6, a7;
    reg signed [DATA_WIDTH-1:0] b0, b1, b2, b3, b4, b5, b6, b7;
    
    // 乘法结果可能会变大，用更宽的位宽
    reg signed [2*DATA_WIDTH-1:0] mult_temp;
    
    // 方便访问输入输出向量的线网
    wire [DATA_WIDTH-1:0] x0, x1, x2, x3, x4, x5, x6, x7;
    
    // 提取输入向量中的各个元素
    assign x0 = x[DATA_WIDTH*1-1:DATA_WIDTH*0];
    assign x1 = x[DATA_WIDTH*2-1:DATA_WIDTH*1];
    assign x2 = x[DATA_WIDTH*3-1:DATA_WIDTH*2];
    assign x3 = x[DATA_WIDTH*4-1:DATA_WIDTH*3];
    assign x4 = x[DATA_WIDTH*5-1:DATA_WIDTH*4];
    assign x5 = x[DATA_WIDTH*6-1:DATA_WIDTH*5];
    assign x6 = x[DATA_WIDTH*7-1:DATA_WIDTH*6];
    assign x7 = x[DATA_WIDTH*8-1:DATA_WIDTH*7];

    // 状态寄存器更新
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            state <= IDLE;
        else
            state <= next_state;
    end

    // 下一状态逻辑
    always @(*) begin
        case (state)
            IDLE:    next_state = start ? STAGE1 : IDLE;
            STAGE1:  next_state = STAGE2;
            STAGE2:  next_state = DONE;
            DONE:    next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end

    // 数据处理逻辑
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // 复位所有寄存器
            a0 <= {DATA_WIDTH{1'b0}}; a1 <= {DATA_WIDTH{1'b0}}; a2 <= {DATA_WIDTH{1'b0}}; a3 <= {DATA_WIDTH{1'b0}};
            a4 <= {DATA_WIDTH{1'b0}}; a5 <= {DATA_WIDTH{1'b0}}; a6 <= {DATA_WIDTH{1'b0}}; a7 <= {DATA_WIDTH{1'b0}};
            b0 <= {DATA_WIDTH{1'b0}}; b1 <= {DATA_WIDTH{1'b0}}; b2 <= {DATA_WIDTH{1'b0}}; b3 <= {DATA_WIDTH{1'b0}};
            b4 <= {DATA_WIDTH{1'b0}}; b5 <= {DATA_WIDTH{1'b0}}; b6 <= {DATA_WIDTH{1'b0}}; b7 <= {DATA_WIDTH{1'b0}};
            y <= {8*DATA_WIDTH{1'b0}};
            valid <= 1'b0;
        end
        else begin
            case (state)
                IDLE: begin
                    valid <= 1'b0;
                    if (start) begin
                        // 蝶形运算阶段1 - 初步加减法
                        a0 <= x0 + x7;
                        a1 <= x1 + x6;
                        a2 <= x2 + x5;
                        a3 <= x3 + x4;
                        a4 <= x3 - x4;
                        a5 <= x2 - x5;
                        a6 <= x1 - x6;
                        a7 <= x0 - x7;
                    end
                end
                
                STAGE1: begin
                    // 蝶形运算阶段2 - 继续加减法
                    b0 <= a0 + a3;
                    b1 <= a1 + a2;
                    b2 <= a1 - a2;
                    b3 <= a0 - a3;
                    
                    // 处理其余部分
                    // b4计算
                    mult_temp <= C4 * (a4 + a7);
                    b4 <= mult_temp[DATA_WIDTH+7:8]; // 取Q8.8的结果
                    
                    // b5计算
                    mult_temp <= (C1 * a5) - (C7 * a6);
                    b5 <= mult_temp[DATA_WIDTH+7:8];
                    
                    // b6计算
                    mult_temp <= (C5 * a5) + (C3 * a6);
                    b6 <= mult_temp[DATA_WIDTH+7:8];
                    
                    // b7计算
                    mult_temp <= (C3 * a4) - (C5 * a7);
                    b7 <= mult_temp[DATA_WIDTH+7:8];
                end
                
                STAGE2: begin
                    // 计算最终DCT系数
                    y[DATA_WIDTH*1-1:DATA_WIDTH*0] <= b0 + b1;  // y0
                    
                    // y4计算
                    mult_temp <= C4 * (b0 - b1);
                    y[DATA_WIDTH*5-1:DATA_WIDTH*4] <= mult_temp[DATA_WIDTH+7:8];
                    
                    // y2计算
                    mult_temp <= (C2 * b2) + (C6 * b3);
                    y[DATA_WIDTH*3-1:DATA_WIDTH*2] <= mult_temp[DATA_WIDTH+7:8];
                    
                    // y6计算
                    mult_temp <= (C6 * b2) - (C2 * b3);
                    y[DATA_WIDTH*7-1:DATA_WIDTH*6] <= mult_temp[DATA_WIDTH+7:8];
                    
                    // 奇数项
                    y[DATA_WIDTH*2-1:DATA_WIDTH*1] <= b4 + b6;  // y1
                    y[DATA_WIDTH*4-1:DATA_WIDTH*3] <= b7 - b5;  // y3
                    y[DATA_WIDTH*6-1:DATA_WIDTH*5] <= b4 - b6;  // y5
                    y[DATA_WIDTH*8-1:DATA_WIDTH*7] <= b5 + b7;  // y7
                end
                
                DONE: begin
                    valid <= 1'b1;  // 指示输出有效
                end
                
                default: begin
                    // 默认情况，不做任何操作
                end
            endcase
        end
    end

endmodule 