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
