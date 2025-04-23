`timescale 1ns / 1ps

module axi_interrupt_test_tb;

    // Parameters
    parameter C_S00_AXI_DATA_WIDTH = 32;
    parameter C_S00_AXI_ADDR_WIDTH = 4;
    parameter C_S_AXI_INTR_DATA_WIDTH = 32;
    parameter C_S_AXI_INTR_ADDR_WIDTH = 5;
    
    // 使用较小的延时值加速测试
    parameter DELAY_MAX = 100;  // 仿真中使用小值，加速测试
    
    // 寄存器地址
    localparam DATA_REG_ADDR    = 4'h0;  // 数据寄存器地址
    localparam CTRL_REG_ADDR    = 4'h4;  // 控制寄存器地址
    localparam STATUS_REG_ADDR  = 4'h8;  // 状态寄存器地址
    localparam INT_ENABLE_ADDR  = 4'hC;  // 中断使能寄存器地址
    
    // 控制寄存器位定义
    localparam CTRL_INT_CLEAR   = 32'h1;  // 中断清除位 (bit 0)
    localparam CTRL_RESET_STATE = 32'h2;  // 状态机复位位 (bit 1)
    
    // 时钟周期定义
    localparam CLK_PERIOD = 10;  // 10ns = 100MHz
    
    // 接口信号
    reg  s00_axi_aclk = 0;
    reg  s00_axi_aresetn = 0;
    reg [C_S00_AXI_ADDR_WIDTH-1:0] s00_axi_awaddr = 0;
    reg [2:0] s00_axi_awprot = 0;
    reg  s00_axi_awvalid = 0;
    wire s00_axi_awready;
    reg [C_S00_AXI_DATA_WIDTH-1:0] s00_axi_wdata = 0;
    reg [(C_S00_AXI_DATA_WIDTH/8)-1:0] s00_axi_wstrb = 0;
    reg  s00_axi_wvalid = 0;
    wire s00_axi_wready;
    wire [1:0] s00_axi_bresp;
    wire s00_axi_bvalid;
    reg  s00_axi_bready = 0;
    reg [C_S00_AXI_ADDR_WIDTH-1:0] s00_axi_araddr = 0;
    reg [2:0] s00_axi_arprot = 0;
    reg  s00_axi_arvalid = 0;
    wire s00_axi_arready;
    wire [C_S00_AXI_DATA_WIDTH-1:0] s00_axi_rdata;
    wire [1:0] s00_axi_rresp;
    wire s00_axi_rvalid;
    reg  s00_axi_rready = 0;
    
    // 中断控制器接口
    reg  s_axi_intr_aclk = 0;
    reg  s_axi_intr_aresetn = 0;
    reg [C_S_AXI_INTR_ADDR_WIDTH-1:0] s_axi_intr_awaddr = 0;
    reg [2:0] s_axi_intr_awprot = 0;
    reg  s_axi_intr_awvalid = 0;
    wire s_axi_intr_awready;
    reg [C_S_AXI_INTR_DATA_WIDTH-1:0] s_axi_intr_wdata = 0;
    reg [(C_S_AXI_INTR_DATA_WIDTH/8)-1:0] s_axi_intr_wstrb = 0;
    reg  s_axi_intr_wvalid = 0;
    wire s_axi_intr_wready;
    wire [1:0] s_axi_intr_bresp;
    wire s_axi_intr_bvalid;
    reg  s_axi_intr_bready = 0;
    reg [C_S_AXI_INTR_ADDR_WIDTH-1:0] s_axi_intr_araddr = 0;
    reg [2:0] s_axi_intr_arprot = 0;
    reg  s_axi_intr_arvalid = 0;
    wire s_axi_intr_arready;
    wire [C_S_AXI_INTR_DATA_WIDTH-1:0] s_axi_intr_rdata;
    wire [1:0] s_axi_intr_rresp;
    wire s_axi_intr_rvalid;
    reg  s_axi_intr_rready = 0;
    
    // 中断输出
    wire irq;
    
    // 测试数据
    reg [31:0] test_data;
    reg [31:0] read_data;
    
    // UUT实例化(被测单元)
    axi_int #(
        .DELAY_MAX(DELAY_MAX),
        .C_S00_AXI_DATA_WIDTH(C_S00_AXI_DATA_WIDTH),
        .C_S00_AXI_ADDR_WIDTH(C_S00_AXI_ADDR_WIDTH),
        .C_S_AXI_INTR_DATA_WIDTH(C_S_AXI_INTR_DATA_WIDTH),
        .C_S_AXI_INTR_ADDR_WIDTH(C_S_AXI_INTR_ADDR_WIDTH)
    ) uut (
        .s00_axi_aclk(s00_axi_aclk),
        .s00_axi_aresetn(s00_axi_aresetn),
        .s00_axi_awaddr(s00_axi_awaddr),
        .s00_axi_awprot(s00_axi_awprot),
        .s00_axi_awvalid(s00_axi_awvalid),
        .s00_axi_awready(s00_axi_awready),
        .s00_axi_wdata(s00_axi_wdata),
        .s00_axi_wstrb(s00_axi_wstrb),
        .s00_axi_wvalid(s00_axi_wvalid),
        .s00_axi_wready(s00_axi_wready),
        .s00_axi_bresp(s00_axi_bresp),
        .s00_axi_bvalid(s00_axi_bvalid),
        .s00_axi_bready(s00_axi_bready),
        .s00_axi_araddr(s00_axi_araddr),
        .s00_axi_arprot(s00_axi_arprot),
        .s00_axi_arvalid(s00_axi_arvalid),
        .s00_axi_arready(s00_axi_arready),
        .s00_axi_rdata(s00_axi_rdata),
        .s00_axi_rresp(s00_axi_rresp),
        .s00_axi_rvalid(s00_axi_rvalid),
        .s00_axi_rready(s00_axi_rready),
        .s_axi_intr_aclk(s_axi_intr_aclk),
        .s_axi_intr_aresetn(s_axi_intr_aresetn),
        .s_axi_intr_awaddr(s_axi_intr_awaddr),
        .s_axi_intr_awprot(s_axi_intr_awprot),
        .s_axi_intr_awvalid(s_axi_intr_awvalid),
        .s_axi_intr_awready(s_axi_intr_awready),
        .s_axi_intr_wdata(s_axi_intr_wdata),
        .s_axi_intr_wstrb(s_axi_intr_wstrb),
        .s_axi_intr_wvalid(s_axi_intr_wvalid),
        .s_axi_intr_wready(s_axi_intr_wready),
        .s_axi_intr_bresp(s_axi_intr_bresp),
        .s_axi_intr_bvalid(s_axi_intr_bvalid),
        .s_axi_intr_bready(s_axi_intr_bready),
        .s_axi_intr_araddr(s_axi_intr_araddr),
        .s_axi_intr_arprot(s_axi_intr_arprot),
        .s_axi_intr_arvalid(s_axi_intr_arvalid),
        .s_axi_intr_arready(s_axi_intr_arready),
        .s_axi_intr_rdata(s_axi_intr_rdata),
        .s_axi_intr_rresp(s_axi_intr_rresp),
        .s_axi_intr_rvalid(s_axi_intr_rvalid),
        .s_axi_intr_rready(s_axi_intr_rready),
        .irq(irq)
    );
    
    // 时钟生成
    always #(CLK_PERIOD/2) s00_axi_aclk = ~s00_axi_aclk;
    always #(CLK_PERIOD/2) s_axi_intr_aclk = ~s_axi_intr_aclk;
    
    // AXI写任务
    task axi_write;
        input [3:0] addr;
        input [31:0] data;
        begin
            // 设置地址和数据
            s00_axi_awaddr = addr;
            s00_axi_wdata = data;
            s00_axi_wstrb = 4'hF; // 写入所有字节
            
            // 断言有效信号
            s00_axi_awvalid = 1;
            s00_axi_wvalid = 1;
            s00_axi_bready = 1;
            
            // 等待就绪信号
            wait(s00_axi_awready && s00_axi_wready);
            @(posedge s00_axi_aclk);
            
            // 撤销有效信号
            s00_axi_awvalid = 0;
            s00_axi_wvalid = 0;
            
            // 等待写响应
            wait(s00_axi_bvalid);
            @(posedge s00_axi_aclk);
            s00_axi_bready = 0;
        end
    endtask
    
    // AXI读任务
    task axi_read;
        input [3:0] addr;
        output [31:0] data;
        begin
            // 设置地址
            s00_axi_araddr = addr;
            
            // 断言有效信号
            s00_axi_arvalid = 1;
            s00_axi_rready = 1;
            
            // 等待地址就绪
            wait(s00_axi_arready);
            @(posedge s00_axi_aclk);
            
            // 撤销有效信号
            s00_axi_arvalid = 0;
            
            // 等待读数据
            wait(s00_axi_rvalid);
            data = s00_axi_rdata;
            @(posedge s00_axi_aclk);
            s00_axi_rready = 0;
        end
    endtask
    
    // 设置中断使能
    task set_interrupt_enable;
        input enable;
        begin
            // 写入中断使能寄存器
            s_axi_intr_awaddr = 0;
            s_axi_intr_wdata = enable ? 32'h1 : 32'h0;
            s_axi_intr_wstrb = 4'hF;
            
            s_axi_intr_awvalid = 1;
            s_axi_intr_wvalid = 1;
            s_axi_intr_bready = 1;
            
            wait(s_axi_intr_awready && s_axi_intr_wready);
            @(posedge s_axi_intr_aclk);
            
            s_axi_intr_awvalid = 0;
            s_axi_intr_wvalid = 0;
            
            wait(s_axi_intr_bvalid);
            @(posedge s_axi_intr_aclk);
            s_axi_intr_bready = 0;
        end
    endtask
    
    // 初始化信号
    task initialize;
        begin
            // 复位触发
            s00_axi_aresetn = 0;
            s_axi_intr_aresetn = 0;
            
            // 初始化所有信号
            s00_axi_awvalid = 0;
            s00_axi_wvalid = 0;
            s00_axi_bready = 0;
            s00_axi_arvalid = 0;
            s00_axi_rready = 0;
            
            s_axi_intr_awvalid = 0;
            s_axi_intr_wvalid = 0;
            s_axi_intr_bready = 0;
            s_axi_intr_arvalid = 0;
            s_axi_intr_rready = 0;
            
            // 等待几个时钟周期
            #(CLK_PERIOD * 10);
            
            // 释放复位
            s00_axi_aresetn = 1;
            s_axi_intr_aresetn = 1;
            #(CLK_PERIOD * 10);
        end
    endtask
    
    // 测试激励
    initial begin
        // 测试值
        test_data = 32'hA5A5A5A5;
        
        // 初始化和复位
        initialize();
        
        // 显示测试开始
        $display("Starting AXI Interrupt Test simulation");
        
        // 步骤1: 使能中断
        $display("Step 1: Enabling interrupts...");
        axi_write(INT_ENABLE_ADDR, 32'h1);
        set_interrupt_enable(1);
        
        // 步骤2: 读取中断使能寄存器验证
        $display("Step 2: Verifying interrupt enable...");
        axi_read(INT_ENABLE_ADDR, read_data);
        if (read_data != 32'h1) $error("Interrupt enable verification failed");
        
        // 步骤3: 写入数据触发中断
        $display("Step 3: Writing data to trigger interrupt...");
        axi_write(DATA_REG_ADDR, test_data);
        
        // 步骤4: 验证数据已写入
        $display("Step 4: Verifying data write...");
        axi_read(DATA_REG_ADDR, read_data);
        if (read_data != test_data) $error("Data register verification failed");
        
        // 步骤5: 检查状态，此时应该是WAITING状态
        $display("Step 5: Checking status register (should be in WAITING state)...");
        axi_read(STATUS_REG_ADDR, read_data);
        
        // 步骤6: 等待中断触发
        $display("Step 6: Waiting for interrupt to assert...");
        wait(irq);
        $display("    Interrupt asserted!");
        
        // 步骤7: 中断后检查状态寄存器
        $display("Step 7: Checking status register after interrupt...");
        axi_read(STATUS_REG_ADDR, read_data);
        if (read_data[0] != 1'b1) $error("Status register interrupt bit not set");
        
        // 步骤8: 从数据寄存器读取数据
        $display("Step 8: Reading data from data register...");
        axi_read(DATA_REG_ADDR, read_data);
        if (read_data != test_data) $error("Data read verification failed");
        
        // 步骤9: 通过写入控制寄存器清除中断
        $display("Step 9: Clearing interrupt...");
        axi_write(CTRL_REG_ADDR, CTRL_INT_CLEAR);
        
        // 步骤10: 验证中断已清除
        $display("Step 10: Verifying interrupt cleared...");
        wait(!irq);
        $display("    Interrupt cleared!");
        
        // 步骤11: 写入控制寄存器将状态机复位到IDLE状态
        $display("Step 11: Returning to IDLE state...");
        axi_write(CTRL_REG_ADDR, CTRL_RESET_STATE);
        
        // 结束仿真
        #(CLK_PERIOD * 20);
        $display("Simulation completed successfully");
        $finish;
    end
    
    // 监控中断信号变化
    initial begin
        forever begin
            @(posedge irq);
            $display("Interrupt asserted at time %t", $time);
            @(negedge irq);
            $display("Interrupt deasserted at time %t", $time);
        end
    end
    
    // 监控状态变化
    reg [1:0] prev_state;
    initial begin
        prev_state = 2'b00;
        forever begin
            @(posedge s00_axi_aclk);
            if (uut.state !== prev_state) begin
                case (uut.state)
                    2'b00: $display("State changed to IDLE at time %t", $time);
                    2'b01: $display("State changed to WAITING at time %t", $time);
                    2'b10: $display("State changed to INTERRUPT at time %t", $time);
                    2'b11: $display("State changed to DONE at time %t", $time);
                endcase
                prev_state = uut.state;
            end
        end
    end

endmodule 