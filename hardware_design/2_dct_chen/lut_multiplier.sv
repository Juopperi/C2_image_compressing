// (* use_dsp="no", use_dsp48="no" *)
module lut_multiplier #(
    parameter int IN_W     = 32,   // Data bit width (>= pixel + FRAC)
    parameter int CONST_W  = 16    // Constant coefficient bit width
)(
    input  logic signed [IN_W-1:0]    a,      // Input data
    input  logic signed [CONST_W-1:0] b,      // Constant coefficient
    output logic signed [IN_W-1:0]    result  // Multiplication result
);

    localparam int FRAC = CONST_W - 1;  // Number of fractional bits

    // Wider internal register for multiplication result
    // (* use_dsp="no", use_dsp48="no" *) 
    logic signed [IN_W+CONST_W-1:0] p;
    
    // Perform multiplication and right-shift to implement fixed-point multiplication
    always_comb begin
        p = a * b;           // Full precision multiplication
        result = p >>> FRAC; // Right-shift by FRAC bits, truncate to maintain IN_W width
    end

endmodule
