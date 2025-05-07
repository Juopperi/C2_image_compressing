`define CONFIG_WRITE_OUTRANGE   4'h8
/* verilator lint_off REDEFMACRO */
`define CONFIG_PROCESS_DONE     8'h89 // if the config area is done, set this to 1, it is set by the user_functional_module
/* verilator lint_on REDEFMACRO */
`define CONFIG_PROCESS_BEGIN    4'h1 // if the config area is done, set this to 1, it is set by the user_functional_module

// todo
//  改一下，read的逻辑不能空一拍？

module axi_self_test #(
    parameter integer C_S_AXI_DATA_WIDTH    = 32,
    parameter integer C_S_AXI_ADDR_WIDTH    = 8, // 0x00~0xFF : maximum 256 bytes
    parameter integer CONFIG_AREA          	= 16, // 0x80~0x8F
    parameter integer WRITE_AREA          	= 64, // 0x00~0x3F
    parameter integer READ_AREA          	= 64  // 0x40~0xFF
)(
    // Clock and Reset
    input  wire                              S_AXI_ACLK,
    input  wire                              S_AXI_ARESETN,
    
    // For compatibility with direct AXI naming in testbench
    input  wire                              axi_aclk,
    input  wire                              axi_aresetn,

    // Write Address Channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_AWADDR,
    input  wire                              S_AXI_AWVALID,
    output reg                               S_AXI_AWREADY,
    input  wire [2:0]                        S_AXI_AWPROT,
    
    // Write Address Channel (direct AXI naming)
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     axi_awaddr,
    input  wire                              axi_awvalid,
    output wire                              axi_awready,
    input  wire [2:0]                        axi_awprot,

    // Write Data Channel
    input  wire [C_S_AXI_DATA_WIDTH-1:0]     S_AXI_WDATA,
    input  wire                              S_AXI_WVALID,
    output reg                               S_AXI_WREADY,
    input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0] S_AXI_WSTRB,
    
    // Write Data Channel (direct AXI naming)
    input  wire [C_S_AXI_DATA_WIDTH-1:0]     axi_wdata,
    input  wire                              axi_wvalid,
    output wire                              axi_wready,
    input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0] axi_wstrb,

    // Write Response Channel
    output reg  [1:0]                        S_AXI_BRESP,
    output reg                               S_AXI_BVALID,
    input  wire                              S_AXI_BREADY,
    
    // Write Response Channel (direct AXI naming)
    output wire [1:0]                        axi_bresp,
    output wire                              axi_bvalid,
    input  wire                              axi_bready,

    // Read Address Channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_ARADDR,
    input  wire                              S_AXI_ARVALID,
    output reg                               S_AXI_ARREADY,
    input  wire [2:0]                        S_AXI_ARPROT,
    
    // Read Address Channel (direct AXI naming)
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     axi_araddr,
    input  wire                              axi_arvalid,
    output wire                              axi_arready,
    input  wire [2:0]                        axi_arprot,

    // Read Data Channel
    output reg [C_S_AXI_DATA_WIDTH-1:0]      S_AXI_RDATA,
    output reg [1:0]                         S_AXI_RRESP,
    output reg                               S_AXI_RVALID,
    input  wire                              S_AXI_RREADY,
    
    // Read Data Channel (direct AXI naming)
    output wire [C_S_AXI_DATA_WIDTH-1:0]     axi_rdata,
    output wire [1:0]                        axi_rresp,
    output wire                              axi_rvalid,
    input  wire                              axi_rready
);

// Connect direct AXI naming to S_AXI_ signals
assign axi_awready = S_AXI_AWREADY;
assign axi_wready = S_AXI_WREADY;
assign axi_bresp = S_AXI_BRESP;
assign axi_bvalid = S_AXI_BVALID;
assign axi_arready = S_AXI_ARREADY;
assign axi_rdata = S_AXI_RDATA;
assign axi_rresp = S_AXI_RRESP;
assign axi_rvalid = S_AXI_RVALID;

// Input mux logic to handle both naming styles
wire                          clk;
wire                          rst_n;
wire [C_S_AXI_ADDR_WIDTH-1:0] awaddr_in;
wire                          awvalid_in;
wire [C_S_AXI_DATA_WIDTH-1:0] wdata_in;
wire                          wvalid_in;
wire                          bready_in;
wire [C_S_AXI_ADDR_WIDTH-1:0] araddr_in;
wire                          arvalid_in;
wire                          rready_in;

// Input multiplexing based on what's active
assign clk = S_AXI_ACLK | axi_aclk;
assign rst_n = S_AXI_ARESETN | axi_aresetn;
assign awaddr_in = S_AXI_AWVALID ? S_AXI_AWADDR : axi_awaddr;
assign awvalid_in = S_AXI_AWVALID | axi_awvalid;
assign wdata_in = S_AXI_WVALID ? S_AXI_WDATA : axi_wdata;
assign wvalid_in = S_AXI_WVALID | axi_wvalid;
assign bready_in = S_AXI_BREADY | axi_bready;
assign araddr_in = S_AXI_ARVALID ? S_AXI_ARADDR : axi_araddr;
assign arvalid_in = S_AXI_ARVALID | axi_arvalid;
assign rready_in = S_AXI_RREADY | axi_rready;

// parameter integer REG_RW_DEPTH = WRITE_AREA + READ_AREA;
reg [C_S_AXI_DATA_WIDTH-1:0] axi_reg_rw     [0:WRITE_AREA+READ_AREA-1];
reg [C_S_AXI_DATA_WIDTH-1:0] axi_reg_cfg    [0:CONFIG_AREA-1];

// Register for internal address storage - rename to avoid conflict with ports
reg [C_S_AXI_ADDR_WIDTH-1:0] internal_araddr;
reg [C_S_AXI_ADDR_WIDTH-1:0] internal_awaddr;

wire read_is_config_area;
assign read_is_config_area = internal_araddr[C_S_AXI_ADDR_WIDTH-1];

wire write_is_config_area;
assign write_is_config_area = internal_awaddr[C_S_AXI_ADDR_WIDTH-1];

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

wire complete_flag_read, complete_flag_write, complete_flag;

assign complete_flag_read   = axi_reg_cfg[internal_araddr[C_S_AXI_ADDR_WIDTH-4:0]] == S_AXI_ARADDR || axi_reg_rw[internal_araddr[C_S_AXI_ADDR_WIDTH-1:0]] == S_AXI_ARADDR;
assign complete_flag_write  = axi_reg_cfg[internal_awaddr[C_S_AXI_ADDR_WIDTH-4:0]] == S_AXI_AWADDR || axi_reg_rw[internal_awaddr[C_S_AXI_ADDR_WIDTH-1:0]] == S_AXI_AWADDR;

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
    .clk(clk),
    .rst_n(rst_n),
    .start(ufm_start),
    .data_in_addr(ufm_data_in_addr),
    .data_in(ufm_data_in),
    .data_out_addr(ufm_data_out_addr),
    .data_out(ufm_data_out),
    .state_out(ufm_state_out)
);

assign ufm_data_in = axi_reg_rw[ufm_data_in_addr];

reg [C_S_AXI_ADDR_WIDTH-2:0] ufm_save_counter;
reg ufm_data_saved;

// 当用户函数模块需要输出数据到AXI时，使用此地址
assign ufm_data_out_addr = ufm_save_counter;

// 当用户模块处于SAVE_DATA状态时，保存输出数据到数组中
always @(posedge clk) begin
    if (!rst_n) begin
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
            ufm_save_counter <= ufm_data_out_addr + 1;
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

always @(posedge clk) begin
    if (!rst_n) begin
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
            if (arvalid_in) begin
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
            if (rready_in) begin
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
            if (awvalid_in) begin
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
            if (wvalid_in) begin
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
            if (bready_in) begin
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

// ----------------------
// Write Channel
// ----------------------

// 写地址就绪
always @(posedge clk) begin
    if (!rst_n) begin
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

// 写地址保存
always @(posedge clk) begin
    if (!rst_n) begin
        internal_awaddr <= 0;
    end
    else begin
        if (write_state == WR_SAVE_ADDRESS) begin
            internal_awaddr <= awaddr_in;
        end
    end
end

// 写数据就绪
always @(posedge clk) begin
    if (!rst_n) begin
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

// 写数据保存
always @(posedge clk) begin
    if (!rst_n) begin
        integer i;
        for (i = 0; i < READ_AREA+WRITE_AREA; i = i + 1) begin
            axi_reg_rw[i] <= 0;
        end
    end
    else begin
        integer j;
        if (write_state == WR_SAVE_DATA && ~write_is_config_area) begin
            axi_reg_rw[internal_awaddr[C_S_AXI_ADDR_WIDTH-1:0]] <= wdata_in;
            if (internal_awaddr[C_S_AXI_ADDR_WIDTH-1:0] >= WRITE_AREA && ~write_is_config_area) begin
                axi_reg_cfg[`CONFIG_WRITE_OUTRANGE] <= axi_reg_cfg[`CONFIG_WRITE_OUTRANGE] + 1;
            end
        end
    end
end

// 写响应通道
always @(posedge clk) begin
    if (!rst_n) begin
        S_AXI_BRESP <= 2'b00;  // OKAY
        S_AXI_BVALID <= 1'b0;
    end
    else begin
        if (write_state == WR_RESPONSE) begin
            S_AXI_BVALID <= 1'b1;
            // Check if address is out of range
            if (internal_awaddr[C_S_AXI_ADDR_WIDTH-1:0] >= WRITE_AREA && ~write_is_config_area) begin
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
always @(posedge clk) begin
    if (!rst_n) begin
        integer i;
        for (i = 0; i < CONFIG_AREA; i = i + 1) begin
            axi_reg_cfg[i] <= 0;
        end
    end
    else begin
        if (write_state == WR_SAVE_DATA && write_is_config_area) begin
            axi_reg_cfg[internal_awaddr[C_S_AXI_ADDR_WIDTH-4:0]] <= wdata_in;
        end
    end
end

// ----------------------
// Read Channel
// ----------------------

always @(posedge clk) begin
    if (!rst_n) begin
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

always @(posedge clk) begin
    if (!rst_n) begin
        internal_araddr <= 0;
    end
    else begin
        if (read_state == RD_SAVE_ADDRESS) begin
            internal_araddr <= araddr_in;
        end
    end
end

always @(posedge clk) begin
    if (!rst_n) begin
        S_AXI_RDATA <= 0;
        S_AXI_RRESP <= 2'b00;  // OKAY
    end
    else begin
        if (read_state >= RD_OUTPUT_DATA) begin // keep output data until done 
            if (read_is_config_area) begin
                S_AXI_RDATA <= axi_reg_cfg[internal_araddr[C_S_AXI_ADDR_WIDTH-4:0]];
                S_AXI_RRESP <= 2'b00;  // OKAY
            end
            else begin
                S_AXI_RDATA <= axi_reg_rw[internal_araddr[C_S_AXI_ADDR_WIDTH-1:0]];
                S_AXI_RRESP <= 2'b00;  // OKAY
            end
        end
        else begin
            S_AXI_RDATA <= 0;
            S_AXI_RRESP <= 2'b00;  // OKAY
        end
    end
end

always @(posedge clk) begin
    if (!rst_n) begin
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

