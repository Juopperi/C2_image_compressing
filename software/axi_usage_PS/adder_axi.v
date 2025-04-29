`timescale 1 ns / 1 ps

module adder #
(
    // 参数定义
    parameter integer C_AXI_DATA_WIDTH = 32,   // AXI数据总线宽度，默认32位
    parameter integer C_AXI_ADDR_WIDTH = 32    // AXI地址总线宽度，默认32位
)
(
    // 全局信号
    input  wire                          axi_aclk,    // AXI时钟信号
    input  wire                          axi_aresetn, // AXI复位信号，低电平有效

    // 写地址通道
    input  wire [C_AXI_ADDR_WIDTH-1:0]   axi_awaddr,  // 写地址
    input  wire                          axi_awvalid, // 写地址有效信号
    output wire                          axi_awready, // 写地址就绪信号

    // 写数据通道
    input  wire [C_AXI_DATA_WIDTH-1:0]   axi_wdata,   // 写数据
    input  wire [(C_AXI_DATA_WIDTH/8)-1:0] axi_wstrb, // 写字节使能信号，控制哪些字节被写入
    input  wire                          axi_wvalid,  // 写数据有效信号
    output wire                          axi_wready,  // 写数据就绪信号

    // 写响应通道
    output wire [1:0]                    axi_bresp,   // 写响应信号，00表示正常
    output wire                          axi_bvalid,  // 写响应有效信号
    input  wire                          axi_bready,  // 写响应就绪信号

    // 读地址通道
    input  wire [C_AXI_ADDR_WIDTH-1:0]   axi_araddr,  // 读地址
    input  wire                          axi_arvalid, // 读地址有效信号
    output wire                          axi_arready, // 读地址就绪信号

    // 读数据通道
    output wire [C_AXI_DATA_WIDTH-1:0]   axi_rdata,   // 读数据
    output wire [1:0]                    axi_rresp,   // 读响应信号，00表示正常
    output wire                          axi_rvalid,  // 读数据有效信号
    input  wire                          axi_rready   // 读数据就绪信号
);
    // 本地参数定义
    localparam ADDR_LSB = 2;  // 地址的低2位不使用（因为是32位总线，所以地址是4字节对齐）
    
    // 写区域地址
    localparam WR_AREA_BASE = 5'b00000;  // 写区域基地址
    localparam WR_REG_A = 5'b00000;      // A寄存器地址偏移 0x00
    localparam WR_REG_B = 5'b00001;      // B寄存器地址偏移 0x04
    
    // 读区域地址
    localparam RD_AREA_BASE = 5'b10000;  // 读区域基地址
    localparam RD_REG_RES = 5'b10010;    // 结果寄存器地址 0x48

    // 内部连接信号
    wire [4:0] wr_addr;                  // 写地址（内部连线）
    wire [4:0] rd_addr;                  // 读地址（内部连线）
    wire [31:0] wr_data;                 // 写数据（内部连线）
    wire [31:0] rd_data;                 // 读数据（内部连线）
    wire wr_en;                          // 写使能信号（内部连线）
    wire rd_en;                          // 读使能信号（内部连线）
    wire [31:0] a_value;                 // A操作数（内部连线）
    wire [31:0] b_value;                 // B操作数（内部连线）
    wire [31:0] result_value;            // 计算结果（内部连线）
    wire result_read;                    // 结果读取信号（内部连线）

    // AXI接口模块实例化
    axi_interface #(
        .C_AXI_DATA_WIDTH(C_AXI_DATA_WIDTH),
        .C_AXI_ADDR_WIDTH(C_AXI_ADDR_WIDTH)
    ) axi_if_inst (
        .axi_aclk(axi_aclk),
        .axi_aresetn(axi_aresetn),
        
        // AXI总线接口
        .axi_awaddr(axi_awaddr),
        .axi_awvalid(axi_awvalid),
        .axi_awready(axi_awready),
        .axi_wdata(axi_wdata),
        .axi_wstrb(axi_wstrb),
        .axi_wvalid(axi_wvalid),
        .axi_wready(axi_wready),
        .axi_bresp(axi_bresp),
        .axi_bvalid(axi_bvalid),
        .axi_bready(axi_bready),
        .axi_araddr(axi_araddr),
        .axi_arvalid(axi_arvalid),
        .axi_arready(axi_arready),
        .axi_rdata(axi_rdata),
        .axi_rresp(axi_rresp),
        .axi_rvalid(axi_rvalid),
        .axi_rready(axi_rready),
        
        // 内部接口信号
        .wr_addr(wr_addr),
        .rd_addr(rd_addr),
        .wr_data(wr_data),
        .rd_data(rd_data),
        .wr_en(wr_en),
        .rd_en(rd_en),
        .result_read(result_read)
    );

    // 内存存储模块实例化
    memory_module mem_inst (
        .clk(axi_aclk),
        .rst_n(axi_aresetn),
        .wr_addr(wr_addr),
        .rd_addr(rd_addr),
        .wr_data(wr_data),
        .rd_data(rd_data),
        .wr_en(wr_en),
        .rd_en(rd_en),
        .a_value(a_value),
        .b_value(b_value),
        .result_value(result_value),
        .result_addr(RD_REG_RES),
        .a_addr(WR_REG_A),
        .b_addr(WR_REG_B)
    );

    // 加法器功能实现模块实例化
    adder_core adder_inst (
        .clk(axi_aclk),
        .rst_n(axi_aresetn),
        .a_value(a_value),
        .b_value(b_value),
        .result(result_value),
        .result_read(result_read)
    );

endmodule


module memory_module (
    input  wire         clk,           // 时钟信号
    input  wire         rst_n,         // 复位信号，低电平有效
    input  wire [4:0]   wr_addr,       // 写地址
    input  wire [4:0]   rd_addr,       // 读地址
    input  wire [31:0]  wr_data,       // 写数据
    output reg  [31:0]  rd_data,       // 读数据
    input  wire         wr_en,         // 写使能
    input  wire         rd_en,         // 读使能
    
    // 与功能模块连接的特定信号
    output wire [31:0]  a_value,       // A操作数值
    output wire [31:0]  b_value,       // B操作数值
    input  wire [31:0]  result_value,  // 结果值
    input  wire [4:0]   result_addr,   // 结果地址
    input  wire [4:0]   a_addr,        // A操作数地址
    input  wire [4:0]   b_addr         // B操作数地址
);
    // 存储器定义
    reg [31:0] memory [0:31];  // 32个32位存储器单元
    
    // 初始化存储器
    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1) begin
            memory[i] = 0;
        end
    end
    
    // 将特定存储单元的值映射到A和B操作数
    assign a_value = memory[a_addr];
    assign b_value = memory[b_addr];
    
    // 存储器写入逻辑
    always @(posedge clk) begin
        if (!rst_n) begin
            // 复位操作 - 在initial块中已经初始化，这里不需要再做
        end else begin
            if (wr_en) begin
                memory[wr_addr] <= wr_data;  // 写入存储器
            end
        end
    end
    
    // 存储器读取逻辑
    always @(*) begin
        if (rd_en) begin
            if (rd_addr == result_addr) begin
                rd_data = result_value;  // 如果读取结果地址，返回结果值
            end else begin
                rd_data = memory[rd_addr];  // 否则返回存储器中的值
            end
        end else begin
            rd_data = 32'h0;  // 当未使能读取时，返回0
        end
    end

endmodule



module axi_interface #
(
    parameter integer C_AXI_DATA_WIDTH = 32,
    parameter integer C_AXI_ADDR_WIDTH = 32
)
(
    // 全局信号
    input  wire                          axi_aclk,
    input  wire                          axi_aresetn,

    // AXI总线接口
    input  wire [C_AXI_ADDR_WIDTH-1:0]   axi_awaddr,
    input  wire                          axi_awvalid,
    output reg                           axi_awready,
    input  wire [C_AXI_DATA_WIDTH-1:0]   axi_wdata,
    input  wire [(C_AXI_DATA_WIDTH/8)-1:0] axi_wstrb,
    input  wire                          axi_wvalid,
    output reg                           axi_wready,
    output reg  [1:0]                    axi_bresp,
    output reg                           axi_bvalid,
    input  wire                          axi_bready,
    input  wire [C_AXI_ADDR_WIDTH-1:0]   axi_araddr,
    input  wire                          axi_arvalid,
    output reg                           axi_arready,
    output reg  [C_AXI_DATA_WIDTH-1:0]   axi_rdata,
    output reg  [1:0]                    axi_rresp,
    output reg                           axi_rvalid,
    input  wire                          axi_rready,

    // 内部接口信号
    output wire [4:0]                    wr_addr,     // 写地址
    output wire [4:0]                    rd_addr,     // 读地址
    output wire [31:0]                   wr_data,     // 写数据
    input  wire [31:0]                   rd_data,     // 读数据
    output wire                          wr_en,       // 写使能
    output wire                          rd_en,       // 读使能
    output wire                          result_read  // 结果读取信号
);
    // 本地参数定义
    localparam ADDR_LSB = 2;  // 地址的低2位不使用（因为是32位总线，所以地址是4字节对齐）
    localparam RD_REG_RES = 5'b10010;    // 结果寄存器地址 0x48
    
    // 内部寄存器定义
    reg [4:0] wr_addr_latched;           // 锁存的写地址
    reg [4:0] read_addr_latched;         // 锁存的读地址
    reg aw_en;                           // 写地址通道使能信号
    
    // 将锁存的地址映射到输出端口
    assign wr_addr = wr_addr_latched;
    assign rd_addr = read_addr_latched;
    assign wr_data = axi_wdata;
    
    // 写使能信号，当写地址和写数据都准备好时有效
    assign wr_en = axi_awready && axi_awvalid && axi_wready && axi_wvalid;
    
    // 读使能信号，当读地址准备好时有效
    assign rd_en = axi_arready && axi_arvalid;
    
    // 结果读取信号，当读地址是结果寄存器地址时有效
    assign result_read = rd_en && (axi_araddr[ADDR_LSB+4:ADDR_LSB] == RD_REG_RES);

    // AXI写地址和数据通道控制逻辑
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            // 复位写通道信号
            axi_awready <= 0;
            axi_wready  <= 0;
            axi_bvalid  <= 0;
            aw_en       <= 1;
        end else begin
            // 写地址通道握手
            if (~axi_awready && axi_awvalid && aw_en) begin
                axi_awready <= 1;                             // 设置地址就绪信号
                wr_addr_latched <= axi_awaddr[ADDR_LSB+4:ADDR_LSB]; // 锁存地址
            end else begin
                axi_awready <= 0;                             // 复位地址就绪信号
            end

            // 写数据通道握手
            if (~axi_wready && axi_wvalid && aw_en) begin
                axi_wready <= 1;                              // 设置数据就绪信号
            end else begin
                axi_wready <= 0;                              // 复位数据就绪信号
            end

            // 写响应通道握手
            if (wr_en) begin
                axi_bvalid <= 1;                              // 设置响应有效信号
                axi_bresp <= 2'b00;                           // 设置响应为OKAY
                aw_en <= 0;                                   // 禁用地址通道以防止新事务
            end else if (axi_bvalid && axi_bready) begin
                axi_bvalid <= 0;                              // 清除响应有效信号
                aw_en <= 1;                                   // 重新启用地址通道
            end
        end
    end

    // AXI读地址和数据通道控制逻辑
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            // 复位读通道信号
            axi_arready <= 0;
            axi_rvalid  <= 0;
            axi_rdata   <= 0;
            axi_rresp   <= 2'b00;
        end else begin
            // 读地址通道握手
            if (!axi_arready && axi_arvalid) begin
                axi_arready <= 1;                             // 设置地址就绪信号
                read_addr_latched <= axi_araddr[ADDR_LSB+4:ADDR_LSB]; // 锁存读地址
            end else begin
                axi_arready <= 0;                             // 复位地址就绪信号
            end

            // 读数据通道握手：当地址有效且已就绪但数据尚未有效时，准备数据
            if (!axi_rvalid && axi_arvalid && axi_arready) begin                
                axi_rdata <= rd_data;                         // 返回读取的数据
                axi_rvalid <= 1;                              // 设置数据有效信号
                axi_rresp  <= 2'b00;                          // 设置响应为OKAY
            end else if (axi_rvalid && axi_rready) begin
                axi_rvalid <= 0;                              // 当主机已接收数据时，清除有效信号
            end
        end
    end

endmodule


module adder_core (
    input  wire         clk,          // 时钟信号
    input  wire         rst_n,        // 复位信号，低电平有效
    input  wire [31:0]  a_value,      // A操作数
    input  wire [31:0]  b_value,      // B操作数
    output reg  [31:0]  result,       // 计算结果
    input  wire         result_read   // 结果读取信号
);
    // 当结果被读取时，执行加法操作
    always @(posedge clk) begin
        if (!rst_n) begin
            result <= 32'h0;  // 复位结果寄存器
        end else begin
            if (result_read) begin
                result <= a_value + b_value;  // 执行加法操作
            end
        end
    end

endmodule