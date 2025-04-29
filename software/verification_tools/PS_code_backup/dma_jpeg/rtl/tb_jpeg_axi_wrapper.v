`timescale 1ns / 1ps

module tb_jpeg_axi_wrapper();
    // 参数定义
    parameter C_S00_AXI_DATA_WIDTH = 32;
    parameter C_S00_AXI_ADDR_WIDTH = 4;
    parameter INPUT_WIDTH = 8;
    parameter DATA_DEPTH = 8;
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH;  // 64 pixels (8x8 block)
    parameter CLK_PERIOD = 10;  // 10ns, 100MHz

    // 信号声明
    reg s00_axi_aclk = 0;
    reg s00_axi_aresetn = 0;
    
    // AXI写地址通道
    reg [C_S00_AXI_ADDR_WIDTH-1:0] s00_axi_awaddr;
    reg [2:0] s00_axi_awprot;
    reg s00_axi_awvalid;
    wire s00_axi_awready;
    
    // AXI写数据通道
    reg [C_S00_AXI_DATA_WIDTH-1:0] s00_axi_wdata;
    reg [(C_S00_AXI_DATA_WIDTH/8)-1:0] s00_axi_wstrb;
    reg s00_axi_wvalid;
    wire s00_axi_wready;
    
    // AXI写响应通道
    wire [1:0] s00_axi_bresp;
    wire s00_axi_bvalid;
    reg s00_axi_bready;
    
    // AXI读地址通道
    reg [C_S00_AXI_ADDR_WIDTH-1:0] s00_axi_araddr;
    reg [2:0] s00_axi_arprot;
    reg s00_axi_arvalid;
    wire s00_axi_arready;
    
    // AXI读数据通道
    wire [C_S00_AXI_DATA_WIDTH-1:0] s00_axi_rdata;
    wire [1:0] s00_axi_rresp;
    wire s00_axi_rvalid;
    reg s00_axi_rready;
    
    // 中断信号
    wire jpeg_irq;
    
    // 为了验证，存储输入和输出数据
    reg [INPUT_WIDTH-1:0] r_input[0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_input[0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_input[0:PIXEL_COUNT-1];
    
    reg [C_S00_AXI_DATA_WIDTH-1:0] y_output[0:PIXEL_COUNT-1];
    reg [C_S00_AXI_DATA_WIDTH-1:0] cb_output[0:PIXEL_COUNT-1];
    reg [C_S00_AXI_DATA_WIDTH-1:0] cr_output[0:PIXEL_COUNT-1];
    
    // 寄存器地址定义（需要与DUT保持一致）
    localparam CTRL_REG_ADDR        = 4'h0;     // 控制寄存器
    localparam STATUS_REG_ADDR      = 4'h4 >> 2;// 状态寄存器，地址右移2位
    localparam RGB_DATA_ADDR        = 4'h8 >> 2;// RGB输入数据起始地址
    
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
    jpeg_axi #(
        .C_S00_AXI_DATA_WIDTH(C_S00_AXI_DATA_WIDTH),
        .C_S00_AXI_ADDR_WIDTH(C_S00_AXI_ADDR_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) dut (
        .s00_axi_aclk(s00_axi_aclk),
        .s00_axi_aresetn(s00_axi_aresetn),
        
        // AXI写地址通道
        .s00_axi_awaddr(s00_axi_awaddr),
        .s00_axi_awprot(s00_axi_awprot),
        .s00_axi_awvalid(s00_axi_awvalid),
        .s00_axi_awready(s00_axi_awready),
        
        // AXI写数据通道
        .s00_axi_wdata(s00_axi_wdata),
        .s00_axi_wstrb(s00_axi_wstrb),
        .s00_axi_wvalid(s00_axi_wvalid),
        .s00_axi_wready(s00_axi_wready),
        
        // AXI写响应通道
        .s00_axi_bresp(s00_axi_bresp),
        .s00_axi_bvalid(s00_axi_bvalid),
        .s00_axi_bready(s00_axi_bready),
        
        // AXI读地址通道
        .s00_axi_araddr(s00_axi_araddr),
        .s00_axi_arprot(s00_axi_arprot),
        .s00_axi_arvalid(s00_axi_arvalid),
        .s00_axi_arready(s00_axi_arready),
        
        // AXI读数据通道
        .s00_axi_rdata(s00_axi_rdata),
        .s00_axi_rresp(s00_axi_rresp),
        .s00_axi_rvalid(s00_axi_rvalid),
        .s00_axi_rready(s00_axi_rready),
        
        // 中断
        .jpeg_irq(jpeg_irq)
    );
    
    // 时钟生成
    always #(CLK_PERIOD/2) s00_axi_aclk = ~s00_axi_aclk;
    
    // AXI写任务
    task axi_write;
        input [C_S00_AXI_ADDR_WIDTH-1:0] addr;
        input [C_S00_AXI_DATA_WIDTH-1:0] data;
        begin
            // 写地址阶段
            s00_axi_awaddr = addr;
            s00_axi_awprot = 3'b000;
            s00_axi_awvalid = 1'b1;
            s00_axi_wdata = data;
            s00_axi_wstrb = 4'b1111;  // 使能所有字节
            s00_axi_wvalid = 1'b1;
            s00_axi_bready = 1'b1;
            
            // 等待写地址就绪
            wait(s00_axi_awready);
            @(posedge s00_axi_aclk);
            s00_axi_awvalid = 1'b0;
            
            // 等待写数据就绪
            wait(s00_axi_wready);
            @(posedge s00_axi_aclk);
            s00_axi_wvalid = 1'b0;
            
            // 等待写响应
            wait(s00_axi_bvalid);
            @(posedge s00_axi_aclk);
            s00_axi_bready = 1'b0;
            
            // 延迟一个周期
            @(posedge s00_axi_aclk);
        end
    endtask
    
    // AXI读任务
    task axi_read;
        input [C_S00_AXI_ADDR_WIDTH-1:0] addr;
        output [C_S00_AXI_DATA_WIDTH-1:0] data;
        begin
            // 读地址阶段
            s00_axi_araddr = addr;
            s00_axi_arprot = 3'b000;
            s00_axi_arvalid = 1'b1;
            s00_axi_rready = 1'b1;
            
            // 等待读地址就绪
            wait(s00_axi_arready);
            @(posedge s00_axi_aclk);
            s00_axi_arvalid = 1'b0;
            
            // 等待读数据有效
            wait(s00_axi_rvalid);
            data = s00_axi_rdata;
            @(posedge s00_axi_aclk);
            s00_axi_rready = 1'b0;
            
            // 延迟一个周期
            @(posedge s00_axi_aclk);
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
                $display("Y[%0d]: %0d", i, y_output[i]);
            end
            
            $display("\n仿真完成");
        end
    endtask
    
    // 测试主过程
    initial begin
        // 初始化信号
        s00_axi_aresetn = 0;
        s00_axi_awvalid = 0;
        s00_axi_wvalid = 0;
        s00_axi_bready = 0;
        s00_axi_arvalid = 0;
        s00_axi_rready = 0;
        s00_axi_awprot = 0;
        s00_axi_arprot = 0;
        s00_axi_wstrb = 0;
        
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
        s00_axi_aresetn = 1;
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
                axi_write(RGB_DATA_ADDR + i, {8'h00, b_input[i], g_input[i], r_input[i]});
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
        if (jpeg_irq) begin
            $display("检测到中断, 时间 %t", $time);
        end
        
        // 读取部分处理结果作为示例
        $display("读取部分Y通道数据示例, 时间 %t", $time);
        for (i = 0; i < 4; i = i + 1) begin
            axi_read(8 + i, y_output[i]);  // 读取前几个Y值作为示例
        end
        
        // 打印测试结果
        print_results();
        
        // 结束仿真
        #(CLK_PERIOD * 10);
        $display("\n仿真完成，总时间 %t", $time);
        $finish;
    end
    
    // 监视中断信号
    always @(posedge jpeg_irq) begin
        $display("检测到中断触发, 时间 %t", $time);
    end

endmodule 