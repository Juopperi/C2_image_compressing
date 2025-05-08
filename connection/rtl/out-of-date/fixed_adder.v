module fixed_adder (
    input  wire [31:0] a,
    input  wire [31:0] b,
    output  [31:0] sum_out
);

    wire [32:0] sum_mag_raw;

    assign sum_mag_raw = a+b; // 保留进位

    assign sum_out = sum_mag_raw[31:0]; // 正常 


endmodule
