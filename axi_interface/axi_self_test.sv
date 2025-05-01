`define CONFIG_WRITE_OUTRANGE   4'h8
`define CONFIG_PROCESS_DONE     4'h9 // if the config area is done, set this to 1, it is set by the user_functional_module

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

    // Write Address Channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_AWADDR,
    input  wire                              S_AXI_AWVALID,
    output reg                               S_AXI_AWREADY,

    // Write Data Channel
    input  wire [C_S_AXI_DATA_WIDTH-1:0]     S_AXI_WDATA,
    input  wire                              S_AXI_WVALID,
    output reg                               S_AXI_WREADY,

    // Write Response Channel
    output reg  [1:0]                        S_AXI_BRESP,
    output reg                               S_AXI_BVALID,
    input  wire                              S_AXI_BREADY,

    // Read Address Channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_ARADDR,
    input  wire                              S_AXI_ARVALID,
    output reg                               S_AXI_ARREADY,

    // Read Data Channel
    output reg [C_S_AXI_DATA_WIDTH-1:0]      S_AXI_RDATA,
    output reg [1:0]                         S_AXI_RRESP,
    output reg                               S_AXI_RVALID,
    input  wire                              S_AXI_RREADY
);

parameter integer REG_RW_DEPTH = WRITE_AREA + READ_AREA;
reg [C_S_AXI_DATA_WIDTH-1:0] axi_reg_rw     [0:REG_RW_DEPTH-1];
reg [C_S_AXI_DATA_WIDTH-1:0] axi_reg_cfg    [0:CONFIG_AREA-1];

// Register for internal address storage
reg [C_S_AXI_ADDR_WIDTH-1:0] axi_araddr;
reg [C_S_AXI_ADDR_WIDTH-1:0] axi_awaddr;

wire read_is_config_area;
assign read_is_config_area = axi_araddr[C_S_AXI_ADDR_WIDTH-1];

wire write_is_config_area;
assign write_is_config_area = axi_awaddr[C_S_AXI_ADDR_WIDTH-1];

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

assign complete_flag_read   = axi_reg_cfg[axi_araddr[C_S_AXI_ADDR_WIDTH-4:0]] == S_AXI_ARADDR || axi_reg_rw[axi_araddr[C_S_AXI_ADDR_WIDTH-1:0]] == S_AXI_ARADDR;
assign complete_flag_write  = axi_reg_cfg[axi_awaddr[C_S_AXI_ADDR_WIDTH-4:0]] == S_AXI_AWADDR || axi_reg_rw[axi_awaddr[C_S_AXI_ADDR_WIDTH-1:0]] == S_AXI_AWADDR;


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

// ----------------------
// Write Channel
// ----------------------

// 写地址就绪
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_AWREADY <= 1'b0;
        axi_awaddr <= 0;
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
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        axi_awaddr <= 0;
    end
    else begin
        if (write_state == WR_SAVE_ADDRESS) begin
            axi_awaddr <= S_AXI_AWADDR;
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

// 写数据保存
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        integer i;
        for (i = 0; i < REG_RW_DEPTH; i = i + 1) begin
            axi_reg_rw[i] <= 0;
        end
    end
    else begin
        if (write_state == WR_SAVE_DATA && ~write_is_config_area) begin
            axi_reg_rw[axi_awaddr[C_S_AXI_ADDR_WIDTH-1:0]] <= S_AXI_WDATA;
            if (axi_awaddr[C_S_AXI_ADDR_WIDTH-1:0] >= WRITE_AREA && ~write_is_config_area) begin
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
            // Check if address is out of range
            if (axi_awaddr[C_S_AXI_ADDR_WIDTH-1:0] >= WRITE_AREA && ~write_is_config_area) begin
                S_AXI_BRESP <= 2'b00;  // SLVERR
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
            axi_reg_cfg[axi_awaddr[C_S_AXI_ADDR_WIDTH-4:0]] <= S_AXI_WDATA;
        end
    end
end

// ----------------------
// Read Channel
// ----------------------

always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_ARREADY <= 1'b0;
        axi_araddr <= 0;
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

always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        axi_araddr <= 0;
    end
    else begin
        if (read_state == RD_SAVE_ADDRESS) begin
            axi_araddr <= S_AXI_ARADDR;
        end
    end
end

always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_RDATA <= 0;
        S_AXI_RRESP <= 2'b00;  // OKAY
    end
    else begin
        if (read_state >= RD_OUTPUT_DATA) begin // keep output data until done 
            if (read_is_config_area) begin
                S_AXI_RDATA <= axi_reg_cfg[axi_araddr[C_S_AXI_ADDR_WIDTH-4:0]];
                S_AXI_RRESP <= 2'b00;  // OKAY
            end
            else begin
                S_AXI_RDATA <= axi_reg_rw[axi_araddr[C_S_AXI_ADDR_WIDTH-1:0]];
                S_AXI_RRESP <= 2'b00;  // OKAY
            end
        end
        else begin
            S_AXI_RDATA <= 0;
            S_AXI_RRESP <= 2'b00;  // OKAY
        end
    end
end

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

