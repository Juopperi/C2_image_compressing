// Original
// Y =     0.299⋅R        +0.587⋅G        +0.114⋅B
// Cb =    -0.168736⋅R    -0.331264⋅G     +0.5⋅B        +128
// Cr =    0.5⋅R          -0.418688⋅G     -0.081312⋅B   +128
// Optimized
// Y =     0.299⋅R        +0.587⋅G        +0.114⋅B      -128
// Cb =    -0.168736⋅R    -0.331264⋅G     +0.5⋅B      
// Cr =    0.5⋅R          -0.418688⋅G     -0.081312⋅B 
// total
// Y =     0x4c8b*R     + 0x9645*G  + 0x1d2f*B - 128
// Cb =    -0x2b32*R    - 0x54cd*G  + 0x8000*B
// Cr =    0x8000*R -    0x6b2f*G   - 0x14d0*B 


module int_mul_fra_ycbcr (
    input  wire [7:0]  r,  // 8-bit unsigned integer
    input  wire [7:0]  g,  // 8-bit unsigned integer
    input  wire [7:0]  b,  // 8-bit unsigned integer
    output wire [31:0] y,  // 24-bit result (Q8.16)
    output wire [31:0] cb, // 24-bit result (Q8.16)
    output wire [31:0] cr  // 24-bit result (Q8.16)
);

reg [31:0] temp_y;
reg [31:0] temp_cb;
reg [31:0] temp_cr;

wire [23:0] y_r;
wire [23:0] y_g;
wire [23:0] y_b;
wire [23:0] cb_r;
wire [23:0] cb_g;
wire [23:0] cb_b;
wire [23:0] cr_r;
wire [23:0] cr_g;
wire [23:0] cr_b;

shift_add_multiplier_8x16_frac y_r_mul(.a(r), .b(16'h4c8b), .p(y_r));
shift_add_multiplier_8x16_frac y_g_mul(.a(g), .b(16'h9645), .p(y_g));
shift_add_multiplier_8x16_frac y_b_mul(.a(b), .b(16'h1d2f), .p(y_b));

shift_add_multiplier_8x16_frac cb_r_mul(.a(r), .b(16'h2b32), .p(cb_r));
shift_add_multiplier_8x16_frac cb_g_mul(.a(g), .b(16'h54cd), .p(cb_g));
shift_add_multiplier_8x16_frac cb_b_mul(.a(b), .b(16'h8000), .p(cb_b));
// assign cb_b = b >> 1;

shift_add_multiplier_8x16_frac cr_r_mul(.a(r), .b(16'h8000), .p(cr_r));
shift_add_multiplier_8x16_frac cr_g_mul(.a(g), .b(16'h6b2f), .p(cr_g));
shift_add_multiplier_8x16_frac cr_b_mul(.a(b), .b(16'h14d0), .p(cr_b));
// assign cr_r = r >> 1;

always @(*) begin
    // use multiplier rather than direct multiplication
    temp_y  =   y_r     + y_g   + y_b - 32'h800000;
    temp_cb =   -cb_r   - cb_g  + cb_b;
    temp_cr =   cr_r    - cr_g  - cr_b;
end


assign y = temp_y;
assign cb = temp_cb;
assign cr = temp_cr;



endmodule
