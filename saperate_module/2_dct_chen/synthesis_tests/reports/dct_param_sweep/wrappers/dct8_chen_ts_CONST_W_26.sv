module dct8_chen_ts_CONST_W_26(
    input  logic        clk,
    input  logic        rst_n,
    input  logic        valid_in,
    input  logic [15:0] data_in [7:0],
    output logic        valid_out,
    output logic [15:0] data_out [7:0]
);

    // Instantiate the module with specific parameter
    dct8_chen_ts #(
        .DATA_W(16),
        .CONST_W(26),
        .FRAC(8)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .valid_in(valid_in),
        .x(data_in),
        .valid_out(valid_out),
        .y(data_out)
    );

    // Force usage of output to prevent optimization
    // synthesis translate_off
    always_comb begin
        if (data_out[0] === 'x) begin
            $display("Output is used");
        end
    end
    // synthesis translate_on

endmodule
