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
    parameter int FRAC    = 8,
    parameter int CONST_W = 10
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



// -----------------------------------------------------------------------------
// 8‑point 1‑D DCT (Chen) – zero bit‑growth, FRAC = 8
// -----------------------------------------------------------------------------
`timescale 1ns / 1ns
module dct8_chen #(
    parameter int IN_W    = 32,
    parameter int FRAC    = 8,    // fractional bits – matches constant scaling
    parameter int CONST_W = 10    // constant width (covers ±511)
)(
    input  logic signed [IN_W-1:0] in0,
    input  logic signed [IN_W-1:0] in1,
    input  logic signed [IN_W-1:0] in2,
    input  logic signed [IN_W-1:0] in3,
    input  logic signed [IN_W-1:0] in4,
    input  logic signed [IN_W-1:0] in5,
    input  logic signed [IN_W-1:0] in6,
    input  logic signed [IN_W-1:0] in7,
    output logic signed [IN_W-1:0] out0,
    output logic signed [IN_W-1:0] out1,
    output logic signed [IN_W-1:0] out2,
    output logic signed [IN_W-1:0] out3,
    output logic signed [IN_W-1:0] out4,
    output logic signed [IN_W-1:0] out5,
    output logic signed [IN_W-1:0] out6,
    output logic signed [IN_W-1:0] out7
);

    // ------------------------------------------------------------------
    //  Fixed‑point constants (scaled by 2^FRAC, FRAC = 8)
    // ------------------------------------------------------------------
    localparam logic signed [CONST_W-1:0] C1   = 10'sd251; // cos π/16
    localparam logic signed [CONST_W-1:0] C2   = 10'sd237; // cos π/8
    localparam logic signed [CONST_W-1:0] C3   = 10'sd213; // cos 3π/16
    localparam logic signed [CONST_W-1:0] C4   = 10'sd181; // cos π/4
    localparam logic signed [CONST_W-1:0] C6   = 10'sd98 ; // cos 3π/8

    localparam logic signed [CONST_W-1:0] Sin1 = 10'sd50 ; // sin π/16
    localparam logic signed [CONST_W-1:0] Sin3 = 10'sd142; // sin 3π/16

    localparam logic signed [CONST_W-1:0] K0   = 10'sd91 ; // √(1/8)
    localparam logic signed [CONST_W-1:0] K    = 10'sd128; // √(2/8)

    // ------------------------------------------------------------------
    //  Fixed‑point multiply with immediate truncation
    // ------------------------------------------------------------------
    function automatic logic signed [IN_W-1:0] mul(
        input logic signed [IN_W-1:0]    a,
        input logic signed [CONST_W-1:0] b
    );
        logic signed [IN_W+CONST_W-1:0] prod;
        logic signed [IN_W+CONST_W-1:0] shft;
    begin
        prod = a * b;
        shft = prod >>> FRAC;
        mul  = shft[IN_W-1 : 0]; // keep IN_W bits, no growth
    end
    endfunction

    // 1. Butterfly split (even / odd)
    wire signed [IN_W-1:0] S0 = in0 + in7;
    wire signed [IN_W-1:0] D0 = in0 - in7;

    wire signed [IN_W-1:0] S1 = in1 + in6;
    wire signed [IN_W-1:0] D1 = in1 - in6;

    wire signed [IN_W-1:0] S2 = in2 + in5;
    wire signed [IN_W-1:0] D2 = in2 - in5;

    wire signed [IN_W-1:0] S3 = in3 + in4;
    wire signed [IN_W-1:0] D3 = in3 - in4;

    // 2. Even part
    wire signed [IN_W-1:0] E0 = S0 + S3;
    wire signed [IN_W-1:0] E1 = S1 + S2;
    wire signed [IN_W-1:0] E2 = S0 - S3;
    wire signed [IN_W-1:0] E3 = S1 - S2;

    wire signed [IN_W-1:0] B0 = E0 + E1;
    wire signed [IN_W-1:0] B4 = mul(E0 - E1, C4);
    wire signed [IN_W-1:0] B2 = mul(E2, C2) + mul(E3, C6);
    wire signed [IN_W-1:0] B6 = mul(E2, C6) - mul(E3, C2);

    // 3. Odd part
    wire signed [IN_W-1:0] B1 =  mul(D0, C1) + mul(D1, C3)
                               + mul(D2, Sin3) + mul(D3, Sin1);

    wire signed [IN_W-1:0] B3 =  mul(D0, C3) - mul(D1, Sin1)
                               - mul(D2, C1) - mul(D3, Sin3);

    wire signed [IN_W-1:0] B5 =  mul(D0, Sin3) - mul(D1, C1)
                               + mul(D2, Sin1) + mul(D3, C3);

    wire signed [IN_W-1:0] B7 =  mul(D0, Sin1) - mul(D1, Sin3)
                               + mul(D2, C3)  - mul(D3, C1);

    // 4. Scaling (α/√N)
    assign out0 = mul(B0, K0);
    assign out1 = mul(B1, K );
    assign out2 = mul(B2, K );
    assign out3 = mul(B3, K );
    assign out4 = mul(B4, K );
    assign out5 = mul(B5, K );
    assign out6 = mul(B6, K );
    assign out7 = mul(B7, K );

endmodule
