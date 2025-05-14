module lut_multiplier_CONST_W_22(
    input  logic [31:0] data_in,
    output logic [31:0] data_out
);

    // Instantiate the module with specific parameter
    lut_multiplier #(
        .IN_W(32),
        .CONST_W(22),
        .FRAC(15)
    ) dut (
        .a(data_in),
        .b(32'hFFFFFFFF),
        .result(data_out)
    );

    // Force usage of output to prevent optimization
    // synthesis translate_off
    always_comb begin
        if (data_out === 'x) begin
            $display("Output is used");
        end
    end
    // synthesis translate_on

endmodule
