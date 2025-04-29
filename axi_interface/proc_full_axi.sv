`timescale 1 ns / 1 ps

module proc_full_axi #
(
    // Users to add parameters here
    // User parameters ends
    // Do not modify the parameters beyond this line

    parameter integer C_S_AXI_ID_WIDTH    = 1,
    parameter integer C_S_AXI_DATA_WIDTH    = 32,
    parameter integer C_S_AXI_ADDR_WIDTH    = 7,
    parameter integer C_S_AXI_AWUSER_WIDTH    = 0,
    parameter integer C_S_AXI_ARUSER_WIDTH    = 0,
    parameter integer C_S_AXI_WUSER_WIDTH    = 0,
    parameter integer C_S_AXI_RUSER_WIDTH    = 0,
    parameter integer C_S_AXI_BUSER_WIDTH    = 0,

    parameter integer BUF_DEPTH          = 32,
)
(
    input wire  S_AXI_ACLK,
    input wire  S_AXI_ARESETN,
    input wire [C_S_AXI_ID_WIDTH-1 : 0] S_AXI_AWID,
    input wire [C_S_AXI_ADDR_WIDTH-1 : 0] S_AXI_AWADDR,

    input wire [7 : 0] S_AXI_AWLEN,
    input wire [2 : 0] S_AXI_AWSIZE,

    input wire [1 : 0] S_AXI_AWBURST,
    // Lock type. Provides additional information about the
    // atomic characteristics of the transfer.
    input wire  S_AXI_AWLOCK,
    // Memory type. This signal indicates how transactions
    // are required to progress through a system.
    input wire [3 : 0] S_AXI_AWCACHE,
    // Protection type. This signal indicates the privilege
    // and security level of the transaction, and whether
    // the transaction is a data access or an instruction access.
    input wire [2 : 0] S_AXI_AWPROT,
    // Quality of Service, QoS identifier sent for each
    // write transaction.
    input wire [3 : 0] S_AXI_AWQOS,
    // Region identifier. Permits a single physical interface
    // on a slave to be used for multiple logical interfaces.
    input wire [3 : 0] S_AXI_AWREGION,
    // Optional User-defined signal in the write address channel.
    input wire [C_S_AXI_AWUSER_WIDTH-1 : 0] S_AXI_AWUSER,
    // Write address valid. This signal indicates that
    // the channel is signaling valid write address and
    // control information.
    input wire  S_AXI_AWVALID,
    // Write address ready. This signal indicates that
    // the slave is ready to accept an address and associated
    // control signals.
    output wire  S_AXI_AWREADY,
    // Write Data
    input wire [C_S_AXI_DATA_WIDTH-1 : 0] S_AXI_WDATA,
    // Write strobes. This signal indicates which byte
    // lanes hold valid data. There is one write strobe
    // bit for each eight bits of the write data bus.
    input wire [(C_S_AXI_DATA_WIDTH/8)-1 : 0] S_AXI_WSTRB,
    // Write last. This signal indicates the last transfer
    // in a write burst.
    input wire  S_AXI_WLAST,
    // Optional User-defined signal in the write data channel.
    input wire [C_S_AXI_WUSER_WIDTH-1 : 0] S_AXI_WUSER,
    // Write valid. This signal indicates that valid write
    // data and strobes are available.
    input wire  S_AXI_WVALID,
    // Write ready. This signal indicates that the slave
    // can accept the write data.
    output wire  S_AXI_WREADY,
    // Response ID tag. This signal is the ID tag of the
    // write response.
    output wire [C_S_AXI_ID_WIDTH-1 : 0] S_AXI_BID,
    // Write response. This signal indicates the status
    // of the write transaction.
    output wire [1 : 0] S_AXI_BRESP,
    // Optional User-defined signal in the write response channel.
    output wire [C_S_AXI_BUSER_WIDTH-1 : 0] S_AXI_BUSER,
    // Write response valid. This signal indicates that the
    // channel is signaling a valid write response.
    output wire  S_AXI_BVALID,
    // Response ready. This signal indicates that the master
    // can accept a write response.
    input wire  S_AXI_BREADY,
    // Read address ID. This signal is the identification
    // tag for the read address group of signals.
    input wire [C_S_AXI_ID_WIDTH-1 : 0] S_AXI_ARID,
    // Read address. This signal indicates the initial
    // address of a read burst transaction.
    input wire [C_S_AXI_ADDR_WIDTH-1 : 0] S_AXI_ARADDR,
    // Burst length. The burst length gives the exact number of transfers in a burst
    input wire [7 : 0] S_AXI_ARLEN,
    // Burst size. This signal indicates the size of each transfer in the burst
    input wire [2 : 0] S_AXI_ARSIZE,
    // Burst type. The burst type and the size information, 
    // determine how the address for each transfer within the burst is calculated.
    input wire [1 : 0] S_AXI_ARBURST,
    // Lock type. Provides additional information about the
    // atomic characteristics of the transfer.
    input wire  S_AXI_ARLOCK,
    // Memory type. This signal indicates how transactions
    // are required to progress through a system.
    input wire [3 : 0] S_AXI_ARCACHE,
    // Protection type. This signal indicates the privilege
    // and security level of the transaction, and whether
    // the transaction is a data access or an instruction access.
    input wire [2 : 0] S_AXI_ARPROT,
    // Quality of Service, QoS identifier sent for each
    // read transaction.
    input wire [3 : 0] S_AXI_ARQOS,
    // Region identifier. Permits a single physical interface
    // on a slave to be used for multiple logical interfaces.
    input wire [3 : 0] S_AXI_ARREGION,
    // Optional User-defined signal in the read address channel.
    input wire [C_S_AXI_ARUSER_WIDTH-1 : 0] S_AXI_ARUSER,
    // Write address valid. This signal indicates that
    // the channel is signaling valid read address and
    // control information.
    input wire  S_AXI_ARVALID,
    // Read address ready. This signal indicates that
    // the slave is ready to accept an address and associated
    // control signals.
    output wire  S_AXI_ARREADY,
    // Read ID tag. This signal is the identification tag
    // for the read data group of signals generated by the slave.
    output wire [C_S_AXI_ID_WIDTH-1 : 0] S_AXI_RID,
    // Read Data
    output wire [C_S_AXI_DATA_WIDTH-1 : 0] S_AXI_RDATA,
    // Read response. This signal indicates the status of
    // the read transfer.
    output wire [1 : 0] S_AXI_RRESP,
    // Read last. This signal indicates the last transfer
    // in a read burst.
    output wire  S_AXI_RLAST,
    // Optional User-defined signal in the read address channel.
    output wire [C_S_AXI_RUSER_WIDTH-1 : 0] S_AXI_RUSER,
    // Read valid. This signal indicates that the channel
    // is signaling the required read data.
    output wire  S_AXI_RVALID,
    // Read ready. This signal indicates that the master can
    // accept the read data and response information.
    input wire  S_AXI_RREADY
);

    // ============= 1. 内存映射常量 =========================
    localparam int ADDR_BITS = C_S_AXI_ADDR_WIDTH;
    localparam int REG_START = 7'h00;   // 0x00 CTRL
    localparam int REG_STAT  = 7'h04;   // 0x04 STAT
    // 数据区按 32bit word 编址
    // 0b1_0_xxxxx : input  (0x40~0x5F)
    // 0b1_1_xxxxx : output (0x60~0x7F)
    localparam bit INPUT_SEL  = 1'b0;
    localparam bit OUTPUT_SEL = 1'b1;

    // ============= 2. Buffer ===============================
    logic [C_S_AXI_DATA_WIDTH-1:0] in_buf [BUF_DEPTH];
    logic [C_S_AXI_DATA_WIDTH-1:0] out_buf[BUF_DEPTH];

    // ============= 3. 寄存器域 =============================
    logic start_reg;          // 写 1 启动
    logic done_reg;           // 核写 1 完成

    // AXI4FULL signals
    reg [C_S_AXI_ADDR_WIDTH-1 : 0]     axi_awaddr;
    reg     axi_awready;
    reg     axi_wready;
    reg [C_S_AXI_ID_WIDTH-1 : 0]     axi_bid;
    reg [1 : 0]     axi_bresp;
    reg [C_S_AXI_BUSER_WIDTH-1 : 0]     axi_buser;
    reg     axi_bvalid;
    reg [C_S_AXI_ADDR_WIDTH-1 : 0]     axi_araddr;
    reg     axi_arready;
    reg [C_S_AXI_ID_WIDTH-1 : 0]     axi_rid;
    reg [1 : 0]     axi_rresp;
    reg     axi_rlast;
    reg [C_S_AXI_RUSER_WIDTH-1 : 0]     axi_ruser;
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
    //local parameter for addressing 32 bit / 64 bit C_S_AXI_DATA_WIDTH
    //ADDR_LSB is used for addressing 32/64 bit registers/memories
    //ADDR_LSB = 2 for 32 bits (n downto 2) 
    //ADDR_LSB = 3 for 64 bits (n downto 3)
    //ADDR_LSB = 4 for 128 bits (n downto 4)
    localparam integer ADDR_LSB = (C_S_AXI_DATA_WIDTH/32)+ 1;
    
    // Latch write address when AW handshake completes
    reg [C_S_AXI_ADDR_WIDTH-1:0] awaddr_latched;
    
    // Latch read address when AR handshake completes
    reg [C_S_AXI_ADDR_WIDTH-1:0] araddr_latched;
    
    // I/O Connections assignments
    assign S_AXI_AWREADY    = axi_awready;
    assign S_AXI_WREADY    = axi_wready;
    assign S_AXI_BRESP    = axi_bresp;
    assign S_AXI_BUSER    = axi_buser;
    assign S_AXI_BVALID    = axi_bvalid;
    assign S_AXI_ARREADY    = axi_arready;
    assign S_AXI_RRESP    = axi_rresp;
    assign S_AXI_RLAST    = axi_rlast;
    assign S_AXI_RUSER    = axi_ruser;
    assign S_AXI_RVALID    = axi_rvalid;
    assign S_AXI_BID = axi_bid;
    assign S_AXI_RID = axi_rid;
    assign  aw_wrap_size = (C_S_AXI_DATA_WIDTH/8 * (axi_awlen)); 
    assign  ar_wrap_size = (C_S_AXI_DATA_WIDTH/8 * (axi_arlen)); 
    assign  aw_wrap_en = ((axi_awaddr & aw_wrap_size) == aw_wrap_size)? 1'b1: 1'b0;
    assign  ar_wrap_en = ((axi_araddr & ar_wrap_size) == ar_wrap_size)? 1'b1: 1'b0;

    // ============= 4. AXI 写通路 ===========================
    // 这里只给出与"用户区"有关的写入
    // 完整握手与地址增量逻辑可直接沿用旧代码
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            start_reg <= 1'b0;
            // Initialize input buffer to 0
            for (int i = 0; i < BUF_DEPTH; i = i + 1) begin
                in_buf[i] <= {C_S_AXI_DATA_WIDTH{1'b0}};
            end
            // Initialize address latches
            awaddr_latched <= 0;
        end
        else begin
            // Latch write address when AW handshake completes
            if (S_AXI_AWVALID && axi_awready) begin
                awaddr_latched <= S_AXI_AWADDR;
            end
            
            // Handle AXI writes when write data valid and ready
            if (S_AXI_WVALID && axi_wready) begin
                unique case (awaddr_latched[ADDR_BITS-1:0])
                    REG_START : start_reg <= S_AXI_WDATA[0];
                    REG_STAT  : done_reg <= (done_reg & S_AXI_WDATA[0]); // Can clear the done bit by writing 0
                    default   : begin
                        // 数据写入
                        if (awaddr_latched[6] == 1'b1) begin
                            if (awaddr_latched[5] == INPUT_SEL)
                                in_buf[awaddr_latched[4:0]] <= S_AXI_WDATA;
                            // 输出区禁止 CPU 写，可忽略或保护
                        end
                    end
                endcase
            end
        end
    end

    // ============= 5. AXI 读通路 ===========================
    logic [C_S_AXI_DATA_WIDTH-1:0] axi_rdata;
    
    always_comb begin
        if (araddr_latched[ADDR_BITS-1:0] == REG_STAT) begin
            axi_rdata = {31'b0, done_reg};
        end
        else if (araddr_latched[ADDR_BITS-1:0] == REG_START) begin
            axi_rdata = {31'b0, start_reg};
        end
        else if (araddr_latched[6] == 1'b1) begin
            if (araddr_latched[5] == INPUT_SEL)
                axi_rdata = in_buf[araddr_latched[4:0]];
            else // OUTPUT_SEL
                axi_rdata = out_buf[araddr_latched[4:0]];
        end
        else begin
            axi_rdata = 32'hDEADBEEF; // Undefined address debug value
        end
    end
    
    assign S_AXI_RDATA = axi_rdata;

    // ============= 6. 处理核实例 ===========================
    logic core_busy, core_done;
    
    (* keep = "true" *)   // 防止综合优化掉端口数组
    user_core_pass_thru #(
        .DATA_WIDTH (C_S_AXI_DATA_WIDTH),
        .DEPTH      (BUF_DEPTH)
    ) u_core (
        .clk     (S_AXI_ACLK),
        .rst_n   (S_AXI_ARESETN),
        .start   (start_reg),
        .busy    (core_busy),
        .done    (core_done),
        .in_buf  (in_buf),
        .out_buf (out_buf)
    );

    // ============= 7. 完成/清零逻辑 ========================
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            done_reg <= 1'b0;
            // Initialize address latches
            araddr_latched <= 0;
        end
        else begin
            // Latch read address when AR handshake completes
            if (S_AXI_ARVALID && axi_arready) begin
                araddr_latched <= S_AXI_ARADDR;
            end
            
            if (core_done)          
                done_reg <= 1'b1;
            else if (start_reg == 1'b0) 
                done_reg <= 1'b0;  // 写 0 清零
        end
    end

    // Implement Write state machine
    localparam Idle = 2'b00, Raddr = 2'b10, Rdata = 2'b11, Waddr = 2'b10, Wdata = 2'b11; 
    reg [1:0] state_read; 
    reg [1:0] state_write; 

    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
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
                    if(S_AXI_ARESETN == 1'b1) begin
                        axi_awready <= 1'b1;
                        axi_wready <= 1'b1;
                        state_write <= Waddr;
                    end else state_write <= state_write;
                end
                Waddr: begin
                    if (S_AXI_AWVALID && axi_awready) begin
                        if (S_AXI_WVALID && S_AXI_WLAST) begin
                            axi_bvalid <= 1'b1;
                            axi_awready <= 1'b1;
                            state_write <= Waddr;
                        end else begin
                            if (S_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;
                            state_write <= Wdata;
                            axi_awready <= 1'b0;
                        end
                        axi_awburst <= S_AXI_AWBURST;
                        axi_awlen <= S_AXI_AWLEN;
                        axi_bid <= S_AXI_AWID;
                    end else begin
                        state_write <= state_write;
                        if (S_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;
                    end
                end
                Wdata: begin
                    if (S_AXI_WVALID && S_AXI_WLAST) begin
                        state_write <= Waddr;
                        axi_bvalid <= 1'b1;
                        axi_awready <= 1'b1;
                    end else state_write <= state_write;
                end
            endcase
        end
    end

    // Implement Read state machine
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
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
                    if (S_AXI_ARESETN == 1'b1) begin
                        state_read <= Raddr;
                        axi_arready <= 1'b1;
                    end else state_read <= state_read;
                end
                Raddr: begin
                    if (S_AXI_ARVALID && axi_arready) begin
                        state_read <= Rdata;
                        axi_rvalid <= 1'b1;
                        axi_arready <= 1'b0;
                        axi_rid <= S_AXI_ARID;
                        if (S_AXI_ARLEN == 0) axi_rlast <= 1'b1;
                        axi_arburst <= S_AXI_ARBURST;
                        axi_arlen <= S_AXI_ARLEN;
                    end else state_read <= state_read;
                end
                Rdata: begin
                    if ((axi_arlen_cntr == axi_arlen-1) && ~axi_rlast && S_AXI_RREADY) axi_rlast <= 1'b1;
                    if (axi_rvalid && S_AXI_RREADY && axi_rlast) begin
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
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_awlen_cntr <= 0;
            axi_awaddr <= 0;
        end else begin
            if (S_AXI_AWVALID && axi_awready) begin
                if (S_AXI_WVALID) begin
                    axi_awlen_cntr <= 1;
                    if ((S_AXI_AWBURST == 2'b01) || ((S_AXI_AWBURST == 2'b10) && (S_AXI_AWLEN != 0))) begin
                        axi_awaddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= S_AXI_AWADDR[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    end else begin
                        axi_awaddr <= axi_awaddr;
                    end
                end else begin
                    axi_awlen_cntr <= 0;
                    axi_awaddr <= S_AXI_AWADDR[C_S_AXI_ADDR_WIDTH - 1:0];
                end
            end else if((axi_awlen_cntr < axi_awlen) && S_AXI_WVALID) begin
                axi_awlen_cntr <= axi_awlen_cntr + 1;
                case (axi_awburst)
                    2'b00: // fixed burst
                        axi_awaddr <= axi_awaddr;
                    2'b01: //incremental burst
                        axi_awaddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= axi_awaddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    2'b10: //Wrapping burst
                        if (aw_wrap_en)
                            axi_awaddr <= (axi_awaddr - aw_wrap_size);
                        else
                            axi_awaddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= axi_awaddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    default: //reserved (incremental burst for example)
                        axi_awaddr <= axi_awaddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                endcase
            end
        end
    end

    // This always block handles the read address increment
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_arlen_cntr <= 0;
            axi_araddr <= 0;
        end else begin
            if (S_AXI_ARVALID && axi_arready) begin
                axi_arlen_cntr <= 0;
                axi_araddr <= S_AXI_ARADDR[C_S_AXI_ADDR_WIDTH - 1:0];
            end else if((axi_arlen_cntr <= axi_arlen) && axi_rvalid && S_AXI_RREADY) begin
                axi_arlen_cntr <= axi_arlen_cntr + 1;
                case (axi_arburst)
                    2'b00: // fixed burst
                        axi_araddr <= axi_araddr;
                    2'b01: //incremental burst
                        axi_araddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= axi_araddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    2'b10: //Wrapping burst
                        if (ar_wrap_en)
                            axi_araddr <= (axi_araddr - ar_wrap_size);
                        else
                            axi_araddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] <= axi_araddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB] + 1;
                    default: //reserved (incremental burst for example)
                        axi_araddr <= axi_araddr[C_S_AXI_ADDR_WIDTH - 1:ADDR_LSB]+1;
                endcase
            end
        end
    end

endmodule 