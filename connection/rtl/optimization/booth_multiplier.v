module booth_multiplier #(parameter WIDTH = 16)(
    input  wire clk,
    input  wire [WIDTH-1:0] a, 
    input  wire [WIDTH-1:0] b,
    output reg [2*WIDTH-1:0] result
);

    // Booth multiplier implementation 
    (* use_dsp = "no" *)
    reg [2*WIDTH:0] partial_product;
    reg [WIDTH-1:0] multiplier, multiplicand;
    reg [5:0] i;
    reg [2*WIDTH:0] temp_result;
    
    always @(posedge clk) begin
        // Initialize
        if (i == 0) begin
            multiplier <= b;
            multiplicand <= a;
            partial_product <= {(2*WIDTH){1'b0}};
            i <= 1;
            temp_result <= 0;
        end
        else if (i <= WIDTH) begin
            // Booth algorithm - check current and previous bits
            case ({multiplier[0], (i == 1) ? 1'b0 : multiplier[1]})
                2'b01: temp_result <= partial_product + {multiplicand, {WIDTH{1'b0}}};
                2'b10: temp_result <= partial_product - {multiplicand, {WIDTH{1'b0}}};
                default: temp_result <= partial_product;
            endcase
            
            // Shift right and prepare for next iteration
            multiplier <= {multiplier[0], multiplier[WIDTH-1:1]};
            partial_product <= {temp_result[2*WIDTH], temp_result[2*WIDTH:1]};
            i <= i + 1;
            
            // On last iteration, set the result
            if (i == WIDTH) begin
                result <= partial_product[2*WIDTH-1:0];
                i <= 0;
            end
        end
    end

endmodule 