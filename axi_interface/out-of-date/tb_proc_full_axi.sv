`timescale 1ns/1ps
module tb_proc_full_axi;
  localparam CLK_PERIOD = 10ns;

  // ========= 信号 =========
  logic ACLK = 0, ARESETN = 0;
  
  // AXI write channel signals
  logic [0:0] AWID;
  logic [6:0] AWADDR;
  logic [7:0] AWLEN;
  logic [2:0] AWSIZE;
  logic [1:0] AWBURST;
  logic AWLOCK;
  logic [3:0] AWCACHE;
  logic [2:0] AWPROT;
  logic [3:0] AWQOS;
  logic [3:0] AWREGION;
  logic [0:0] AWUSER;
  logic AWVALID;
  logic AWREADY;
  
  logic [31:0] WDATA;
  logic [3:0] WSTRB;
  logic WLAST;
  logic [0:0] WUSER;
  logic WVALID;
  logic WREADY;
  
  logic [0:0] BID;
  logic [1:0] BRESP;
  logic [0:0] BUSER;
  logic BVALID;
  logic BREADY;

  // AXI read channel signals
  logic [0:0] ARID;
  logic [6:0] ARADDR;
  logic [7:0] ARLEN;
  logic [2:0] ARSIZE;
  logic [1:0] ARBURST;
  logic ARLOCK;
  logic [3:0] ARCACHE;
  logic [2:0] ARPROT;
  logic [3:0] ARQOS;
  logic [3:0] ARREGION;
  logic [0:0] ARUSER;
  logic ARVALID;
  logic ARREADY;
  
  logic [0:0] RID;
  logic [31:0] RDATA;
  logic [1:0] RRESP;
  logic RLAST;
  logic [0:0] RUSER;
  logic RVALID;
  logic RREADY;

  // ========= DUT =========
  proc_full_axi #(
    .C_S_AXI_DATA_WIDTH(32),
    .C_S_AXI_ADDR_WIDTH(7),
    .BUF_DEPTH(32),
    .CORE_NAME("user_core_pass_thru")
  ) dut (
    .S_AXI_ACLK(ACLK),
    .S_AXI_ARESETN(ARESETN),
    
    // Write Address Channel
    .S_AXI_AWID(AWID),
    .S_AXI_AWADDR(AWADDR),
    .S_AXI_AWLEN(AWLEN),
    .S_AXI_AWSIZE(AWSIZE),
    .S_AXI_AWBURST(AWBURST),
    .S_AXI_AWLOCK(AWLOCK),
    .S_AXI_AWCACHE(AWCACHE),
    .S_AXI_AWPROT(AWPROT),
    .S_AXI_AWQOS(AWQOS),
    .S_AXI_AWREGION(AWREGION),
    .S_AXI_AWUSER(AWUSER),
    .S_AXI_AWVALID(AWVALID),
    .S_AXI_AWREADY(AWREADY),
    
    // Write Data Channel
    .S_AXI_WDATA(WDATA),
    .S_AXI_WSTRB(WSTRB),
    .S_AXI_WLAST(WLAST),
    .S_AXI_WUSER(WUSER),
    .S_AXI_WVALID(WVALID),
    .S_AXI_WREADY(WREADY),
    
    // Write Response Channel
    .S_AXI_BID(BID),
    .S_AXI_BRESP(BRESP),
    .S_AXI_BUSER(BUSER),
    .S_AXI_BVALID(BVALID),
    .S_AXI_BREADY(BREADY),
    
    // Read Address Channel
    .S_AXI_ARID(ARID),
    .S_AXI_ARADDR(ARADDR),
    .S_AXI_ARLEN(ARLEN),
    .S_AXI_ARSIZE(ARSIZE),
    .S_AXI_ARBURST(ARBURST),
    .S_AXI_ARLOCK(ARLOCK),
    .S_AXI_ARCACHE(ARCACHE),
    .S_AXI_ARPROT(ARPROT),
    .S_AXI_ARQOS(ARQOS),
    .S_AXI_ARREGION(ARREGION),
    .S_AXI_ARUSER(ARUSER),
    .S_AXI_ARVALID(ARVALID),
    .S_AXI_ARREADY(ARREADY),
    
    // Read Data Channel
    .S_AXI_RID(RID),
    .S_AXI_RDATA(RDATA),
    .S_AXI_RRESP(RRESP),
    .S_AXI_RLAST(RLAST),
    .S_AXI_RUSER(RUSER),
    .S_AXI_RVALID(RVALID),
    .S_AXI_RREADY(RREADY)
  );

  // ========= 时钟/复位 =========
  always #(CLK_PERIOD/2) ACLK = ~ACLK;
  
  initial begin
    ARESETN = 0;
    #100ns  ARESETN = 1;               // 释放复位
  end

  // ========= AXI-Full 简易事务 =========
  task axi_write(input int unsigned addr, input int unsigned data);
    // 发起一次 (AW,W,B) 写
    // AW channel
    AWID = 0;
    AWADDR = addr;
    AWLEN = 0;       // Single transfer
    AWSIZE = 3'b010; // 4 bytes
    AWBURST = 2'b01; // INCR mode
    AWLOCK = 0;
    AWCACHE = 0;
    AWPROT = 0;
    AWQOS = 0;
    AWREGION = 0;
    AWUSER = 0;
    AWVALID = 1;
    
    // W channel
    WDATA = data;
    WSTRB = 4'b1111; // All bytes valid
    WLAST = 1;       // Last (and only) transfer
    WUSER = 0;
    WVALID = 1;
    
    // B channel
    BREADY = 1;
    
    // Wait for handshake completion
    wait(AWREADY && WREADY);
    @(posedge ACLK);
    
    // Deassert valid signals
    AWVALID = 0;
    WVALID = 0;
    
    // Wait for response
    wait(BVALID);
    @(posedge ACLK);
    BREADY = 0;
  endtask
  
  task axi_read(input int unsigned addr, output int unsigned data);
    // 发起一次 (AR,R) 读
    // AR channel
    ARID = 0;
    ARADDR = addr;
    ARLEN = 0;       // Single transfer
    ARSIZE = 3'b010; // 4 bytes
    ARBURST = 2'b01; // INCR mode
    ARLOCK = 0;
    ARCACHE = 0;
    ARPROT = 0;
    ARQOS = 0;
    ARREGION = 0;
    ARUSER = 0;
    ARVALID = 1;
    
    // R channel
    RREADY = 1;
    
    // Wait for address ready
    wait(ARREADY);
    @(posedge ACLK);
    ARVALID = 0;
    
    // Wait for data valid
    wait(RVALID);
    data = RDATA;
    @(posedge ACLK);
    RREADY = 0;
  endtask

  // ========= 主流程 =========
  initial begin
    int unsigned rd_data;
    
    // Initialize signals
    AWVALID = 0;
    WVALID = 0;
    BREADY = 0;
    ARVALID = 0;
    RREADY = 0;
    
    // Wait for reset to complete
    wait(ARESETN);
    repeat(5) @(posedge ACLK);

    // 1. 填充输入 buffer
    for (int i=0; i<32; i++) begin
      axi_write(7'h40 + i*4, i);       // 输入区地址段 0x40..
    end

    // 2. 启动
    axi_write(7'h00, 32'h1);

    // 3. 轮询 done
    do begin
      axi_read(7'h04, rd_data);
      repeat(5) @(posedge ACLK); // Add some delay between polls
    end while (rd_data[0]==0);

    // 4. 读回输出并检查
    for (int i=0; i<32; i++) begin
      axi_read(7'h60 + i*4, rd_data);
      $display("Output[%0d] = %0d", i, rd_data);
      assert (rd_data == i) else $error("Mismatch at %0d: expected %0d, got %0d", i, i, rd_data);
    end

    // 5. 清除 start 和 done 信号
    axi_write(7'h00, 32'h0);
    
    repeat(10) @(posedge ACLK);
    $display("### TEST PASSED ###");
    $finish;
  end
endmodule 