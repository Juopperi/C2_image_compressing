`timescale 1 ns / 1 ps

module jpg_tb_simple();

    // 参数定义
    parameter integer C_S00_AXIS_TDATA_WIDTH = 32;
    parameter integer C_M00_AXIS_TDATA_WIDTH = 32;
    parameter integer C_M00_AXIS_START_COUNT = 32;
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
    
    // 测试数据
    reg [7:0] test_pattern [0:63];
    integer i, rx_count = 0;
    
    // 被测模块实例化
    jpg dut (
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
    
    // 波形监视
    initial begin
        $dumpfile("jpg_tb_simple.vcd");
        $dumpvars(0, jpg_tb_simple);
    end
    
    // 测试流程
    initial begin
        // 初始化测试数据 - 简单递增模式
        for (i = 0; i < 64; i = i + 1) begin
            test_pattern[i] = i;
        end
        
        // 系统复位
        $display("开始测试 - 系统复位");
        s00_axis_aresetn = 0;
        m00_axis_aresetn = 0;
        #(CLOCK_PERIOD * 10);
        
        s00_axis_aresetn = 1;
        m00_axis_aresetn = 1;
        #(CLOCK_PERIOD * 2);
        
        // 验证初始状态
        $display("验证接口初始状态: tready=%b, tvalid=%b", s00_axis_tready, m00_axis_tvalid);
        if (!s00_axis_tready) begin
            $display("警告: s00_axis_tready初始为低，等待变高");
            wait(s00_axis_tready);
        end
        
        // 测试1: 简单的流测试 - 只发送8个连续字，每个字包含4个字节
        $display("测试1: 发送简单的流数据 (R通道)");
        for (i = 0; i < 16; i = i + 4) begin
            @(posedge s00_axis_aclk);
            
            s00_axis_tdata = {
                test_pattern[i+3],
                test_pattern[i+2],
                test_pattern[i+1],
                test_pattern[i]
            };
            
            s00_axis_tvalid = 1;
            s00_axis_tlast = (i == 12); // 最后一组数据
            
            // 等待数据被接收
            @(posedge s00_axis_aclk);
            while (!s00_axis_tready) @(posedge s00_axis_aclk);
            
            $display("发送: tdata=0x%h, tlast=%b, tready=%b", 
                    s00_axis_tdata, s00_axis_tlast, s00_axis_tready);
        end
        
        s00_axis_tvalid = 0;
        s00_axis_tlast = 0;
        #(CLOCK_PERIOD * 2);
        
        // 测试2: 发送G通道和B通道
        $display("测试2: 发送G和B通道");
        
        // G通道 - 同样使用测试模式
        for (i = 0; i < 16; i = i + 4) begin
            wait(s00_axis_tready);
            @(posedge s00_axis_aclk);
            
            s00_axis_tdata = {
                test_pattern[i+3+16],
                test_pattern[i+2+16],
                test_pattern[i+1+16],
                test_pattern[i+16]
            };
            
            s00_axis_tvalid = 1;
            s00_axis_tlast = (i == 12);
            
            @(posedge s00_axis_aclk);
            while (!s00_axis_tready) @(posedge s00_axis_aclk);
        end
        
        s00_axis_tvalid = 0;
        s00_axis_tlast = 0;
        #(CLOCK_PERIOD * 2);
        
        // B通道
        for (i = 0; i < 16; i = i + 4) begin
            wait(s00_axis_tready);
            @(posedge s00_axis_aclk);
            
            s00_axis_tdata = {
                test_pattern[i+3+32],
                test_pattern[i+2+32],
                test_pattern[i+1+32],
                test_pattern[i+32]
            };
            
            s00_axis_tvalid = 1;
            s00_axis_tlast = (i == 12);
            
            @(posedge s00_axis_aclk);
            while (!s00_axis_tready) @(posedge s00_axis_aclk);
        end
        
        s00_axis_tvalid = 0;
        s00_axis_tlast = 0;
        
        // 等待处理完成并验证输出
        $display("等待处理和输出数据...");
        #(CLOCK_PERIOD * 100);
        
        if (rx_count == 0) begin
            $display("错误: 未接收到任何输出数据!");
        end
        
        $display("测试完成，总共接收了 %0d 个数据", rx_count);
        $finish;
    end
    
    // 接收器 - 监视和记录输出流
    always @(posedge m00_axis_aclk) begin
        if (m00_axis_tvalid && m00_axis_tready) begin
            $display("接收: tdata=0x%h, tlast=%b, 计数=%0d", 
                    m00_axis_tdata, m00_axis_tlast, rx_count);
            rx_count = rx_count + 1;
            
            // 定期调整m00_axis_tready以测试背压
            if (rx_count % 10 == 9) begin
                m00_axis_tready = 0;
                #(CLOCK_PERIOD * 2);
                m00_axis_tready = 1;
            end
        end
    end

endmodule 