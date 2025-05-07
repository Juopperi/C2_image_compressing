`timescale 1 ns / 1 ps

`define CONFIG_PROCESS_BEGIN    4'h1 // if the config area is done, set this to 1, it is set by the user_functional_module
`define CONFIG_PROCESS_DONE     4'h9 // if the config area is done, set this to 1, it is set by the user_functional_module
`define CONFIG_WRITE_OUTRANGE   4'h8

module myip #
(
    // Users to add parameters here
    parameter integer CONFIG_AREA           = 16, // 0x80~0x8F
    parameter integer WRITE_AREA            = 64, // 0x00~0x3F
    parameter integer READ_AREA             = 64, // 0x40~0x7F
    // User parameters ends
    // Do not modify the parameters beyond this line

    // Parameters of Axi Slave Bus Interface S00_AXI
    parameter integer C_S00_AXI_DATA_WIDTH  = 32,
    parameter integer C_S00_AXI_ADDR_WIDTH  = 11
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
    input wire  s00_axi_rready
);

// Instantiation of Axi Bus Interface S00_AXI
myip_slave_lite_v1_0_S00_AXI # ( 
    .C_S_AXI_DATA_WIDTH(C_S00_AXI_DATA_WIDTH),
    .C_S_AXI_ADDR_WIDTH(C_S00_AXI_ADDR_WIDTH)
) myip_slave_lite_v1_0_S00_AXI_inst (
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
    .S_AXI_RREADY(s00_axi_rready)
);

