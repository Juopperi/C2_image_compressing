`timescale 1 ns / 1 ps

module jpeg_axi #
(
    // AXI4-Lite接口参数
    parameter integer C_S00_AXI_DATA_WIDTH    = 32,
    parameter integer C_S00_AXI_ADDR_WIDTH    = 4,
    
    // JPEG压缩模块参数
    parameter INPUT_WIDTH = 8,
    parameter DATA_DEPTH = 8,
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 64 pixels (8x8 block)
)
(
    // AXI4-Lite接口 - S00_AXI
    input wire  s00_axi_aclk,
    input wire  s00_axi_aresetn,
    input wire [C_S00_AXI_ADDR_WIDTH-1 : 0] s00_axi_awaddr,
    input wire [2 : 0] s00_axi_awprot,
    input wire  s00_axi_awvalid,
    output wire  s00_axi_awready,
    input wire [C_S00_AXI_DATA_WIDTH-1 : 0] s00_axi_wdata,
    input wire [(C_S00_AXI_DATA_WIDTH/8)-1 : 0] s00_axi_wstrb,
    input wire  s00_axi_wvalid,
    output wire  s00_axi_wready,
    output wire [1 : 0] s00_axi_bresp,
    output wire  s00_axi_bvalid,
    input wire  s00_axi_bready,
    input wire [C_S00_AXI_ADDR_WIDTH-1 : 0] s00_axi_araddr,
    input wire [2 : 0] s00_axi_arprot,
    input wire  s00_axi_arvalid,
    output wire  s00_axi_arready,
    output wire [C_S00_AXI_DATA_WIDTH-1 : 0] s00_axi_rdata,
    output wire [1 : 0] s00_axi_rresp,
    output wire  s00_axi_rvalid,
    input wire  s00_axi_rready,
    
    // 中断输出
    output wire jpeg_irq
);

    // 内部连接信号 - 桥接AXI4-Lite接口和JPEG压缩模块
    wire [7:0] jpeg_awaddr;  // 扩展地址宽度
    wire [7:0] jpeg_araddr;  // 扩展地址宽度
    
    // 常量信号
    assign s00_axi_bresp = 2'b00;  // 始终返回OKAY响应
    assign s00_axi_rresp = 2'b00;  // 始终返回OKAY响应
    
    // 地址扩展 - 将4位地址扩展为8位地址
    // 我们将低4位直接映射，高4位用于功能扩展（通常为0）
    assign jpeg_awaddr = {4'b0000, s00_axi_awaddr};
    assign jpeg_araddr = {4'b0000, s00_axi_araddr};
    
    // 实例化JPEG压缩模块
    jpeg_compression_pipeline_axi #(
        .DATA_WIDTH(C_S00_AXI_DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT),
        .ADDR_WIDTH(8)  // 内部使用8位地址宽度
    ) jpeg_core (
        .clk(s00_axi_aclk),
        .reset_n(s00_axi_aresetn),
        
        // AXI写地址通道
        .s_axi_awaddr(jpeg_awaddr),
        .s_axi_awvalid(s00_axi_awvalid),
        .s_axi_awready(s00_axi_awready),
        
        // AXI写数据通道
        .s_axi_wdata(s00_axi_wdata),
        .s_axi_wvalid(s00_axi_wvalid),
        .s_axi_wready(s00_axi_wready),
        
        // AXI写响应通道
        .s_axi_bvalid(s00_axi_bvalid),
        .s_axi_bready(s00_axi_bready),
        
        // AXI读地址通道
        .s_axi_araddr(jpeg_araddr),
        .s_axi_arvalid(s00_axi_arvalid),
        .s_axi_arready(s00_axi_arready),
        
        // AXI读数据通道
        .s_axi_rdata(s00_axi_rdata),
        .s_axi_rvalid(s00_axi_rvalid),
        .s_axi_rready(s00_axi_rready),
        
        // 中断信号
        .irq(jpeg_irq)
    );

endmodule 