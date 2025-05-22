`timescale 1 ns / 1 ps

// Generic converter interface module
module converter_interface #(
    parameter DATA_WIDTH = 32,           // Width of data bus
    parameter INPUT_SIZE = 64,           // Number of input elements
    parameter OUTPUT_SIZE = 64,          // Number of output elements
    parameter INPUT_ELEMENT_WIDTH = 8,   // Bit width of input elements
    parameter OUTPUT_ELEMENT_WIDTH = 32  // Bit width of output elements
)(
    input wire clk,                      // Clock signal
    input wire rst_n,                    // Active-low reset
    input wire start,                    // Start conversion
    output wire done,                    // Conversion complete

    // Input data buses
    input wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] input_data_1,
    input wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] input_data_2,
    input wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] input_data_3,
    
    // Output data buses
    output wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] output_data_1,
    output wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] output_data_2,
    output wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] output_data_3
);
    // This module is just an interface definition
    // Actual implementation will be in the specific converter modules
endmodule

// YCbCr Converter Implementation (example)
module rgb2ycbcr_converter #(
    parameter INPUT_SIZE = 64,             // 8x8 block (64 pixels)
    parameter OUTPUT_SIZE = 64,            // 8x8 block (64 pixels)
    parameter INPUT_ELEMENT_WIDTH = 8,     // 8-bit RGB
    parameter OUTPUT_ELEMENT_WIDTH = 32    // 32-bit fixed-point YCbCr
)(
    input wire clk,
    input wire rst_n,
    input wire start,
    output reg done,

    // RGB input
    input wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] r_data,
    input wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] g_data,
    input wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] b_data,
    
    // YCbCr output
    output wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] y_data,
    output wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] cb_data,
    output wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] cr_data
);
    // State machine for conversion
    localparam IDLE = 2'b00,
               CONVERTING = 2'b01,
               DONE = 2'b10;
    reg [1:0] state;
    
    // Internal conversion logic (simplified for illustration)
    // In a real implementation, you would include the actual RGB to YCbCr conversion math
    reg [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] y_reg;
    reg [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] cb_reg;
    reg [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] cr_reg;
    
    assign y_data = y_reg;
    assign cb_data = cb_reg;
    assign cr_data = cr_reg;
    
    integer i;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            done <= 1'b0;
            y_reg <= {(OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE){1'b0}};
            cb_reg <= {(OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE){1'b0}};
            cr_reg <= {(OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE){1'b0}};
        end else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        state <= CONVERTING;
                        done <= 1'b0;
                    end
                end
                
                CONVERTING: begin
                    // Perform RGB to YCbCr conversion
                    // This is a simplified example that just copies input to output
                    // You would replace this with your actual conversion algorithm
                    for (i = 0; i < INPUT_SIZE; i = i + 1) begin
                        // Extract RGB values for pixel i
                        y_reg[i*OUTPUT_ELEMENT_WIDTH +: OUTPUT_ELEMENT_WIDTH] <= 
                            {24'b0, r_data[i*INPUT_ELEMENT_WIDTH +: INPUT_ELEMENT_WIDTH]};
                        
                        cb_reg[i*OUTPUT_ELEMENT_WIDTH +: OUTPUT_ELEMENT_WIDTH] <= 
                            {24'b0, g_data[i*INPUT_ELEMENT_WIDTH +: INPUT_ELEMENT_WIDTH]};
                        
                        cr_reg[i*OUTPUT_ELEMENT_WIDTH +: OUTPUT_ELEMENT_WIDTH] <= 
                            {24'b0, b_data[i*INPUT_ELEMENT_WIDTH +: INPUT_ELEMENT_WIDTH]};
                    end
                    
                    state <= DONE;
                end
                
                DONE: begin
                    done <= 1'b1;
                    if (!start) begin
                        state <= IDLE;
                        done <= 1'b0;
                    end
                end
                
                default: state <= IDLE;
            endcase
        end
    end
endmodule

// Main AXI module with flexible converter
module jpg_flexible_axi #
(
    // User parameters
    parameter CONVERTER_TYPE = "RGB2YCBCR",     // Type of converter to instantiate
    parameter INPUT_COUNT = 3,                  // Number of input data buses (e.g., R,G,B)
    parameter OUTPUT_COUNT = 3,                 // Number of output data buses (e.g., Y,Cb,Cr)
    parameter INPUT_SIZE = 64,                  // Number of elements per input (e.g., 8x8 = 64)
    parameter OUTPUT_SIZE = 64,                 // Number of elements per output
    parameter INPUT_ELEMENT_WIDTH = 8,          // Width of each input element (e.g., 8-bit RGB)
    parameter OUTPUT_ELEMENT_WIDTH = 32,        // Width of each output element
    
    // AXI parameters
    parameter integer C_S_AXI_ID_WIDTH = 1,
    parameter integer C_S_AXI_DATA_WIDTH = 32,
    parameter integer C_S_AXI_ADDR_WIDTH = 7,
    parameter integer C_S_AXI_AWUSER_WIDTH = 0,
    parameter integer C_S_AXI_ARUSER_WIDTH = 0,
    parameter integer C_S_AXI_WUSER_WIDTH = 0,
    parameter integer C_S_AXI_RUSER_WIDTH = 0,
    parameter integer C_S_AXI_BUSER_WIDTH = 0
)
(
    // User ports
    input wire clk,                      // System clock
    
    // AXI ports
    input wire S_AXI_ACLK,
    input wire S_AXI_ARESETN,
    input wire [C_S_AXI_ID_WIDTH-1:0] S_AXI_AWID,
    input wire [C_S_AXI_ADDR_WIDTH-1:0] S_AXI_AWADDR,
    input wire [7:0] S_AXI_AWLEN,
    input wire [2:0] S_AXI_AWSIZE,
    input wire [1:0] S_AXI_AWBURST,
    input wire S_AXI_AWLOCK,
    input wire [3:0] S_AXI_AWCACHE,
    input wire [2:0] S_AXI_AWPROT,
    input wire [3:0] S_AXI_AWQOS,
    input wire [3:0] S_AXI_AWREGION,
    input wire [C_S_AXI_AWUSER_WIDTH-1:0] S_AXI_AWUSER,
    input wire S_AXI_AWVALID,
    output wire S_AXI_AWREADY,
    input wire [C_S_AXI_DATA_WIDTH-1:0] S_AXI_WDATA,
    input wire [(C_S_AXI_DATA_WIDTH/8)-1:0] S_AXI_WSTRB,
    input wire S_AXI_WLAST,
    input wire [C_S_AXI_WUSER_WIDTH-1:0] S_AXI_WUSER,
    input wire S_AXI_WVALID,
    output wire S_AXI_WREADY,
    output wire [C_S_AXI_ID_WIDTH-1:0] S_AXI_BID,
    output wire [1:0] S_AXI_BRESP,
    output wire [C_S_AXI_BUSER_WIDTH-1:0] S_AXI_BUSER,
    output wire S_AXI_BVALID,
    input wire S_AXI_BREADY,
    input wire [C_S_AXI_ID_WIDTH-1:0] S_AXI_ARID,
    input wire [C_S_AXI_ADDR_WIDTH-1:0] S_AXI_ARADDR,
    input wire [7:0] S_AXI_ARLEN,
    input wire [2:0] S_AXI_ARSIZE,
    input wire [1:0] S_AXI_ARBURST,
    input wire S_AXI_ARLOCK,
    input wire [3:0] S_AXI_ARCACHE,
    input wire [2:0] S_AXI_ARPROT,
    input wire [3:0] S_AXI_ARQOS,
    input wire [3:0] S_AXI_ARREGION,
    input wire [C_S_AXI_ARUSER_WIDTH-1:0] S_AXI_ARUSER,
    input wire S_AXI_ARVALID,
    output wire S_AXI_ARREADY,
    output wire [C_S_AXI_ID_WIDTH-1:0] S_AXI_RID,
    output wire [C_S_AXI_DATA_WIDTH-1:0] S_AXI_RDATA,
    output wire [1:0] S_AXI_RRESP,
    output wire S_AXI_RLAST,
    output wire [C_S_AXI_RUSER_WIDTH-1:0] S_AXI_RUSER,
    output wire S_AXI_RVALID,
    input wire S_AXI_RREADY
);

    // AXI4FULL signals
    reg [C_S_AXI_ADDR_WIDTH-1:0] axi_awaddr;
    reg axi_awready;
    reg axi_wready;
    reg [C_S_AXI_ID_WIDTH-1:0] axi_bid;
    reg [1:0] axi_bresp;
    reg [C_S_AXI_BUSER_WIDTH-1:0] axi_buser;
    reg axi_bvalid;
    reg [C_S_AXI_ADDR_WIDTH-1:0] axi_araddr;
    reg axi_arready;
    reg [C_S_AXI_ID_WIDTH-1:0] axi_rid;
    reg [1:0] axi_rresp;
    reg axi_rlast;
    reg [C_S_AXI_RUSER_WIDTH-1:0] axi_ruser;
    reg axi_rvalid;
    wire aw_wrap_en;
    wire ar_wrap_en;
    wire [31:0] aw_wrap_size;
    wire [31:0] ar_wrap_size;
    reg [7:0] axi_awlen_cntr;
    reg [7:0] axi_arlen_cntr;
    reg [1:0] axi_arburst;
    reg [1:0] axi_awburst;
    reg [7:0] axi_arlen;
    reg [7:0] axi_awlen;
    
    localparam integer ADDR_LSB = (C_S_AXI_DATA_WIDTH/32)+ 1;
    
    // Memory space for data storage
    // Control registers
    reg [31:0] control_reg_start;
    reg [31:0] control_reg_status;
    
    // Input data storage
    reg [INPUT_ELEMENT_WIDTH-1:0] input_data_1 [0:INPUT_SIZE-1];
    reg [INPUT_ELEMENT_WIDTH-1:0] input_data_2 [0:INPUT_SIZE-1];
    reg [INPUT_ELEMENT_WIDTH-1:0] input_data_3 [0:INPUT_SIZE-1];
    
    // Output data storage
    reg [OUTPUT_ELEMENT_WIDTH-1:0] output_data_1 [0:OUTPUT_SIZE-1];
    reg [OUTPUT_ELEMENT_WIDTH-1:0] output_data_2 [0:OUTPUT_SIZE-1];
    reg [OUTPUT_ELEMENT_WIDTH-1:0] output_data_3 [0:OUTPUT_SIZE-1];
    
    // Wires to connect to the converter
    wire converter_start;
    wire converter_done;
    wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] in_data_1_packed;
    wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] in_data_2_packed;
    wire [INPUT_ELEMENT_WIDTH*INPUT_SIZE-1:0] in_data_3_packed;
    wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] out_data_1_packed;
    wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] out_data_2_packed;
    wire [OUTPUT_ELEMENT_WIDTH*OUTPUT_SIZE-1:0] out_data_3_packed;
    
    // Pack the input data
    genvar j;
    generate
        for (j = 0; j < INPUT_SIZE; j = j + 1) begin : pack_inputs
            assign in_data_1_packed[j*INPUT_ELEMENT_WIDTH +: INPUT_ELEMENT_WIDTH] = input_data_1[j];
            assign in_data_2_packed[j*INPUT_ELEMENT_WIDTH +: INPUT_ELEMENT_WIDTH] = input_data_2[j];
            assign in_data_3_packed[j*INPUT_ELEMENT_WIDTH +: INPUT_ELEMENT_WIDTH] = input_data_3[j];
        end
    endgenerate
    
    // Unpack the output data
    integer i;
    always @(posedge clk) begin
        if (!S_AXI_ARESETN) begin
            for (i = 0; i < OUTPUT_SIZE; i = i + 1) begin
                output_data_1[i] <= {OUTPUT_ELEMENT_WIDTH{1'b0}};
                output_data_2[i] <= {OUTPUT_ELEMENT_WIDTH{1'b0}};
                output_data_3[i] <= {OUTPUT_ELEMENT_WIDTH{1'b0}};
            end
        end
        else if (converter_done) begin
            for (i = 0; i < OUTPUT_SIZE; i = i + 1) begin
                output_data_1[i] <= out_data_1_packed[i*OUTPUT_ELEMENT_WIDTH +: OUTPUT_ELEMENT_WIDTH];
                output_data_2[i] <= out_data_2_packed[i*OUTPUT_ELEMENT_WIDTH +: OUTPUT_ELEMENT_WIDTH];
                output_data_3[i] <= out_data_3_packed[i*OUTPUT_ELEMENT_WIDTH +: OUTPUT_ELEMENT_WIDTH];
            end
        end
    end
    
    // Instantiate the appropriate converter based on CONVERTER_TYPE
    generate
        if (CONVERTER_TYPE == "RGB2YCBCR") begin : gen_rgb2ycbcr
            rgb2ycbcr_converter #(
                .INPUT_SIZE(INPUT_SIZE),
                .OUTPUT_SIZE(OUTPUT_SIZE),
                .INPUT_ELEMENT_WIDTH(INPUT_ELEMENT_WIDTH),
                .OUTPUT_ELEMENT_WIDTH(OUTPUT_ELEMENT_WIDTH)
            ) converter_inst (
                .clk(clk),
                .rst_n(S_AXI_ARESETN),
                .start(converter_start),
                .done(converter_done),
                .r_data(in_data_1_packed),
                .g_data(in_data_2_packed),
                .b_data(in_data_3_packed),
                .y_data(out_data_1_packed),
                .cb_data(out_data_2_packed),
                .cr_data(out_data_3_packed)
            );
        end
        // Add more converter types as needed
        // else if (CONVERTER_TYPE == "OTHER_CONVERTER") begin
        //     other_converter #(...) converter_inst (...);
        // end
    endgenerate
    
    // Assign converter control signals
    assign converter_start = (control_reg_start == 32'h0f0f0f0f);
    
    // Control logic
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            control_reg_start <= 32'b0;
            control_reg_status <= 32'b0;
            
            // Initialize input data registers
            for (i = 0; i < INPUT_SIZE; i = i + 1) begin
                input_data_1[i] <= {INPUT_ELEMENT_WIDTH{1'b0}};
                input_data_2[i] <= {INPUT_ELEMENT_WIDTH{1'b0}};
                input_data_3[i] <= {INPUT_ELEMENT_WIDTH{1'b0}};
            end
        end
        else begin
            // Check if converter is done
            if (converter_done) begin
                control_reg_status <= 32'hFFFFFFFF;  // Set completion flag
                control_reg_start <= 32'b0;          // Clear start flag
            end
            
            // Handle AXI writes
            if (S_AXI_WVALID && axi_wready) begin
                case (axi_awaddr[6:0])
                    // Control registers
                    7'h00: control_reg_start <= S_AXI_WDATA;
                    
                    // Input data regions
                    // Input data 1 (e.g., R component)
                    7'h10, 7'h14, 7'h18, 7'h1C, 7'h20, 7'h24, 7'h28, 7'h2C: 
                        input_data_1[(axi_awaddr[6:0] - 7'h10) >> 2] <= S_AXI_WDATA[INPUT_ELEMENT_WIDTH-1:0];
                    
                    // Input data 2 (e.g., G component)
                    7'h30, 7'h34, 7'h38, 7'h3C, 7'h40, 7'h44, 7'h48, 7'h4C: 
                        input_data_2[(axi_awaddr[6:0] - 7'h30) >> 2] <= S_AXI_WDATA[INPUT_ELEMENT_WIDTH-1:0];
                    
                    // Input data 3 (e.g., B component)
                    7'h50, 7'h54, 7'h58, 7'h5C, 7'h60, 7'h64, 7'h68, 7'h6C: 
                        input_data_3[(axi_awaddr[6:0] - 7'h50) >> 2] <= S_AXI_WDATA[INPUT_ELEMENT_WIDTH-1:0];
                    
                    default: begin
                        // Handle additional addresses if needed
                    end
                endcase
            end
        end
    end
    
    // Read data output
    reg [C_S_AXI_DATA_WIDTH-1:0] axi_rdata;
    
    always @(*) begin
        case (axi_araddr[6:0])
            // Control registers
            7'h00: axi_rdata = control_reg_start;
            7'h04: axi_rdata = control_reg_status;
            
            // Output data regions
            // Output data 1 (e.g., Y component)
            7'h10, 7'h14, 7'h18, 7'h1C, 7'h20, 7'h24, 7'h28, 7'h2C: 
                axi_rdata = {{(C_S_AXI_DATA_WIDTH-OUTPUT_ELEMENT_WIDTH){1'b0}}, 
                            output_data_1[(axi_araddr[6:0] - 7'h10) >> 2]};
            
            // Output data 2 (e.g., Cb component)
            7'h30, 7'h34, 7'h38, 7'h3C, 7'h40, 7'h44, 7'h48, 7'h4C: 
                axi_rdata = {{(C_S_AXI_DATA_WIDTH-OUTPUT_ELEMENT_WIDTH){1'b0}}, 
                            output_data_2[(axi_araddr[6:0] - 7'h30) >> 2]};
            
            // Output data 3 (e.g., Cr component)
            7'h50, 7'h54, 7'h58, 7'h5C, 7'h60, 7'h64, 7'h68, 7'h6C: 
                axi_rdata = {{(C_S_AXI_DATA_WIDTH-OUTPUT_ELEMENT_WIDTH){1'b0}}, 
                            output_data_3[(axi_araddr[6:0] - 7'h50) >> 2]};
            
            default: axi_rdata = 32'hDEADBEEF;  // Invalid address read
        endcase
    end
    
    // AXI write address channel handling
    assign S_AXI_AWREADY = axi_awready;
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_awready <= 1'b0;
            axi_awaddr <= 0;
        end
        else begin
            if (~axi_awready && S_AXI_AWVALID) begin
                axi_awready <= 1'b1;
                axi_awaddr <= S_AXI_AWADDR;
                axi_awburst <= S_AXI_AWBURST;
                axi_awlen <= S_AXI_AWLEN;
                axi_bid <= S_AXI_AWID;
            end
            else begin
                axi_awready <= 1'b0;
            end
        end
    end
    
    // AXI write data channel handling
    assign S_AXI_WREADY = axi_wready;
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_wready <= 1'b0;
        end
        else begin
            if (~axi_wready && S_AXI_WVALID) begin
                axi_wready <= 1'b1;
            end
            else begin
                axi_wready <= 1'b0;
            end
        end
    end
    
    // AXI write response channel handling
    assign S_AXI_BID = axi_bid;
    assign S_AXI_BRESP = axi_bresp;
    assign S_AXI_BUSER = axi_buser;
    assign S_AXI_BVALID = axi_bvalid;
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_bvalid <= 1'b0;
            axi_bresp <= 2'b0;
            axi_buser <= 0;
        end
        else begin
            if (axi_wready && S_AXI_WVALID && ~axi_bvalid) begin
                axi_bvalid <= 1'b1;
                axi_bresp <= 2'b0; // 'OKAY' response
            end
            else if (S_AXI_BREADY && axi_bvalid) begin
                axi_bvalid <= 1'b0;
            end
        end
    end
    
    // AXI read address channel handling
    assign S_AXI_ARREADY = axi_arready;
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_arready <= 1'b0;
            axi_araddr <= 0;
        end
        else begin
            if (~axi_arready && S_AXI_ARVALID) begin
                axi_arready <= 1'b1;
                axi_araddr <= S_AXI_ARADDR;
                axi_arburst <= S_AXI_ARBURST;
                axi_arlen <= S_AXI_ARLEN;
                axi_rid <= S_AXI_ARID;
            end
            else begin
                axi_arready <= 1'b0;
            end
        end
    end
    
    // AXI read data channel handling
    assign S_AXI_RID = axi_rid;
    assign S_AXI_RDATA = axi_rdata;
    assign S_AXI_RRESP = axi_rresp;
    assign S_AXI_RLAST = axi_rlast;
    assign S_AXI_RUSER = axi_ruser;
    assign S_AXI_RVALID = axi_rvalid;
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_rvalid <= 1'b0;
            axi_rresp <= 2'b0;
            axi_rlast <= 1'b0;
            axi_ruser <= 0;
        end
        else begin
            if (axi_arready && S_AXI_ARVALID && ~axi_rvalid) begin
                axi_rvalid <= 1'b1;
                axi_rresp <= 2'b0; // 'OKAY' response
                // Set RLAST based on burst length
                if (axi_arlen == 0) begin
                    axi_rlast <= 1'b1;
                end
                else begin
                    axi_rlast <= 1'b0;
                end
            end
            else if (S_AXI_RREADY && axi_rvalid) begin
                axi_rvalid <= 1'b0;
                axi_rlast <= 1'b0;
            end
        end
    end

endmodule