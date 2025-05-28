`timescale 1 ns / 1 ps

module jpeg_axi_wrapper #
(
    // 参数定义
    parameter integer C_AXI_DATA_WIDTH = 32,   // AXI数据总线宽度，默认32位
    parameter integer C_AXI_ADDR_WIDTH = 32,   // AXI地址总线宽度，默认32位
    parameter integer INPUT_WIDTH = 8,         // RGB输入位宽
    parameter integer DATA_WIDTH = 32,         // 内部处理数据位宽
    parameter integer DATA_DEPTH = 8,          // 8x8像素块
    parameter integer PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH  // 64像素
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
    input  wire [(C_AXI_DATA_WIDTH/8)-1:0] axi_wstrb, // 写字节使能信号
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
    // 地址映射定义
    localparam ADDR_LSB = 2;  // 低2位不用（32位数据，4字节对齐）
    
    // 寄存器地址映射
    // 控制/状态寄存器
    localparam REG_CTRL        = 8'h00;  // 控制寄存器: 0x00
    localparam REG_STATUS      = 8'h01;  // 状态寄存器: 0x04
    
    // RGB输入数据区域 - 每个像素3个8位分量，共64像素
    localparam REG_RGB_BASE    = 8'h10;  // RGB数据起始地址: 0x40
    localparam REG_RGB_END     = 8'h8F;  // RGB数据结束地址
    
    // 压缩输出数据区域
    localparam REG_Y_BASE      = 8'h90;  // Y分量输出起始地址: 0x240
    localparam REG_Y_END       = 8'hAF;  // Y分量输出结束地址
    localparam REG_CB_BASE     = 8'hB0;  // Cb分量输出起始地址
    localparam REG_CB_END      = 8'hCF;  // Cb分量输出结束地址
    localparam REG_CR_BASE     = 8'hD0;  // Cr分量输出起始地址
    localparam REG_CR_END      = 8'hEF;  // Cr分量输出结束地址

    // 内部控制信号
    reg  start_process;        // 开始处理信号
    reg  processing_done;      // 处理完成信号
    reg  [5:0] process_counter;// 处理计数器
    
    // RGB数据缓冲区，存储待处理的RGB像素数据
    reg [INPUT_WIDTH-1:0] r_buffer[0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_buffer[0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_buffer[0:PIXEL_COUNT-1];
    
    // 压缩结果缓冲区
    wire [DATA_WIDTH-1:0] y_result[0:PIXEL_COUNT-1];
    wire [DATA_WIDTH-1:0] cb_result[0:PIXEL_COUNT-1];
    wire [DATA_WIDTH-1:0] cr_result[0:PIXEL_COUNT-1];
    
    // 连接JPEG压缩模块的输入输出
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all_wire;
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all_wire;
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all_wire;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag_wire;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag_wire;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag_wire;
    
    // 将缓冲区数据连接到压缩模块输入
    genvar i;
    generate
        for (i = 0; i < PIXEL_COUNT; i = i + 1) begin : gen_input_connections
            assign r_all_wire[i*INPUT_WIDTH +: INPUT_WIDTH] = r_buffer[i];
            assign g_all_wire[i*INPUT_WIDTH +: INPUT_WIDTH] = g_buffer[i];
            assign b_all_wire[i*INPUT_WIDTH +: INPUT_WIDTH] = b_buffer[i];
            
            // 连接输出结果到结果缓冲区
            assign y_result[i] = y_zigzag_wire[i*DATA_WIDTH +: DATA_WIDTH];
            assign cb_result[i] = cb_zigzag_wire[i*DATA_WIDTH +: DATA_WIDTH];
            assign cr_result[i] = cr_zigzag_wire[i*DATA_WIDTH +: DATA_WIDTH];
        end
    endgenerate

    // 实例化AXI接口模块
    wire [7:0] wr_addr;
    wire [7:0] rd_addr;
    wire [C_AXI_DATA_WIDTH-1:0] wr_data;
    reg  [C_AXI_DATA_WIDTH-1:0] rd_data;
    wire wr_en;
    wire rd_en;
    
    // AXI接口模块实例化
    jpeg_axi_interface #(
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
        .rd_en(rd_en)
    );

    // 实例化JPEG压缩模块
    jpeg_compression_pipeline #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) jpeg_processor (
        .clk(axi_aclk),
        .reset_n(axi_aresetn),
        .r_all(r_all_wire),
        .g_all(g_all_wire),
        .b_all(b_all_wire),
        .y_zigzag(y_zigzag_wire),
        .cb_zigzag(cb_zigzag_wire),
        .cr_zigzag(cr_zigzag_wire)
    );

    // 控制处理流程
    always @(posedge axi_aclk or negedge axi_aresetn) begin
        if (!axi_aresetn) begin
            // 复位所有控制信号
            start_process <= 1'b0;
            processing_done <= 1'b0;
            process_counter <= 6'd0;
        end else begin
            // 控制寄存器写入检测
            if (wr_en && wr_addr == REG_CTRL) begin
                if (wr_data[0] && !start_process && !processing_done) begin
                    // 检测到启动位被设置且当前未处理
                    start_process <= 1'b1;
                    process_counter <= 6'd0;
                end
            end
            
            // 处理过程计数
            if (start_process) begin
                if (process_counter < 6'd32) begin  // 给JPEG模块足够的时间处理（5个周期+安全裕度）
                    process_counter <= process_counter + 1'b1;
                end else begin
                    // 处理完成
                    start_process <= 1'b0;
                    processing_done <= 1'b1;
                end
            end
            
            // 重置完成状态
            if (processing_done && rd_en && rd_addr == REG_STATUS) begin
                processing_done <= 1'b0;  // 读取状态后清除完成标志
            end
        end
    end
    
    // 存储写入数据
    integer j;
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            // 复位RGB缓冲区
            for (j = 0; j < PIXEL_COUNT; j = j + 1) begin
                r_buffer[j] <= 8'd0;
                g_buffer[j] <= 8'd0;
                b_buffer[j] <= 8'd0;
            end
        end else if (wr_en) begin
            // RGB数据写入存储
            if (wr_addr >= REG_RGB_BASE && wr_addr < REG_RGB_END) begin
                // 计算像素索引和颜色分量
                j = wr_addr - REG_RGB_BASE;
                if (j % 3 == 0) r_buffer[j/3] <= wr_data[7:0];
                if (j % 3 == 1) g_buffer[j/3] <= wr_data[7:0];
                if (j % 3 == 2) b_buffer[j/3] <= wr_data[7:0];
            end
        end
    end
    
    // 读取数据处理
    always @(*) begin
        // 默认返回0
        rd_data = 32'd0;
        
        case (rd_addr)
            REG_STATUS: begin
                // 状态寄存器
                rd_data = {30'd0, processing_done, start_process};
            end
            default: begin
                // 读取结果数据
                if (rd_addr >= REG_Y_BASE && rd_addr < REG_Y_END) begin
                    rd_data = y_result[rd_addr - REG_Y_BASE];
                end else if (rd_addr >= REG_CB_BASE && rd_addr < REG_CB_END) begin
                    rd_data = cb_result[rd_addr - REG_CB_BASE];
                end else if (rd_addr >= REG_CR_BASE && rd_addr < REG_CR_END) begin
                    rd_data = cr_result[rd_addr - REG_CR_BASE];
                end
            end
        endcase
    end

endmodule


module jpeg_axi_interface #
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
    output wire [7:0]                    wr_addr,     // 写地址
    output wire [7:0]                    rd_addr,     // 读地址
    output wire [31:0]                   wr_data,     // 写数据
    input  wire [31:0]                   rd_data,     // 读数据
    output wire                          wr_en,       // 写使能
    output wire                          rd_en        // 读使能
);
    // 本地参数定义
    localparam ADDR_LSB = 2;  // 地址的低2位不使用（因为是32位总线，所以地址是4字节对齐）
    
    // 内部寄存器定义
    reg [7:0] wr_addr_latched;           // 锁存的写地址
    reg [7:0] read_addr_latched;         // 锁存的读地址
    reg aw_en;                           // 写地址通道使能信号
    
    // 将锁存的地址映射到输出端口
    assign wr_addr = wr_addr_latched;
    assign rd_addr = read_addr_latched;
    assign wr_data = axi_wdata;
    
    // 写使能信号，当写地址和写数据都准备好时有效
    assign wr_en = axi_awready && axi_awvalid && axi_wready && axi_wvalid;
    
    // 读使能信号，当读地址准备好时有效
    assign rd_en = axi_arready && axi_arvalid;

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
                wr_addr_latched <= axi_awaddr[ADDR_LSB+7:ADDR_LSB]; // 锁存地址
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
                read_addr_latched <= axi_araddr[ADDR_LSB+7:ADDR_LSB]; // 锁存读地址
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