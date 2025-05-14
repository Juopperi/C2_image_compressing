module dct8_chen_ts_CONST_W_26(
    input  logic        clk,
    input  logic        rst_n,
    input  logic        valid_in,
    input  logic [31:0] data_in [7:0],
    output logic        valid_out,
    output logic [31:0] data_out [7:0]
);

    // Instantiate the module with specific parameter
    dct8_chen_ts #(
        .IN_W(32),
        .CONST_W(26),
        .FRAC(8)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid(valid_in),
        .in_ready(),  // Left unconnected as wrapper doesn't use it
        .in0(data_in[0]),
        .in1(data_in[1]),
        .in2(data_in[2]),
        .in3(data_in[3]),
        .in4(data_in[4]),
        .in5(data_in[5]),
        .in6(data_in[6]),
        .in7(data_in[7]),
        .out_valid(valid_out),
        .out_ready(1'b1),  // Always ready to receive output
        .out0(data_out[0]),
        .out1(data_out[1]),
        .out2(data_out[2]),
        .out3(data_out[3]),
        .out4(data_out[4]),
        .out5(data_out[5]),
        .out6(data_out[6]),
        .out7(data_out[7])
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
