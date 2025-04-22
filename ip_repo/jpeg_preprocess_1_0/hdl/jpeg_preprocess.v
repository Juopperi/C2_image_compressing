`timescale 1 ns / 1 ps

module jpeg_preprocess #
(
	// Users to add parameters here
	parameter INPUT_WIDTH = 8,           // RGB input width
	parameter DATA_WIDTH = 32,           // Output data width
	parameter DATA_DEPTH = 8,            // 8x8 block
	parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH,  // 64 pixels
	
	// User parameters ends
	// Do not modify the parameters beyond this line
	
	// Parameters of Axi Slave Bus Interface S00_AXI
	parameter integer C_S00_AXI_DATA_WIDTH	= 32,
	parameter integer C_S00_AXI_ADDR_WIDTH	= 4,

	// Parameters of Axi Master Bus Interface M00_AXI
	parameter  C_M00_AXI_START_DATA_VALUE	= 32'hAA000000,
	parameter  C_M00_AXI_TARGET_SLAVE_BASE_ADDR	= 32'h40000000,
	parameter integer C_M00_AXI_ADDR_WIDTH	= 32,
	parameter integer C_M00_AXI_DATA_WIDTH	= 32,
	parameter integer C_M00_AXI_TRANSACTIONS_NUM	= 4
)
(
	// Users to add ports here
	// FIFO interface
	input wire fifo_empty,                  // FIFO empty flag
	output wire fifo_rd_en,                 // FIFO read enable
	input wire [INPUT_WIDTH-1:0] fifo_data, // FIFO data (RGB pixels)
	
	// DMA control signals
	output wire dma_start,                  // Start DMA transfer
	input wire dma_done,                    // DMA transfer done
	output wire [31:0] dma_dst_addr,        // DMA destination address
	output wire [31:0] dma_length,          // DMA transfer length
	
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

	// Ports of Axi Master Bus Interface M00_AXI
	input wire  m00_axi_init_axi_txn,
	output wire  m00_axi_error,
	output wire  m00_axi_txn_done,
	input wire  m00_axi_aclk,
	input wire  m00_axi_aresetn,
	output wire [C_M00_AXI_ADDR_WIDTH-1 : 0] m00_axi_awaddr,
	output wire [2 : 0] m00_axi_awprot,
	output wire  m00_axi_awvalid,
	input wire  m00_axi_awready,
	output wire [C_M00_AXI_DATA_WIDTH-1 : 0] m00_axi_wdata,
	output wire [C_M00_AXI_DATA_WIDTH/8-1 : 0] m00_axi_wstrb,
	output wire  m00_axi_wvalid,
	input wire  m00_axi_wready,
	input wire [1 : 0] m00_axi_bresp,
	input wire  m00_axi_bvalid,
	output wire  m00_axi_bready,
	output wire [C_M00_AXI_ADDR_WIDTH-1 : 0] m00_axi_araddr,
	output wire [2 : 0] m00_axi_arprot,
	output wire  m00_axi_arvalid,
	input wire  m00_axi_arready,
	input wire [C_M00_AXI_DATA_WIDTH-1 : 0] m00_axi_rdata,
	input wire [1 : 0] m00_axi_rresp,
	input wire  m00_axi_rvalid,
	output wire  m00_axi_rready
);

// AXI Slave interface registers
wire [C_S00_AXI_DATA_WIDTH-1:0] slv_reg0;
wire [C_S00_AXI_DATA_WIDTH-1:0] slv_reg1;
wire [C_S00_AXI_DATA_WIDTH-1:0] slv_reg2;
wire [C_S00_AXI_DATA_WIDTH-1:0] slv_reg3;

// Instantiation of Axi Bus Interface S00_AXI
jpeg_preprocess_slave_lite_v1_0_S00_AXI # ( 
	.C_S_AXI_DATA_WIDTH(C_S00_AXI_DATA_WIDTH),
	.C_S_AXI_ADDR_WIDTH(C_S00_AXI_ADDR_WIDTH)
) jpeg_preprocess_slave_lite_v1_0_S00_AXI_inst (
	.S_AXI_ACLK(s00_axi_aclk),
	.S_AXI_ARESETN(s00_axi_aresetn),
	.S_AXI_AWADDR(s00_axi_awaddr),
	.S_AXI_AWPROT(s00_axi_awprot),
	.S_AXI_AWVALID(s00_axi_awvalid),
	.S_AXI_AWREADY(s00_axi_awready),
	.S_AXI_WDATA(s00_axi_wdata),
	.S_AXI_WSTRB(s00_axi_wstrb),
	.S_AXI_WVALID(s00_axi_wvalid),
	.S_AXI_WREADY(s00_axi_wready),
	.S_AXI_BRESP(s00_axi_bresp),
	.S_AXI_BVALID(s00_axi_bvalid),
	.S_AXI_BREADY(s00_axi_bready),
	.S_AXI_ARADDR(s00_axi_araddr),
	.S_AXI_ARPROT(s00_axi_arprot),
	.S_AXI_ARVALID(s00_axi_arvalid),
	.S_AXI_ARREADY(s00_axi_arready),
	.S_AXI_RDATA(s00_axi_rdata),
	.S_AXI_RRESP(s00_axi_rresp),
	.S_AXI_RVALID(s00_axi_rvalid),
	.S_AXI_RREADY(s00_axi_rready),
	
	// Expose register values to top module
	.slv_reg0(slv_reg0),
	.slv_reg1(slv_reg1),
	.slv_reg2(slv_reg2),
	.slv_reg3(slv_reg3)
);

// Custom data signals for AXI Master interface
wire start_master_txn;
wire [C_M00_AXI_DATA_WIDTH-1:0] custom_wdata;
wire custom_wvalid;

// Instantiation of Axi Bus Interface M00_AXI
jpeg_preprocess_master_lite_v1_0_M00_AXI # ( 
	.C_M_START_DATA_VALUE(C_M00_AXI_START_DATA_VALUE),
	.C_M_TARGET_SLAVE_BASE_ADDR(C_M00_AXI_TARGET_SLAVE_BASE_ADDR),
	.C_M_AXI_ADDR_WIDTH(C_M00_AXI_ADDR_WIDTH),
	.C_M_AXI_DATA_WIDTH(C_M00_AXI_DATA_WIDTH),
	.C_M_TRANSACTIONS_NUM(C_M00_AXI_TRANSACTIONS_NUM)
) jpeg_preprocess_master_lite_v1_0_M00_AXI_inst (
	.INIT_AXI_TXN(start_master_txn),
	.ERROR(m00_axi_error),
	.TXN_DONE(m00_axi_txn_done),
	.M_AXI_ACLK(m00_axi_aclk),
	.M_AXI_ARESETN(m00_axi_aresetn),
	.M_AXI_AWADDR(m00_axi_awaddr),
	.M_AXI_AWPROT(m00_axi_awprot),
	.M_AXI_AWVALID(m00_axi_awvalid),
	.M_AXI_AWREADY(m00_axi_awready),
	.M_AXI_WDATA(m00_axi_wdata),
	.M_AXI_WSTRB(m00_axi_wstrb),
	.M_AXI_WVALID(m00_axi_wvalid),
	.M_AXI_WREADY(m00_axi_wready),
	.M_AXI_BRESP(m00_axi_bresp),
	.M_AXI_BVALID(m00_axi_bvalid),
	.M_AXI_BREADY(m00_axi_bready),
	.M_AXI_ARADDR(m00_axi_araddr),
	.M_AXI_ARPROT(m00_axi_arprot),
	.M_AXI_ARVALID(m00_axi_arvalid),
	.M_AXI_ARREADY(m00_axi_arready),
	.M_AXI_RDATA(m00_axi_rdata),
	.M_AXI_RRESP(m00_axi_rresp),
	.M_AXI_RVALID(m00_axi_rvalid),
	.M_AXI_RREADY(m00_axi_rready),
	
	// Custom interface for user data
	.CUSTOM_WDATA(custom_wdata),
	.CUSTOM_WVALID(custom_wvalid)
);

// User logic implementation

// Control register mapping
// slv_reg0[0] - Start processing (write 1, auto clear)
// slv_reg0[1] - Reset processing (write 1, auto clear)
// slv_reg1    - DMA destination address
// slv_reg2    - Reserved
// slv_reg3    - Status register (read-only): [0]-busy, [1]-done, [2]-error

// State machine states
localparam IDLE        = 3'd0;
localparam READ_PIXEL  = 3'd1;
localparam PROCESS     = 3'd2;
localparam WRITE_DATA  = 3'd3;
localparam DONE        = 3'd4;
localparam ERROR       = 3'd5;

// Internal registers
reg [2:0] state;
reg [2:0] next_state;
reg [9:0] pixel_counter;  // Count up to 1023 pixels
reg [31:0] status_reg;
reg process_start_edge;
reg process_reset_edge;
reg process_start_ff, process_reset_ff;
reg dma_start_reg;

// RGB Input buffers
reg [INPUT_WIDTH*PIXEL_COUNT-1:0] r_buffer;
reg [INPUT_WIDTH*PIXEL_COUNT-1:0] g_buffer;
reg [INPUT_WIDTH*PIXEL_COUNT-1:0] b_buffer;

// YCbCr Output from JPEG preprocessing
wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag;
wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag;
wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag;

// Indices for RGB buffer filling
reg [7:0] pixel_idx;
reg [1:0] color_channel; // 0:R, 1:G, 2:B

// Data output control
reg [7:0] output_idx;
reg [1:0] output_component; // 0:Y, 1:Cb, 2:Cr

// JPEG compression module instantiation
jpeg_compression_pipeline #(
    .DATA_WIDTH(DATA_WIDTH),
    .INPUT_WIDTH(INPUT_WIDTH),
    .DATA_DEPTH(DATA_DEPTH),
    .PIXEL_COUNT(PIXEL_COUNT)
) jpeg_proc (
    .clk(s00_axi_aclk),
    .reset_n(s00_axi_aresetn),
    .r_all(r_buffer),
    .g_all(g_buffer),
    .b_all(b_buffer),
    .y_zigzag(y_zigzag),
    .cb_zigzag(cb_zigzag),
    .cr_zigzag(cr_zigzag)
);

// Edge detection for control signals
always @(posedge s00_axi_aclk) begin
    if (!s00_axi_aresetn) begin
        process_start_ff <= 1'b0;
        process_reset_ff <= 1'b0;
    end else begin
        process_start_ff <= slv_reg0[0];
        process_reset_ff <= slv_reg0[1];
    end
end

// Edge detection
assign process_start_edge = slv_reg0[0] & ~process_start_ff;
assign process_reset_edge = slv_reg0[1] & ~process_reset_ff;

// DMA control signals
assign dma_start = dma_start_reg;
assign dma_dst_addr = slv_reg1; // Use register 1 for DMA destination address
assign dma_length = 3 * PIXEL_COUNT * (DATA_WIDTH/8); // Y+Cb+Cr data size in bytes

// FIFO control
assign fifo_rd_en = (state == READ_PIXEL && !fifo_empty);

// State machine - state transition
always @(posedge s00_axi_aclk or negedge s00_axi_aresetn) begin
    if (!s00_axi_aresetn) begin
        state <= IDLE;
    end else begin
        state <= next_state;
    end
end

// State machine - next state logic
always @(*) begin
    next_state = state;
    
    case (state)
        IDLE: begin
            if (process_start_edge) begin
                next_state = READ_PIXEL;
            end
        end
        
        READ_PIXEL: begin
            // When all RGB pixels (64 pixels * 3 channels) are read
            if (pixel_counter >= (PIXEL_COUNT * 3)) begin
                next_state = PROCESS;
            end
        end
        
        PROCESS: begin
            // JPEG processing is combinational, so move to write state
            next_state = WRITE_DATA;
        end
        
        WRITE_DATA: begin
            // When DMA transfer is done
            if (dma_done) begin
                next_state = DONE;
            end
        end
        
        DONE: begin
            // Return to IDLE after completion
            next_state = IDLE;
        end
        
        ERROR: begin
            // Stay in ERROR until reset
            if (process_reset_edge) begin
                next_state = IDLE;
            end
        end
        
        default: next_state = IDLE;
    endcase
    
    // Reset takes priority
    if (process_reset_edge) begin
        next_state = IDLE;
    end
end

// Data path control and processing
always @(posedge s00_axi_aclk) begin
    if (!s00_axi_aresetn) begin
        pixel_counter <= 0;
        pixel_idx <= 0;
        color_channel <= 0;
        status_reg <= 0;
        dma_start_reg <= 1'b0;
        start_master_txn <= 1'b0;
        output_idx <= 0;
        output_component <= 0;
        r_buffer <= 0;
        g_buffer <= 0;
        b_buffer <= 0;
    end else begin
        // Default values
        dma_start_reg <= 1'b0;
        start_master_txn <= 1'b0;
        
        case (state)
            IDLE: begin
                pixel_counter <= 0;
                pixel_idx <= 0;
                color_channel <= 0;
                output_idx <= 0;
                output_component <= 0;
                status_reg[0] <= 0; // Clear busy flag
                
                if (next_state == READ_PIXEL) begin
                    status_reg[0] <= 1; // Set busy flag
                    status_reg[1] <= 0; // Clear done flag
                    status_reg[2] <= 0; // Clear error flag
                end
            end
            
            READ_PIXEL: begin
                // If FIFO read is enabled
                if (fifo_rd_en) begin
                    pixel_counter <= pixel_counter + 1;
                    
                    // Store incoming pixel data to appropriate buffer
                    case (color_channel)
                        0: begin // R channel
                            r_buffer[pixel_idx*INPUT_WIDTH +: INPUT_WIDTH] <= fifo_data;
                            color_channel <= 1;
                        end
                        1: begin // G channel
                            g_buffer[pixel_idx*INPUT_WIDTH +: INPUT_WIDTH] <= fifo_data;
                            color_channel <= 2;
                        end
                        2: begin // B channel
                            b_buffer[pixel_idx*INPUT_WIDTH +: INPUT_WIDTH] <= fifo_data;
                            color_channel <= 0;
                            pixel_idx <= pixel_idx + 1; // Increment after a complete RGB cycle
                        end
                    endcase
                end
            end
            
            PROCESS: begin
                // Processing happens in the jpeg_compression_pipeline module automatically
                // Just prepare for data writing
                output_idx <= 0;
                output_component <= 0;
            end
            
            WRITE_DATA: begin
                // Start DMA transfer
                if (!dma_start_reg) begin
                    dma_start_reg <= 1'b1;
                    start_master_txn <= 1'b1;
                end
                
                // Provide data to AXI master for writing
                // Output each component's data sequentially: Y, then Cb, then Cr
                if (output_idx < PIXEL_COUNT) begin
                    case (output_component)
                        0: custom_wdata <= y_zigzag[output_idx*DATA_WIDTH +: DATA_WIDTH];
                        1: custom_wdata <= cb_zigzag[output_idx*DATA_WIDTH +: DATA_WIDTH];
                        2: custom_wdata <= cr_zigzag[output_idx*DATA_WIDTH +: DATA_WIDTH];
                    endcase
                    
                    custom_wvalid <= 1'b1;
                    
                    // Increment counters
                    if (output_component == 2) begin
                        output_component <= 0;
                        output_idx <= output_idx + 1;
                    end else begin
                        output_component <= output_component + 1;
                    end
                end else begin
                    custom_wvalid <= 1'b0;
                end
            end
            
            DONE: begin
                status_reg[0] <= 0; // Clear busy flag
                status_reg[1] <= 1; // Set done flag
                custom_wvalid <= 1'b0;
            end
            
            ERROR: begin
                status_reg[0] <= 0; // Clear busy flag
                status_reg[2] <= 1; // Set error flag
                custom_wvalid <= 1'b0;
            end
        endcase
        
        // Handle reset request
        if (process_reset_edge) begin
            pixel_counter <= 0;
            pixel_idx <= 0;
            color_channel <= 0;
            output_idx <= 0;
            output_component <= 0;
            status_reg <= 0;
            dma_start_reg <= 1'b0;
            start_master_txn <= 1'b0;
            custom_wvalid <= 1'b0;
        end
    end
end

// Connect status register to AXI slave interface
assign slv_reg3 = status_reg;

endmodule
