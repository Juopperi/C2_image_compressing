// -----------------------------------------------------------------------------
// 8-point 1-D DCT (Chen) – zero bit-growth, FRAC = 8
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
    // Multiplication result wires
    // ------------------------------------------------------------------
    logic signed [IN_W-1:0] mul_E0E1_C4;
    logic signed [IN_W-1:0] mul_E2_C2;
    logic signed [IN_W-1:0] mul_E3_C6;
    logic signed [IN_W-1:0] mul_E2_C6;
    logic signed [IN_W-1:0] mul_E3_C2;
    
    logic signed [IN_W-1:0] mul_D0_C1;
    logic signed [IN_W-1:0] mul_D1_C3;
    logic signed [IN_W-1:0] mul_D2_Sin3;
    logic signed [IN_W-1:0] mul_D3_Sin1;
    
    logic signed [IN_W-1:0] mul_D0_C3;
    logic signed [IN_W-1:0] mul_D1_Sin1;
    logic signed [IN_W-1:0] mul_D2_C1;
    logic signed [IN_W-1:0] mul_D3_Sin3;
    
    logic signed [IN_W-1:0] mul_D0_Sin3;
    logic signed [IN_W-1:0] mul_D1_C1;
    logic signed [IN_W-1:0] mul_D2_Sin1;
    logic signed [IN_W-1:0] mul_D3_C3;
    
    logic signed [IN_W-1:0] mul_D0_Sin1;
    logic signed [IN_W-1:0] mul_D1_Sin3;
    logic signed [IN_W-1:0] mul_D2_C3;
    logic signed [IN_W-1:0] mul_D3_C1;
    
    logic signed [IN_W-1:0] mul_B0_K0;
    logic signed [IN_W-1:0] mul_B1_K;
    logic signed [IN_W-1:0] mul_B2_K;
    logic signed [IN_W-1:0] mul_B3_K;
    logic signed [IN_W-1:0] mul_B4_K;
    logic signed [IN_W-1:0] mul_B5_K;
    logic signed [IN_W-1:0] mul_B6_K;
    logic signed [IN_W-1:0] mul_B7_K;

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

    // Multiplier instantiations for even part
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_E0E1_C4 (
        .a(E0 - E1),
        .b(C4),
        .result(mul_E0E1_C4)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_E2_C2 (
        .a(E2),
        .b(C2),
        .result(mul_E2_C2)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_E3_C6 (
        .a(E3),
        .b(C6),
        .result(mul_E3_C6)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_E2_C6 (
        .a(E2),
        .b(C6),
        .result(mul_E2_C6)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_E3_C2 (
        .a(E3),
        .b(C2),
        .result(mul_E3_C2)
    );
    
    wire signed [IN_W-1:0] B0 = E0 + E1;
    wire signed [IN_W-1:0] B4 = mul_E0E1_C4;
    wire signed [IN_W-1:0] B2 = mul_E2_C2 + mul_E3_C6;
    wire signed [IN_W-1:0] B6 = mul_E2_C6 - mul_E3_C2;

    // Multiplier instantiations for odd part
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D0_C1 (
        .a(D0),
        .b(C1),
        .result(mul_D0_C1)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D1_C3 (
        .a(D1),
        .b(C3),
        .result(mul_D1_C3)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D2_Sin3 (
        .a(D2),
        .b(Sin3),
        .result(mul_D2_Sin3)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D3_Sin1 (
        .a(D3),
        .b(Sin1),
        .result(mul_D3_Sin1)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D0_C3 (
        .a(D0),
        .b(C3),
        .result(mul_D0_C3)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D1_Sin1 (
        .a(D1),
        .b(Sin1),
        .result(mul_D1_Sin1)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D2_C1 (
        .a(D2),
        .b(C1),
        .result(mul_D2_C1)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D3_Sin3 (
        .a(D3),
        .b(Sin3),
        .result(mul_D3_Sin3)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D0_Sin3 (
        .a(D0),
        .b(Sin3),
        .result(mul_D0_Sin3)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D1_C1 (
        .a(D1),
        .b(C1),
        .result(mul_D1_C1)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D2_Sin1 (
        .a(D2),
        .b(Sin1),
        .result(mul_D2_Sin1)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D3_C3 (
        .a(D3),
        .b(C3),
        .result(mul_D3_C3)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D0_Sin1 (
        .a(D0),
        .b(Sin1),
        .result(mul_D0_Sin1)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D1_Sin3 (
        .a(D1),
        .b(Sin3),
        .result(mul_D1_Sin3)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D2_C3 (
        .a(D2),
        .b(C3),
        .result(mul_D2_C3)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_D3_C1 (
        .a(D3),
        .b(C1),
        .result(mul_D3_C1)
    );

    // 3. Odd part
    wire signed [IN_W-1:0] B1 = mul_D0_C1 + mul_D1_C3 + mul_D2_Sin3 + mul_D3_Sin1;
    wire signed [IN_W-1:0] B3 = mul_D0_C3 - mul_D1_Sin1 - mul_D2_C1 - mul_D3_Sin3;
    wire signed [IN_W-1:0] B5 = mul_D0_Sin3 - mul_D1_C1 + mul_D2_Sin1 + mul_D3_C3;
    wire signed [IN_W-1:0] B7 = mul_D0_Sin1 - mul_D1_Sin3 + mul_D2_C3 - mul_D3_C1;

    // 4. Scaling (α/√N)
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_B0_K0 (
        .a(B0),
        .b(K0),
        .result(mul_B0_K0)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_B1_K (
        .a(B1),
        .b(K),
        .result(mul_B1_K)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_B2_K (
        .a(B2),
        .b(K),
        .result(mul_B2_K)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_B3_K (
        .a(B3),
        .b(K),
        .result(mul_B3_K)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_B4_K (
        .a(B4),
        .b(K),
        .result(mul_B4_K)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_B5_K (
        .a(B5),
        .b(K),
        .result(mul_B5_K)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_B6_K (
        .a(B6),
        .b(K),
        .result(mul_B6_K)
    );
    
    fixed_point_mul #(IN_W, FRAC, CONST_W) mult_B7_K (
        .a(B7),
        .b(K),
        .result(mul_B7_K)
    );

    assign out0 = mul_B0_K0;
    assign out1 = mul_B1_K;
    assign out2 = mul_B2_K;
    assign out3 = mul_B3_K;
    assign out4 = mul_B4_K;
    assign out5 = mul_B5_K;
    assign out6 = mul_B6_K;
    assign out7 = mul_B7_K;

endmodule

// -----------------------------------------------------------------------------
// Fixed-point multiply with immediate truncation
// -----------------------------------------------------------------------------
`timescale 1ns / 1ns
module fixed_point_mul #(
    parameter int IN_W    = 32,
    parameter int FRAC    = 8,     // fractional bits - matches constant scaling
    parameter int CONST_W = 10     // constant width (covers ±511)
)(
    input  logic signed [IN_W-1:0]    a,
    input  logic signed [CONST_W-1:0] b,
    output logic signed [IN_W-1:0]    result
);
    logic signed [IN_W+CONST_W-1:0] prod;
    logic signed [IN_W+CONST_W-1:0] shft;
    
    always_comb begin
        prod = a * b;
        shft = prod >>> FRAC;
        result = shft[IN_W-1 : 0]; // keep IN_W bits, no growth
    end
endmodule
