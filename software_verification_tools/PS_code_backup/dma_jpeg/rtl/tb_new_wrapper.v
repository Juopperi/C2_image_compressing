`timescale 1ns/1ps

module jpeg_compression_pipeline_axi_stream_tb();
    // 参数定义
    parameter DATA_WIDTH = 32;
    parameter INPUT_WIDTH = 8;
    parameter DATA_DEPTH = 8;
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH;  // 64 pixels (8x8 block)
    parameter CLK_PERIOD = 10;  // 10ns, 100MHz

    // 信号声明
    reg clk = 0;
    reg reset_n = 0;
    
    // AXI Stream 输入接口
    reg [INPUT_WIDTH*3-1:0] s_axis_tdata;
    reg s_axis_tvalid;
    wire s_axis_tready;
    reg s_axis_tlast;
    
    // AXI Stream 输出接口
    wire [DATA_WIDTH-1:0] m_axis_tdata;
    wire m_axis_tvalid;
    reg m_axis_tready;
    wire m_axis_tlast;
    wire [1:0] m_axis_tuser;
    
    // 为了验证，存储输入和输出数据
    reg [INPUT_WIDTH-1:0] r_input[0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_input[0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_input[0:PIXEL_COUNT-1];
    
    reg [DATA_WIDTH-1:0] y_output[0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_output[0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_output[0:PIXEL_COUNT-1];
    
    integer i, j, pixel_idx;
    integer output_count = 0;
    integer current_channel = 0; // 0=Y, 1=Cb, 2=Cr
    integer zero_count_cb, zero_count_cr; // 声明在模块级别
    
    // 实例化被测设备 (DUT)
    jpeg_compression_pipeline_axi_stream #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        // AXI Stream 输入
        .s_axis_tdata(s_axis_tdata),
        .s_axis_tvalid(s_axis_tvalid),
        .s_axis_tready(s_axis_tready),
        .s_axis_tlast(s_axis_tlast),
        // AXI Stream 输出
        .m_axis_tdata(m_axis_tdata),
        .m_axis_tvalid(m_axis_tvalid),
        .m_axis_tready(m_axis_tready),
        .m_axis_tlast(m_axis_tlast),
        .m_axis_tuser(m_axis_tuser)
    );
    
    // 时钟生成
    always #(CLK_PERIOD/2) clk = ~clk;
    
    // 测试数据生成和数据发送任务
    task send_pixel;
        input [INPUT_WIDTH-1:0] r;
        input [INPUT_WIDTH-1:0] g;
        input [INPUT_WIDTH-1:0] b;
        input last;
        begin
            // 准备发送数据
            s_axis_tdata = {b, g, r};
            s_axis_tvalid = 1'b1;
            s_axis_tlast = last;
            
            // 等待握手完成
            wait(s_axis_tready);
            @(posedge clk);
            
            // 检查是否需要暂停发送
            if (!s_axis_tready) begin
                s_axis_tvalid = 1'b0;
                wait(s_axis_tready);
                s_axis_tvalid = 1'b1;
                @(posedge clk);
            end
        end
    endtask
    
    // 接收输出数据任务
    always @(posedge clk) begin
        if (reset_n && m_axis_tvalid && m_axis_tready) begin
            case (m_axis_tuser)
                2'b00: begin // Y通道
                    y_output[output_count] = m_axis_tdata;
                    if (m_axis_tlast) begin
                        output_count = 0;
                        current_channel = 1; // 下一个是Cb通道
                        $display("Y通道接收完成, 时间 %t", $time);
                    end else begin
                        output_count = output_count + 1;
                    end
                end
                2'b01: begin // Cb通道
                    cb_output[output_count] = m_axis_tdata;
                    if (m_axis_tlast) begin
                        output_count = 0;
                        current_channel = 2; // 下一个是Cr通道
                        $display("Cb通道接收完成, 时间 %t", $time);
                    end else begin
                        output_count = output_count + 1;
                    end
                end
                2'b10: begin // Cr通道
                    cr_output[output_count] = m_axis_tdata;
                    if (m_axis_tlast) begin
                        output_count = 0;
                        current_channel = 0; // 回到Y通道
                        $display("Cr通道接收完成, 时间 %t", $time);
                    end else begin
                        output_count = output_count + 1;
                    end
                end
                default: begin
                    $display("错误: 未知通道类型 %b, 时间 %t", m_axis_tuser, $time);
                end
            endcase
        end
    end
    
    // 打印测试结果
    task print_results;
        begin
            $display("\n--- 测试结果 ---");
            
            // 打印部分输入数据示例
            $display("输入RGB数据 (示例):");
            for (i = 0; i < 4; i = i + 1) begin
                for (j = 0; j < 4; j = j + 1) begin
                    pixel_idx = i * DATA_DEPTH + j;
                    $display("像素[%0d,%0d]: R=%0d, G=%0d, B=%0d", 
                        i, j, r_input[pixel_idx], g_input[pixel_idx], b_input[pixel_idx]);
                end
            end
            
            // 打印部分输出数据示例
            $display("\n输出Y通道数据 (示例):");
            for (i = 0; i < 4; i = i + 1) begin
                for (j = 0; j < 4; j = j + 1) begin
                    pixel_idx = i * DATA_DEPTH + j;
                    $display("Y[%0d,%0d]: %0d", i, j, y_output[pixel_idx]);
                end
            end
            
            // 检查Cb和Cr通道是否都为零(如原模块指定的)
            $display("\n检查Cb/Cr通道...");
            zero_count_cb = 0;
            zero_count_cr = 0;
            
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                if (cb_output[i] == 0) zero_count_cb = zero_count_cb + 1;
                if (cr_output[i] == 0) zero_count_cr = zero_count_cr + 1;
            end
            
            $display("Cb零系数: %0d/%0d", zero_count_cb, PIXEL_COUNT);
            $display("Cr零系数: %0d/%0d", zero_count_cr, PIXEL_COUNT);
            
            if (zero_count_cb == PIXEL_COUNT && zero_count_cr == PIXEL_COUNT) begin
                $display("测试通过: 所有Cb/Cr系数均为零，符合预期");
            end else begin
                $display("测试失败: 部分Cb/Cr系数不为零");
            end
        end
    endtask
    
    // 测试主过程
    initial begin
        // 初始化
        reset_n = 0;
        s_axis_tvalid = 0;
        s_axis_tlast = 0;
        m_axis_tready = 0;
        
        // 生成测试数据 - 一个8x8块的像素
        for (i = 0; i < DATA_DEPTH; i = i + 1) begin
            for (j = 0; j < DATA_DEPTH; j = j + 1) begin
                pixel_idx = i * DATA_DEPTH + j;
                // 生成一个简单的梯度图案
                r_input[pixel_idx] = (i * 16 + j * 16) % 256;
                g_input[pixel_idx] = (i * 32) % 256;
                b_input[pixel_idx] = (j * 32) % 256;
            end
        end
        
        // 复位DUT
        #(CLK_PERIOD * 5);
        reset_n = 1;
        #(CLK_PERIOD * 5);
        
        // 设置接收端就绪
        m_axis_tready = 1'b1;
        
        // 发送像素数据
        $display("开始发送RGB数据, 时间 %t", $time);
        for (pixel_idx = 0; pixel_idx < PIXEL_COUNT; pixel_idx = pixel_idx + 1) begin
            send_pixel(
                r_input[pixel_idx],
                g_input[pixel_idx],
                b_input[pixel_idx],
                (pixel_idx == PIXEL_COUNT - 1)  // 最后一个像素设置tlast
            );
        end
        s_axis_tvalid = 1'b0;  // 发送完成
        $display("RGB数据发送完成, 时间 %t", $time);
        
        // 测试tready的切换(模拟背压情况)
        begin
            // 等待接收开始
            wait(m_axis_tvalid);
            #(CLK_PERIOD * 16);
            
            // 周期性地关闭和打开tready，测试背压处理
            repeat(5) begin
                m_axis_tready = 1'b0;
                $display("测试背压: tready=0, 时间 %t", $time);
                #(CLK_PERIOD * 3);
                m_axis_tready = 1'b1;
                $display("恢复传输: tready=1, 时间 %t", $time);
                #(CLK_PERIOD * 20);
            end
        end
        
        // 等待处理完成(足够长的时间确保所有通道数据都处理完)
        #(CLK_PERIOD * 500);
        
        // 打印测试结果
        print_results();
        
        // 结束仿真
        #(CLK_PERIOD * 10);
        $display("\n仿真完成，总时间 %t", $time);
        $finish;
    end
    
    // 记录波形以便调试
    initial begin
        // 使用更保守的波形转储方法
        // $dumpfile("jpeg_compression_axi_stream_tb.vcd");
        // $dumpvars(0, jpeg_compression_pipeline_axi_stream_tb);
        
        // 如果需要波形，请使用模拟器的GUI波形查看器或针对您的模拟器使用专用命令
        // 例如，对于Questa/ModelSim，您可能需要在外部使用命令行参数或脚本
    end

endmodule