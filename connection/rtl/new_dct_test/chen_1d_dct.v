module chen_1d_dct #(
    parameter DATA_WIDTH = 24
)(
    input wire clk,              // 时钟信号
    input wire rst_n,            // 低电平有效复位信号
    input wire start,            // 开始信号
    input wire [DATA_WIDTH-1:0] x0,        // 输入数据 x0
    input wire [DATA_WIDTH-1:0] x1,        // 输入数据 x1
    input wire [DATA_WIDTH-1:0] x2,        // 输入数据 x2
    input wire [DATA_WIDTH-1:0] x3,        // 输入数据 x3
    input wire [DATA_WIDTH-1:0] x4,        // 输入数据 x4
    input wire [DATA_WIDTH-1:0] x5,        // 输入数据 x5
    input wire [DATA_WIDTH-1:0] x6,        // 输入数据 x6
    input wire [DATA_WIDTH-1:0] x7,        // 输入数据 x7
    output reg [DATA_WIDTH-1:0] y0,        // 输出DCT系数 y0
    output reg [DATA_WIDTH-1:0] y1,        // 输出DCT系数 y1
    output reg [DATA_WIDTH-1:0] y2,        // 输出DCT系数 y2
    output reg [DATA_WIDTH-1:0] y3,        // 输出DCT系数 y3
    output reg [DATA_WIDTH-1:0] y4,        // 输出DCT系数 y4
    output reg [DATA_WIDTH-1:0] y5,        // 输出DCT系数 y5
    output reg [DATA_WIDTH-1:0] y6,        // 输出DCT系数 y6
    output reg [DATA_WIDTH-1:0] y7,        // 输出DCT系数 y7
    output reg valid             // 输出有效信号
);

    // 状态定义
    localparam IDLE     = 2'b00;
    localparam STAGE1   = 2'b01;
    localparam STAGE2   = 2'b10;
    localparam DONE     = 2'b11;

    // DCT系数，使用Q8.8定点数表示
    // C_n = cos(n*π/16) * 2^8
    localparam signed [15:0] C1 = 16'sd251;  // cos(π/16)  * 256 ≈ 0.9808 * 256
    localparam signed [15:0] C2 = 16'sd236;  // cos(2π/16) * 256 ≈ 0.9239 * 256
    localparam signed [15:0] C3 = 16'sd213;  // cos(3π/16) * 256 ≈ 0.8315 * 256
    localparam signed [15:0] C4 = 16'sd181;  // cos(4π/16) * 256 ≈ 0.7071 * 256
    localparam signed [15:0] C5 = 16'sd142;  // cos(5π/16) * 256 ≈ 0.5556 * 256
    localparam signed [15:0] C6 = 16'sd98;   // cos(6π/16) * 256 ≈ 0.3827 * 256
    localparam signed [15:0] C7 = 16'sd50;   // cos(7π/16) * 256 ≈ 0.1951 * 256

    // 状态寄存器
    reg [1:0] state, next_state;

    // 中间计算结果寄存器
    reg signed [DATA_WIDTH-1:0] a0, a1, a2, a3, a4, a5, a6, a7;
    reg signed [DATA_WIDTH-1:0] b0, b1, b2, b3, b4, b5, b6, b7;
    
    // 乘法结果可能会变大，用更宽的位宽
    reg signed [2*DATA_WIDTH-1:0] mult_temp;

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
            y0 <= {DATA_WIDTH{1'b0}}; y1 <= {DATA_WIDTH{1'b0}}; y2 <= {DATA_WIDTH{1'b0}}; y3 <= {DATA_WIDTH{1'b0}};
            y4 <= {DATA_WIDTH{1'b0}}; y5 <= {DATA_WIDTH{1'b0}}; y6 <= {DATA_WIDTH{1'b0}}; y7 <= {DATA_WIDTH{1'b0}};
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
                    y0 <= b0 + b1;  // 偶数项
                    
                    // y4计算
                    mult_temp <= C4 * (b0 - b1);
                    y4 <= mult_temp[DATA_WIDTH+7:8];
                    
                    // y2计算
                    mult_temp <= (C2 * b2) + (C6 * b3);
                    y2 <= mult_temp[DATA_WIDTH+7:8];
                    
                    // y6计算
                    mult_temp <= (C6 * b2) - (C2 * b3);
                    y6 <= mult_temp[DATA_WIDTH+7:8];
                    
                    // 奇数项
                    y1 <= b4 + b6;
                    y3 <= b7 - b5;
                    y5 <= b4 - b6;
                    y7 <= b5 + b7;
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