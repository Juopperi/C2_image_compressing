`define CONFIG_WRITE_OUTRANGE   4'h8
/* verilator lint_off REDEFMACRO */
`define CONFIG_PROCESS_DONE     4'h9 // if the config area is done, set this to 1, it is set by the user_functional_module
/* verilator lint_on REDEFMACRO */
`define CONFIG_PROCESS_BEGIN    4'h1 // if the config area is done, set this to 1, it is set by the user_functional_module

module axi_self_test #(
    parameter integer C_S_AXI_DATA_WIDTH    = 32,
    parameter integer C_S_AXI_ADDR_WIDTH    = 10, // 0x00~0xFF : maximum 256 bytes
    parameter integer CONFIG_AREA           = 16, // 0x80~0x8F
    parameter integer WRITE_AREA            = 64, // 0x00~0x3F
    parameter integer READ_AREA             = 64  // 0x40~0xFF
)(
    // Clock and Reset
    input  wire                              S_AXI_ACLK,
    input  wire                              S_AXI_ARESETN,

    // Write Address Channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_AWADDR,
    input  wire                              S_AXI_AWVALID,
    output reg                               S_AXI_AWREADY,
    input  wire [2:0]                        S_AXI_AWPROT,

    // Write Data Channel
    input  wire [C_S_AXI_DATA_WIDTH-1:0]     S_AXI_WDATA,
    input  wire                              S_AXI_WVALID,
    output reg                               S_AXI_WREADY,
    input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0] S_AXI_WSTRB,

    // Write Response Channel
    output reg  [1:0]                        S_AXI_BRESP,
    output reg                               S_AXI_BVALID,
    input  wire                              S_AXI_BREADY,

    // Read Address Channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_ARADDR,
    input  wire                              S_AXI_ARVALID,
    output reg                               S_AXI_ARREADY,
    input  wire [2:0]                        S_AXI_ARPROT,

    // Read Data Channel
    output reg [C_S_AXI_DATA_WIDTH-1:0]      S_AXI_RDATA,
    output reg [1:0]                         S_AXI_RRESP,
    output reg                               S_AXI_RVALID,
    input  wire                              S_AXI_RREADY
);

// 计算地址对齐所需的掩码（基于数据宽度）
// 对于32位数据(4字节)，需要对齐到4字节边界，掩码为~3
localparam ADDR_MASK = ~((C_S_AXI_DATA_WIDTH/8) - 1);

// 保存地址对齐操作的寄存器
reg [C_S_AXI_ADDR_WIDTH-1:0] internal_araddr;
reg [C_S_AXI_ADDR_WIDTH-1:0] internal_awaddr;
wire [C_S_AXI_ADDR_WIDTH-1:0] aligned_araddr;
wire [C_S_AXI_ADDR_WIDTH-1:0] aligned_awaddr;

// 地址对齐操作
assign aligned_araddr = S_AXI_ARADDR & ADDR_MASK;
assign aligned_awaddr = S_AXI_AWADDR & ADDR_MASK;

reg [C_S_AXI_DATA_WIDTH-1:0] axi_reg_rw     [0:WRITE_AREA+READ_AREA-1];
reg [C_S_AXI_DATA_WIDTH-1:0] axi_reg_cfg    [0:CONFIG_AREA-1];

wire read_is_config_area;
assign read_is_config_area = internal_araddr[C_S_AXI_ADDR_WIDTH-1];

wire write_is_config_area;
assign write_is_config_area = internal_awaddr[C_S_AXI_ADDR_WIDTH-1];

// 计算当前地址的实际索引
wire [C_S_AXI_ADDR_WIDTH-2:0] read_data_index;
wire [C_S_AXI_ADDR_WIDTH-2:0] read_config_index;
wire [C_S_AXI_ADDR_WIDTH-2:0] write_data_index;
wire [C_S_AXI_ADDR_WIDTH-2:0] write_config_index;

// 提取对齐地址的有效索引位（去除最高位和对齐位）
assign read_data_index = internal_araddr[C_S_AXI_ADDR_WIDTH-2:2];
assign read_config_index = internal_araddr[C_S_AXI_ADDR_WIDTH-2:2];
assign write_data_index = internal_awaddr[C_S_AXI_ADDR_WIDTH-2:2];
assign write_config_index = internal_awaddr[C_S_AXI_ADDR_WIDTH-2:2];

// Set two state machines for read and write channels
typedef enum reg [2:0] {
    WR_IDLE,
    WR_READY_ADDRESS,
    WR_SAVE_ADDRESS,
    WR_READY_DATA,
    WR_SAVE_DATA,
    WR_RESPONSE,
    WR_DONE
} state_write;

typedef enum reg [2:0] {
    RD_IDLE,
    RD_READY_ADDRESS,
    RD_SAVE_ADDRESS,
    RD_OUTPUT_DATA,
    RD_VALID_DATA,
    RD_DONE
} state_read;

state_write write_state, write_next_state;
state_read read_state, read_next_state;

// ----------------------
// User Functional Module
// ----------------------

wire            ufm_start;
wire [7:0]      ufm_data_in_addr;
wire [31:0]     ufm_data_in;
wire [31:0]     ufm_data_out;
wire [7:0]      ufm_data_out_addr;
wire [3:0]      ufm_state_out;

reg [31:0]      ufm_data_out_array [0:63];

typedef enum reg [3:0] {
    IDLE,
    LOAD_DATA,
    PROCESS_DATA,
    SAVE_DATA,
    DONE
} state_t_user_functional_module;

state_t_user_functional_module ufm_state;
assign ufm_state = state_t_user_functional_module'(ufm_state_out);

assign ufm_start = axi_reg_cfg[`CONFIG_PROCESS_BEGIN] == 1;

