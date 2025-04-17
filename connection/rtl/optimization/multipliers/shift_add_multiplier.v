module shift_add_multiplier #(parameter WIDTH = 16)(
    input  wire clk,
    input  wire [WIDTH-1:0] a,
    input  wire [WIDTH-1:0] b,
    output reg [2*WIDTH-1:0] result
);

    // Shift-and-add multiplier implementation
    (* use_dsp = "no" *)
    reg [WIDTH-1:0] multiplicand;
    reg [WIDTH-1:0] multiplier;
    reg [2*WIDTH-1:0] temp_result;
    reg [5:0] i;
    
    always @(posedge clk) begin
        if (i == 0) begin
            // Initialize for new multiplication
            multiplicand <= a;
            multiplier <= b;
            temp_result <= 0;
            i <= 1;
        end
        else if (i <= WIDTH) begin
            // If current bit is 1, add shifted multiplicand
            if (multiplier[0])
                temp_result <= temp_result + ({WIDTH'b0, multiplicand} << (i-1));
            
            i <= i + 1;
            multiplier <= multiplier >> 1;
            
            // On last iteration, set the result
            if (i == WIDTH) begin
                result <= temp_result;
                i <= 0;
            end
        end
    end

endmodule 