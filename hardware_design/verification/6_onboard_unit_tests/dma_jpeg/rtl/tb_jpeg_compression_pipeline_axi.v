`timescale 1ns/1ps

module jpeg_compression_pipeline_axi_tb();
    // 参数定义
    parameter DATA_WIDTH = 32;
    parameter INPUT_WIDTH = 8;
    parameter DATA_DEPTH = 8;
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH;  // 64 pixels (8x8 block)
    parameter ADDR_WIDTH = 8;
    parameter CLK_PERIOD = 10;  // 10ns, 100MHz

    // 信号声明
    reg clk = 0;
    reg reset_n = 0;
    
    // AXI-Lite接口信号
    // 写地址通道
    reg [ADDR_WIDTH-1:0] s_axi_awaddr;
    reg s_axi_awvalid;
    wire s_axi_awready;
    
    // 写数据通道
    reg [DATA_WIDTH-1:0] s_axi_wdata;
    reg s_axi_wvalid;
    wire s_axi_wready;
    
    // 写响应通道
    wire s_axi_bvalid;
    reg s_axi_bready;
    
    // 读地址通道
    reg [ADDR_WIDTH-1:0] s_axi_araddr;
    reg s_axi_arvalid;
    wire s_axi_arready;
    
    // 读数据通道
    wire [DATA_WIDTH-1:0] s_axi_rdata;
    wire s_axi_rvalid;
    reg s_axi_rready;
    
    // 中断信号
    wire irq;
    
    // 为了验证，存储输入和输出数据
    reg [INPUT_WIDTH-1:0] r_input[0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_input[0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_input[0:PIXEL_COUNT-1];
    
    reg [DATA_WIDTH-1:0] y_output[0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_output[0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_output[0:PIXEL_COUNT-1];
    
    // 寄存器地址定义（需要与DUT保持一致）
    localparam CTRL_REG_ADDR        = 8'h00;    // 控制寄存器
    localparam STATUS_REG_ADDR      = 8'h04;    // 状态寄存器
    localparam RGB_DATA_ADDR        = 8'h10;    // RGB输入数据起始地址
    localparam Y_DATA_ADDR          = 8'h20;    // Y输出数据起始地址
    localparam CB_DATA_ADDR         = 8'h60;    // Cb输出数据起始地址
    localparam CR_DATA_ADDR         = 8'hA0;    // Cr输出数据起始地址
    
    // 控制寄存器位定义
    localparam CTRL_START_BIT       = 0;        // 开始处理
    localparam CTRL_IRQ_EN_BIT      = 1;        // 中断使能
    localparam CTRL_RESET_BIT       = 2;        // 软复位
    
    // 状态寄存器位定义
    localparam STATUS_BUSY_BIT      = 0;        // 正在处理
    localparam STATUS_DONE_BIT      = 1;        // 处理完成
    localparam STATUS_ERROR_BIT     = 2;        // 错误标志
    
    // 辅助变量
    integer i, j, pixel_idx;
    reg [31:0] status_value;
    
    // 实例化被测设备 (DUT)
    jpeg_compression_pipeline_axi #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        // AXI-Lite写地址通道
        .s_axi_awaddr(s_axi_awaddr),
        .s_axi_awvalid(s_axi_awvalid),
        .s_axi_awready(s_axi_awready),
        // AXI-Lite写数据通道
        .s_axi_wdata(s_axi_wdata),
        .s_axi_wvalid(s_axi_wvalid),
        .s_axi_wready(s_axi_wready),
        // AXI-Lite写响应通道
        .s_axi_bvalid(s_axi_bvalid),
        .s_axi_bready(s_axi_bready),
        // AXI-Lite读地址通道
        .s_axi_araddr(s_axi_araddr),
        .s_axi_arvalid(s_axi_arvalid),
        .s_axi_arready(s_axi_arready),
        // AXI-Lite读数据通道
        .s_axi_rdata(s_axi_rdata),
        .s_axi_rvalid(s_axi_rvalid),
        .s_axi_rready(s_axi_rready),
        // 中断
        .irq(irq)
    );
    
    // 时钟生成
    always #(CLK_PERIOD/2) clk = ~clk;
    
    // AXI写任务
    task axi_write;
        input [ADDR_WIDTH-1:0] addr;
        input [DATA_WIDTH-1:0] data;
        begin
            // 写地址阶段
            s_axi_awaddr = addr;
            s_axi_awvalid = 1'b1;
            s_axi_wdata = data;
            s_axi_wvalid = 1'b1;
            s_axi_bready = 1'b1;
            
            // 等待写地址就绪
            wait(s_axi_awready);
            @(posedge clk);
            s_axi_awvalid = 1'b0;
            
            // 等待写数据就绪
            wait(s_axi_wready);
            @(posedge clk);
            s_axi_wvalid = 1'b0;
            
            // 等待写响应
            wait(s_axi_bvalid);
            @(posedge clk);
            s_axi_bready = 1'b0;
            
            // 延迟一个周期
            @(posedge clk);
        end
    endtask
    
    // AXI读任务
    task axi_read;
        input [ADDR_WIDTH-1:0] addr;
        output [DATA_WIDTH-1:0] data;
        begin
            // 读地址阶段
            s_axi_araddr = addr;
            s_axi_arvalid = 1'b1;
            s_axi_rready = 1'b1;
            
            // 等待读地址就绪
            wait(s_axi_arready);
            @(posedge clk);
            s_axi_arvalid = 1'b0;
            
            // 等待读数据有效
            wait(s_axi_rvalid);
            data = s_axi_rdata;
            @(posedge clk);
            s_axi_rready = 1'b0;
            
            // 延迟一个周期
            @(posedge clk);
        end
    endtask
    
    // 等待处理完成任务
    task wait_for_completion;
        begin
            status_value = 0;
            while (!status_value[STATUS_DONE_BIT]) begin
                axi_read(STATUS_REG_ADDR, status_value);
                #(CLK_PERIOD * 10);
            end
        end
    endtask
    
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
            
            // 打印部分Cb数据示例
            $display("\n输出Cb通道数据 (示例):");
            for (i = 0; i < 4; i = i + 1) begin
                for (j = 0; j < 4; j = j + 1) begin
                    pixel_idx = i * DATA_DEPTH + j;
                    $display("Cb[%0d,%0d]: %0d", i, j, cb_output[pixel_idx]);
                end
            end
            
            // 打印部分Cr数据示例
            $display("\n输出Cr通道数据 (示例):");
            for (i = 0; i < 4; i = i + 1) begin
                for (j = 0; j < 4; j = j + 1) begin
                    pixel_idx = i * DATA_DEPTH + j;
                    $display("Cr[%0d,%0d]: %0d", i, j, cr_output[pixel_idx]);
                end
            end
        end
    endtask
    
    // 测试主过程
    initial begin
        // 初始化信号
        reset_n = 0;
        s_axi_awvalid = 0;
        s_axi_wvalid = 0;
        s_axi_bready = 0;
        s_axi_arvalid = 0;
        s_axi_rready = 0;
        
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
        
        // 复位
        #(CLK_PERIOD * 5);
        reset_n = 1;
        #(CLK_PERIOD * 5);
        
        // 测试开始
        $display("开始测试, 时间 %t", $time);
        
        // 配置控制寄存器：使能中断
        $display("配置控制寄存器, 时间 %t", $time);
        axi_write(CTRL_REG_ADDR, (1 << CTRL_IRQ_EN_BIT));
        
        // 写入RGB数据
        $display("写入RGB数据, 时间 %t", $time);
        for (i = 0; i < 16; i = i + 1) begin
            if (i < PIXEL_COUNT) begin
                // 每个32位数据包含一个像素的RGB值
                axi_write(RGB_DATA_ADDR + i*4, {8'h00, b_input[i], g_input[i], r_input[i]});
            end
        end
        
        // 启动处理
        $display("启动JPEG处理, 时间 %t", $time);
        axi_write(CTRL_REG_ADDR, (1 << CTRL_IRQ_EN_BIT) | (1 << CTRL_START_BIT));
        
        // 等待处理完成
        $display("等待处理完成, 时间 %t", $time);
        wait_for_completion();
        $display("处理完成, 时间 %t", $time);
        
        // 如果使用了中断，可以等待中断信号
        if (irq) begin
            $display("检测到中断, 时间 %t", $time);
        end
        
        // 读取处理结果
        $display("读取Y通道数据, 时间 %t", $time);
        for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
            axi_read(Y_DATA_ADDR + i*4, y_output[i]);
        end
        
        $display("读取Cb通道数据, 时间 %t", $time);
        for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
            axi_read(CB_DATA_ADDR + i*4, cb_output[i]);
        end
        
        $display("读取Cr通道数据, 时间 %t", $time);
        for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
            axi_read(CR_DATA_ADDR + i*4, cr_output[i]);
        end
        
        // 打印测试结果
        print_results();
        
        // 结束仿真
        #(CLK_PERIOD * 10);
        $display("\n仿真完成，总时间 %t", $time);
        $finish;
    end
    
    // 可选：监视中断信号
    always @(posedge irq) begin
        $display("检测到中断触发, 时间 %t", $time);
    end

endmodule 