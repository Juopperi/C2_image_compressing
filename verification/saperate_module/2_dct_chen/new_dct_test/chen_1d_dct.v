

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