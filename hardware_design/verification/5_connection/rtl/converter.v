module rgb2ycbcr_container #(
    parameter fixed_point_length = 32,
    parameter input_width = 8
)(
    input wire clk,
    input wire [8*64-1:0] r_all, // 64个8位R
    input wire [8*64-1:0] g_all, // 64个8位G
    input wire [8*64-1:0] b_all, // 64个8位B
    output wire [fixed_point_length*64-1:0] y_all,
    output wire [fixed_point_length*64-1:0] cb_all,
    output wire [fixed_point_length*64-1:0] cr_all
);

    genvar i;
    generate
        for (i = 0; i < 64; i = i + 1) begin : gen_conversion
            wire [7:0] r = r_all[i*8 +: 8];
            wire [7:0] g = g_all[i*8 +: 8];
            wire [7:0] b = b_all[i*8 +: 8];
            
            wire [fixed_point_length-1:0] y, cb, cr;

            int_mul_fra_ycbcr u_conversion (
                .r(r),
                .g(g),
                .b(b),
                .y(y),
                .cb(cb),
                .cr(cr)
            );

            assign y_all[i*fixed_point_length +: fixed_point_length] = y;
            assign cb_all[i*fixed_point_length +: fixed_point_length] = cb;
            assign cr_all[i*fixed_point_length +: fixed_point_length] = cr;
        end
    endgenerate

endmodule
