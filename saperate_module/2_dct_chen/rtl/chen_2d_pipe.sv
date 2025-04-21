`timescale 1ns / 1ps
// -----------------------------------------------------------------------------
// 2‑D 8×8 DCT – single‑core, pipelined implementation (whole‑block interface)
// -----------------------------------------------------------------------------
//  • Accepts and emits a complete 8×8 block (64 samples) in one beat
//        phase 0  : read 8 rows  → row DCT, store to row_mem[64]   (8 cycles)
//        phase 1  : read 8 columns → column DCT, store to coef_mem[64] (8 cycles)
//        phase 2  : assert out_valid and present 64‑coef block (1–∞ cycles)
//  • Throughput  : one 8×8 block every 17 cycles (1 in  + 16 calc)
//  • Latency     : 16 cycles from in_valid to out_valid
//  • Handshake   : ready/valid on whole‑block granularity
// -----------------------------------------------------------------------------
//  Interface
//  =========
//      clk, rst_n      – clock / active‑low reset
//      in_valid        – high when in_block holds a valid 8×8 pixel block
//      in_block[64*IN_W] – row‑major {p63,…,p0}; accepted when in_ready = 1
//      in_ready        – high when the core can accept a new block
//
//      out_valid       – high when out_block is valid (8×8 DCT coeffs)
//      out_block[64*IN_W] – row‑major {X63,…,X0}; consumed when out_ready = 1
//      out_ready       – back‑pressure from downstream
// -----------------------------------------------------------------------------
//  Notes
//  -----
//  • Internally re‑uses a single 1‑D dct8_chen instance as previously.
//  • No changes required to dct8_chen.
// -----------------------------------------------------------------------------

module dct8x8_2d_pipe_block #(
    parameter int IN_W    = 32,
    parameter int FRAC    = 14,
    parameter int CONST_W = 16
)(
    input  logic                     clk,
    input  logic                     rst_n,

    // whole‑block input stream (64 pixels)
    input  logic                     in_valid,
    input  logic [64*IN_W-1:0]       in_block,
    output logic                     in_ready,

    // whole‑block output stream (64 coeffs)
    output logic                     out_valid,
    output logic [64*IN_W-1:0]       out_block,
    input  logic                     out_ready
);

    // ------------------------------------------------------------------
    //  Typedefs & local parameters
    // ------------------------------------------------------------------
    typedef logic signed [IN_W-1:0] sample_t;

    // ------------------------------------------------------------------
    //  Pixel / row‑DCT / coefficient memories (simple registers)
    // ------------------------------------------------------------------
    sample_t pix_mem [0:63];   // holds original pixels      (8×8)
    sample_t row_mem [0:63];   // holds row‑DCT results      (8×8)
    sample_t coef_mem[0:63];   // holds final coefficients   (8×8)

    // ------------------------------------------------------------------
    //  State machine
    // ------------------------------------------------------------------
    typedef enum logic [1:0] {S_IDLE, S_ROW, S_COL, S_OUT} state_t;
    state_t state, state_n;

    // counters
    logic [3:0] row_cnt;       // 0‑7 in row phase
    logic [3:0] col_cnt;       // 0‑7 in column phase

    // ------------------------------------------------------------------
    //  Input / column multiplexer → feeds the dct8_chen
    // ------------------------------------------------------------------
    sample_t dct_in [0:7];
    sample_t dct_out[0:7];

    // mux for dct input
    always_comb begin
        for (int i = 0; i < 8; i++) begin
            dct_in[i] = '0;
            if (state == S_ROW) begin
                dct_in[i] = pix_mem[row_cnt*8 + i];        // pixels
            end else if (state == S_COL) begin
                dct_in[i] = row_mem[i*8 + col_cnt];        // column data
            end
        end
    end

    // ------------------------------------------------------------------
    //  1‑D DCT core instance (combinational)
    // ------------------------------------------------------------------
    dct8_chen #(
        .IN_W   (IN_W),
        .FRAC   (FRAC),
        .CONST_W(CONST_W)
    ) u_dct (
        .in0 (dct_in[0]), .in1 (dct_in[1]), .in2 (dct_in[2]), .in3 (dct_in[3]),
        .in4 (dct_in[4]), .in5 (dct_in[5]), .in6 (dct_in[6]), .in7 (dct_in[7]),
        .out0(dct_out[0]), .out1(dct_out[1]), .out2(dct_out[2]), .out3(dct_out[3]),
        .out4(dct_out[4]), .out5(dct_out[5]), .out6(dct_out[6]), .out7(dct_out[7])
    );

    // ------------------------------------------------------------------
    //  Sequential logic – state / counters / memories
    // ------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state   <= S_IDLE;
            row_cnt <= 0;
            col_cnt <= 0;
        end else begin
            // ------------------------------------------------------------------
            //  State register
            // ------------------------------------------------------------------
            state <= state_n;

            // ------------------------------------------------------------------
            //  Capture full 8×8 pixel block at S_IDLE → S_ROW transition
            // ------------------------------------------------------------------
            if (state == S_IDLE && in_valid && in_ready) begin
                for (int i = 0; i < 64; i++) begin
                    pix_mem[i] <= in_block[i*IN_W +: IN_W];
                end
            end

            // ------------------------------------------------------------------
            //  Row phase: write DCT results into row_mem
            // ------------------------------------------------------------------
            if (state == S_ROW) begin
                for (int i = 0; i < 8; i++) begin
                    row_mem[row_cnt*8 + i] <= dct_out[i];
                end
                row_cnt <= row_cnt + 1;
            end

            // ------------------------------------------------------------------
            //  Column phase: write final coefficients into coef_mem
            // ------------------------------------------------------------------
            if (state == S_COL) begin
                for (int i = 0; i < 8; i++) begin
                    coef_mem[i*8 + col_cnt] <= dct_out[i]; // transpose write
                end
                col_cnt <= col_cnt + 1;
            end

            // ------------------------------------------------------------------
            //  Counter resets on phase boundaries
            // ------------------------------------------------------------------
            if (state != S_ROW) row_cnt <= (state_n == S_ROW) ? 4'd0 : row_cnt;
            if (state != S_COL) col_cnt <= (state_n == S_COL) ? 4'd0 : col_cnt;
        end
    end

    // ------------------------------------------------------------------
    //  Next‑state logic & handshake
    // ------------------------------------------------------------------
    always_comb begin
        state_n   = state;
        in_ready  = 0;
        out_valid = 0;

        case (state)
            // ------------------------------------------------------------ IDLE
            S_IDLE: begin
                in_ready = 1;                 // accept new block immediately
                if (in_valid) begin
                    state_n = S_ROW;
                end
            end
            // ------------------------------------------------------------ ROW PHASE
            S_ROW: begin
                if (row_cnt == 4'd7) begin
                    state_n = S_COL;         // after 8 rows processed
                end
            end
            // ------------------------------------------------------------ COLUMN PHASE
            S_COL: begin
                if (col_cnt == 4'd7) begin
                    state_n = S_OUT;         // after 8 columns processed
                end
            end
            // ------------------------------------------------------------ OUTPUT PHASE
            S_OUT: begin
                out_valid = 1;
                if (out_ready) begin
                    state_n = S_IDLE;        // block consumed – ready for next
                end
            end
        endcase
    end

    // ------------------------------------------------------------------
    //  Assemble whole‑block output (row‑major)
    // ------------------------------------------------------------------
    always_comb begin
        out_block = '0;
        for (int i = 0; i < 64; i++) begin
            out_block[i*IN_W +: IN_W] = coef_mem[i];
        end
    end

endmodule
