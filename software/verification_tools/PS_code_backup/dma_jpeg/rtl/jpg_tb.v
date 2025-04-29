`timescale 1 ns / 1 ps

module jpg_tb();

    // 参数定义，与被测模块保持一致
    parameter integer C_S00_AXIS_TDATA_WIDTH = 32;
    parameter integer C_M00_AXIS_TDATA_WIDTH = 32;
    parameter integer C_M00_AXIS_START_COUNT = 32;
    parameter integer DATA_WIDTH = 32;
    parameter integer INPUT_WIDTH = 8;
    parameter integer DATA_DEPTH = 8;
    parameter integer PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH;  // 64 pixels
    
    // 时钟周期定义
    parameter CLOCK_PERIOD = 10; // 10ns (100MHz)
    
    // 测试信号
    reg s00_axis_aclk = 0;
    reg s00_axis_aresetn = 0;
    wire s00_axis_tready;
    reg [C_S00_AXIS_TDATA_WIDTH-1:0] s00_axis_tdata = 0;
    reg [(C_S00_AXIS_TDATA_WIDTH/8)-1:0] s00_axis_tstrb = 4'hF; // 所有字节有效
    reg s00_axis_tlast = 0;
    reg s00_axis_tvalid = 0;
    
    reg m00_axis_aclk = 0;
    reg m00_axis_aresetn = 0;
    wire m00_axis_tvalid;
    wire [C_M00_AXIS_TDATA_WIDTH-1:0] m00_axis_tdata;
    wire [(C_M00_AXIS_TDATA_WIDTH/8)-1:0] m00_axis_tstrb;
    wire m00_axis_tlast;
    reg m00_axis_tready = 1;
    
    // 测试数据存储
    reg [7:0] test_data_r [0:PIXEL_COUNT-1];
    reg [7:0] test_data_g [0:PIXEL_COUNT-1];
    reg [7:0] test_data_b [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] received_data [0:PIXEL_COUNT*3-1]; // Y, Cb, Cr通道各64个像素
    
    // 计数变量
    integer i, j, data_count = 0;
    integer err_count = 0;
    
    // 被测模块实例化
    jpg #(
        .C_S00_AXIS_TDATA_WIDTH(C_S00_AXIS_TDATA_WIDTH),
        .C_M00_AXIS_TDATA_WIDTH(C_M00_AXIS_TDATA_WIDTH),
        .C_M00_AXIS_START_COUNT(C_M00_AXIS_START_COUNT),
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) dut (
        .s00_axis_aclk(s00_axis_aclk),
        .s00_axis_aresetn(s00_axis_aresetn),
        .s00_axis_tready(s00_axis_tready),
        .s00_axis_tdata(s00_axis_tdata),
        .s00_axis_tstrb(s00_axis_tstrb),
        .s00_axis_tlast(s00_axis_tlast),
        .s00_axis_tvalid(s00_axis_tvalid),
        
        .m00_axis_aclk(m00_axis_aclk),
        .m00_axis_aresetn(m00_axis_aresetn),
        .m00_axis_tvalid(m00_axis_tvalid),
        .m00_axis_tdata(m00_axis_tdata),
        .m00_axis_tstrb(m00_axis_tstrb),
        .m00_axis_tlast(m00_axis_tlast),
        .m00_axis_tready(m00_axis_tready)
    );
    
    // 时钟生成
    always #(CLOCK_PERIOD/2) s00_axis_aclk = ~s00_axis_aclk;
    always #(CLOCK_PERIOD/2) m00_axis_aclk = ~m00_axis_aclk;
    
    // 初始化测试数据
    initial begin
        for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
            // 生成一个渐变图案
            test_data_r[i] = (i % DATA_DEPTH) * 30 + 10;  // 0-240范围的R值
            test_data_g[i] = ((i / DATA_DEPTH) % DATA_DEPTH) * 30 + 10; // 0-240范围的G值
            test_data_b[i] = ((i % DATA_DEPTH) + (i / DATA_DEPTH)) * 15 + 10; // 0-240范围的B值
        end
    end
    
    // 测试过程
    initial begin
        // 测试初始化
        $display("开始测试JPG模块...");
        s00_axis_aresetn = 0;
        m00_axis_aresetn = 0;
        s00_axis_tvalid = 0;
        s00_axis_tlast = 0;
        
        // 等待一些时钟周期，然后释放复位
        #(CLOCK_PERIOD * 10);
        s00_axis_aresetn = 1;
        m00_axis_aresetn = 1;
        #(CLOCK_PERIOD * 2);
        
        // 发送R通道数据
        $display("发送R通道数据...");
        for (i = 0; i < PIXEL_COUNT; i = i + 4) begin
            // 等待tready信号
            wait(s00_axis_tready);
            @(posedge s00_axis_aclk);
            
            // 准备发送4个像素
            s00_axis_tdata = 0;
            if (i < PIXEL_COUNT) s00_axis_tdata[7:0] = test_data_r[i];
            if (i+1 < PIXEL_COUNT) s00_axis_tdata[15:8] = test_data_r[i+1];
            if (i+2 < PIXEL_COUNT) s00_axis_tdata[23:16] = test_data_r[i+2];
            if (i+3 < PIXEL_COUNT) s00_axis_tdata[31:24] = test_data_r[i+3];
            
            s00_axis_tvalid = 1;
            s00_axis_tlast = (i + 4 >= PIXEL_COUNT);
            
            // 等待一个时钟周期，数据被接收
            @(posedge s00_axis_aclk);
            while (!s00_axis_tready) @(posedge s00_axis_aclk);
        end
        
        s00_axis_tvalid = 0;
        s00_axis_tlast = 0;
        #(CLOCK_PERIOD * 2);
        
        // 发送G通道数据
        $display("发送G通道数据...");
        for (i = 0; i < PIXEL_COUNT; i = i + 4) begin
            // 等待tready信号
            wait(s00_axis_tready);
            @(posedge s00_axis_aclk);
            
            // 准备发送4个像素
            s00_axis_tdata = 0;
            if (i < PIXEL_COUNT) s00_axis_tdata[7:0] = test_data_g[i];
            if (i+1 < PIXEL_COUNT) s00_axis_tdata[15:8] = test_data_g[i+1];
            if (i+2 < PIXEL_COUNT) s00_axis_tdata[23:16] = test_data_g[i+2];
            if (i+3 < PIXEL_COUNT) s00_axis_tdata[31:24] = test_data_g[i+3];
            
            s00_axis_tvalid = 1;
            s00_axis_tlast = (i + 4 >= PIXEL_COUNT);
            
            // 等待一个时钟周期，数据被接收
            @(posedge s00_axis_aclk);
            while (!s00_axis_tready) @(posedge s00_axis_aclk);
        end
        
        s00_axis_tvalid = 0;
        s00_axis_tlast = 0;
        #(CLOCK_PERIOD * 2);
        
        // 发送B通道数据
        $display("发送B通道数据...");
        for (i = 0; i < PIXEL_COUNT; i = i + 4) begin
            // 等待tready信号
            wait(s00_axis_tready);
            @(posedge s00_axis_aclk);
            
            // 准备发送4个像素
            s00_axis_tdata = 0;
            if (i < PIXEL_COUNT) s00_axis_tdata[7:0] = test_data_b[i];
            if (i+1 < PIXEL_COUNT) s00_axis_tdata[15:8] = test_data_b[i+1];
            if (i+2 < PIXEL_COUNT) s00_axis_tdata[23:16] = test_data_b[i+2];
            if (i+3 < PIXEL_COUNT) s00_axis_tdata[31:24] = test_data_b[i+3];
            
            s00_axis_tvalid = 1;
            s00_axis_tlast = (i + 4 >= PIXEL_COUNT);
            
            // 等待一个时钟周期，数据被接收
            @(posedge s00_axis_aclk);
            while (!s00_axis_tready) @(posedge s00_axis_aclk);
        end
        
        s00_axis_tvalid = 0;
        s00_axis_tlast = 0;
        
        // 等待处理完成，并接收输出数据
        $display("等待JPEG处理完成...");
        #(CLOCK_PERIOD * 100);  // 等待足够的时间完成处理
        
        $display("测试完成");
        $finish;
    end
    
    // 接收输出数据
    always @(posedge m00_axis_aclk) begin
        if (!m00_axis_aresetn) begin
            data_count <= 0;
        end else if (m00_axis_tvalid && m00_axis_tready) begin
            received_data[data_count] <= m00_axis_tdata[DATA_WIDTH-1:0]; // 只取低DATA_WIDTH位
            
            // 输出接收到的数据进行调试
            $display("接收数据[%0d]: 0x%h (valid=%b, last=%b)", 
                    data_count, m00_axis_tdata[DATA_WIDTH-1:0], m00_axis_tvalid, m00_axis_tlast);
            
            // 如果收到最后一个数据，打印下一个通道
            if (m00_axis_tlast) begin
                if (data_count < PIXEL_COUNT-1) 
                    $display("完成Y通道接收");
                else if (data_count < PIXEL_COUNT*2-1) 
                    $display("完成Cb通道接收");
                else 
                    $display("完成Cr通道接收");
            end
            
            data_count <= data_count + 1;
        end
    end
    
    // 简单波形捕获
    initial begin
        $dumpfile("jpg_tb.vcd");
        $dumpvars(0, jpg_tb);
    end

endmodule 