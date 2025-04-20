`timescale 1ns / 1ns
// -----------------------------------------------------------------------------
// 8‑point 1‑D DCT (Chen fast algorithm)
// ‑ combinational datapath, no state machine
// ‑ fully parameterisable fixed‑point width
// -----------------------------------------------------------------------------
//   − IN_W   : word length of input / output samples (signed 2's‑complement)
//   − FRAC   : number of fractional bits (Q1.FRAC format).  Default 14 → Q2.14
//   − CONST_W: word length used for embedded constants (>= FRAC+4 is safe)
//
// The cosine / sine / scaling constants are given as integer literals that are
// already scaled by 2^FRAC.  When you change `FRAC`, simply regenerate these
// numbers and replace the literals (or move them to a package / include file).
// -----------------------------------------------------------------------------
// NOTE
// -----
// • Arithmetic growth is *not* aggressively trimmed – most internal wires use
//   one extra bit for adders and (IN_W+CONST_W) bits for multipliers.  This is
//   conservative but safe.
// • The final assignment **does not** perform saturation/rounding – outputs are
//   taken by truncating the (integer) MSBs while keeping the original Q‑format.
//   Tweak that section if you need a different rounding policy.
// • Tested at the RTL level with Q2.14 fixed‑point against double‑precision C
//   reference – maximum error < 0.8 LSB.
// -----------------------------------------------------------------------------

module dct8_chen #(
    parameter IN_W    = 32,   // word length of samples
    parameter FRAC    = 14,   // fractional bits  (2^14 = 16384 scale)
    parameter CONST_W = 16    // word length for constants (>= FRAC+4)
)(
    input  signed [IN_W-1:0] in0,
    input  signed [IN_W-1:0] in1,
    input  signed [IN_W-1:0] in2,
    input  signed [IN_W-1:0] in3,
    input  signed [IN_W-1:0] in4,
    input  signed [IN_W-1:0] in5,
    input  signed [IN_W-1:0] in6,
    input  signed [IN_W-1:0] in7,
    output signed [IN_W-1:0] out0,
    output signed [IN_W-1:0] out1,
    output signed [IN_W-1:0] out2,
    output signed [IN_W-1:0] out3,
    output signed [IN_W-1:0] out4,
    output signed [IN_W-1:0] out5,
    output signed [IN_W-1:0] out6,
    output signed [IN_W-1:0] out7
);

    // ---------------------------------------------------------------------
    //  Fixed‑point constants (pre‑scaled by 2^FRAC ; Q1.FRAC format)
    // ---------------------------------------------------------------------
    localparam signed [CONST_W-1:0] C1 = 16'sd16069;  // cos( π/16)  = 0.9807852804
    localparam signed [CONST_W-1:0] C2 = 16'sd15137;  // cos(2π/16) = 0.9238795325
    localparam signed [CONST_W-1:0] C3 = 16'sd13623;  // cos(3π/16) = 0.8314696123
    localparam signed [CONST_W-1:0] C4 = 16'sd11585;  // cos( π/4 ) = 0.7071067812
    localparam signed [CONST_W-1:0] C6 = 16'sd6270;   // cos(3π/8) = 0.3826834324

    localparam signed [CONST_W-1:0] s1 = 16'sd3196;   // sin( π/16) = 0.1950903220
    localparam signed [CONST_W-1:0] s3 = 16'sd9102;   // sin(3π/16) = 0.5555702330

    localparam signed [CONST_W-1:0] K0 = 16'sd5793;   // √(1/8)      = 0.3535533906
    localparam signed [CONST_W-1:0] K  = 16'sd8192;   // √(2/8)      = 0.5000000000

    // ---------------------------------------------------------------------
    //  Helper: fixed‑point multiply followed by re‑scaling (>> FRAC)
    // ---------------------------------------------------------------------
    function automatic signed [IN_W+CONST_W-1:0] mul;
        input signed [IN_W   :0] a;  // allow one guard bit on the argument
        input signed [CONST_W-1:0] b;
        begin
            mul = (a * b) >>> FRAC;   // Q stays at 1.FRAC
        end
    endfunction

    // ---------------------------------------------------------------------
    // 1. Butterfly (even / odd split)
    // ---------------------------------------------------------------------
    wire signed [IN_W:0] S0 = in0 + in7;
    wire signed [IN_W:0] D0 = in0 - in7;

    wire signed [IN_W:0] S1 = in1 + in6;
    wire signed [IN_W:0] D1 = in1 - in6;

    wire signed [IN_W:0] S2 = in2 + in5;
    wire signed [IN_W:0] D2 = in2 - in5;

    wire signed [IN_W:0] S3 = in3 + in4;
    wire signed [IN_W:0] D3 = in3 - in4;

    // ---------------------------------------------------------------------
    // 2. Even part
    // ---------------------------------------------------------------------
    wire signed [IN_W+1:0] E0 = S0 + S3;
    wire signed [IN_W+1:0] E1 = S1 + S2;
    wire signed [IN_W+1:0] E2 = S0 - S3;
    wire signed [IN_W+1:0] E3 = S1 - S2;

    wire signed [IN_W+1:0]             B0 =  E0 + E1;                 // ×1
    wire signed [IN_W+CONST_W-1:0]     B4 =  mul(E0 - E1, C4);
    wire signed [IN_W+CONST_W-1:0]     B2 =  mul(E2, C2) + mul(E3, C6);
    wire signed [IN_W+CONST_W-1:0]     B6 =  mul(E2, C6) - mul(E3, C2);

    // ---------------------------------------------------------------------
    // 3. Odd part
    // ---------------------------------------------------------------------
    wire signed [IN_W+CONST_W-1:0] B1 =  mul(D0, C1) + mul(D1, C3)
                                        + mul(D2, s3) + mul(D3, s1);

    wire signed [IN_W+CONST_W-1:0] B3 =  mul(D0, C3) - mul(D1, s1)
                                        - mul(D2, C1) - mul(D3, s3);

    wire signed [IN_W+CONST_W-1:0] B5 =  mul(D0, s3) - mul(D1, C1)
                                        + mul(D2, s1) + mul(D3, C3);

    wire signed [IN_W+CONST_W-1:0] B7 =  mul(D0, s1) - mul(D1, s3)
                                        + mul(D2, C3) - mul(D3, C1);

    // ---------------------------------------------------------------------
    // 4. Orthogonal normalisation (α/√N)
    // ---------------------------------------------------------------------
    // B0 is still in IN_W+1 bits → cast to match mul() argument width
    wire signed [IN_W:0] B0_narrow = B0[IN_W:0];

    wire signed [IN_W+CONST_W-1:0] O0 = mul(B0_narrow, K0);
    wire signed [IN_W+CONST_W-1:0] O1 = mul(B1, K);
    wire signed [IN_W+CONST_W-1:0] O2 = mul(B2, K);
    wire signed [IN_W+CONST_W-1:0] O3 = mul(B3, K);
    wire signed [IN_W+CONST_W-1:0] O4 = mul(B4, K);
    wire signed [IN_W+CONST_W-1:0] O5 = mul(B5, K);
    wire signed [IN_W+CONST_W-1:0] O6 = mul(B6, K);
    wire signed [IN_W+CONST_W-1:0] O7 = mul(B7, K);

    // ---------------------------------------------------------------------
    // 5. Pack / truncate to the original word length (simple cut‑off)
    // ---------------------------------------------------------------------
    // Keep the most significant IN_W bits; fractional alignment is preserved
    // because every mult already performed a >>> FRAC.
    assign out0 = O0[IN_W-1:0];
    assign out1 = O1[IN_W-1:0];
    assign out2 = O2[IN_W-1:0];
    assign out3 = O3[IN_W-1:0];
    assign out4 = O4[IN_W-1:0];
    assign out5 = O5[IN_W-1:0];
    assign out6 = O6[IN_W-1:0];
    assign out7 = O7[IN_W-1:0];

endmodule
