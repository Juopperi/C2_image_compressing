module rgb2ycbcr_container #(
    parameter fixed_point_length = 32,
    parameter input_width = 8,
    parameter PIXEL_COUNT = 64,
    parameter CORE_COUNT = 8        // 只使用8个计算核心
)(
    input  wire clk,
    input  wire rst,                // 添加复位信号
    input  wire start,              // 启动转换信号
    input  wire [input_width*PIXEL_COUNT-1:0] r_all,
    input  wire [input_width*PIXEL_COUNT-1:0] g_all,
    input  wire [input_width*PIXEL_COUNT-1:0] b_all,
    output wire [fixed_point_length*PIXEL_COUNT-1:0] y_all,
    output wire [fixed_point_length*PIXEL_COUNT-1:0] cb_all,
    output wire [fixed_point_length*PIXEL_COUNT-1:0] cr_all,
    output wire done                 // 转换完成信号
);
    integer k;
    integer j;


    // 状态定义
    localparam IDLE = 2'b00;
    localparam PROCESSING = 2'b01;
    localparam DONE = 2'b10;
    
    // 状态寄存器和计数器
    reg [1:0] state, next_state;
    reg [2:0] batch_count;  // 需要处理8批(0-7)，每批8个像素
    
    // 输出存储寄存器
    reg [fixed_point_length*PIXEL_COUNT-1:0] y_reg;
    reg [fixed_point_length*PIXEL_COUNT-1:0] cb_reg;
    reg [fixed_point_length*PIXEL_COUNT-1:0] cr_reg;
    reg done_reg;
    
    // 8个计算核心的输入和输出
    reg [input_width-1:0] r_core [0:CORE_COUNT-1];
    reg [input_width-1:0] g_core [0:CORE_COUNT-1];
    reg [input_width-1:0] b_core [0:CORE_COUNT-1];
    wire [fixed_point_length-1:0] y_core [0:CORE_COUNT-1];
    wire [fixed_point_length-1:0] cb_core [0:CORE_COUNT-1];
    wire [fixed_point_length-1:0] cr_core [0:CORE_COUNT-1];
    
    // 实例化8个转换核心
    genvar i;
    generate
        for (i = 0; i < CORE_COUNT; i = i + 1) begin : converter_cores
            int_mul_fra_ycbcr converter (
                .r(r_core[i]),
                .g(g_core[i]),
                .b(b_core[i]),
                .y(y_core[i]),
                .cb(cb_core[i]),
                .cr(cr_core[i])
            );
        end
    endgenerate
    
    // 状态机 - 时序逻辑
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            batch_count <= 0;
            y_reg <= 0;
            cb_reg <= 0;
            cr_reg <= 0;
            done_reg <= 0;
        end else begin
            state <= next_state;
            
            if (state == PROCESSING) begin
                // 将当前批次的计算结果保存到输出寄存器中
                for (j = 0; j < CORE_COUNT; j = j + 1) begin
                    y_reg[(batch_count*CORE_COUNT+j)*fixed_point_length +: fixed_point_length] <= y_core[j];
                    cb_reg[(batch_count*CORE_COUNT+j)*fixed_point_length +: fixed_point_length] <= cb_core[j];
                    cr_reg[(batch_count*CORE_COUNT+j)*fixed_point_length +: fixed_point_length] <= cr_core[j];
                end
                
                if (next_state == PROCESSING) begin
                    batch_count <= batch_count + 1;
                end
            end
            
            done_reg <= (state == DONE);
        end
    end
    
    // 状态机 - 组合逻辑
    always @(*) begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (start) next_state = PROCESSING;
            end
            
            PROCESSING: begin
                if (batch_count == 7) next_state = DONE;  // 处理完最后一批
            end
            
            DONE: begin
                next_state = IDLE;  // 回到空闲状态等待下一次启动
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // 每个状态更新计算核心的输入
    always @(*) begin
        // 默认值
        for ( k = 0; k < CORE_COUNT; k = k + 1) begin
            r_core[k] = 0;
            g_core[k] = 0;
            b_core[k] = 0;
        end
        
        if (state == PROCESSING || (state == IDLE && start)) begin
            // 将下一批8个像素的RGB值给8个转换核心
            for (k = 0; k < CORE_COUNT; k = k + 1) begin
                r_core[k] = r_all[((state == IDLE) ? 0 : batch_count)*CORE_COUNT*input_width + k*input_width +: input_width];
                g_core[k] = g_all[((state == IDLE) ? 0 : batch_count)*CORE_COUNT*input_width + k*input_width +: input_width];
                b_core[k] = b_all[((state == IDLE) ? 0 : batch_count)*CORE_COUNT*input_width + k*input_width +: input_width];
            end
        end
    end
    
    // 将寄存器输出连接到模块输出端口
    assign y_all = y_reg;
    assign cb_all = cb_reg;
    assign cr_all = cr_reg;
    assign done = done_reg;

endmodule