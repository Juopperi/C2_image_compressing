`define CONFIG_WRITE_OUTRANGE 8'b1000_1000

module axi_self_test #(
    parameter integer C_S_AXI_ID_WIDTH    	= 1,
    parameter integer C_S_AXI_DATA_WIDTH    = 32,
    parameter integer C_S_AXI_ADDR_WIDTH    = 8, // 0x00~0xFF : maximum 256 bytes
    parameter integer C_S_AXI_AWUSER_WIDTH  = 0,
    parameter integer C_S_AXI_ARUSER_WIDTH  = 0,
    parameter integer C_S_AXI_WUSER_WIDTH   = 0,
    parameter integer C_S_AXI_RUSER_WIDTH   = 0,
    parameter integer C_S_AXI_BUSER_WIDTH   = 0,
    parameter integer CONFIG_AREA          	= 16, // 0x80~0x8F
    parameter integer WRITE_AREA          	= 64, // 0x00~0x3F
    parameter integer READ_AREA          	= 64  // 0x40~0xF
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

    // Read Address Channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_ARADDR,
    input  wire                              S_AXI_ARVALID,
    output reg                               S_AXI_ARREADY,

    // Read Data Channel
    output reg [C_S_AXI_DATA_WIDTH-1:0]      S_AXI_RDATA,
    output reg                               S_AXI_RVALID,
    input  wire                              S_AXI_RREADY
);

parameter integer REG_RW_DEPTH = WRITE_AREA + READ_AREA;
reg [C_S_AXI_DATA_WIDTH-1:0] axi_reg_rw     [0:REG_RW_DEPTH-1];
reg [C_S_AXI_DATA_WIDTH-1:0] axi_reg_cfg    [0:CONFIG_AREA-1];

wire is_config_area;
assign is_config_area = axi_awaddr[C_S_AXI_ADDR_WIDTH-1];

// Register for internal address storage
reg [C_S_AXI_ADDR_WIDTH-1:0] axi_araddr;
reg [C_S_AXI_ADDR_WIDTH-1:0] axi_awaddr;

// ----------------------
// Write Address Channel
// ----------------------
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_AWREADY <= 1'b0;
        axi_awaddr <= 0;
    end
    else begin
        if (~S_AXI_AWREADY && S_AXI_AWVALID) begin
            // 接受写地址
            S_AXI_AWREADY <= 1'b1;
            axi_awaddr <= S_AXI_AWADDR;
        end
        else begin
            S_AXI_AWREADY <= 1'b0;
        end
    end
end

// ----------------------
// Write Data Channel
// ----------------------
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_WREADY <= 1'b0;
    end
    else begin
        if (~S_AXI_WREADY && S_AXI_WVALID) begin
            // 接受写数据
            S_AXI_WREADY <= 1'b1;
        end
        else begin
            S_AXI_WREADY <= 1'b0;
        end
    end
end

// 写数据到寄存器
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        integer i;
        for (i = 0; i < REG_RW_DEPTH; i = i + 1) begin
            axi_reg_rw[i] <= 0;
        end
    end
    else begin
        if (S_AXI_WREADY && S_AXI_WVALID && S_AXI_AWREADY && S_AXI_AWVALID && ~is_config_area) begin
            // 当地址和数据都有效时，执行写操作
            axi_reg_rw[axi_awaddr] <= S_AXI_WDATA;
            // If the address is out of the write area, write a special value to a specific register in the config area
            if (axi_awaddr >= WRITE_AREA && ~is_config_area) begin
                axi_reg_cfg[`CONFIG_WRITE_OUTRANGE] <= axi_reg_cfg[`CONFIG_WRITE_OUTRANGE] + 1;
            end
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
        if (S_AXI_WREADY && S_AXI_WVALID && S_AXI_AWREADY && S_AXI_AWVALID && is_config_area) begin
            axi_reg_cfg[axi_awaddr] <= S_AXI_WDATA;
        end
    end
end

// ----------------------
// Read Address Channel
// ----------------------
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_ARREADY <= 1'b0;
        axi_araddr <= 0;
    end
    else begin
        if (~S_AXI_ARREADY && S_AXI_ARVALID) begin
            // 接受读地址
            S_AXI_ARREADY <= 1'b1;
            axi_araddr <= S_AXI_ARADDR;
        end
        else begin
            S_AXI_ARREADY <= 1'b0;
        end
    end
end

// ----------------------
// Read Data Channel
// ----------------------
always @(posedge S_AXI_ACLK) begin
    if (!S_AXI_ARESETN) begin
        S_AXI_RVALID <= 1'b0;
        S_AXI_RDATA <= 0;
    end
    else begin
        if (S_AXI_ARREADY && S_AXI_ARVALID && ~S_AXI_RVALID) begin
            // 读数据就绪
            S_AXI_RVALID <= 1'b1;
            S_AXI_RDATA <= axi_reg_rw[axi_araddr];
        end
        else if (S_AXI_RVALID && S_AXI_RREADY) begin
            // 读数据被接受
            S_AXI_RVALID <= 1'b0;
        end
    end
end

endmodule