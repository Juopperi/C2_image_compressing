// -----------------------------------------------------------------------------
// Module: rgb2ycbcr_dct_link
// Description: Links RGB to YCbCr converter with 2D DCT modules for image processing
// -----------------------------------------------------------------------------
`timescale 1ns / 1ps

module rgb2ycbcr_dct_link #(
    parameter DATA_WIDTH = 32,     // Fixed point width (Q16.16)
    parameter FRAC_BITS = 8,       // Fraction bits
    parameter RGB_WIDTH = 8,       // RGB input width (8 bits)
    parameter BLOCK_SIZE = 64      // 8x8 block size
)(
    input  wire                              clk,
    input  wire                              rst_n,
    
    // Input RGB interface (64 pixels, 8-bit per channel)
    input  wire                              in_valid,
    output wire                              in_ready,
    input  wire [BLOCK_SIZE*RGB_WIDTH-1:0]   in_r,
    input  wire [BLOCK_SIZE*RGB_WIDTH-1:0]   in_g,
    input  wire [BLOCK_SIZE*RGB_WIDTH-1:0]   in_b,
    
    // Output DCT coefficients for Y, Cb, Cr components
    output wire                              out_valid,
    input  wire                              out_ready,
    output wire [BLOCK_SIZE*DATA_WIDTH-1:0]  out_y_dct,
    output wire [BLOCK_SIZE*DATA_WIDTH-1:0]  out_cb_dct,
    output wire [BLOCK_SIZE*DATA_WIDTH-1:0]  out_cr_dct
);

    // ---------- Interconnect signals ----------
    // YCbCr signals from converter
    wire [DATA_WIDTH*BLOCK_SIZE-1:0] y_data;
    wire [DATA_WIDTH*BLOCK_SIZE-1:0] cb_data;
    wire [DATA_WIDTH*BLOCK_SIZE-1:0] cr_data;
    
    // Input/Output control for DCT modules
    wire y_dct_in_ready, cb_dct_in_ready, cr_dct_in_ready;
    wire y_dct_out_valid, cb_dct_out_valid, cr_dct_out_valid;
    
    // ---------- State machine for controlling data flow ----------
    localparam [2:0] 
        S_IDLE = 3'b000,
        S_LOAD_DCT = 3'b001,
        S_PROCESSING = 3'b010,
        S_WAIT_OUTPUT = 3'b011,
        S_DONE = 3'b100;
    
    reg [2:0] state, next_state;
    reg dct_in_valid_reg;
    
    // State machine sequential logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            state <= S_IDLE;
        else
            state <= next_state;
    end
    
    // State machine next state logic
    always @(*) begin
        next_state = state;
        case (state)
            S_IDLE: 
                if (in_valid && y_dct_in_ready && cb_dct_in_ready && cr_dct_in_ready)
                    next_state = S_LOAD_DCT;
            
            S_LOAD_DCT:
                next_state = S_PROCESSING;
                
            S_PROCESSING:
                if (y_dct_in_ready && cb_dct_in_ready && cr_dct_in_ready)
                    next_state = S_WAIT_OUTPUT;
                    
            S_WAIT_OUTPUT:
                if (y_dct_out_valid && cb_dct_out_valid && cr_dct_out_valid)
                    next_state = S_DONE;
                    
            S_DONE:
                if (out_ready)
                    next_state = S_IDLE;
                    
            default:
                next_state = S_IDLE;
        endcase
    end
    
    // DCT input valid signal control
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            dct_in_valid_reg <= 1'b0;
        else if (state == S_LOAD_DCT)
            dct_in_valid_reg <= 1'b1;
        else if (state == S_PROCESSING && y_dct_in_ready && cb_dct_in_ready && cr_dct_in_ready)
            dct_in_valid_reg <= 1'b0;
    end
    
    // Input/output handshaking
    assign in_ready = (state == S_IDLE) && y_dct_in_ready && cb_dct_in_ready && cr_dct_in_ready;
    assign out_valid = (state == S_DONE);
    
    // ---------- RGB to YCbCr Converter ----------
    rgb2ycbcr_container #(
        .fixed_point_length(DATA_WIDTH),
        .input_width(RGB_WIDTH)
    ) rgb2ycbcr (
        .clk(clk),
        .r_all(in_r),
        .g_all(in_g),
        .b_all(in_b),
        .y_all(y_data),
        .cb_all(cb_data),
        .cr_all(cr_data)
    );
    
    // ---------- DCT for Y Component ----------
    // DCT modules now share the same control signal
    wire dct_in_valid = dct_in_valid_reg;
    
    dct8x8_chen_2d #(
        .IN_W(DATA_WIDTH),
        .FRAC(FRAC_BITS)
    ) y_dct (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid(dct_in_valid),
        .in_ready(y_dct_in_ready),
        .in_data(y_data),
        .out_valid(y_dct_out_valid),
        .out_ready(out_ready),
        .out_data(out_y_dct)
    );
    
    // ---------- DCT for Cb Component ----------
    dct8x8_chen_2d #(
        .IN_W(DATA_WIDTH),
        .FRAC(FRAC_BITS)
    ) cb_dct (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid(dct_in_valid),
        .in_ready(cb_dct_in_ready),
        .in_data(cb_data),
        .out_valid(cb_dct_out_valid),
        .out_ready(out_ready),
        .out_data(out_cb_dct)
    );
    
    // ---------- DCT for Cr Component ----------
    dct8x8_chen_2d #(
        .IN_W(DATA_WIDTH),
        .FRAC(FRAC_BITS)
    ) cr_dct (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid(dct_in_valid),
        .in_ready(cr_dct_in_ready),
        .in_data(cr_data),
        .out_valid(cr_dct_out_valid),
        .out_ready(out_ready),
        .out_data(out_cr_dct)
    );

endmodule
