module shift_add_multiplier_8x16_frac (
    input  wire [7:0]  a,  // 8-bit unsigned integer
    input  wire [15:0] b,  // 16-bit fixed-point fraction (Q0.16)
    output wire [23:0] p   // 24-bit result (Q8.16)
);
    reg [23:0] result;

    integer i;
    always @(*) begin
        result = 24'd0;
        for (i = 0; i < 8; i = i + 1) begin
            if (a[i])
                result = result + (b << i);  // 左移 i 位相当于乘 2^i
        end
    end

    assign p = result;
endmodule
