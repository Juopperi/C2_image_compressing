module lut_multiplier_CONST_W_8(
    input  logic [31:0] data_in,
    output logic [31:0] data_out
);

    // Instantiate the module with specific parameter
    lut_multiplier #(
        .IN_W(32),
        .CONST_W(8),
        .FRAC(15)
    ) dut (
        .a(data_in),
        .b(16'hFFFF),
        .result(data_out)
    );

endmodule
