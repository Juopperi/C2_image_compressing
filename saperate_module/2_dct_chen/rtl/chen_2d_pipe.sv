`timescale 1ns / 1ps
// -----------------------------------------------------------------------------
// 2‑D 8×8 DCT – single‑core, pipelined implementation
// -----------------------------------------------------------------------------
//  • Instantiates *one* dct8_chen and re‑uses it:
//        phase 0  : read 8 rows  → row DCT, store to row_mem[64]
//        phase 1  : read 8 columns → column DCT, store to coef_mem[64]
//        phase 2  : stream out 8 rows (row‑major) as final coefficients
//  • Throughput  : one 8×8 block every 24 cycles (8 in + 8 calc + 8 out)
//  • Latency     : 16 cycles from first row in to first row out
//  • Handshake   : ready/valid on both input and output (row‑granularity)
// -----------------------------------------------------------------------------
//  Interface (per‑row streaming)
//  ============================
//      clk, rst_n      – clock / active‑low reset
//      in_valid        – high when in_row holds a valid *row* (8 pixels)
//      in_row  [8*IN_W]– row‑major {p7,p6,…,p0}; accepted when in_ready=1
//      in_ready        – high when the core can accept a new row
//
//      out_valid       – high when out_row is valid (row of 8 DCT coeffs)
//      out_row [8*IN_W]– row‑major {X7,X6,…,X0}; consumed when out_ready=1
//      out_ready       – back‑pressure from downstream
// -----------------------------------------------------------------------------
//  Notes
//  -----
//  • Uses simple on‑chip register arrays (64 words each) – swap to BRAM if
//    targeting FPGA and timing/area suggest so.
//  • No transposition network is needed at wiring level; the address mapping
//    during the column phase performs the transpose implicitly.
//  • Requires SystemVerilog (logic type, packed arrays, for‑loops).
// -----------------------------------------------------------------------------

module dct8x8_2d_pipe #(
    parameter int IN_W    = 32,
    parameter int FRAC    = 14,
    parameter int CONST_W = 16
)(
    input  logic                     clk,
    input  logic                     rst_n,

    // input stream – one 8‑sample row each beat
    input  logic                     in_valid,
    input  logic [IN_W*8-1:0]        in_row,
    output logic                     in_ready,

    // output stream – one 8‑sample row each beat
    output logic                     out_valid,
    output logic [IN_W*8-1:0]        out_row,
    input  logic                     out_ready
);

    // ------------------------------------------------------------------
    //  Typedefs & local parameters
    // ------------------------------------------------------------------
    typedef logic signed [IN_W-1:0] sample_t;

    // ------------------------------------------------------------------
    //  Row / coefficient memories (simple registers)
    // ------------------------------------------------------------------
    sample_t row_mem [0:63];   // holds row‑DCT results  (8×8)
    sample_t coef_mem[0:63];   // holds final coefficients (8×8)

    // ------------------------------------------------------------------
    //  State machine
    // ------------------------------------------------------------------
    typedef enum logic [1:0] {S_IDLE, S_ROW, S_COL, S_OUT} state_t;
    state_t state, state_n;

    // counters
    logic [3:0] row_cnt;       // 0‑7 in row phase
    logic [3:0] col_cnt;       // 0‑7 in column phase
    logic [3:0] out_row_cnt;   // 0‑7 in output phase

    // ------------------------------------------------------------------
    //  Input splitter / column multiplexer → feeds the dct8_chen
    // ------------------------------------------------------------------
    sample_t dct_in [0:7];
    sample_t dct_out[0:7];

    // unpack input row into array form (combinational)
    always_comb begin
        for (int i = 0; i < 8; i++) begin
            // default zero (when not in ROW / COL phase)
            dct_in[i] = '0;
            if (state == S_ROW) begin
                dct_in[i] = in_row[i*IN_W +: IN_W];   // pixels p0..p7
            end else if (state == S_COL) begin
                // read i‑th element of current column from row_mem
                dct_in[i] = row_mem[i*8 + col_cnt];
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
            state       <= S_IDLE;
            row_cnt     <= 0;
            col_cnt     <= 0;
            out_row_cnt <= 0;
        end else begin
            state <= state_n;

            // Row phase: write DCT results into row_mem
            if (state == S_ROW && in_valid && in_ready) begin
                for (int i = 0; i < 8; i++) begin
                    row_mem[row_cnt*8 + i] <= dct_out[i];
                end
                row_cnt <= row_cnt + 1;
            end
            // Column phase: write final coefficients into coef_mem
            else if (state == S_COL) begin
                for (int i = 0; i < 8; i++) begin
                    coef_mem[i*8 + col_cnt] <= dct_out[i]; // transpose write
                end
                col_cnt <= col_cnt + 1;
            end
            // Output phase: nothing to store, just stream
            if (state == S_OUT && out_valid && out_ready) begin
                out_row_cnt <= out_row_cnt + 1;
            end
            // Reset counters when leaving phases
            if (state != S_ROW) row_cnt <= (state_n == S_ROW) ? 0 : row_cnt;
            if (state != S_COL) col_cnt <= (state_n == S_COL) ? 0 : col_cnt;
            if (state != S_OUT) out_row_cnt <= (state_n == S_OUT) ? 0 : out_row_cnt;
        end
    end

    // ------------------------------------------------------------------
    //  Next‑state logic
    // ------------------------------------------------------------------
    always_comb begin
        state_n  = state;
        in_ready = 0;
        out_valid = 0;

        case (state)
            S_IDLE: begin
                in_ready = 1;                   // accept first row immediately
                if (in_valid) state_n = S_ROW;
            end
            //-------------------------------------------------- ROW PHASE
            S_ROW: begin
                in_ready = 1;
                if (in_valid) begin
                    if (row_cnt == 4'd7) begin
                        // last row just captured → next cycle go to COL
                        state_n = S_COL;
                    end
                end
            end
            //-------------------------------------------------- COLUMN PHASE
            S_COL: begin
                if (col_cnt == 4'd7) begin
                    // last column finished this cycle → go to OUT
                    state_n = S_OUT;
                end
            end
            //-------------------------------------------------- OUTPUT PHASE
            S_OUT: begin
                out_valid = 1;
                if (out_ready) begin
                    if (out_row_cnt == 4'd7) begin
                        state_n = S_IDLE;      // block done
                    end
                end
            end
        endcase
    end

    // ------------------------------------------------------------------
    //  Assemble output row on the fly (row‑major)
    // ------------------------------------------------------------------
    always_comb begin
        out_row = '0;
        for (int i = 0; i < 8; i++) begin
            out_row[i*IN_W +: IN_W] = coef_mem[out_row_cnt*8 + i];
        end
    end

endmodule
`timescale 1ns / 1ns
// -----------------------------------------------------------------------------
// 8‑point 1‑D DCT (Chen fast algorithm)
//   • purely combinational, no FSM
//   • fixed‑point, parameterisable word length
//   • **no adder bit‑growth** – all add / sub results stay in IN_W bits
// -----------------------------------------------------------------------------
//  Design note (why it still works)
//  --------------------------------
//  For image / video pixels the dynamic range is usually far smaller than the
//  32‑bit word length we use here (e.g. 12‑bit camera -> sign‑extended to 32).
//  Even the largest butterfly sum (2×Pmax) therefore remains comfortably inside
//  the signed 32‑bit range, so we can safely keep every adder on IN_W bits.
//  If your application ever pushes the numeric limits, either
//      • increase IN_W, or
//      • replace the '+' operators with a saturating‑add module.
//  This keeps timing, area and routing simpler because we avoid the wide carry
//  chains introduced by the extra guard bits.
// -----------------------------------------------------------------------------

