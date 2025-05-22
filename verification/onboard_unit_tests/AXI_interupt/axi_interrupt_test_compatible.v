module axi_int #
(
    // Users to add parameters here
    parameter integer DELAY_MAX = 32'd100_000_000,  // 1 second at 100MHz
    parameter integer TIMEOUT_MAX = 32'd10_000_000, // Timeout for DONE state

    // User parameters ends
    // Do not modify the parameters beyond this line

    // Parameters of Axi Slave Bus Interface S00_AXI
    parameter integer C_S00_AXI_DATA_WIDTH	= 32,
    parameter integer C_S00_AXI_ADDR_WIDTH	= 4,  // 确保地址宽度为4位，与设计的寄存器地址匹配

    // Parameters of Axi Slave Bus Interface S_AXI_INTR
    parameter integer C_S_AXI_INTR_DATA_WIDTH	= 32,
    parameter integer C_S_AXI_INTR_ADDR_WIDTH	= 5,
    parameter integer C_NUM_OF_INTR	= 1,
    parameter  C_INTR_SENSITIVITY	= 32'hFFFFFFFF,
    parameter  C_INTR_ACTIVE_STATE	= 32'hFFFFFFFF,
    parameter integer C_IRQ_SENSITIVITY	= 1,
    parameter integer C_IRQ_ACTIVE_STATE	= 1
)
(
    // Users to add ports here

    // User ports ends
    // Do not modify the ports beyond this line

    // Ports of Axi Slave Bus Interface S00_AXI
    input wire  s00_axi_aclk,
    input wire  s00_axi_aresetn,
    input wire [C_S00_AXI_ADDR_WIDTH-1 : 0] s00_axi_awaddr,
    input wire [2 : 0] s00_axi_awprot,
    input wire  s00_axi_awvalid,
    output wire  s00_axi_awready,
    input wire [C_S00_AXI_DATA_WIDTH-1 : 0] s00_axi_wdata,
    input wire [(C_S00_AXI_DATA_WIDTH/8)-1 : 0] s00_axi_wstrb,
    input wire  s00_axi_wvalid,
    output wire  s00_axi_wready,
    output wire [1 : 0] s00_axi_bresp,
    output wire  s00_axi_bvalid,
    input wire  s00_axi_bready,
    input wire [C_S00_AXI_ADDR_WIDTH-1 : 0] s00_axi_araddr,
    input wire [2 : 0] s00_axi_arprot,
    input wire  s00_axi_arvalid,
    output wire  s00_axi_arready,
    output wire [C_S00_AXI_DATA_WIDTH-1 : 0] s00_axi_rdata,
    output wire [1 : 0] s00_axi_rresp,
    output wire  s00_axi_rvalid,
    input wire  s00_axi_rready,

    // Ports of Axi Slave Bus Interface S_AXI_INTR
    input wire  s_axi_intr_aclk,
    input wire  s_axi_intr_aresetn,
    input wire [C_S_AXI_INTR_ADDR_WIDTH-1 : 0] s_axi_intr_awaddr,
    input wire [2 : 0] s_axi_intr_awprot,
    input wire  s_axi_intr_awvalid,
    output wire  s_axi_intr_awready,
    input wire [C_S_AXI_INTR_DATA_WIDTH-1 : 0] s_axi_intr_wdata,
    input wire [(C_S_AXI_INTR_DATA_WIDTH/8)-1 : 0] s_axi_intr_wstrb,
    input wire  s_axi_intr_wvalid,
    output wire  s_axi_intr_wready,
    output wire [1 : 0] s_axi_intr_bresp,
    output wire  s_axi_intr_bvalid,
    input wire  s_axi_intr_bready,
    input wire [C_S_AXI_INTR_ADDR_WIDTH-1 : 0] s_axi_intr_araddr,
    input wire [2 : 0] s_axi_intr_arprot,
    input wire  s_axi_intr_arvalid,
    output wire  s_axi_intr_arready,
    output wire [C_S_AXI_INTR_DATA_WIDTH-1 : 0] s_axi_intr_rdata,
    output wire [1 : 0] s_axi_intr_rresp,
    output wire  s_axi_intr_rvalid,
    input wire  s_axi_intr_rready,
    output wire  irq
);

    // ------------------------------------------
    // Data AXI interface implementation (S00_AXI)
    // ------------------------------------------
    
    // Register addresses (using 2 LSBs of address)
    // 00: 数据寄存器 (0x0)
    // 01: 控制寄存器 (0x4)
    // 10: 状态寄存器 (0x8)
    // 11: 中断使能寄存器 (0xC)

    // Register values
    reg [C_S00_AXI_DATA_WIDTH-1:0] data_reg;     // Store received data
    reg [C_S00_AXI_DATA_WIDTH-1:0] ctrl_reg;     // Control register
    reg [C_S00_AXI_DATA_WIDTH-1:0] status_reg;   // Status register
    reg [C_S00_AXI_DATA_WIDTH-1:0] int_enable_reg; // Interrupt enable register

    // AXI interface signals
    reg axi_awready;
    reg axi_wready;
    reg [1:0] axi_bresp;
    reg axi_bvalid;
    reg axi_arready;
    reg [C_S00_AXI_DATA_WIDTH-1:0] axi_rdata;
    reg [1:0] axi_rresp;
    reg axi_rvalid;

    // For byte-enable operations
    integer byte_index;
    
    // Delay counter (for 1-second delay)
    reg [31:0] delay_counter;
    
    // Timeout counter for DONE state
    reg [31:0] timeout_counter;
    
    // State machine for interrupt handling
    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAITING = 2'b01;
    localparam INTERRUPT = 2'b10;
    localparam DONE = 2'b11;

    // Interrupt signal
    reg interrupt_reg;

    // Connect AXI signals to the module's internal signals
    assign s00_axi_awready = axi_awready;
    assign s00_axi_wready = axi_wready;
    assign s00_axi_bresp = axi_bresp;
    assign s00_axi_bvalid = axi_bvalid;
    assign s00_axi_arready = axi_arready;
    assign s00_axi_rdata = axi_rdata;
    assign s00_axi_rresp = axi_rresp;
    assign s00_axi_rvalid = axi_rvalid;

    // Write address handshake
    always @(posedge s00_axi_aclk) begin
        if (~s00_axi_aresetn) begin
            axi_awready <= 1'b0;
        end else begin
            if (~axi_awready && s00_axi_awvalid && s00_axi_wvalid) begin
                axi_awready <= 1'b1;
            end else begin
                axi_awready <= 1'b0;
            end
        end
    end

    // Write data handshake
    always @(posedge s00_axi_aclk) begin
        if (~s00_axi_aresetn) begin
            axi_wready <= 1'b0;
        end else begin
            if (~axi_wready && s00_axi_wvalid && s00_axi_awvalid) begin
                axi_wready <= 1'b1;
            end else begin
                axi_wready <= 1'b0;
            end
        end
    end

    // Write response channel handshake
    always @(posedge s00_axi_aclk) begin
        if (~s00_axi_aresetn) begin
            axi_bvalid <= 1'b0;
            axi_bresp <= 2'b0;
        end else begin
            if (axi_awready && s00_axi_awvalid && axi_wready && s00_axi_wvalid && ~axi_bvalid) begin
                axi_bvalid <= 1'b1;
                axi_bresp <= 2'b0; // 'OKAY' response
            end else begin
                if (s00_axi_bready && axi_bvalid) begin
                    axi_bvalid <= 1'b0;
                end
            end
        end
    end

    // ------------------------------------------
    // Interrupt AXI interface implementation (S_AXI_INTR)
    // ------------------------------------------
    
    // Interrupt AXI signals
    reg intr_axi_awready;
    reg intr_axi_wready;
    reg [1:0] intr_axi_bresp;
    reg intr_axi_bvalid;
    reg intr_axi_arready;
    reg [C_S_AXI_INTR_DATA_WIDTH-1:0] intr_axi_rdata;
    reg [1:0] intr_axi_rresp;
    reg intr_axi_rvalid;
    
    // Interrupt related registers
    reg [C_NUM_OF_INTR-1:0] intr_reg;              // Interrupt register
    
    // 添加中断清除请求信号 - 用于跨时钟域通信
    reg intr_clear_req;
    
    // Connect interrupt AXI interface signals
    assign s_axi_intr_awready = intr_axi_awready;
    assign s_axi_intr_wready = intr_axi_wready;
    assign s_axi_intr_bresp = intr_axi_bresp;
    assign s_axi_intr_bvalid = intr_axi_bvalid;
    assign s_axi_intr_arready = intr_axi_arready;
    assign s_axi_intr_rdata = intr_axi_rdata;
    assign s_axi_intr_rresp = intr_axi_rresp;
    assign s_axi_intr_rvalid = intr_axi_rvalid;
    
    // Generate the output interrupt signal - use shared int_enable_reg
    assign irq = interrupt_reg && int_enable_reg[0];
    
    // Update interrupt status register
    always @(posedge s_axi_intr_aclk) begin
        if (~s_axi_intr_aresetn) begin
            intr_reg <= 0;
            intr_clear_req <= 0;
        end else begin
            // Reflect the main interrupt status
            intr_reg[0] <= interrupt_reg;
            
            // 处理中断清除请求
            if (intr_axi_awready && s_axi_intr_awvalid && intr_axi_wready && s_axi_intr_wvalid) begin
                // Writing to interrupt controller can set interrupt clear request
                if (s_axi_intr_wdata[0]) begin
                    intr_clear_req <= 1'b1;
                end
            end else if (intr_clear_req && !interrupt_reg) begin
                // 一旦中断被清除，重置请求标志
                intr_clear_req <= 1'b0;
            end
        end
    end
    
    // Write address handshake for interrupt controller
    always @(posedge s_axi_intr_aclk) begin
        if (~s_axi_intr_aresetn) begin
            intr_axi_awready <= 1'b0;
        end else begin
            if (~intr_axi_awready && s_axi_intr_awvalid && s_axi_intr_wvalid) begin
                intr_axi_awready <= 1'b1;
            end else begin
                intr_axi_awready <= 1'b0;
            end
        end
    end
    
    // Write data handshake for interrupt controller
    always @(posedge s_axi_intr_aclk) begin
        if (~s_axi_intr_aresetn) begin
            intr_axi_wready <= 1'b0;
        end else begin
            if (~intr_axi_wready && s_axi_intr_wvalid && s_axi_intr_awvalid) begin
                intr_axi_wready <= 1'b1;
            end else begin
                intr_axi_wready <= 1'b0;
            end
        end
    end
    
    // Write response for interrupt controller
    always @(posedge s_axi_intr_aclk) begin
        if (~s_axi_intr_aresetn) begin
            intr_axi_bvalid <= 1'b0;
            intr_axi_bresp <= 2'b0;
        end else begin
            if (intr_axi_awready && s_axi_intr_awvalid && intr_axi_wready && s_axi_intr_wvalid && ~intr_axi_bvalid) begin
                intr_axi_bvalid <= 1'b1;
                intr_axi_bresp <= 2'b0;
            end else begin
                if (s_axi_intr_bready && intr_axi_bvalid) begin
                    intr_axi_bvalid <= 1'b0;
                end
            end
        end
    end
    
    // 修改Register write logic and state machine handling块中的代码
    // 检测中断控制器的清除请求
    reg intr_clear_req_s00_meta;
    reg intr_clear_req_s00;
    
    // 两级触发器同步中断清除请求到s00_axi_aclk域
    always @(posedge s00_axi_aclk or negedge s00_axi_aresetn) begin
        if (~s00_axi_aresetn) begin
            intr_clear_req_s00_meta <= 1'b0;
            intr_clear_req_s00 <= 1'b0;
        end else begin
            intr_clear_req_s00_meta <= intr_clear_req;
            intr_clear_req_s00 <= intr_clear_req_s00_meta;
        end
    end
    
    // 在主状态机的always块中，使用同步后的intr_clear_req_s00
    always @(posedge s00_axi_aclk) begin
        if (~s00_axi_aresetn) begin
            data_reg <= 32'h0;
            ctrl_reg <= 32'h0;
            int_enable_reg <= 32'h0;
            state <= IDLE;
            delay_counter <= 32'h0;
            timeout_counter <= 32'h0;
            interrupt_reg <= 1'b0;
            status_reg <= 32'h0;
        end else begin
            // Default behavior: auto-clear control bits after they are processed
            if (ctrl_reg[0]) begin  // Auto-clear interrupt clear bit
                ctrl_reg[0] <= 1'b0;
            end
            
            if (ctrl_reg[1]) begin  // Auto-clear reset bit
                ctrl_reg[1] <= 1'b0;
            end
            
            // 处理来自中断控制器的清除请求
            if (intr_clear_req_s00 && state == INTERRUPT) begin
                ctrl_reg[0] <= 1'b1; // 设置中断清除位
            end
            
            // State machine for interrupt handling
            case (state)
                IDLE: begin
                    delay_counter <= 32'h0;
                    timeout_counter <= 32'h0;
                    // Wait for data to be written
                end
                
                WAITING: begin
                    if (delay_counter >= DELAY_MAX) begin
                        state <= INTERRUPT;
                        interrupt_reg <= 1'b1;
                        status_reg[0] <= 1'b1; // Set interrupt status bit
                    end else begin
                        delay_counter <= delay_counter + 1'b1;
                    end
                    
                    // Allow early exit to IDLE if reset is requested
                    if (ctrl_reg[1]) begin
                        state <= IDLE;
                        delay_counter <= 32'h0;
                    end
                end
                
                INTERRUPT: begin
                    // Clear interrupt when clear bit is set
                    if (ctrl_reg[0]) begin
                        interrupt_reg <= 1'b0;
                        status_reg[0] <= 1'b0; // Clear interrupt status
                        state <= DONE;
                    end
                    
                    // Allow direct return to IDLE if reset is requested
                    if (ctrl_reg[1]) begin
                        interrupt_reg <= 1'b0;
                        status_reg[0] <= 1'b0;
                        state <= IDLE;
                    end
                end
                
                DONE: begin
                    // Increment timeout counter
                    timeout_counter <= timeout_counter + 1'b1;
                    
                    // Move to IDLE after explicit reset or timeout
                    if (ctrl_reg[1] || timeout_counter >= TIMEOUT_MAX) begin
                        state <= IDLE;
                        timeout_counter <= 32'h0;
                    end
                end
                
                default: begin
                    // Safeguard against invalid states
                    state <= IDLE;
                end
            endcase
            
            // Handle register writes
            if (axi_awready && s00_axi_awvalid && axi_wready && s00_axi_wvalid) begin
                case (s00_axi_awaddr[3:2])  // Use address bits [3:2] for register selection
                    2'b00: begin  // Address 0x0 (DATA_REG_ADDR)
                        for (byte_index = 0; byte_index < (C_S00_AXI_DATA_WIDTH/8); byte_index = byte_index + 1) begin
                            if (s00_axi_wstrb[byte_index]) begin
                                data_reg[(byte_index*8) +: 8] <= s00_axi_wdata[(byte_index*8) +: 8];
                            end
                        end
                        // Start delay counter when data is written and we're in IDLE state
                        if (state == IDLE) begin
                            state <= WAITING;
                        end
                    end
                    
                    2'b01: begin  // Address 0x4 (CTRL_REG_ADDR)
                        for (byte_index = 0; byte_index < (C_S00_AXI_DATA_WIDTH/8); byte_index = byte_index + 1) begin
                            if (s00_axi_wstrb[byte_index]) begin
                                ctrl_reg[(byte_index*8) +: 8] <= s00_axi_wdata[(byte_index*8) +: 8];
                            end
                        end
                    end
                    
                    2'b10: begin  // Address 0x8 (STATUS_REG_ADDR)
                        // Status register is typically read-only, but can have writable bits if needed
                        // This implementation considers it read-only
                    end
                    
                    2'b11: begin  // Address 0xC (INT_ENABLE_ADDR)
                        for (byte_index = 0; byte_index < (C_S00_AXI_DATA_WIDTH/8); byte_index = byte_index + 1) begin
                            if (s00_axi_wstrb[byte_index]) begin
                                int_enable_reg[(byte_index*8) +: 8] <= s00_axi_wdata[(byte_index*8) +: 8];
                            end
                        end
                    end
                    
                    default: begin
                        // No action for invalid addresses
                    end
                endcase
            end
        end
    end

    // Read address handshake
    always @(posedge s00_axi_aclk) begin
        if (~s00_axi_aresetn) begin
            axi_arready <= 1'b0;
        end else begin
            if (~axi_arready && s00_axi_arvalid) begin
                axi_arready <= 1'b1;
            end else begin
                axi_arready <= 1'b0;
            end
        end
    end

    // Read data handshake
    always @(posedge s00_axi_aclk) begin
        if (~s00_axi_aresetn) begin
            axi_rvalid <= 1'b0;
            axi_rresp <= 2'b0;
        end else begin
            if (axi_arready && s00_axi_arvalid && ~axi_rvalid) begin
                axi_rvalid <= 1'b1;
                axi_rresp <= 2'b0; // 'OKAY' response
            end else if (axi_rvalid && s00_axi_rready) begin
                axi_rvalid <= 1'b0;
            end
        end
    end

    // Read data logic
    always @(posedge s00_axi_aclk) begin
        if (~s00_axi_aresetn) begin
            axi_rdata <= 32'h0;
        end else begin
            if (axi_arready && s00_axi_arvalid && ~axi_rvalid) begin
                case (s00_axi_araddr[3:2])
                    2'b00: begin  // Address 0x0 (DATA_REG_ADDR)
                        axi_rdata <= data_reg;
                    end
                    2'b01: begin  // Address 0x4 (CTRL_REG_ADDR)
                        axi_rdata <= ctrl_reg;
                    end
                    2'b10: begin  // Address 0x8 (STATUS_REG_ADDR)
                        axi_rdata <= status_reg;
                    end
                    2'b11: begin  // Address 0xC (INT_ENABLE_ADDR)
                        axi_rdata <= int_enable_reg;
                    end
                    default: begin
                        axi_rdata <= 32'h0;
                    end
                endcase
            end
        end
    end

    // Write to interrupt controller registers (不再直接设置ctrl_reg)
    always @(posedge s_axi_intr_aclk) begin
        if (~s_axi_intr_aresetn) begin
            // No local interrupt enable register to reset
        end else begin
            // 移除直接设置ctrl_reg[0]的代码 - 现在通过intr_clear_req实现
        end
    end

endmodule