module distributed_arithmetic #(
    parameter INPUT_WIDTH = 8,
    parameter COEF_WIDTH = 16,  // Width of coefficient after scaling
    parameter FIXED_POINT_LENGTH = 32,
    parameter SCALE = 16
)(
    input wire clk,
    input wire reset,
    input wire [INPUT_WIDTH-1:0] data_in,
    input wire [3:0] coef_select,  // Select which coefficient to use
    output reg [FIXED_POINT_LENGTH-1:0] result
);

    // Define scaled coefficients
    reg [COEF_WIDTH-1:0] coefficient;
    
    // Internal registers for DA processing
    reg [FIXED_POINT_LENGTH-1:0] accumulator;
    reg [INPUT_WIDTH-1:0] shift_reg;
    reg [4:0] bit_counter;
    
    // Select coefficient based on coef_select
    always @(*) begin
        case (coef_select)
            4'd0: coefficient = 16'd19595;  // 0.299 * 2^16
            4'd1: coefficient = 16'd38469;  // 0.587 * 2^16
            4'd2: coefficient = 16'd7471;   // 0.114 * 2^16
            4'd3: coefficient = 16'd11055;  // 0.1687 * 2^16
            4'd4: coefficient = 16'd21709;  // 0.3313 * 2^16
            4'd5: coefficient = 16'd32768;  // 0.5 * 2^16
            4'd6: coefficient = 16'd27429;  // 0.4187 * 2^16
            4'd7: coefficient = 16'd5326;   // 0.0813 * 2^16
            4'd8: coefficient = 16'd8388608 >> SCALE; // 128 * 2^16 (shifted by SCALE)
            default: coefficient = 16'd0;
        endcase
    end
    
    // Distributed Arithmetic implementation
    // This method processes the multiplication bit by bit, 
    // accumulating partial products without using DSP blocks
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            accumulator <= 0;
            shift_reg <= data_in;
            bit_counter <= 0;
            result <= 0;
        end else begin
            if (bit_counter == 0) begin
                // Load new data and reset accumulator at start of computation
                shift_reg <= data_in;
                accumulator <= 0;
                bit_counter <= bit_counter + 1;
            end else if (bit_counter <= INPUT_WIDTH) begin
                // Process each bit of input sequentially
                if (shift_reg[0]) begin
                    // Add coefficient to accumulator if current bit is 1
                    accumulator <= accumulator + (coefficient << (bit_counter - 1));
                end
                
                // Shift right to process next bit
                shift_reg <= shift_reg >> 1;
                bit_counter <= bit_counter + 1;
            end else begin
                // Computation complete, update result
                result <= accumulator;
                bit_counter <= 0; // Reset for next computation
            end
        end
    end

endmodule 