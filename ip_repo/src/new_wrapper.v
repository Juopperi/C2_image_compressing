module jpeg_compression_pipeline_axi_stream #(
    parameter DATA_WIDTH = 32,
    parameter INPUT_WIDTH = 8,
    parameter DATA_DEPTH = 8,
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 64 pixels (8x8 block)
) (
    input wire clk,
    input wire reset_n,
    
    // AXI Stream输入接口 (RGB像素流)
    input wire [INPUT_WIDTH*3-1:0] s_axis_tdata,  // RGB数据
    input wire s_axis_tvalid,                     // 数据有效信号
    output reg s_axis_tready,                     // 接收端就绪信号
    input wire s_axis_tlast,                      // 包结束信号
    
    // AXI Stream输出接口 (Y, Cb, Cr zigzag输出)
    output reg [DATA_WIDTH-1:0] m_axis_tdata,     // 输出数据
    output reg m_axis_tvalid,                     // 输出数据有效
    input wire m_axis_tready,                     // 下游模块就绪
    output reg m_axis_tlast,                      // 包结束信号
    output reg [1:0] m_axis_tuser                 // 指示当前通道: 00=Y, 01=Cb, 10=Cr
);

    // 状态机定义
    localparam S_IDLE = 3'd0;              // 空闲状态
    localparam S_RECEIVING = 3'd1;         // 接收RGB数据
    localparam S_PROCESSING = 3'd2;        // 处理数据
    localparam S_TRANSMITTING_Y = 3'd3;    // 发送Y通道数据
    localparam S_TRANSMITTING_CB = 3'd4;   // 发送Cb通道数据
    localparam S_TRANSMITTING_CR = 3'd5;   // 发送Cr通道数据
    
    reg [2:0] state;                       // 当前状态
    
    // 像素计数器
    reg [$clog2(PIXEL_COUNT)-1:0] input_count;   // 输入像素计数
    reg [$clog2(PIXEL_COUNT)-1:0] output_count;  // 输出像素计数
    
    // RGB数据缓冲区
    reg [INPUT_WIDTH-1:0] r_buffer [0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_buffer [0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_buffer [0:PIXEL_COUNT-1];
    
    // 输入到JPEG pipeline的扁平化缓冲区
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] r_buffer_flat;
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] g_buffer_flat;
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] b_buffer_flat;
    
    // 压缩后的ZigZag数据
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag_buffer;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag_buffer;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag_buffer;
    
    // 为了读取zigzag缓冲区 - 使用简单数组
    reg [DATA_WIDTH-1:0] y_zigzag_data [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_zigzag_data [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_zigzag_data [0:PIXEL_COUNT-1];
    
    integer i;
    integer j;
    
    // 将2D数组转换为扁平wire，用于连接到JPEG pipeline
    generate
        genvar g;
        for (g = 0; g < PIXEL_COUNT; g = g + 1) begin: gen_flat_buffer
            // 使用单独的bit-by-bit连接以避免变量范围表达式
            genvar b;
            for (b = 0; b < INPUT_WIDTH; b = b + 1) begin: gen_bit_connection
                assign r_buffer_flat[INPUT_WIDTH*g+b] = r_buffer[g][b];
                assign g_buffer_flat[INPUT_WIDTH*g+b] = g_buffer[g][b];
                assign b_buffer_flat[INPUT_WIDTH*g+b] = b_buffer[g][b];
            end
        end
    endgenerate
    
    // 实例化原始JPEG压缩模块
    jpeg_compression_pipeline_only_y #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) pipeline_inst (
        .clk(clk),
        .reset_n(reset_n),
        .r_all(r_buffer_flat),
        .g_all(g_buffer_flat),
        .b_all(b_buffer_flat),
        .y_zigzag(y_zigzag_buffer),
        .cb_zigzag(cb_zigzag_buffer),
        .cr_zigzag(cr_zigzag_buffer)
    );
    
    // 解包zigzag数据到各个元素 - 需要在每个时钟上更新
    always @(posedge clk) begin
        for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
            // 使用单独的bit-by-bit赋值以避免变量范围表达式
            for (j = 0; j < DATA_WIDTH; j = j + 1) begin
                y_zigzag_data[i][j] <= y_zigzag_buffer[DATA_WIDTH*i+j];
                cb_zigzag_data[i][j] <= cb_zigzag_buffer[DATA_WIDTH*i+j];
                cr_zigzag_data[i][j] <= cr_zigzag_buffer[DATA_WIDTH*i+j];
            end
        end
    end
    
    // 状态机和数据通路控制
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            // 复位所有寄存器
            state <= S_IDLE;
            input_count <= 0;
            output_count <= 0;
            s_axis_tready <= 1'b0;
            m_axis_tvalid <= 1'b0;
            m_axis_tlast <= 1'b0;
            m_axis_tuser <= 2'b00;
            m_axis_tdata <= {DATA_WIDTH{1'b0}};
            
            // 重置缓冲区
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                r_buffer[i] <= 0;
                g_buffer[i] <= 0;
                b_buffer[i] <= 0;
            end
        end else begin
            case (state)
                S_IDLE: begin
                    // 空闲状态，准备接收新数据
                    s_axis_tready <= 1'b1;  // 表示可以接收数据
                    m_axis_tvalid <= 1'b0;  // 输出数据无效
                    m_axis_tlast <= 1'b0;   // 清除结束标志
                    input_count <= 0;       // 重置计数器
                    output_count <= 0;
                    
                    // 当有有效数据时，转到接收状态
                    if (s_axis_tvalid) begin
                        state <= S_RECEIVING;
                        // 捕获第一个像素
                        r_buffer[0] <= s_axis_tdata[INPUT_WIDTH-1:0];
                        g_buffer[0] <= s_axis_tdata[INPUT_WIDTH*2-1:INPUT_WIDTH];
                        b_buffer[0] <= s_axis_tdata[INPUT_WIDTH*3-1:INPUT_WIDTH*2];
                        input_count <= 1; // 已收到第一个像素
                    end
                end
                
                S_RECEIVING: begin
                    // 继续接收数据
                    if (s_axis_tvalid && s_axis_tready) begin
                        // 存储RGB数据到缓冲区
                        r_buffer[input_count] <= s_axis_tdata[INPUT_WIDTH-1:0];
                        g_buffer[input_count] <= s_axis_tdata[INPUT_WIDTH*2-1:INPUT_WIDTH];
                        b_buffer[input_count] <= s_axis_tdata[INPUT_WIDTH*3-1:INPUT_WIDTH*2];
                        
                        // 增加计数器并检查是否收集完整块
                        if (input_count == PIXEL_COUNT - 1) begin
                            // 收到完整的8x8块，转到处理状态
                            state <= S_PROCESSING;
                            s_axis_tready <= 1'b0; // 暂停接收新数据
                        end else begin
                            input_count <= input_count + 1;
                        end
                    end
                end
                
                S_PROCESSING: begin
                    // 处理状态 - 此处数据直接在pipeline_inst中处理
                    // 处理完成后，准备发送Y通道数据
                    state <= S_TRANSMITTING_Y;
                    output_count <= 0;
                end
                
                S_TRANSMITTING_Y: begin
                    // 传输Y通道数据
                    m_axis_tvalid <= 1'b1;                // 输出数据有效
                    m_axis_tuser <= 2'b00;                // 表示Y通道
                    m_axis_tdata <= y_zigzag_data[output_count];
                    
                    // 设置最后一个像素的TLAST标志
                    m_axis_tlast <= (output_count == PIXEL_COUNT - 1);
                    
                    // 处理握手信号
                    if (m_axis_tready) begin
                        if (output_count == PIXEL_COUNT - 1) begin
                            // Y通道发送完成，转到Cb通道
                            state <= S_TRANSMITTING_CB;
                            output_count <= 0;
                            m_axis_tlast <= 1'b0;
                        end else begin
                            output_count <= output_count + 1;
                        end
                    end
                end
                
                S_TRANSMITTING_CB: begin
                    // 传输Cb通道数据
                    m_axis_tvalid <= 1'b1;
                    m_axis_tuser <= 2'b01;                // 表示Cb通道
                    m_axis_tdata <= cb_zigzag_data[output_count];
                    
                    // 设置最后一个像素的TLAST标志
                    m_axis_tlast <= (output_count == PIXEL_COUNT - 1);
                    
                    // 处理握手信号
                    if (m_axis_tready) begin
                        if (output_count == PIXEL_COUNT - 1) begin
                            // Cb通道发送完成，转到Cr通道
                            state <= S_TRANSMITTING_CR;
                            output_count <= 0;
                            m_axis_tlast <= 1'b0;
                        end else begin
                            output_count <= output_count + 1;
                        end
                    end
                end
                
                S_TRANSMITTING_CR: begin
                    // 传输Cr通道数据
                    m_axis_tvalid <= 1'b1;
                    m_axis_tuser <= 2'b10;                // 表示Cr通道
                    m_axis_tdata <= cr_zigzag_data[output_count];
                    
                    // 设置最后一个像素的TLAST标志
                    m_axis_tlast <= (output_count == PIXEL_COUNT - 1);
                    
                    // 处理握手信号
                    if (m_axis_tready) begin
                        if (output_count == PIXEL_COUNT - 1) begin
                            // Cr通道发送完成，返回空闲状态
                            state <= S_IDLE;
                            m_axis_tvalid <= 1'b0;
                            s_axis_tready <= 1'b1;        // 准备接收新数据
                        end else begin
                            output_count <= output_count + 1;
                        end
                    end
                end
                
                default: begin
                    state <= S_IDLE;
                end
            endcase
        end
    end
    
endmodule