// -----------------------------------------------------------------------------
// JPEG 8×8‑block pipeline – time‑multiplexed Y / Cb / Cr processing
//   • One DCT + Quant + Zig‑zag chain reused for the 3 colour channels
//   • Sequence: Y  ➜  Cb  ➜  Cr   (17 clk/core + minor combinational latency)
// -----------------------------------------------------------------------------
`timescale 1ns / 1ps
module jpeg_compression_pipeline_shared #(
    parameter DATA_WIDTH   = 32,
    parameter INPUT_WIDTH  = 8,
    parameter DATA_DEPTH   = 8,
    parameter PIXEL_COUNT  = DATA_DEPTH*DATA_DEPTH      // 64
)(
    input  wire clk,
    input  wire reset_n,

    // planar RGB input block (8×8 pixels)
    input  wire [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all,
    input  wire [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all,
    input  wire [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all,

    // zig‑zag outputs – one vector per channel
    output reg  [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag,
    output reg  [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag,
    output reg  [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag
);

    // =========================================================================
    //  Enumerations / FSM types
    // =========================================================================
    typedef enum logic [1:0] {
        CHN_Y  = 2'd0,
        CHN_CB = 2'd1,
        CHN_CR = 2'd2
    } chn_t;

    typedef enum logic [1:0] {
        S_IDLE  = 2'd0,      // feed block into DCT
        S_WAIT  = 2'd1,      // wait for dct_out_valid
        S_LATCH = 2'd2       // latch quant+zig‑zag result, advance channel
    } state_t;

    // =========================================================================
    //  Stage‑0 : RGB ➜ YCbCr (combinational / small)
    // =========================================================================
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_raw;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_raw;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_raw;

    rgb2ycbcr_container #(
        .fixed_point_length (DATA_WIDTH)
    ) u_rgb2ycbcr (
        .clk   (clk),
        .r_all (r_all),
        .g_all (g_all),
        .b_all (b_all),
        .y_all (y_raw),
        .cb_all(cb_raw),
        .cr_all(cr_raw)
    );

    // =========================================================================
    //  Stage‑1 : Shared 2‑D DCT core
    // =========================================================================
    reg  [DATA_WIDTH*PIXEL_COUNT-1:0] dct_in_block;
    reg                               dct_in_valid;
    wire                              dct_in_ready;

    wire                              dct_out_valid;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] dct_out_block;

    dct8x8_2d_pipe_block #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (8),
        .CONST_W (10)
    ) u_dct8x8 (
        .clk       (clk),
        .rst_n     (reset_n),
        .in_valid  (dct_in_valid),
        .in_block  (dct_in_block),
        .in_ready  (dct_in_ready),
        .out_valid (dct_out_valid),
        .out_block (dct_out_block),
        .out_ready (1'b1)              // always ready – result latched next stage
    );

    // =========================================================================
    //  Stage‑2 : Quantization  (luma + chroma tables)
    // =========================================================================
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] q_luma_block;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] q_chroma_block;

    quantize_array #(.USE_LUMA(1)) u_quant_luma (
        .clk     (clk),
        .pixels  (dct_out_block),
        .q_result(q_luma_block)
    );

    quantize_array #(.USE_LUMA(0)) u_quant_chroma (
        .clk     (clk),
        .pixels  (dct_out_block),
        .q_result(q_chroma_block)
    );

    // Select quantised data according to active channel
    reg  [DATA_WIDTH*PIXEL_COUNT-1:0] q_sel_block;
    always @(*) begin
        unique case (channel)
            CHN_Y  : q_sel_block = q_luma_block;
            default: q_sel_block = q_chroma_block;   // Cb / Cr
        endcase
    end

    // =========================================================================
    //  Stage‑3 : Zig‑zag reorder (shared)
    // =========================================================================
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] zigzag_block;

    zigzag_reorder u_zigzag (
        .clk         (clk),
        .input_matrix(q_sel_block),
        .zigzag_out  (zigzag_block)
    );

    // =========================================================================
    //  Control FSM – round‑robin Y → Cb → Cr
    // =========================================================================
    state_t state, state_next;
    chn_t   channel, channel_next;

    // sequential (state register)
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            state   <= S_IDLE;
            channel <= CHN_Y;
        end else begin
            state   <= state_next;
            channel <= channel_next;
        end
    end

    // combinational (next‑state + control)
    always @(*) begin
        // ---------------------------------------------------------------------
        // defaults
        // ---------------------------------------------------------------------
        state_next   = state;
        channel_next = channel;
        dct_in_valid = 1'b0;
        dct_in_block = '0;

        // ---------------------------------------------------------------------
        // FSM
        // ---------------------------------------------------------------------
        case (state)
            // -------------------------------------------------- LOAD block
            S_IDLE: begin
                // choose block for current channel
                unique case (channel)
                    CHN_Y  : dct_in_block = y_raw;
                    CHN_CB : dct_in_block = cb_raw;
                    CHN_CR : dct_in_block = cr_raw;
                endcase

                // issue one‑cycle in_valid when core is ready
                if (dct_in_ready) begin
                    dct_in_valid = 1'b1;
                    state_next   = S_WAIT;
                end
            end

            // -------------------------------------------------- WAIT for DCT
            S_WAIT: begin
                if (dct_out_valid) begin
                    state_next = S_LATCH;           // next cycle zig‑zag valid
                end
            end

            // -------------------------------------------------- Latch result
            S_LATCH: begin
                // write to the proper output register
                case (channel)
                    CHN_Y  : y_zigzag  <= zigzag_block;
                    CHN_CB : cb_zigzag <= zigzag_block;
                    CHN_CR : cr_zigzag <= zigzag_block;
                endcase

                // advance to next channel
                channel_next = (channel == CHN_CR) ? CHN_Y
                                                   : chn_t'(channel + 2'd1);
                state_next   = S_IDLE;
            end
        endcase
    end

endmodule
