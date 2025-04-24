`timescale 1 ns / 1 ps


// 
    //   C_S00_AXI_ID_WIDTH => 0,
    //   C_S00_AXI_DATA_WIDTH => 32,
    //   C_S00_AXI_ADDR_WIDTH => 8,
    //   C_S00_AXI_AWUSER_WIDTH => 0,
    //   C_S00_AXI_ARUSER_WIDTH => 0,
    //   C_S00_AXI_WUSER_WIDTH => 0,
    //   C_S00_AXI_RUSER_WIDTH => 0,
    //   C_S00_AXI_BUSER_WIDTH => 0


module jpg_full_axi #
(
    // Users to add parameters here
    parameter fixed_point_length = 32,  // Fixed point precision for YCbCr conversion
    // User parameters ends
    // Do not modify the parameters beyond this line

    // Width of ID for for write address, write data, read address and read data
    parameter integer C_S00_AXI_ID_WIDTH    = 1,
    // Width of S00_AXI data bus
    parameter integer C_S00_AXI_DATA_WIDTH    = 32,
    // Width of S00_AXI address bus
    parameter integer C_S00_AXI_ADDR_WIDTH    = 7,
    // Width of optional user defined signal in write address channel
    parameter integer C_S00_AXI_AWUSER_WIDTH    = 0,
    // Width of optional user defined signal in read address channel
    parameter integer C_S00_AXI_ARUSER_WIDTH    = 0,
    // Width of optional user defined signal in write data channel
    parameter integer C_S00_AXI_WUSER_WIDTH    = 0,
    // Width of optional user defined signal in read data channel
    parameter integer C_S00_AXI_RUSER_WIDTH    = 0,
    // Width of optional user defined signal in write response channel
    parameter integer C_S00_AXI_BUSER_WIDTH    = 0
)
(
    // Users to add ports here
    input wire clk,  // System clock for RGB to YCbCr conversion
    // User ports ends
    // Do not modify the ports beyond this line

    // Global Clock Signal
    input wire  S00_AXI_ACLK,
    // Global Reset Signal. This Signal is Active LOW
    input wire  S00_AXI_ARESETN,
    // Write Address ID
    input wire [C_S00_AXI_ID_WIDTH-1 : 0] S00_AXI_AWID,
    // Write address
    input wire [C_S00_AXI_ADDR_WIDTH-1 : 0] S00_AXI_AWADDR,
    // Burst length. The burst length gives the exact number of transfers in a burst
    input wire [7 : 0] S00_AXI_AWLEN,
    // Burst size. This signal indicates the size of each transfer in the burst
    input wire [2 : 0] S00_AXI_AWSIZE,
    // Burst type. The burst type and the size information, 
    // determine how the address for each transfer within the burst is calculated.
    input wire [1 : 0] S00_AXI_AWBURST,
    // Lock type. Provides additional information about the
    // atomic characteristics of the transfer.
    input wire  S00_AXI_AWLOCK,
    // Memory type. This signal indicates how transactions
    // are required to progress through a system.
    input wire [3 : 0] S00_AXI_AWCACHE,
    // Protection type. This signal indicates the privilege
    // and security level of the transaction, and whether
    // the transaction is a data access or an instruction access.
    input wire [2 : 0] S00_AXI_AWPROT,
    // Quality of Service, QoS identifier sent for each
    // write transaction.
    input wire [3 : 0] S00_AXI_AWQOS,
    // Region identifier. Permits a single physical interface
    // on a slave to be used for multiple logical interfaces.
    input wire [3 : 0] S00_AXI_AWREGION,
    // Optional User-defined signal in the write address channel.
    input wire [C_S00_AXI_AWUSER_WIDTH-1 : 0] S00_AXI_AWUSER,
    // Write address valid. This signal indicates that
    // the channel is signaling valid write address and
    // control information.
    input wire  S00_AXI_AWVALID,
    // Write address ready. This signal indicates that
    // the slave is ready to accept an address and associated
    // control signals.
    output wire  S00_AXI_AWREADY,
    // Write Data
    input wire [C_S00_AXI_DATA_WIDTH-1 : 0] S00_AXI_WDATA,
    // Write strobes. This signal indicates which byte
    // lanes hold valid data. There is one write strobe
    // bit for each eight bits of the write data bus.
    input wire [(C_S00_AXI_DATA_WIDTH/8)-1 : 0] S00_AXI_WSTRB,
    // Write last. This signal indicates the last transfer
    // in a write burst.
    input wire  S00_AXI_WLAST,
    // Optional User-defined signal in the write data channel.
    input wire [C_S00_AXI_WUSER_WIDTH-1 : 0] S00_AXI_WUSER,
    // Write valid. This signal indicates that valid write
    // data and strobes are available.
    input wire  S00_AXI_WVALID,
    // Write ready. This signal indicates that the slave
    // can accept the write data.
    output wire  S00_AXI_WREADY,
    // Response ID tag. This signal is the ID tag of the
    // write response.
    output wire [0-0 : 0] S00_AXI_BID,
    // Write response. This signal indicates the status
    // of the write transaction.
    output wire [1 : 0] S00_AXI_BRESP,
    // Optional User-defined signal in the write response channel.
    output wire [0-0 : 0] S00_AXI_BUSER,
    // Write response valid. This signal indicates that the
    // channel is signaling a valid write response.
    output wire  S00_AXI_BVALID,
    // Response ready. This signal indicates that the master
    // can accept a write response.
    input wire  S00_AXI_BREADY,
    // Read address ID. This signal is the identification
    // tag for the read address group of signals.
    input wire [0-0 : 0] S00_AXI_ARID,
    // Read address. This signal indicates the initial
    // address of a read burst transaction.
    input wire [C_S00_AXI_ADDR_WIDTH-1 : 0] S00_AXI_ARADDR,
    // Burst length. The burst length gives the exact number of transfers in a burst
    input wire [7 : 0] S00_AXI_ARLEN,
    // Burst size. This signal indicates the size of each transfer in the burst
    input wire [2 : 0] S00_AXI_ARSIZE,
    // Burst type. The burst type and the size information, 
    // determine how the address for each transfer within the burst is calculated.
    input wire [1 : 0] S00_AXI_ARBURST,
    // Lock type. Provides additional information about the
    // atomic characteristics of the transfer.
    input wire  S00_AXI_ARLOCK,
    // Memory type. This signal indicates how transactions
    // are required to progress through a system.
    input wire [3 : 0] S00_AXI_ARCACHE,
    // Protection type. This signal indicates the privilege
    // and security level of the transaction, and whether
    // the transaction is a data access or an instruction access.
    input wire [2 : 0] S00_AXI_ARPROT,
    // Quality of Service, QoS identifier sent for each
    // read transaction.
    input wire [3 : 0] S00_AXI_ARQOS,
    // Region identifier. Permits a single physical interface
    // on a slave to be used for multiple logical interfaces.
    input wire [3 : 0] S00_AXI_ARREGION,
    // Optional User-defined signal in the read address channel.
    input wire [0-0 : 0] S00_AXI_ARUSER,
    // Write address valid. This signal indicates that
    // the channel is signaling valid read address and
    // control information.
    input wire  S00_AXI_ARVALID,
    // Read address ready. This signal indicates that
    // the slave is ready to accept an address and associated
    // control signals.
    output wire  S00_AXI_ARREADY,
    // Read ID tag. This signal is the identification tag
    // for the read data group of signals generated by the slave.
    output wire [0-0 : 0] S00_AXI_RID,
    // Read Data
    output wire [C_S00_AXI_DATA_WIDTH-1 : 0] S00_AXI_RDATA,
    // Read response. This signal indicates the status of
    // the read transfer.
    output wire [1 : 0] S00_AXI_RRESP,
    // Read last. This signal indicates the last transfer
    // in a read burst.
    output wire  S00_AXI_RLAST,
    // Optional User-defined signal in the read address channel.
    output wire [0-0 : 0] S00_AXI_RUSER,
    // Read valid. This signal indicates that the channel
    // is signaling the required read data.
    output wire  S00_AXI_RVALID,
    // Read ready. This signal indicates that the master can
    // accept the read data and response information.
    input wire  S00_AXI_RREADY
);

    // AXI4FULL signals
    reg [C_S00_AXI_ADDR_WIDTH-1 : 0]     axi_awaddr;
    reg     axi_awready;
    reg     axi_wready;
    reg [C_S00_AXI_ID_WIDTH-1 : 0]     axi_bid;
    reg [1 : 0]     axi_bresp;
    reg [C_S00_AXI_BUSER_WIDTH-1 : 0]     axi_buser;
    reg     axi_bvalid;
    reg [C_S00_AXI_ADDR_WIDTH-1 : 0]     axi_araddr;
    reg     axi_arready;
    reg [C_S00_AXI_ID_WIDTH-1 : 0]     axi_rid;
    reg [1 : 0]     axi_rresp;
    reg     axi_rlast;
    reg [C_S00_AXI_RUSER_WIDTH-1 : 0]     axi_ruser;
    reg     axi_rvalid;
    // aw_wrap_en determines wrap boundary and enables wrapping
    wire aw_wrap_en;
    // ar_wrap_en determines wrap boundary and enables wrapping
    wire ar_wrap_en;
    // aw_wrap_size is the size of the write transfer, the
    // write address wraps to a lower address if upper address
    // limit is reached
    wire [31:0]  aw_wrap_size ; 
    // ar_wrap_size is the size of the read transfer, the
    // read address wraps to a lower address if upper address
    // limit is reached
    wire [31:0]  ar_wrap_size ; 
    // The axi_awlen_cntr internal write address counter to keep track of beats in a burst transaction
    reg [7:0] axi_awlen_cntr;
    //The axi_arlen_cntr internal read address counter to keep track of beats in a burst transaction
    reg [7:0] axi_arlen_cntr;
    reg [1:0] axi_arburst;
    reg [1:0] axi_awburst;
    reg [7:0] axi_arlen;
    reg [7:0] axi_awlen;
    //local parameter for addressing 32 bit / 64 bit C_S00_AXI_DATA_WIDTH
    //ADDR_LSB is used for addressing 32/64 bit registers/memories
    //ADDR_LSB = 2 for 32 bits (n downto 2) 
    //ADDR_LSB = 3 for 64 bits (n downto 3)
    //ADDR_LSB = 4 for 128 bits (n downto 4)
    localparam integer ADDR_LSB = (C_S00_AXI_DATA_WIDTH/32)+ 1;
    localparam integer OPT_MEM_ADDR_BITS = 4;
    localparam integer USER_NUM_MEM = 1;

    //----------------------------------------------
    //-- Signals for user logic memory space example
    //------------------------------------------------
    wire [OPT_MEM_ADDR_BITS:0] mem_address_read;
    wire [OPT_MEM_ADDR_BITS:0] mem_address_write;
    wire [C_S00_AXI_DATA_WIDTH-1:0] mem_data_out[0 : USER_NUM_MEM-1];

    // Add special registers
    reg [31:0] special_register_start;    // Control register for starting conversion
    reg [31:0] special_register_complete; // Status register indicating conversion completion
    reg [7:0] r_data [0:63];  // 64 bytes for R component (8x8 block)
    reg [7:0] g_data [0:63];  // 64 bytes for G component (8x8 block)
    reg [7:0] b_data [0:63];  // 64 bytes for B component (8x8 block)
    reg [fixed_point_length-1:0] y_data [0:63];  // 64 fixed-point values for Y component
    reg [fixed_point_length-1:0] cb_data [0:63]; // 64 fixed-point values for Cb component
    reg [fixed_point_length-1:0] cr_data [0:63]; // 64 fixed-point values for Cr component

    // Add state machine states
    localparam IDLE = 2'b00,     // Waiting for start command
               WORKING = 2'b01,  // Converting RGB to YCbCr
               COMPLETE = 2'b10; // Conversion complete
    reg [1:0] operation_state;

    // Declare integer i outside the always block
    integer i;

    // Declare a register to drive S00_AXI_RDATA
    reg [C_S00_AXI_DATA_WIDTH-1 : 0] axi_rdata;

    // Latch write address when AW handshake completes
    reg [C_S00_AXI_ADDR_WIDTH-1:0] awaddr_latched;
    
    // Latch read address when AR handshake completes
    reg [C_S00_AXI_ADDR_WIDTH-1:0] araddr_latched;

    // Declare wire signals for RGB to YCbCr conversion - MOVED TO TOP LEVEL
    wire [8*64-1:0] r_all;
    wire [8*64-1:0] g_all;
    wire [8*64-1:0] b_all;
    wire [fixed_point_length*64-1:0] y_all;
    wire [fixed_point_length*64-1:0] cb_all;
    wire [fixed_point_length*64-1:0] cr_all;

    // I/O Connections assignments
    assign S00_AXI_AWREADY    = axi_awready;
    assign S00_AXI_WREADY    = axi_wready;
    assign S00_AXI_BRESP    = axi_bresp;
    assign S00_AXI_BUSER    = axi_buser;
    assign S00_AXI_BVALID    = axi_bvalid;
    assign S00_AXI_ARREADY    = axi_arready;
    assign S00_AXI_RRESP    = axi_rresp;
    assign S00_AXI_RLAST    = axi_rlast;
    assign S00_AXI_RUSER    = axi_ruser;
    assign S00_AXI_RVALID    = axi_rvalid;
    assign S00_AXI_BID = axi_bid;
    assign S00_AXI_RID = axi_rid;
    assign  aw_wrap_size = (C_S00_AXI_DATA_WIDTH/8 * (axi_awlen)); 
    assign  ar_wrap_size = (C_S00_AXI_DATA_WIDTH/8 * (axi_arlen)); 
    assign  aw_wrap_en = ((axi_awaddr & aw_wrap_size) == aw_wrap_size)? 1'b1: 1'b0;
    assign  ar_wrap_en = ((axi_araddr & ar_wrap_size) == ar_wrap_size)? 1'b1: 1'b0;
    assign S00_AXI_RDATA = axi_rdata;

    // Generate assignments to pack the RGB data - MOVED OUT OF ALWAYS BLOCK
    genvar k;
    generate
        for (k = 0; k < 64; k = k + 1) begin : pack_rgb
            assign r_all[k*8 +: 8] = r_data[k];
            assign g_all[k*8 +: 8] = g_data[k];
            assign b_all[k*8 +: 8] = b_data[k];
        end
    endgenerate

    // Instantiate the converter - MOVED OUT OF ALWAYS BLOCK
    rgb2ycbcr_container #(
        .fixed_point_length(fixed_point_length)
    ) converter (
        .clk(clk),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_all(y_all),
        .cb_all(cb_all),
        .cr_all(cr_all)
    );

    always @(posedge S00_AXI_ACLK) begin
        if (S00_AXI_ARESETN == 1'b0) begin
            // Reset state
            operation_state <= IDLE;
            special_register_start <= 32'b0;
            special_register_complete <= 32'b0;
            // Reset data registers
            for (i = 0; i < 64; i = i + 1) begin
                r_data[i] <= 8'b0;
                g_data[i] <= 8'b0;
                b_data[i] <= 8'b0;
                y_data[i] <= {fixed_point_length{1'b0}};
                cb_data[i] <= {fixed_point_length{1'b0}};
                cr_data[i] <= {fixed_point_length{1'b0}};
            end
            // Initialize address latches
            awaddr_latched <= 0;
            araddr_latched <= 0;
        end else begin
            // Handle AXI writes
            if (S00_AXI_WVALID && S00_AXI_WREADY) begin
                if (awaddr_latched[6:0] == 7'h00) begin
                    special_register_start <= S00_AXI_WDATA;  // Write to control register
                end else if (awaddr_latched[6:0] >= 7'h10 && awaddr_latched[6:0] < 7'h30) begin
                    // Store R component data (8x8 block)
                    r_data[awaddr_latched[5:0]] <= S00_AXI_WDATA[7:0];
                end else if (awaddr_latched[6:0] >= 7'h30 && awaddr_latched[6:0] < 7'h50) begin
                    // Store G component data (8x8 block)
                    g_data[awaddr_latched[5:0]] <= S00_AXI_WDATA[7:0];
                end else if (awaddr_latched[6:0] >= 7'h50 && awaddr_latched[6:0] < 7'h70) begin
                    // Store B component data (8x8 block)
                    b_data[awaddr_latched[5:0]] <= S00_AXI_WDATA[7:0];
                end
            end

            // Handle AXI reads
            if (S00_AXI_ARVALID && S00_AXI_ARREADY) begin
                if (araddr_latched[6:0] == 7'h00) begin
                    axi_rdata <= special_register_complete;  // Read status register
                end else if (araddr_latched[6:0] >= 7'h10 && araddr_latched[6:0] < 7'h30) begin
                    // Read Y component data (8x8 block)
                    axi_rdata <= y_data[araddr_latched[5:0]];
                end else if (araddr_latched[6:0] >= 7'h30 && araddr_latched[6:0] < 7'h50) begin
                    // Read Cb component data (8x8 block)
                    axi_rdata <= cb_data[araddr_latched[5:0]];
                end else if (araddr_latched[6:0] >= 7'h50 && araddr_latched[6:0] < 7'h70) begin
                    // Read Cr component data (8x8 block)
                    axi_rdata <= cr_data[araddr_latched[5:0]];
                end else begin
                    axi_rdata <= 32'hDEADBEEF; // Undefined address debug value
                end
            end

            // State machine logic
            case (operation_state)
                IDLE: begin
                    if (special_register_start == 32'h0f0f0f0f) begin
                        operation_state <= WORKING;
                    end
                end
                WORKING: begin
                    // Unpack the results from the converter - NOW REFERENCING DECLARED WIRES
                    for (i = 0; i < 64; i = i + 1) begin
                        y_data[i] <= y_all[i*fixed_point_length +: fixed_point_length];
                        cb_data[i] <= cb_all[i*fixed_point_length +: fixed_point_length];
                        cr_data[i] <= cr_all[i*fixed_point_length +: fixed_point_length];
                    end
                    operation_state <= COMPLETE;
                end
                COMPLETE: begin
                    special_register_complete <= 32'hFFFFFFFF; // Indicate completion
                    operation_state <= IDLE;
                end
            endcase

            // Latch write address when AW handshake completes
            if (S00_AXI_AWVALID && S00_AXI_AWREADY) begin
                awaddr_latched <= S00_AXI_AWADDR;
            end

            // Latch read address when AR handshake completes
            if (S00_AXI_ARVALID && S00_AXI_ARREADY) begin
                araddr_latched <= S00_AXI_ARADDR;
            end
        end
    end

    // Implement Write state machine
    localparam Idle = 2'b00, Raddr = 2'b10, Rdata = 2'b11, Waddr = 2'b10, Wdata = 2'b11; 
    reg [1:0] state_read; 
    reg [1:0] state_write; 

    always @(posedge S00_AXI_ACLK) begin
        if (S00_AXI_ARESETN == 1'b0) begin
            axi_awready <= 0;
            axi_wready <= 0;
            axi_bvalid <= 0;
            axi_buser <= 0;
            axi_awburst <= 0;
            axi_bid <= 0;
            axi_awlen <= 0;
            axi_bresp <= 0;
            state_write <= Idle;
        end else begin
            case(state_write)
                Idle: begin
                    if(S00_AXI_ARESETN == 1'b1) begin
                        axi_awready <= 1'b1;
                        axi_wready <= 1'b1;
                        state_write <= Waddr;
                    end else state_write <= state_write;
                end
                Waddr: begin
                    if (S00_AXI_AWVALID && axi_awready) begin
                        if (S00_AXI_WVALID && S00_AXI_WLAST) begin
                            axi_bvalid <= 1'b1;
                            axi_awready <= 1'b1;
                            state_write <= Waddr;
                        end else begin
                            if (S00_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;
                            state_write <= Wdata;
                            axi_awready <= 1'b0;
                        end
                        axi_awburst <= S00_AXI_AWBURST;
                        axi_awlen <= S00_AXI_AWLEN;
                        axi_bid <= S00_AXI_AWID;
                    end else begin
                        state_write <= state_write;
                        if (S00_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;
                    end
                end
                Wdata: begin
                    if (S00_AXI_WVALID && S00_AXI_WLAST) begin
                        state_write <= Waddr;
                        axi_bvalid <= 1'b1;
                        axi_awready <= 1'b1;
                    end else state_write <= state_write;
                end
            endcase
        end
    end

    // Implement Read state machine
    always @(posedge S00_AXI_ACLK) begin
        if (S00_AXI_ARESETN == 1'b0) begin
            axi_arready <= 1'b0;
            axi_arburst <= 1'b0;
            axi_arlen <= 1'b0;
            axi_rid <= 1'b0;
            axi_rlast <= 1'b0;
            axi_ruser <= 1'b0;
            axi_rvalid <= 1'b0;
            axi_rresp <= 1'b0;
            state_read <= Idle;
        end else begin
            case(state_read)
                Idle: begin
                    if (S00_AXI_ARESETN == 1'b1) begin
                        state_read <= Raddr;
                        axi_arready <= 1'b1;
                    end else state_read <= state_read;
                end
                Raddr: begin
                    if (S00_AXI_ARVALID && axi_arready) begin
                        state_read <= Rdata;
                        axi_rvalid <= 1'b1;
                        axi_arready <= 1'b0;
                        axi_rid <= S00_AXI_ARID;
                        if (S00_AXI_ARLEN == 1'b0) axi_rlast <= 1'b1;
                        axi_arburst <= S00_AXI_ARBURST;
                        axi_arlen <= S00_AXI_ARLEN;
                    end else state_read <= state_read;
                end
                Rdata: begin
                    if ((axi_arlen_cntr == axi_arlen-1) && ~axi_rlast && S00_AXI_RREADY) axi_rlast <= 1'b1;
                    if (axi_rvalid && S00_AXI_RREADY && axi_rlast) begin
                        axi_rvalid <= 1'b0;
                        axi_arready <= 1'b1;
                        axi_rlast <= 1'b0;
                        state_read <= Raddr;
                    end else state_read <= state_read;
                end
            endcase
        end
    end

    // This always block handles the write address increment
    always @(posedge S00_AXI_ACLK) begin
        if (S00_AXI_ARESETN == 1'b0) begin
            axi_awlen_cntr <= 0;
            axi_awaddr <= 0;
        end else begin
            if (S00_AXI_AWVALID && axi_awready) begin
                if (S00_AXI_WVALID) begin
                    axi_awlen_cntr <= 1;
                    if ((S00_AXI_AWBURST == 2'b01) || ((S00_AXI_AWBURST == 2'b10) && (S00_AXI_AWLEN != 0))) begin
                        axi_awaddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= S00_AXI_AWADDR[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    end else begin
                        axi_awaddr <= axi_awaddr;
                    end
                end else begin
                    axi_awlen_cntr <= 0;
                    axi_awaddr <= S00_AXI_AWADDR[C_S00_AXI_ADDR_WIDTH - 1:0];
                end
            end else if((axi_awlen_cntr < axi_awlen) && S00_AXI_WVALID) begin
                axi_awlen_cntr <= axi_awlen_cntr + 1;
                case (axi_awburst)
                    2'b00: // fixed burst
                        axi_awaddr <= axi_awaddr;
                    2'b01: //incremental burst
                        axi_awaddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= axi_awaddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    2'b10: //Wrapping burst
                        if (aw_wrap_en)
                            axi_awaddr <= (axi_awaddr - aw_wrap_size);
                        else
                            axi_awaddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= axi_awaddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    default: //reserved (incremental burst for example)
                        axi_awaddr <= axi_awaddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                endcase
            end
        end
    end

    // This always block handles the read address increment
    always @(posedge S00_AXI_ACLK) begin
        if (S00_AXI_ARESETN == 1'b0) begin
            axi_arlen_cntr <= 0;
            axi_araddr <= 0;
        end else begin
            if (S00_AXI_ARVALID && axi_arready) begin
                axi_arlen_cntr <= 0;
                axi_araddr <= S00_AXI_ARADDR[C_S00_AXI_ADDR_WIDTH - 1:0];
            end else if((axi_arlen_cntr <= axi_arlen) && axi_rvalid && S00_AXI_RREADY) begin
                axi_arlen_cntr <= axi_arlen_cntr + 1;
                case (axi_arburst)
                    2'b00: // fixed burst
                        axi_araddr <= axi_araddr;
                    2'b01: //incremental burst
                        axi_araddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= axi_araddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    2'b10: //Wrapping burst
                        if (ar_wrap_en)
                            axi_araddr <= (axi_araddr - ar_wrap_size);
                        else
                            axi_araddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= axi_araddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    default: //reserved (incremental burst for example)
                        axi_araddr <= axi_araddr[C_S00_AXI_ADDR_WIDTH - 1:ADDR_LSB]+1;
                endcase
            end
        end
    end

endmodule
