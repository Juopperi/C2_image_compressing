`timescale 1 ns / 1 ps

module state_machine_woint_slave_full_v1_0_S00_AXI_tb;

    // Parameters
    parameter C_S_AXI_ID_WIDTH = 1;
    parameter C_S_AXI_DATA_WIDTH = 32;
    parameter C_S_AXI_ADDR_WIDTH = 7;

    // Signals
    reg S_AXI_ACLK;
    reg S_AXI_ARESETN;
    reg [C_S_AXI_ID_WIDTH-1 : 0] S_AXI_AWID;
    reg [C_S_AXI_ADDR_WIDTH-1 : 0] S_AXI_AWADDR;
    reg [7 : 0] S_AXI_AWLEN;
    reg [2 : 0] S_AXI_AWSIZE;
    reg [1 : 0] S_AXI_AWBURST;
    reg S_AXI_AWLOCK;
    reg [3 : 0] S_AXI_AWCACHE;
    reg [2 : 0] S_AXI_AWPROT;
    reg [3 : 0] S_AXI_AWQOS;
    reg [3 : 0] S_AXI_AWREGION;
    reg S_AXI_AWVALID;
    wire S_AXI_AWREADY;
    reg [C_S_AXI_DATA_WIDTH-1 : 0] S_AXI_WDATA;
    reg [(C_S_AXI_DATA_WIDTH/8)-1 : 0] S_AXI_WSTRB;
    reg S_AXI_WLAST;
    reg S_AXI_WVALID;
    wire S_AXI_WREADY;
    wire [C_S_AXI_ID_WIDTH-1 : 0] S_AXI_BID;
    wire [1 : 0] S_AXI_BRESP;
    wire S_AXI_BVALID;
    reg S_AXI_BREADY;
    reg [C_S_AXI_ID_WIDTH-1 : 0] S_AXI_ARID;
    reg [C_S_AXI_ADDR_WIDTH-1 : 0] S_AXI_ARADDR;
    reg [7 : 0] S_AXI_ARLEN;
    reg [2 : 0] S_AXI_ARSIZE;
    reg [1 : 0] S_AXI_ARBURST;
    reg S_AXI_ARLOCK;
    reg [3 : 0] S_AXI_ARCACHE;
    reg [2 : 0] S_AXI_ARPROT;
    reg [3 : 0] S_AXI_ARQOS;
    reg [3 : 0] S_AXI_ARREGION;
    reg S_AXI_ARVALID;
    wire S_AXI_ARREADY;
    wire [C_S_AXI_ID_WIDTH-1 : 0] S_AXI_RID;
    wire [C_S_AXI_DATA_WIDTH-1 : 0] S_AXI_RDATA;
    wire [1 : 0] S_AXI_RRESP;
    wire S_AXI_RLAST;
    wire S_AXI_RVALID;
    reg S_AXI_RREADY;

    // Instantiate the Unit Under Test (UUT)
    state_machine_woint_slave_full_v1_0_S00_AXI #(
        .C_S_AXI_ID_WIDTH(C_S_AXI_ID_WIDTH),
        .C_S_AXI_DATA_WIDTH(C_S_AXI_DATA_WIDTH),
        .C_S_AXI_ADDR_WIDTH(C_S_AXI_ADDR_WIDTH)
    ) uut (
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_AWID(S_AXI_AWID),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWLEN(S_AXI_AWLEN),
        .S_AXI_AWSIZE(S_AXI_AWSIZE),
        .S_AXI_AWBURST(S_AXI_AWBURST),
        .S_AXI_AWLOCK(S_AXI_AWLOCK),
        .S_AXI_AWCACHE(S_AXI_AWCACHE),
        .S_AXI_AWPROT(S_AXI_AWPROT),
        .S_AXI_AWQOS(S_AXI_AWQOS),
        .S_AXI_AWREGION(S_AXI_AWREGION),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_WDATA(S_AXI_WDATA),
        .S_AXI_WSTRB(S_AXI_WSTRB),
        .S_AXI_WLAST(S_AXI_WLAST),
        .S_AXI_WVALID(S_AXI_WVALID),
        .S_AXI_WREADY(S_AXI_WREADY),
        .S_AXI_BID(S_AXI_BID),
        .S_AXI_BRESP(S_AXI_BRESP),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_ARID(S_AXI_ARID),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARLEN(S_AXI_ARLEN),
        .S_AXI_ARSIZE(S_AXI_ARSIZE),
        .S_AXI_ARBURST(S_AXI_ARBURST),
        .S_AXI_ARLOCK(S_AXI_ARLOCK),
        .S_AXI_ARCACHE(S_AXI_ARCACHE),
        .S_AXI_ARPROT(S_AXI_ARPROT),
        .S_AXI_ARQOS(S_AXI_ARQOS),
        .S_AXI_ARREGION(S_AXI_ARREGION),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_RID(S_AXI_RID),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RRESP(S_AXI_RRESP),
        .S_AXI_RLAST(S_AXI_RLAST),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_RREADY(S_AXI_RREADY)
    );

    // Clock generation
    initial begin
        S_AXI_ACLK = 0;
        forever #5 S_AXI_ACLK = ~S_AXI_ACLK; // 100 MHz clock
    end

    // Declare loop variable
    integer j;

    // Test sequence
    initial begin
        // Initialize signals
        S_AXI_ARESETN = 0;
        S_AXI_AWID = 0;
        S_AXI_AWADDR = 0;
        S_AXI_AWLEN = 0;
        S_AXI_AWSIZE = 3'b010; // 4 bytes
        S_AXI_AWBURST = 2'b01; // Incremental burst
        S_AXI_AWLOCK = 0;
        S_AXI_AWCACHE = 0;
        S_AXI_AWPROT = 0;
        S_AXI_AWQOS = 0;
        S_AXI_AWREGION = 0;
        S_AXI_AWVALID = 0;
        S_AXI_WDATA = 0;
        S_AXI_WSTRB = 4'b1111;
        S_AXI_WLAST = 0;
        S_AXI_WVALID = 0;
        S_AXI_BREADY = 0;
        S_AXI_ARID = 0;
        S_AXI_ARADDR = 0;
        S_AXI_ARLEN = 0;
        S_AXI_ARSIZE = 3'b010; // 4 bytes
        S_AXI_ARBURST = 2'b01; // Incremental burst
        S_AXI_ARLOCK = 0;
        S_AXI_ARCACHE = 0;
        S_AXI_ARPROT = 0;
        S_AXI_ARQOS = 0;
        S_AXI_ARREGION = 0;
        S_AXI_ARVALID = 0;
        S_AXI_RREADY = 0;

        // Reset the design
        #100;
        S_AXI_ARESETN = 1;

        // Write 64-byte data to the module
        S_AXI_AWADDR = 7'h10;
        S_AXI_AWLEN = 8'h0F; // 16 transfers
        S_AXI_AWVALID = 1;
        S_AXI_WVALID = 1;
        for (j = 0; j < 16; j = j + 1) begin
            S_AXI_WDATA = 32'h01010101;
            S_AXI_WLAST = (j == 15);
            @(posedge S_AXI_ACLK);
        end
        S_AXI_AWVALID = 0;
        S_AXI_WVALID = 0;

        // Set the special register to start the operation
        S_AXI_AWADDR = 7'h00;
        S_AXI_WDATA = 32'h0f0f0f0f;
        S_AXI_AWVALID = 1;
        S_AXI_WVALID = 1;
        @(posedge S_AXI_ACLK);
        S_AXI_AWVALID = 0;
        S_AXI_WVALID = 0;

        // Poll the completion register
        S_AXI_ARADDR = 7'h00;
        S_AXI_ARVALID = 1;
        while (S_AXI_RDATA != 32'hFFFFFFFF) begin
            @(posedge S_AXI_ACLK);
        end
        S_AXI_ARVALID = 0;

        // Read back the modified data
        S_AXI_ARADDR = 7'h10;
        S_AXI_ARLEN = 8'h0F; // 16 transfers
        S_AXI_ARVALID = 1;
        for (j = 0; j < 16; j = j + 1) begin
            S_AXI_RREADY = 1;
            @(posedge S_AXI_ACLK);
            $display("Data[%0d]: %h", j, S_AXI_RDATA);
        end
        S_AXI_ARVALID = 0;
        S_AXI_RREADY = 0;

        // Finish simulation
        #100;
        $finish;
    end

endmodule 