module dct8_chen #(
    parameter int IN_W    = 32,   // sample word length (≥ pixel bits + FRAC)
    parameter int FRAC    = 14,   // fractional bits (Q1.FRAC)
    parameter int CONST_W = 16    // bits for embedded constants (≥ FRAC)
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
    //  Fixed‑point constants (Q1.FRAC, scaled by 2^FRAC)
    // ------------------------------------------------------------------
    localparam logic signed [CONST_W-1:0] C1 = 16'sd16069; // cos(π/16)
    localparam logic signed [CONST_W-1:0] C2 = 16'sd15137; // cos(π/8)
    localparam logic signed [CONST_W-1:0] C3 = 16'sd13623; // cos(3π/16)
    localparam logic signed [CONST_W-1:0] C4 = 16'sd11585; // cos(π/4)
    localparam logic signed [CONST_W-1:0] C6 = 16'sd6270;  // cos(3π/8)

    localparam logic signed [CONST_W-1:0] Sin1 = 16'sd3196;  // sin(π/16)
    localparam logic signed [CONST_W-1:0] Sin3 = 16'sd9102;  // sin(3π/16)

    localparam logic signed [CONST_W-1:0] K0 = 16'sd5793;  // √(1/8)
    localparam logic signed [CONST_W-1:0] K  = 16'sd8192;  // √(2/8)

    // ------------------------------------------------------------------
    //  Helper: fixed‑point multiply (>> FRAC rescale)
    // ------------------------------------------------------------------
    function automatic logic signed [IN_W+CONST_W-1:0] mul(
        input logic signed [IN_W-1:0]          a,
        input logic signed [CONST_W-1:0]       b);
    begin
        mul = (a * b) >>> FRAC; // result still in Q1.FRAC
    end
    endfunction

    // ------------------------------------------------------------------
    // 1. Butterfly split (even / odd)
    // ------------------------------------------------------------------
    logic signed [IN_W-1:0] S0 = in0 + in7;
    logic signed [IN_W-1:0] D0 = in0 - in7;

    logic signed [IN_W-1:0] S1 = in1 + in6;
    logic signed [IN_W-1:0] D1 = in1 - in6;

    logic signed [IN_W-1:0] S2 = in2 + in5;
    logic signed [IN_W-1:0] D2 = in2 - in5;

    logic signed [IN_W-1:0] S3 = in3 + in4;
    logic signed [IN_W-1:0] D3 = in3 - in4;

    // ------------------------------------------------------------------
    // 2. Even part
    // ------------------------------------------------------------------
    logic signed [IN_W-1:0] E0 = S0 + S3;
    logic signed [IN_W-1:0] E1 = S1 + S2;
    logic signed [IN_W-1:0] E2 = S0 - S3;
    logic signed [IN_W-1:0] E3 = S1 - S2;

    logic signed [IN_W-1:0]             B0 = E0 + E1;           // ×1
    logic signed [IN_W+CONST_W-1:0]     B4 = mul(E0 - E1, C4);
    logic signed [IN_W+CONST_W-1:0]     B2 = mul(E2, C2) + mul(E3, C6);
    logic signed [IN_W+CONST_W-1:0]     B6 = mul(E2, C6) - mul(E3, C2);

    // ------------------------------------------------------------------
    // 3. Odd part
    // ------------------------------------------------------------------
    logic signed [IN_W+CONST_W-1:0] B1 =  mul(D0, C1) + mul(D1, C3)
                                        + mul(D2, Sin3) + mul(D3, Sin1);

    logic signed [IN_W+CONST_W-1:0] B3 =  mul(D0, C3) - mul(D1, Sin1)
                                        - mul(D2, C1) - mul(D3, Sin3);

    logic signed [IN_W+CONST_W-1:0] B5 =  mul(D0, Sin3) - mul(D1, C1)
                                        + mul(D2, Sin1) + mul(D3, C3);

    logic signed [IN_W+CONST_W-1:0] B7 =  mul(D0, Sin1) - mul(D1, Sin3)
                                        + mul(D2, C3) - mul(D3, C1);

    // ------------------------------------------------------------------
    // 4. Scaling (orthonormal factors α/√N)
    // ------------------------------------------------------------------
    logic signed [IN_W+CONST_W-1:0] O0 = mul(B0, K0);
    logic signed [IN_W+CONST_W-1:0] O1 = mul(B1, K );
    logic signed [IN_W+CONST_W-1:0] O2 = mul(B2, K );
    logic signed [IN_W+CONST_W-1:0] O3 = mul(B3, K );
    logic signed [IN_W+CONST_W-1:0] O4 = mul(B4, K );
    logic signed [IN_W+CONST_W-1:0] O5 = mul(B5, K );
    logic signed [IN_W+CONST_W-1:0] O6 = mul(B6, K );
    logic signed [IN_W+CONST_W-1:0] O7 = mul(B7, K );

    // ------------------------------------------------------------------
    // 5. Truncate back to IN_W (keep MSBs, preserve Q format)
    // ------------------------------------------------------------------
    localparam int CUT = IN_W+CONST_W-1;
    assign out0 = O0[CUT -: IN_W];
    assign out1 = O1[CUT -: IN_W];
    assign out2 = O2[CUT -: IN_W];
    assign out3 = O3[CUT -: IN_W];
    assign out4 = O4[CUT -: IN_W];
    assign out5 = O5[CUT -: IN_W];
    assign out6 = O6[CUT -: IN_W];
    assign out7 = O7[CUT -: IN_W];

endmodule