// Add user logic here
    // Define the base addresses for our memory regions
    localparam CONFIG_BASE_ADDR = 8'h80; // Config area: 0x80-0x8F
    localparam WRITE_BASE_ADDR = 8'h00;  // Write area: 0x00-0x3F
    localparam READ_BASE_ADDR = 8'h40;   // Read area: 0x40-0x7F

    // Wires for connecting to user_functional_module
    wire            ufm_start;
    wire [7:0]      ufm_data_in_addr;
    wire [31:0]     ufm_data_in;
    wire [31:0]     ufm_data_out;
    wire [7:0]      ufm_data_out_addr;
    wire [3:0]      ufm_state_out;

    // Create a signal for start from configuration register
    assign ufm_start = myip_slave_lite_v1_0_S00_AXI_inst.slv_reg128[`CONFIG_PROCESS_BEGIN]; // CONFIG_PROCESS_BEGIN at register 0x80 (bit 1)

    // Connect input data from write area registers
    assign ufm_data_in = myip_slave_lite_v1_0_S00_AXI_inst.slv_reg0 + ufm_data_in_addr;

    // Instantiate the user_functional_module
    user_functional_module ufm (
        .clk(s00_axi_aclk),
        .rst_n(s00_axi_aresetn),
        .start(ufm_start),
        .data_in_addr(ufm_data_in_addr),
        .data_in(ufm_data_in),
        .data_out_addr(ufm_data_out_addr),
        .data_out(ufm_data_out),
        .state_out(ufm_state_out)
    );

    // Process to handle reading and writing from the user_functional_module
    always @(posedge s00_axi_aclk) begin
        if (!s00_axi_aresetn) begin
            // Reset values
            myip_slave_lite_v1_0_S00_AXI_inst.slv_reg128[`CONFIG_PROCESS_DONE] <= 0;
            myip_slave_lite_v1_0_S00_AXI_inst.slv_reg128[`CONFIG_WRITE_OUTRANGE] <= 0;
        end else begin
            // Handle state transitions and data movement

            // When in SAVE_DATA state, copy data from user_functional_module to read area
            if (ufm_state_out == 4'h3) begin // SAVE_DATA state
                // Write output data to read area registers (0x40-0x7F)
                // 修改: 使用case语句根据地址写入正确的寄存器
                case (ufm_data_out_addr)
                    8'd0:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg64 <= ufm_data_out;
                    8'd1:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg65 <= ufm_data_out;
                    8'd2:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg66 <= ufm_data_out;
                    8'd3:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg67 <= ufm_data_out;
                    8'd4:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg68 <= ufm_data_out;
                    8'd5:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg69 <= ufm_data_out;
                    8'd6:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg70 <= ufm_data_out;
                    8'd7:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg71 <= ufm_data_out;
                    8'd8:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg72 <= ufm_data_out;
                    8'd9:  myip_slave_lite_v1_0_S00_AXI_inst.slv_reg73 <= ufm_data_out;
                    8'd10: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg74 <= ufm_data_out;
                    8'd11: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg75 <= ufm_data_out;
                    8'd12: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg76 <= ufm_data_out;
                    8'd13: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg77 <= ufm_data_out;
                    8'd14: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg78 <= ufm_data_out;
                    8'd15: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg79 <= ufm_data_out;
                    8'd16: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg80 <= ufm_data_out;
                    8'd17: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg81 <= ufm_data_out;
                    8'd18: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg82 <= ufm_data_out;
                    8'd19: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg83 <= ufm_data_out;
                    8'd20: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg84 <= ufm_data_out;
                    8'd21: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg85 <= ufm_data_out;
                    8'd22: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg86 <= ufm_data_out;
                    8'd23: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg87 <= ufm_data_out;
                    8'd24: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg88 <= ufm_data_out;
                    8'd25: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg89 <= ufm_data_out;
                    8'd26: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg90 <= ufm_data_out;
                    8'd27: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg91 <= ufm_data_out;
                    8'd28: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg92 <= ufm_data_out;
                    8'd29: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg93 <= ufm_data_out;
                    8'd30: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg94 <= ufm_data_out;
                    8'd31: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg95 <= ufm_data_out;
                    8'd32: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg96 <= ufm_data_out;
                    8'd33: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg97 <= ufm_data_out;
                    8'd34: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg98 <= ufm_data_out;
                    8'd35: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg99 <= ufm_data_out;
                    8'd36: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg100 <= ufm_data_out;
                    8'd37: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg101 <= ufm_data_out;
                    8'd38: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg102 <= ufm_data_out;
                    8'd39: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg103 <= ufm_data_out;
                    8'd40: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg104 <= ufm_data_out;
                    8'd41: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg105 <= ufm_data_out;
                    8'd42: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg106 <= ufm_data_out;
                    8'd43: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg107 <= ufm_data_out;
                    8'd44: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg108 <= ufm_data_out;
                    8'd45: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg109 <= ufm_data_out;
                    8'd46: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg110 <= ufm_data_out;
                    8'd47: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg111 <= ufm_data_out;
                    8'd48: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg112 <= ufm_data_out;
                    8'd49: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg113 <= ufm_data_out;
                    8'd50: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg114 <= ufm_data_out;
                    8'd51: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg115 <= ufm_data_out;
                    8'd52: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg116 <= ufm_data_out;
                    8'd53: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg117 <= ufm_data_out;
                    8'd54: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg118 <= ufm_data_out;
                    8'd55: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg119 <= ufm_data_out;
                    8'd56: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg120 <= ufm_data_out;
                    8'd57: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg121 <= ufm_data_out;
                    8'd58: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg122 <= ufm_data_out;
                    8'd59: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg123 <= ufm_data_out;
                    8'd60: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg124 <= ufm_data_out;
                    8'd61: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg125 <= ufm_data_out;
                    8'd62: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg126 <= ufm_data_out;
                    8'd63: myip_slave_lite_v1_0_S00_AXI_inst.slv_reg127 <= ufm_data_out;
                    default: ; // 对于超出范围的地址不做任何操作
                endcase
            end

            // When in DONE state, set process done flag
            if (ufm_state_out == 4'h4) begin // DONE state
                myip_slave_lite_v1_0_S00_AXI_inst.slv_reg128[`CONFIG_PROCESS_DONE] <= 1;
            end

            // Reset process done flag when start flag is cleared
            if (ufm_state_out == 4'h0 && myip_slave_lite_v1_0_S00_AXI_inst.slv_reg128[`CONFIG_PROCESS_BEGIN] == 0) begin
                myip_slave_lite_v1_0_S00_AXI_inst.slv_reg128[`CONFIG_PROCESS_DONE] <= 0;
            end
        end
    end

// User logic ends

endmodule

// Include the user_functional_module and inverter from paste-3.txt
module user_functional_module(
    input wire          clk,       // Clock
    input wire          rst_n,     // Reset signal, low active
    input wire          start,     // Start signal
    
    // Input data interface
    output reg [7:0]    data_in_addr, // Input data address
    input wire [31:0]   data_in,      // Input data
    
    // Output data interface
    input wire [7:0]    data_out_addr, // Output data address
    output reg [31:0]   data_out,      // Output data
    output wire [3:0]   state_out      // Output state
);

reg [31:0] data_in_array [0:63];
reg [31:0] data_out_array [0:63];

reg last_start;

always @(posedge clk) begin : record_start_process
    if (!rst_n) begin
        last_start <= 0;
    end
    else begin
        last_start <= start;
    end
end

assign data_out = data_out_array[data_out_addr];

reg process_done, save_done, load_done;

typedef enum reg [3:0] {
    IDLE,
    LOAD_DATA,
    PROCESS_DATA,
    SAVE_DATA,
    DONE
} state_t_user_functional_module;

state_t_user_functional_module state, next_state;

assign state_out = state;

always @(posedge clk) begin
    if (!rst_n) begin
        state <= IDLE;
    end
    else begin
        state <= next_state;
    end
end

always @(*) begin
    case (state)
        IDLE: begin
            if (start && !last_start) begin
                next_state <= LOAD_DATA;
            end
            else begin
                next_state <= IDLE;
            end
        end
        LOAD_DATA: begin
            if (load_done) begin
                next_state <= PROCESS_DATA;
            end
            else begin
                next_state <= LOAD_DATA;
            end
        end
        PROCESS_DATA: begin
            if (process_done) begin
                next_state <= SAVE_DATA;
            end
            else begin
                next_state <= PROCESS_DATA;
            end
        end
        SAVE_DATA: begin
            if (save_done) begin
                next_state <= DONE;
            end
            else begin
                next_state <= SAVE_DATA;
            end
        end
        DONE: begin
            if (last_start) begin
                next_state <= DONE;
            end
            else begin
                next_state <= IDLE;
            end
        end
        default: begin
            next_state <= IDLE;
        end
    endcase
end

// Load data from AXI registers, one by one, process index in another process
always @(posedge clk) begin : load_data_process
    if (!rst_n) begin
        integer i;
        for (i = 0; i < 64; i = i + 1) begin
            data_in_array[i] <= 0;
        end
    end
    else begin
        if (state == LOAD_DATA) begin
            data_in_array[data_in_addr] <= data_in;
        end
    end
end

// Increase index
always @(posedge clk) begin : increase_index_process
    if (state == LOAD_DATA) begin
        data_in_addr <= data_in_addr + 1;
        if (data_in_addr == 63) begin
            load_done <= 1;
        end
    end
    else begin
        data_in_addr <= 0;
        load_done <= 0;
    end
end

generate
    genvar i;
    for (i = 0; i < 64; i = i + 1) begin : inverter_inst
        inverter inverter_inst(
            .data_in(data_in_array[i]),
            .data_out(data_out_array[i])
        );
    end
endgenerate

// Process data
always @(posedge clk) begin
    if (state == PROCESS_DATA) begin
        if (data_in_array[5] == ~data_out_array[5]) begin
            process_done <= 1;
        end
        else begin
            process_done <= 0;
        end
    end
    else begin
        process_done <= 0;
    end
end

// Save data
always @(posedge clk) begin
    if (state == SAVE_DATA) begin
        data_out_array[data_out_addr] <= data_out;
    end
end

// Increase index
always @(posedge clk) begin
    if (state == SAVE_DATA) begin
        if (data_out_addr == 64) begin
            save_done <= 1;
        end
    end
    else if (state == DONE) begin
        save_done <= 1;
    end
    else begin
        save_done <= 0;
    end
end

endmodule

module inverter(
    input wire [31:0] data_in,
    output wire [31:0] data_out
);

assign data_out = ~data_in;

endmodule