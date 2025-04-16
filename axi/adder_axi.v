`timescale 1 ns / 1 ps

// AXI接口包装器模块，包含多口RAM和可替换的处理模块
module axi_wrapper_with_ram #
(
    // 参数定义
    parameter integer C_AXI_DATA_WIDTH = 32,   // AXI数据总线宽度，默认32位
    parameter integer C_AXI_ADDR_WIDTH = 32,   // AXI地址总线宽度，默认32位
    parameter integer RAM_DEPTH = 256          // RAM深度，地址范围0x100-0x4FF
)
(
    // 全局信号
    input  wire                          axi_aclk,    // AXI时钟信号
    input  wire                          axi_aresetn, // AXI复位信号，低电平有效

    // 写地址通道
    input  wire [C_AXI_ADDR_WIDTH-1:0]   axi_awaddr,  // 写地址
    input  wire                          axi_awvalid, // 写地址有效信号
    output reg                           axi_awready, // 写地址就绪信号

    // 写数据通道
    input  wire [C_AXI_DATA_WIDTH-1:0]   axi_wdata,   // 写数据
    input  wire [(C_AXI_DATA_WIDTH/8)-1:0] axi_wstrb, // 写字节使能信号，控制哪些字节被写入
    input  wire                          axi_wvalid,  // 写数据有效信号
    output reg                           axi_wready,  // 写数据就绪信号

    // 写响应通道
    output reg  [1:0]                    axi_bresp,   // 写响应信号，00表示正常
    output reg                           axi_bvalid,  // 写响应有效信号
    input  wire                          axi_bready,  // 写响应就绪信号

    // 读地址通道
    input  wire [C_AXI_ADDR_WIDTH-1:0]   axi_araddr,  // 读地址
    input  wire                          axi_arvalid, // 读地址有效信号
    output reg                           axi_arready, // 读地址就绪信号

    // 读数据通道
    output reg  [C_AXI_DATA_WIDTH-1:0]   axi_rdata,   // 读数据
    output reg  [1:0]                    axi_rresp,   // 读响应信号，00表示正常
    output reg                           axi_rvalid,  // 读数据有效信号
    input  wire                          axi_rready   // 读数据就绪信号
);
    // 地址映射常量定义
    localparam ADDR_LSB = 2;                        // 地址的低2位不使用（32位总线，4字节对齐）
    
    // 寄存器地址空间：0x00-0x1F
    localparam REG_A      = 6'b000000;              // A寄存器地址偏移 0x00
    localparam REG_B      = 6'b000001;              // B寄存器地址偏移 0x04
    localparam REG_CTRL   = 6'b000010;              // 控制寄存器地址偏移 0x08
    localparam REG_STAT   = 6'b000011;              // 状态寄存器地址偏移 0x0C
    localparam REG_RES    = 6'b000100;              // 结果寄存器地址偏移 0x10
    
    // RAM地址空间：0x100-0x4FF
    localparam RAM_BASE_ADDR = 8'h40;               // RAM基地址（0x100）>> 2
    
    // 地址区域判断
    wire is_reg_addr = (axi_awaddr[11:ADDR_LSB] < RAM_BASE_ADDR) && (axi_awvalid);
    wire is_ram_addr = (axi_awaddr[11:ADDR_LSB] >= RAM_BASE_ADDR) && 
                      (axi_awaddr[11:ADDR_LSB] < (RAM_BASE_ADDR + RAM_DEPTH)) && 
                      (axi_awvalid);
    
    // 内部寄存器定义
    reg [5:0] wr_addr_latched;                     // 锁存的写地址（更宽以支持更多地址位）
    reg [5:0] read_addr;                           // 锁存的读地址
    
    // 寄存器区域数据
    reg [31:0] a_reg;                              // A操作数寄存器
    reg [31:0] b_reg;                              // B操作数寄存器
    reg [31:0] result_reg;                         // 结果寄存器
    reg [31:0] control_reg;                        // 控制寄存器
    reg [31:0] status_reg;                         // 状态寄存器
    
    // RAM存储
    reg [C_AXI_DATA_WIDTH-1:0] ram [0:RAM_DEPTH-1];// RAM存储数组
    reg [8:0] ram_addr_wr;                         // RAM写地址（相对地址）
    reg [8:0] ram_addr_rd;                         // RAM读地址（相对地址）
    reg ram_ce_wr;                                 // RAM写使能
    reg ram_ce_rd;                                 // RAM读使能
    reg [31:0] ram_data_read;                      // RAM读出数据
    
    // 功能模块状态控制
    reg [1:0] proc_state;                          // 处理模块状态
    reg [1:0] status_counter;                      // 状态计数器，用于保持状态
    reg done_occurred;                             // 操作完成标志
    
    // 功能状态定义
    localparam STATE_IDLE = 2'b00;                 // 空闲状态
    localparam STATE_BUSY = 2'b01;                 // 忙状态，正在计算
    localparam STATE_DONE = 2'b10;                 // 完成状态
    
    // AXI接口握手控制
    reg aw_en;                                     // 写地址通道使能信号
    
    // 写使能信号，当写地址和写数据都准备好时有效
    wire wr_en = axi_awready && axi_awvalid && axi_wready && axi_wvalid;
    
    // 多口RAM写入控制
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            ram_ce_wr <= 0;
        end else begin
            if (wr_en && is_ram_addr) begin
                // 计算RAM相对地址
                ram_addr_wr <= axi_awaddr[ADDR_LSB+10:ADDR_LSB] - RAM_BASE_ADDR;
                
                // 写入数据到RAM
                ram[axi_awaddr[ADDR_LSB+10:ADDR_LSB] - RAM_BASE_ADDR] <= axi_wdata;
                ram_ce_wr <= 1;
            end else begin
                ram_ce_wr <= 0;
            end
        end
    end
    
    // 多口RAM读取控制
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            ram_ce_rd <= 0;
            ram_data_read <= 0;
        end else begin
            ram_ce_rd <= 0;
            
            if (axi_arvalid && !axi_rvalid && 
                (axi_araddr[11:ADDR_LSB] >= RAM_BASE_ADDR) && 
                (axi_araddr[11:ADDR_LSB] < (RAM_BASE_ADDR + RAM_DEPTH))) begin
                
                // 计算RAM相对地址
                ram_addr_rd <= axi_araddr[ADDR_LSB+10:ADDR_LSB] - RAM_BASE_ADDR;
                
                // 从RAM读取数据
                ram_data_read <= ram[axi_araddr[ADDR_LSB+10:ADDR_LSB] - RAM_BASE_ADDR];
                ram_ce_rd <= 1;
            end
        end
    end
    
    // 可替换的处理模块 - 加法器实现
    // 此处可拆分为独立模块
    // --------------------------------

    // 计算加法结果（异步）
    wire [31:0] adder_result = a_reg + b_reg;
    
    // 处理模块控制逻辑
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            proc_state <= STATE_IDLE;
            status_counter <= 0;
            done_occurred <= 0;
            status_reg <= 0;
        end else begin            
            // 功能模块状态机
            case (proc_state)
                STATE_IDLE: begin
                    // 当控制寄存器被设置为全1时，开始计算过程
                    if (control_reg == 32'hFFFFFFFF)
                        proc_state <= STATE_BUSY;
                end
                STATE_BUSY: begin
                    // 在BUSY状态下加载结果寄存器（一个时钟周期）
                    result_reg <= adder_result;
                    proc_state <= STATE_DONE;
                end
                STATE_DONE: begin
                    // 完成计算，设置状态和控制寄存器
                    status_reg <= 32'hFFFFFFFF;    // 设置状态位表示计算完成
                    control_reg <= 0;              // 清除控制位
                    proc_state <= STATE_IDLE;      // 返回空闲状态
                    done_occurred <= 1;            // 标记完成事件
                    status_counter <= 2'b00;       // 重置计数器
                end
            endcase
            
            // 状态寄存器保持逻辑：保持status_reg值两个时钟周期
            if (done_occurred) begin
                if (status_counter < 2'b10) begin  // 计数到2（两个周期）
                    status_counter <= status_counter + 1'b1;
                end else begin
                    // 两个周期后，允许在读取状态寄存器时清除它
                    if (axi_rvalid && axi_rready && read_addr == REG_STAT[5:0]) begin
                        status_reg <= 0;         // 清除状态寄存器
                        done_occurred <= 0;      // 重置完成标志
                    end
                end
            end
        end
    end
    // --------------------------------
    
    // 寄存器写入控制
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            a_reg <= 0;
            b_reg <= 0;
            control_reg <= 0;
        end else if (wr_en && is_reg_addr) begin
            case (wr_addr_latched)
                REG_A[5:0]:    a_reg <= axi_wdata;        // 写入操作数A
                REG_B[5:0]:    b_reg <= axi_wdata;        // 写入操作数B
                REG_CTRL[5:0]: control_reg <= axi_wdata;  // 写入控制寄存器
                default: ;  // 其他地址不做处理
            endcase
        end
    end
    
    // AXI写地址通道控制
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            axi_awready <= 0;
            wr_addr_latched <= 0;
            aw_en <= 1;
        end else begin
            if (~axi_awready && axi_awvalid && aw_en) begin
                axi_awready <= 1;
                wr_addr_latched <= axi_awaddr[ADDR_LSB+5:ADDR_LSB]; // 锁存地址低6位（足够覆盖寄存器地址）
            end else begin
                axi_awready <= 0;
            end
        end
    end
    
    // AXI写数据通道控制
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            axi_wready <= 0;
        end else begin
            if (~axi_wready && axi_wvalid && aw_en) begin
                axi_wready <= 1;
            end else begin
                axi_wready <= 0;
            end
        end
    end
    
    // AXI写响应通道控制
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            axi_bvalid <= 0;
            axi_bresp <= 2'b00;
            aw_en <= 1;
        end else begin
            if (wr_en && ~axi_bvalid) begin
                axi_bvalid <= 1;
                axi_bresp <= 2'b00; // OKAY响应
                aw_en <= 0;
            end else if (axi_bvalid && axi_bready) begin
                axi_bvalid <= 0;
                aw_en <= 1;
            end
        end
    end
    
    // AXI读地址通道控制
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            axi_arready <= 0;
            read_addr <= 0;
        end else begin
            if (~axi_arready && axi_arvalid) begin
                axi_arready <= 1;
                read_addr <= axi_araddr[ADDR_LSB+5:ADDR_LSB]; // 保存读地址低6位
            end else begin
                axi_arready <= 0;
            end
        end
    end
    
    // AXI读数据通道控制
    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            axi_rvalid <= 0;
            axi_rresp <= 0;
            axi_rdata <= 0;
        end else begin
            if (axi_arready && axi_arvalid && ~axi_rvalid) begin
                axi_rvalid <= 1;
                axi_rresp <= 2'b00; // OKAY响应
                
                // 根据地址选择返回的数据源
                if (axi_araddr[11:ADDR_LSB] < RAM_BASE_ADDR) begin
                    // 寄存器区域读取
                    case (axi_araddr[ADDR_LSB+5:ADDR_LSB])
                        REG_A[5:0]:    axi_rdata <= a_reg;          // 返回操作数A
                        REG_B[5:0]:    axi_rdata <= b_reg;          // 返回操作数B
                        REG_CTRL[5:0]: axi_rdata <= control_reg;    // 返回控制寄存器值
                        REG_STAT[5:0]: axi_rdata <= status_reg;     // 返回状态寄存器值
                        REG_RES[5:0]:  axi_rdata <= result_reg;     // 返回结果寄存器值
                        default:       axi_rdata <= 32'hDEAD_BEEF;  // 未定义地址返回特殊值
                    endcase
                end else if ((axi_araddr[11:ADDR_LSB] >= RAM_BASE_ADDR) && 
                             (axi_araddr[11:ADDR_LSB] < (RAM_BASE_ADDR + RAM_DEPTH))) begin
                    // RAM区域读取
                    axi_rdata <= ram_data_read;
                end else begin
                    // 无效地址
                    axi_rdata <= 32'hDEAD_BEEF;
                    axi_rresp <= 2'b10; // SLVERR响应
                end
            end else if (axi_rvalid && axi_rready) begin
                axi_rvalid <= 0;
            end
        end
    end

endmodule

//----------------------------------------------------
// 可替换的处理模块 - 独立加法器示例
//----------------------------------------------------
module adder_module
(
    input  wire        clk,
    input  wire        resetn,
    
    // 操作数输入
    input  wire [31:0] a_in,
    input  wire [31:0] b_in,
    
    // 控制信号
    input  wire [31:0] control_in,
    output reg  [31:0] status_out,
    
    // 结果输出
    output reg  [31:0] result_out
);
    // 状态定义
    localparam STATE_IDLE = 2'b00;
    localparam STATE_BUSY = 2'b01;
    localparam STATE_DONE = 2'b10;
    
    reg [1:0] state;
    reg [1:0] status_counter;
    reg done_occurred;
    
    wire [31:0] adder_result = a_in + b_in;  // 组合逻辑加法
    
    // 状态机
    always @(posedge clk) begin
        if (!resetn) begin
            state <= STATE_IDLE;
            status_out <= 0;
            result_out <= 0;
            status_counter <= 0;
            done_occurred <= 0;
        end else begin
            case (state)
                STATE_IDLE: begin
                    if (control_in == 32'hFFFFFFFF)
                        state <= STATE_BUSY;
                end
                STATE_BUSY: begin
                    result_out <= adder_result;
                    state <= STATE_DONE;
                end
                STATE_DONE: begin
                    status_out <= 32'hFFFFFFFF;
                    state <= STATE_IDLE;
                    done_occurred <= 1;
                    status_counter <= 2'b00;
                end
            endcase
            
            // 状态计数器控制
            if (done_occurred) begin
                if (status_counter < 2'b10) begin
                    status_counter <= status_counter + 1'b1;
                end else begin
                    status_out <= 0;
                    done_occurred <= 0;
                end
            end
        end
    end
endmodule

//----------------------------------------------------
// 替代模块示例：乘法器
//----------------------------------------------------
module multiplier_module
(
    input  wire        clk,
    input  wire        resetn,
    
    // 操作数输入
    input  wire [31:0] a_in,
    input  wire [31:0] b_in,
    
    // 控制信号
    input  wire [31:0] control_in,
    output reg  [31:0] status_out,
    
    // 结果输出
    output reg  [31:0] result_out
);
    // 状态定义
    localparam STATE_IDLE = 2'b00;
    localparam STATE_BUSY = 2'b01;
    localparam STATE_DONE = 2'b10;
    
    reg [1:0] state;
    reg [1:0] status_counter;
    reg done_occurred;
    
    wire [31:0] mul_result = a_in * b_in;  // 乘法运算
    
    // 状态机
    always @(posedge clk) begin
        if (!resetn) begin
            state <= STATE_IDLE;
            status_out <= 0;
            result_out <= 0;
            status_counter <= 0;
            done_occurred <= 0;
        end else begin
            case (state)
                STATE_IDLE: begin
                    if (control_in == 32'hFFFFFFFF)
                        state <= STATE_BUSY;
                end
                STATE_BUSY: begin
                    result_out <= mul_result;
                    state <= STATE_DONE;
                end
                STATE_DONE: begin
                    status_out <= 32'hFFFFFFFF;
                    state <= STATE_IDLE;
                    done_occurred <= 1;
                    status_counter <= 2'b00;
                end
            endcase
            
            // 状态计数器控制
            if (done_occurred) begin
                if (status_counter < 2'b10) begin
                    status_counter <= status_counter + 1'b1;
                end else begin
                    status_out <= 0;
                    done_occurred <= 0;
                end
            end
        end
    end
endmodule