module lut_multiplier #(parameter WIDTH = 16)(
    input  wire clk,
    input  wire [WIDTH-1:0] a,
    input  wire [WIDTH-1:0] b,
    output reg [2*WIDTH-1:0] result
);

    // Force LUT-based implementation with no DSP
    (* use_dsp = "no" *)
    always @(posedge clk) begin
        result <= a * b;
    end

endmodule 