user_functional_module ufm(
    .clk(S_AXI_ACLK),        // 使用单一时钟源
    .rst_n(S_AXI_ARESETN),   // 使用单一复位源
    .start(ufm_start),
    .data_in_addr(ufm_data_in_addr),
    .data_in(ufm_data_in),
    .data_out_addr(ufm_data_out_addr),
    .data_out(ufm_data_out),
    .state_out(ufm_state_out)
);

assign ufm_data_in = axi_reg_rw[ufm_data_in_addr];

reg [7:0] ufm_save_counter;  // 扩展计数器，防止溢出
reg ufm_data_saved;

// 当用户函数模块需要输出数据到AXI时，使用此地址
assign ufm_data_out_addr = ufm_save_counter;

// 当用户模块处于SAVE_DATA状态时，保存输出数据到数组中
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        integer i;
        for (i = 0; i < 64; i = i + 1) begin
            ufm_data_out_array[i] <= 0;
        end
        ufm_save_counter <= 0;
        ufm_data_saved <= 0;
    end
    else begin
        if (ufm_state == SAVE_DATA) begin
            // 从用户模块保存数据到临时数组
            ufm_data_out_array[ufm_data_out_addr] <= ufm_data_out;
            // 只有在计数器小于63时才递增，防止溢出
            if (ufm_save_counter < 63) begin
                ufm_save_counter <= ufm_save_counter + 1;
            end
            // 检查是否数据已全部保存
            if (ufm_data_out_addr == 63) begin
                ufm_data_saved <= 1;
            end
        end
        else if (ufm_state == DONE && ufm_data_saved) begin
            // 当用户模块处于DONE状态且数据已保存，将数据从临时数组复制到AXI读取区域
            integer j;
            for (j = 0; j < 64; j = j + 1) begin
                axi_reg_rw[j+WRITE_AREA] <= ufm_data_out_array[j];
            end
            // 设置处理完成标志
            axi_reg_cfg[`CONFIG_PROCESS_DONE] <= 1;
            ufm_data_saved <= 0; // 重置标志，防止重复写入
        end
        else if (ufm_state == IDLE) begin
            ufm_save_counter <= 0;
            ufm_data_saved <= 0;
            // 当用户模块返回IDLE状态时，重置处理完成标志
            if (axi_reg_cfg[`CONFIG_PROCESS_BEGIN] == 0) begin
                axi_reg_cfg[`CONFIG_PROCESS_DONE] <= 0;
            end
        end
    end
end

// ----------------------
// Read State Machine
// ----------------------

always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        read_state <= RD_IDLE;
        write_state <= WR_IDLE;
    end
    else begin
        read_state <= read_next_state;
        write_state <= write_next_state;
    end
end

always @(*) begin
    case (read_state)
        RD_IDLE: begin
            if (S_AXI_ARVALID) begin
                read_next_state = RD_READY_ADDRESS;
            end
            else begin
                read_next_state = RD_IDLE;
            end
        end
        RD_READY_ADDRESS: begin
            read_next_state = RD_SAVE_ADDRESS;
        end
        RD_SAVE_ADDRESS: begin
            read_next_state = RD_OUTPUT_DATA;
        end
        RD_OUTPUT_DATA: begin
            read_next_state = RD_VALID_DATA;
        end
        RD_VALID_DATA: begin
            if (S_AXI_RREADY) begin
                read_next_state = RD_DONE;
            end
            else begin
                read_next_state = RD_VALID_DATA;
            end
        end
        RD_DONE: begin
            read_next_state = RD_IDLE;
        end
        default: begin
            read_next_state = RD_IDLE;
        end
    endcase
end

always @(*) begin
    case (write_state)
        WR_IDLE: begin
            if (S_AXI_AWVALID) begin
                write_next_state = WR_READY_ADDRESS;
            end
            else begin
                write_next_state = WR_IDLE;
            end
        end
        WR_READY_ADDRESS: begin
            write_next_state = WR_SAVE_ADDRESS;
        end
        WR_SAVE_ADDRESS: begin
            write_next_state = WR_READY_DATA;
        end 
        WR_READY_DATA: begin
            if (S_AXI_WVALID) begin
                write_next_state = WR_SAVE_DATA;
            end
            else begin
                write_next_state = WR_READY_DATA;
            end
        end
        WR_SAVE_DATA: begin
            write_next_state = WR_RESPONSE;
        end
        WR_RESPONSE: begin
            if (S_AXI_BREADY) begin
                write_next_state = WR_DONE;
            end
            else begin
                write_next_state = WR_RESPONSE;
            end
        end
        WR_DONE: begin
            write_next_state = WR_IDLE;
        end
        default: begin
            write_next_state = WR_IDLE;
        end
    endcase
end

// ----------------------
// Write Channel
// ----------------------

// 写地址就绪
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_AWREADY <= 1'b0;
        internal_awaddr <= 0;
    end
    else begin
        if (write_state == WR_READY_ADDRESS) begin
            S_AXI_AWREADY <= 1'b1;
        end
        else begin
            S_AXI_AWREADY <= 1'b0;
        end
    end
end

// 写地址保存（使用对齐地址）
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        internal_awaddr <= 0;
    end
    else begin
        if (write_state == WR_SAVE_ADDRESS) begin
            internal_awaddr <= aligned_awaddr; // 使用对齐后的地址
        end
    end
end

// 写数据就绪
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_WREADY <= 1'b0;
    end
    else begin
        if (write_state == WR_READY_DATA) begin
            S_AXI_WREADY <= 1'b1;
        end
        else begin
            S_AXI_WREADY <= 1'b0;
        end
    end
end

// 写数据保存（使用对齐的索引）
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        integer i;
        for (i = 0; i < READ_AREA+WRITE_AREA; i = i + 1) begin
            axi_reg_rw[i] <= 0;
        end
    end
    else begin
        if (write_state == WR_SAVE_DATA && ~write_is_config_area) begin
            // 使用对齐索引访问数组
            axi_reg_rw[write_data_index] <= S_AXI_WDATA;
            // 检查地址是否超出写区域范围
            if (write_data_index >= WRITE_AREA && ~write_is_config_area) begin
                axi_reg_cfg[`CONFIG_WRITE_OUTRANGE] <= axi_reg_cfg[`CONFIG_WRITE_OUTRANGE] + 1;
            end
        end
    end
end

// 写响应通道
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_BRESP <= 2'b00;  // OKAY
        S_AXI_BVALID <= 1'b0;
    end
    else begin
        if (write_state == WR_RESPONSE) begin
            S_AXI_BVALID <= 1'b1;
            // 使用对齐索引检查地址范围
            if (write_data_index >= WRITE_AREA && ~write_is_config_area) begin
                S_AXI_BRESP <= 2'b10;  // SLVERR - 正确的错误代码
            end
            else begin
                S_AXI_BRESP <= 2'b00;  // OKAY
            end
        end
        else begin
            S_AXI_BVALID <= 1'b0;
        end
    end
end

// ----------------------
// Config Area Write
// ----------------------
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        integer i;
        for (i = 0; i < CONFIG_AREA; i = i + 1) begin
            axi_reg_cfg[i] <= 0;
        end
    end
    else begin
        if (write_state == WR_SAVE_DATA && write_is_config_area) begin
            // 确保配置区域索引在有效范围内
            if (write_config_index < CONFIG_AREA) begin
                axi_reg_cfg[write_config_index] <= S_AXI_WDATA;
            end
        end
    end
end

// ----------------------
// Read Channel
// ----------------------

always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_ARREADY <= 1'b0;
        internal_araddr <= 0;
    end
    else begin
        if (read_state == RD_READY_ADDRESS) begin
            S_AXI_ARREADY <= 1'b1;
        end
        else begin
            S_AXI_ARREADY <= 1'b0;
        end
    end
end

// 读地址保存（使用对齐地址）
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        internal_araddr <= 0;
    end
    else begin
        if (read_state == RD_SAVE_ADDRESS) begin
            internal_araddr <= aligned_araddr; // 使用对齐后的地址
        end
    end
end

// 读数据输出（使用对齐索引）
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_RDATA <= 0;
        S_AXI_RRESP <= 2'b00;  // OKAY
    end
    else begin
        if (read_state >= RD_OUTPUT_DATA) begin
            if (read_is_config_area) begin
                // 确保配置区域索引在有效范围内
                if (read_config_index < CONFIG_AREA) begin
                    S_AXI_RDATA <= axi_reg_cfg[read_config_index];
                    S_AXI_RRESP <= 2'b00;  // OKAY
                end
                else begin
                    S_AXI_RDATA <= 32'h0; // 返回零值表示错误
                    S_AXI_RRESP <= 2'b10; // SLVERR - 地址越界
                end
            end
            else begin
                // 确保数据区域索引在有效范围内
                if (read_data_index < (READ_AREA + WRITE_AREA)) begin
                    S_AXI_RDATA <= axi_reg_rw[read_data_index];
                    S_AXI_RRESP <= 2'b00;  // OKAY
                end
                else begin
                    S_AXI_RDATA <= 32'h0; // 返回零值表示错误
                    S_AXI_RRESP <= 2'b10; // SLVERR - 地址越界
                end
            end
        end
        else begin
            S_AXI_RDATA <= 0;
            S_AXI_RRESP <= 2'b00;  // OKAY
        end
    end
end

// 读数据有效
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_RVALID <= 1'b0;
    end
    else begin
        if (read_state == RD_VALID_DATA) begin
            S_AXI_RVALID <= 1'b1;
        end
        else begin
            S_AXI_RVALID <= 1'b0;
        end
    end
end

endmodule