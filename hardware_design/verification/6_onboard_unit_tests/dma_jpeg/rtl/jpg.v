`timescale 1 ns / 1 ps
module jpg #
(
    parameter integer C_S00_AXIS_TDATA_WIDTH = 32,
    parameter integer C_M00_AXIS_TDATA_WIDTH = 32,
    parameter integer C_M00_AXIS_START_COUNT = 32,
    // JPEG处理相关参数
    parameter integer DATA_WIDTH = 32,         // JPEG处理的内部数据宽度
    parameter integer INPUT_WIDTH = 8,         // 输入像素宽度（8位RGB）
    parameter integer DATA_DEPTH = 8,          // 8x8块
    parameter integer PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 每块64个像素
)
(
    // 端口保持不变
    input wire  s00_axis_aclk,
    input wire  s00_axis_aresetn,
    output wire  s00_axis_tready,
    input wire [C_S00_AXIS_TDATA_WIDTH-1 : 0] s00_axis_tdata,
    input wire [(C_S00_AXIS_TDATA_WIDTH/8)-1 : 0] s00_axis_tstrb,
    input wire  s00_axis_tlast,
    input wire  s00_axis_tvalid,
    
    input wire  m00_axis_aclk,
    input wire  m00_axis_aresetn,
    output wire  m00_axis_tvalid,
    output wire [C_M00_AXIS_TDATA_WIDTH-1 : 0] m00_axis_tdata,
    output wire [(C_M00_AXIS_TDATA_WIDTH/8)-1 : 0] m00_axis_tstrb,
    output wire  m00_axis_tlast,
    input wire  m00_axis_tready
);

    // 内部连接信号
    wire [C_M00_AXIS_TDATA_WIDTH-1:0] processed_data;
    wire processed_valid;
    wire processed_ready;
    wire processed_last;
    wire [(C_M00_AXIS_TDATA_WIDTH/8)-1:0] processed_strb;
    
    // 使用JPEG处理模块替代位翻转器
    jpeg_axi_stream #(
        .C_S00_AXIS_TDATA_WIDTH(C_S00_AXIS_TDATA_WIDTH),
        .C_M00_AXIS_TDATA_WIDTH(C_M00_AXIS_TDATA_WIDTH),
        .C_M00_AXIS_START_COUNT(C_M00_AXIS_START_COUNT),
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) jpeg_processor_inst (
        // 输入接口
        .s00_axis_aclk(s00_axis_aclk),
        .s00_axis_aresetn(s00_axis_aresetn),
        .s00_axis_tready(s00_axis_tready),
        .s00_axis_tdata(s00_axis_tdata),
        .s00_axis_tstrb(s00_axis_tstrb),
        .s00_axis_tlast(s00_axis_tlast),
        .s00_axis_tvalid(s00_axis_tvalid),
        
        // 输出接口
        .m00_axis_aclk(m00_axis_aclk),
        .m00_axis_aresetn(m00_axis_aresetn),
        .m00_axis_tvalid(m00_axis_tvalid),
        .m00_axis_tdata(m00_axis_tdata),
        .m00_axis_tstrb(m00_axis_tstrb),
        .m00_axis_tlast(m00_axis_tlast),
        .m00_axis_tready(m00_axis_tready)
    );

endmodule

module jpeg_axi_stream #
(
    parameter integer C_S00_AXIS_TDATA_WIDTH = 32,
    parameter integer C_M00_AXIS_TDATA_WIDTH = 32,
    parameter integer C_M00_AXIS_START_COUNT = 32,
    parameter integer DATA_WIDTH = 32,         // JPEG处理的内部数据宽度
    parameter integer INPUT_WIDTH = 8,         // 输入像素宽度（8位RGB）
    parameter integer DATA_DEPTH = 8,          // 8x8块
    parameter integer PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 每块64个像素
)
(
    // AXI Stream输入接口
    input wire  s00_axis_aclk,
    input wire  s00_axis_aresetn,
    output wire  s00_axis_tready,
    input wire [C_S00_AXIS_TDATA_WIDTH-1 : 0] s00_axis_tdata,
    input wire [(C_S00_AXIS_TDATA_WIDTH/8)-1 : 0] s00_axis_tstrb,
    input wire  s00_axis_tlast,
    input wire  s00_axis_tvalid,
    
    // AXI Stream输出接口
    input wire  m00_axis_aclk,
    input wire  m00_axis_aresetn,
    output wire  m00_axis_tvalid,
    output wire [C_M00_AXIS_TDATA_WIDTH-1 : 0] m00_axis_tdata,
    output wire [(C_M00_AXIS_TDATA_WIDTH/8)-1 : 0] m00_axis_tstrb,
    output wire  m00_axis_tlast,
    input wire  m00_axis_tready
);

    // 状态定义
    localparam [3:0] 
        IDLE = 4'b0000,
        RECEIVE_R = 4'b0001,
        RECEIVE_G = 4'b0010,
        RECEIVE_B = 4'b0011,
        PROCESS_DATA = 4'b0100,
        PROCESS_WAIT = 4'b0101,
        SEND_Y = 4'b0110,
        SEND_CB = 4'b0111,
        SEND_CR = 4'b1000;
    
    reg [3:0] state;
    
    // RGB输入缓冲区
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] r_buffer;
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] g_buffer;
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] b_buffer;
    
    // 像素计数器
    reg [6:0] pixel_count;  // 接收/发送像素的计数器 (0-63)
    
    // JPEG管道的输出数据
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag;
    
    // 输出缓冲区
    reg [DATA_WIDTH*PIXEL_COUNT-1:0] y_out_buffer;
    reg [DATA_WIDTH*PIXEL_COUNT-1:0] cb_out_buffer;
    reg [DATA_WIDTH*PIXEL_COUNT-1:0] cr_out_buffer;
    
    // 输出数据控制信号
    reg [DATA_WIDTH-1:0] current_output_data;
    reg current_output_valid;
    reg current_output_last;
    wire output_ready;
    
    // JPEG压缩管道实例化
    jpeg_compression_pipeline_only_y #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) jpeg_pipeline (
        .clk(s00_axis_aclk),
        .reset_n(s00_axis_aresetn),
        .r_all(r_buffer),
        .g_all(g_buffer),
        .b_all(b_buffer),
        .y_zigzag(y_zigzag),
        .cb_zigzag(cb_zigzag),
        .cr_zigzag(cr_zigzag)
    );
    
    // 输入就绪信号
    assign s00_axis_tready = (state == RECEIVE_R || state == RECEIVE_G || state == RECEIVE_B) && s00_axis_aresetn;
    
    // 状态机
    always @(posedge s00_axis_aclk) begin
        if (!s00_axis_aresetn) begin
            state <= IDLE;
            pixel_count <= 0;
            r_buffer <= 0;
            g_buffer <= 0;
            b_buffer <= 0;
            y_out_buffer <= 0;
            cb_out_buffer <= 0;
            cr_out_buffer <= 0;
            current_output_valid <= 0;
            current_output_last <= 0;
        end else begin
            case (state)
                IDLE: begin
                    pixel_count <= 0;
                    current_output_valid <= 0;
                    current_output_last <= 0;
                    state <= RECEIVE_R;
                end
                
                RECEIVE_R: begin
                    if (s00_axis_tvalid && s00_axis_tready) begin
                        // 存储R通道数据
                        // 假设32位AXI总线，一次可以传输4个8位像素
                        if (pixel_count < PIXEL_COUNT) begin
                            r_buffer[(pixel_count*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[7:0];
                        end
                        
                        if (pixel_count + 1 < PIXEL_COUNT) begin
                            r_buffer[((pixel_count+1)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[15:8];
                        end
                        
                        if (pixel_count + 2 < PIXEL_COUNT) begin
                            r_buffer[((pixel_count+2)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[23:16];
                        end
                        
                        if (pixel_count + 3 < PIXEL_COUNT) begin
                            r_buffer[((pixel_count+3)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[31:24];
                        end
                        
                        pixel_count <= pixel_count + 4;
                        
                        if (pixel_count + 4 >= PIXEL_COUNT || s00_axis_tlast) begin
                            state <= RECEIVE_G;
                            pixel_count <= 0;
                        end
                    end
                end
                
                RECEIVE_G: begin
                    if (s00_axis_tvalid && s00_axis_tready) begin
                        // 存储G通道数据
                        if (pixel_count < PIXEL_COUNT) begin
                            g_buffer[(pixel_count*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[7:0];
                        end
                        
                        if (pixel_count + 1 < PIXEL_COUNT) begin
                            g_buffer[((pixel_count+1)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[15:8];
                        end
                        
                        if (pixel_count + 2 < PIXEL_COUNT) begin
                            g_buffer[((pixel_count+2)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[23:16];
                        end
                        
                        if (pixel_count + 3 < PIXEL_COUNT) begin
                            g_buffer[((pixel_count+3)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[31:24];
                        end
                        
                        pixel_count <= pixel_count + 4;
                        
                        if (pixel_count + 4 >= PIXEL_COUNT || s00_axis_tlast) begin
                            state <= RECEIVE_B;
                            pixel_count <= 0;
                        end
                    end
                end
                
                RECEIVE_B: begin
                    if (s00_axis_tvalid && s00_axis_tready) begin
                        // 存储B通道数据
                        if (pixel_count < PIXEL_COUNT) begin
                            b_buffer[(pixel_count*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[7:0];
                        end
                        
                        if (pixel_count + 1 < PIXEL_COUNT) begin
                            b_buffer[((pixel_count+1)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[15:8];
                        end
                        
                        if (pixel_count + 2 < PIXEL_COUNT) begin
                            b_buffer[((pixel_count+2)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[23:16];
                        end
                        
                        if (pixel_count + 3 < PIXEL_COUNT) begin
                            b_buffer[((pixel_count+3)*INPUT_WIDTH) +: INPUT_WIDTH] <= s00_axis_tdata[31:24];
                        end
                        
                        pixel_count <= pixel_count + 4;
                        
                        if (pixel_count + 4 >= PIXEL_COUNT || s00_axis_tlast) begin
                            state <= PROCESS_DATA;
                            pixel_count <= 0;
                        end
                    end
                end
                
                PROCESS_DATA: begin
                    // 启动JPEG处理，等待一个时钟周期让数据传播
                    state <= PROCESS_WAIT;
                end
                
                PROCESS_WAIT: begin
                    // 等待JPEG处理完成
                    // 这里简化了，假设JPEG处理需要一个时钟周期
                    // 实际应用中可能需要多个周期或等待ready信号
                    
                    // 将处理结果保存到输出缓冲区
                    y_out_buffer <= y_zigzag;
                    cb_out_buffer <= cb_zigzag;
                    cr_out_buffer <= cr_zigzag;
                    
                    state <= SEND_Y;
                    pixel_count <= 0;
                end
                
                SEND_Y: begin
                    if (pixel_count < PIXEL_COUNT && output_ready) begin
                        // 准备发送Y通道数据
                        current_output_data <= y_out_buffer[(pixel_count*DATA_WIDTH) +: DATA_WIDTH];
                        current_output_valid <= 1'b1;
                        current_output_last <= (pixel_count == PIXEL_COUNT - 1);
                        
                        pixel_count <= pixel_count + 1;
                        
                        if (pixel_count == PIXEL_COUNT - 1) begin
                            state <= SEND_CB;
                            pixel_count <= 0;
                        end
                    end else if (!output_ready) begin
                        current_output_valid <= 1'b0;
                    end
                end
                
                SEND_CB: begin
                    if (pixel_count < PIXEL_COUNT && output_ready) begin
                        // 准备发送Cb通道数据
                        current_output_data <= cb_out_buffer[(pixel_count*DATA_WIDTH) +: DATA_WIDTH];
                        current_output_valid <= 1'b1;
                        current_output_last <= (pixel_count == PIXEL_COUNT - 1);
                        
                        pixel_count <= pixel_count + 1;
                        
                        if (pixel_count == PIXEL_COUNT - 1) begin
                            state <= SEND_CR;
                            pixel_count <= 0;
                        end
                    end else if (!output_ready) begin
                        current_output_valid <= 1'b0;
                    end
                end
                
                SEND_CR: begin
                    if (pixel_count < PIXEL_COUNT && output_ready) begin
                        // 准备发送Cr通道数据
                        current_output_data <= cr_out_buffer[(pixel_count*DATA_WIDTH) +: DATA_WIDTH];
                        current_output_valid <= 1'b1;
                        current_output_last <= (pixel_count == PIXEL_COUNT - 1);
                        
                        pixel_count <= pixel_count + 1;
                        
                        if (pixel_count == PIXEL_COUNT - 1) begin
                            state <= IDLE;  // 完成一次完整处理
                        end
                    end else if (!output_ready) begin
                        current_output_valid <= 1'b0;
                    end
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end
    
    // 输出控制模块
    custom_master_stream #( 
        .C_M_AXIS_TDATA_WIDTH(C_M00_AXIS_TDATA_WIDTH),
        .C_M_START_COUNT(C_M00_AXIS_START_COUNT)
    ) output_stream_controller (
        .M_AXIS_ACLK(m00_axis_aclk),
        .M_AXIS_ARESETN(m00_axis_aresetn),
        .M_AXIS_TVALID(m00_axis_tvalid),
        .M_AXIS_TDATA(m00_axis_tdata),
        .M_AXIS_TSTRB(m00_axis_tstrb),
        .M_AXIS_TLAST(m00_axis_tlast),
        .M_AXIS_TREADY(m00_axis_tready),
        
        // 连接到内部信号
        .S_AXIS_TDATA({{(C_M00_AXIS_TDATA_WIDTH-DATA_WIDTH){1'b0}}, current_output_data}), // 填充高位
        .S_AXIS_TVALID(current_output_valid),
        .S_AXIS_TREADY(output_ready),
        .S_AXIS_TLAST(current_output_last),
        .S_AXIS_TSTRB({(C_M00_AXIS_TDATA_WIDTH/8){1'b1}}) // 所有字节有效
    );

endmodule

// 自定义主机流模块
module custom_master_stream #
(
    parameter integer C_M_AXIS_TDATA_WIDTH = 32,
    parameter integer C_M_START_COUNT = 32
)
(
    // 主机接口
    input wire  M_AXIS_ACLK,
    input wire  M_AXIS_ARESETN,
    output reg  M_AXIS_TVALID,
    output reg [C_M_AXIS_TDATA_WIDTH-1 : 0] M_AXIS_TDATA,
    output reg [(C_M_AXIS_TDATA_WIDTH/8)-1 : 0] M_AXIS_TSTRB,
    output reg  M_AXIS_TLAST,
    input wire  M_AXIS_TREADY,
    
    // 从机接口 - 接收内部数据
    input wire [C_M_AXIS_TDATA_WIDTH-1 : 0] S_AXIS_TDATA,
    input wire S_AXIS_TVALID,
    output wire S_AXIS_TREADY,
    input wire S_AXIS_TLAST,
    input wire [(C_M_AXIS_TDATA_WIDTH/8)-1 : 0] S_AXIS_TSTRB
);

    // 延迟计数器
    reg [clogb2(C_M_START_COUNT-1)-1 : 0] count;
    reg [2:0] state;
    
    // 状态定义
    localparam [2:0] IDLE = 3'b000,
                    INIT_COUNTER = 3'b001,
                    SEND_STREAM = 3'b010,
                    WAIT_READY = 3'b011;
    
    // 返回大于等于位深度的最小整数
    function integer clogb2 (input integer bit_depth);
        integer depth;
    begin
        depth = bit_depth;
        for(clogb2=0; depth>0; clogb2=clogb2+1)
            depth = depth >> 1;
    end
    endfunction
    
    // 信号分配
    assign S_AXIS_TREADY = (state == SEND_STREAM) && M_AXIS_ARESETN;
    
    // 状态机实现
    always @(posedge M_AXIS_ACLK)
    begin
        if (!M_AXIS_ARESETN)
        begin
            state <= IDLE;
            count <= 0;
            M_AXIS_TVALID <= 1'b0;
            M_AXIS_TDATA <= 0;
            M_AXIS_TLAST <= 1'b0;
            M_AXIS_TSTRB <= 0;
        end
        else
        begin
            case (state)
                IDLE:
                    begin
                        state <= INIT_COUNTER;
                    end
                    
                INIT_COUNTER:
                    begin
                        if (count == C_M_START_COUNT - 1)
                        begin
                            state <= SEND_STREAM;
                            count <= 0;
                        end
                        else
                        begin
                            count <= count + 1;
                        end
                    end
                    
                SEND_STREAM:
                    begin
                        if (S_AXIS_TVALID)
                        begin
                            M_AXIS_TDATA <= S_AXIS_TDATA;
                            M_AXIS_TVALID <= 1'b1;
                            M_AXIS_TLAST <= S_AXIS_TLAST;
                            M_AXIS_TSTRB <= S_AXIS_TSTRB;
                            state <= WAIT_READY;
                        end
                    end
                    
                WAIT_READY:
                    begin
                        if (M_AXIS_TREADY)
                        begin
                            M_AXIS_TVALID <= 1'b0;
                            state <= SEND_STREAM;
                        end
                    end
                    
                default:
                    state <= IDLE;
            endcase
        end
    end

endmodule

module jpeg_compression_pipeline_only_y #(
    parameter DATA_WIDTH = 32,
    parameter INPUT_WIDTH = 8,
    parameter DATA_DEPTH = 8,
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 64 pixels (8x8 block)
) (
    input wire clk,
    input wire reset_n,
    // RGB inputs - 64 pixels, each with 8-bit R, G, B components
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all,
    // Final zigzag output for Y channel only
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag
);

    // Stage 1: YCbCr Conversion (only Y is used)
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_raw;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_raw;  // Unused
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_raw;  // Unused

    rgb2ycbcr_container #(
        .fixed_point_length(DATA_WIDTH)
    ) ycbcr_stage (
        .clk(clk),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_all(y_raw),
        .cb_all(cb_raw),  // Unused
        .cr_all(cr_raw)   // Unused
    );

    // Stage 2: DCT Transform for Y channel
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_dct;

    wire y_in_ready;
    wire y_out_valid;
    reg y_in_valid = 1'b1;
    reg y_out_ready = 1'b1;

    dct8x8_chen_2d #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (8)         // Fraction bits
    ) dct_y_stage (
        .clk(clk),
        .rst_n(reset_n),
        .in_valid(y_in_valid),
        .in_ready(y_in_ready),
        .in_data(y_raw),
        .out_valid(y_out_valid),
        .out_ready(y_out_ready),
        .out_data(y_dct)
    );

    // Stage 3: Quantization for Y channel
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_quant;

    quantize_array #(
        .USE_LUMA(1)  // Use luma quantization table
    ) quant_y_stage (
        .clk(clk),
        .pixels(y_dct),
        .q_result(y_quant)
    );

    // Stage 4: Zigzag Reordering for Y channel
    zigzag_reorder zigzag_y_stage (
        .clk(clk),
        .input_matrix(y_quant),
        .zigzag_out(y_zigzag)
    );

assign cb_zigzag = 0;
assign cr_zigzag = 0;

endmodule
