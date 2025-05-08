module rgb2ycbcr_container #(
    parameter fixed_point_length = 32
)(
    input wire clk,
    input wire [8*64-1:0] r_all, // 64个8位R
    input wire [8*64-1:0] g_all, // 64个8位G
    input wire [8*64-1:0] b_all, // 64个8位B
    output wire [fixed_point_length*64-1:0] y_all,
    output wire [fixed_point_length*64-1:0] cb_all,
    output wire [fixed_point_length*64-1:0] cr_all,
    output wire done
);

    genvar i;
    generate
        for (i = 0; i < 64; i = i + 1) begin : gen_conversion
            wire [7:0] r = r_all[i*8 +: 8];
            wire [7:0] g = g_all[i*8 +: 8];
            wire [7:0] b = b_all[i*8 +: 8];
            
            wire [fixed_point_length-1:0] y, cb, cr;

            conversion  u_conversion (
                .clk(clk),
                .input_R(r),
                .input_G(g),
                .input_B(b),
                .output_Y(y),
                .output_Cb(cb),
                .output_Cr(cr),
                .done(done)
            );

            assign y_all[i*fixed_point_length +: fixed_point_length] = y;
            assign cb_all[i*fixed_point_length +: fixed_point_length] = cb;
            assign cr_all[i*fixed_point_length +: fixed_point_length] = cr;
        end
    endgenerate

endmodule
