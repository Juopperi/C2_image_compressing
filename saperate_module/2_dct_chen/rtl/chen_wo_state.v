// -----------------------------------------------------------------------------
// 1‑D 8‑point DCT (Chen algorithm) and 8×8 2‑D DCT (transpose structure)
// -----------------------------------------------------------------------------
// Author : ChatGPT (OpenAI‑o3) — April 2025
// Reference : Wen‑Hsiung Chen, C. Smith, and S. Fralick, "A fast computational
//             algorithm for the discrete cosine transform," IEEE Trans. COM‑25,
//             1977.
//
// Design goals
//   * Pure RTL (synthesizable)
//   * No explicit finite‑state machine — only free‑running counters & handshakes
//   * Fully pipelined, one 8‑sample vector accepted per clock (after fill)
//   * Fixed‑point coefficients, using Q16.16 (signed 32‑bit)
// -----------------------------------------------------------------------------

`timescale 1ns/1ps

// =====================  CONSTANT COEFFICIENTS  ===============================
// cos(k*pi/16)  (k = 1..7)  scaled to Q16.16 (range ±1.9999)
module dct_const #(parameter WIDTH = 32)(); // just a namespace umbrella
    localparam signed [WIDTH-1:0]
        C1 = 32'sd64276,  // cos(pi/16)  ≈ 0.9808  × 65536
        C2 = 32'sd60548,  // cos(2pi/16) ≈ 0.9239
        C3 = 32'sd54492,  // cos(3pi/16) ≈ 0.8315
        C4 = 32'sd46340,  // cos(4pi/16) = √1/2
        C5 = 32'sd36410,  // cos(5pi/16) ≈ 0.5556
        C6 = 32'sd25080,  // cos(6pi/16) ≈ 0.3827
        C7 = 32'sd12786;  // cos(7pi/16) ≈ 0.1951
endmodule

// ===================== 1‑D 8‑POINT CHIP (CHEN) ===============================
//   Latency : 3 pipeline stages (add/sub  +  rot1 + rot2)
//   Throughput : 1 vector / clk after init
//   Interface  : parallel‑in / parallel‑out with valid handshake
// -----------------------------------------------------------------------------
module dct1d_chen #(
    parameter DATA_W = 32,
    parameter COEF_W = 32,
    parameter OUT_W  = 32
)(
    input                       clk,
    input                       rst,
    input                       valid_in,
    input  signed [DATA_W-1:0]  x0, x1, x2, x3, x4, x5, x6, x7,
    output                      valid_out,
    output signed [OUT_W-1:0]   y0, y1, y2, y3, y4, y5, y6, y7
);
    // ---------- Stage 0 : butterflies ---------------------------------------
    reg signed [DATA_W:0] s07, d07, s16, d16, s25, d25, s34, d34; // WIDTH+1 bits
    reg                   v1;

    always @(posedge clk) begin
        if (rst) begin
            v1 <= 1'b0;
        end else begin
            v1 <= valid_in;

            s07 <= x0 + x7;  d07 <= x0 - x7;
            s16 <= x1 + x6;  d16 <= x1 - x6;
            s25 <= x2 + x5;  d25 <= x2 - x5;
            s34 <= x3 + x4;  d34 <= x3 - x4;
        end
    end

    // ---------- Stage 1 : even/odd split -----------------------------------
    // Even part (y0,y2,y4,y6) ← another butterfly then trivial/rot
    wire signed [DATA_W+1:0] s0734 = s07 + s34;
    wire signed [DATA_W+1:0] d0734 = s07 - s34;
    wire signed [DATA_W+1:0] s1625 = s16 + s25;
    wire signed [DATA_W+1:0] d1625 = s16 - s25;

    // constants
    localparam signed [COEF_W-1:0] C4 = 32'sd46340; // √1/2

    reg signed [OUT_W-1:0] y0_r, y4_r, y2_pre, y6_pre;
    reg signed [DATA_W+1:0] d1, d2;
    reg                    v2;

    always @(posedge clk) begin
        if (rst) begin
            v2 <= 1'b0;
        end else begin
            v2 <= v1;

            // y0, y4 (need only adds & C4)
            y0_r <= (s0734 + s1625) >>> 1; // divide by 2 to compensate scale
            y4_r <= (s0734 - s1625) >>> 1;

            // save for later rotation (multiplication)
            d1   <= d0734;
            d2   <= d1625;

            // pre‑rotate by √1/2 for y2,y6
            y2_pre <= (d0734 * C4) >>> 16;
            y6_pre <= (d1625 * C4) >>> 16;
        end
    end

    // ---------- Stage 2 : odd part rotations (y1,y3,y5,y7) ------------------
    // odd butterflies
    wire signed [DATA_W:0] d07p25 = d07 + d25;
    wire signed [DATA_W:0] d07m25 = d07 - d25;
    wire signed [DATA_W:0] d16p34 = d16 + d34;
    wire signed [DATA_W:0] d16m34 = d16 - d34;

    // Constants (Q16.16)
    localparam signed [COEF_W-1:0] C1 = 32'sd64276; // cos(pi/16)
    localparam signed [COEF_W-1:0] C2 = 32'sd60548;
    localparam signed [COEF_W-1:0] C3 = 32'sd54492;
    localparam signed [COEF_W-1:0] C5 = 32'sd36410;
    localparam signed [COEF_W-1:0] C6 = 32'sd25080;
    localparam signed [COEF_W-1:0] C7 = 32'sd12786;

    reg signed [OUT_W-1:0] y1_r, y3_r, y5_r, y7_r, y2_r, y6_r;
    reg                    v3;

    always @(posedge clk) begin
        if (rst) begin
            v3 <= 1'b0;
        end else begin
            v3 <= v2;

            // y1 =  c1*d07p25 + c7*d16p34
            y1_r <= ((d07p25 * C1) + (d16p34 * C7)) >>> 16;
            // y3 =  c3*d07m25 + c5*d16m34
            y3_r <= ((d07m25 * C3) + (d16m34 * C5)) >>> 16;
            // y5 =  c5*d07m25 - c3*d16m34
            y5_r <= ((d07m25 * C5) - (d16m34 * C3)) >>> 16;
            // y7 =  c7*d07p25 - c1*d16p34
            y7_r <= ((d07p25 * C7) - (d16p34 * C1)) >>> 16;

            // from even path
            y2_r <= y2_pre;
            y6_r <= y6_pre;
        end
    end

    assign valid_out = v3;
    assign y0 = y0_r;
    assign y1 = y1_r;
    assign y2 = y2_r;
    assign y3 = y3_r;
    assign y4 = y4_r;
    assign y5 = y5_r;
    assign y6 = y6_r;
    assign y7 = y7_r;
endmodule

module dct2d_8x8_chen #(
    parameter DATA_W = 32,
    parameter COEF_W = 32,
    parameter OUT_W  = 32
)(
    input                         clk,
    input                         rst,
    input                         start,                     // 1‑cycle strobe
    input  [DATA_W*64-1:0]        x,                         // packed row‑major
    output reg                    valid_out,
    output reg [OUT_W*64-1:0]     y                          // packed row‑major
);
    // ---------------- Unpack input -----------------------------------------
    wire signed [DATA_W-1:0] x_mat [0:7][0:7];
    genvar r,c;
    generate
        for (r = 0; r < 8; r = r + 1) begin: ROW_UNPK
            for (c = 0; c < 8; c = c + 1) begin: COL_UNPK
                assign x_mat[r][c] = x[(r*8+c)*DATA_W +: DATA_W];
            end
        end
    endgenerate

    // ---------------- Row DCTs (stage 0‑2) ----------------------------------
    wire row_valid;
    reg  row_stb;
    always @(posedge clk) begin
        if (rst) row_stb <= 1'b0;
        else     row_stb <= start;      // align to clk edge
    end
    assign row_valid = row_stb;

    wire signed [OUT_W-1:0] row_out [0:7][0:7];
    wire                    row_v [0:7];

    generate
        for (r = 0; r < 8; r = r + 1) begin: ROW_DCT_INST
            dct1d_chen #(.DATA_W(DATA_W), .COEF_W(COEF_W), .OUT_W(OUT_W)) ROW (
                .clk(clk), .rst(rst), .valid_in(row_valid),
                .x0(x_mat[r][0]), .x1(x_mat[r][1]), .x2(x_mat[r][2]), .x3(x_mat[r][3]),
                .x4(x_mat[r][4]), .x5(x_mat[r][5]), .x6(x_mat[r][6]), .x7(x_mat[r][7]),
                .valid_out(row_v[r]),
                .y0(row_out[r][0]), .y1(row_out[r][1]), .y2(row_out[r][2]), .y3(row_out[r][3]),
                .y4(row_out[r][4]), .y5(row_out[r][5]), .y6(row_out[r][6]), .y7(row_out[r][7])
            );
        end
    endgenerate

    // row_valid propagates to v_row after 3 cycles; ensure all 8 cores done
    wire v_row_done = row_v[0]; // they are synchronised

    // ---------------- Register row results (stage 3) ------------------------
    reg signed [OUT_W-1:0] row_reg [0:7][0:7];
    integer i,j;
    always @(posedge clk) begin
        if (rst) begin
            for (i=0;i<8;i=i+1) for (j=0;j<8;j=j+1) row_reg[i][j] <= '0;
        end else if (v_row_done) begin
            for (i=0;i<8;i=i+1) for (j=0;j<8;j=j+1) row_reg[i][j] <= row_out[i][j];
        end
    end

    // ---------------- Column DCTs (stage 3‑5) ------------------------------
    wire col_valid = v_row_done; // trigger next stage immediately
    wire signed [OUT_W-1:0] col_out [0:7][0:7];
    wire                    col_v [0:7];

    generate
        for (c = 0; c < 8; c = c + 1) begin: COL_DCT_INST
            dct1d_chen #(.DATA_W(OUT_W), .COEF_W(COEF_W), .OUT_W(OUT_W)) COL (
                .clk(clk), .rst(rst), .valid_in(col_valid),
                .x0(row_reg[0][c]), .x1(row_reg[1][c]), .x2(row_reg[2][c]), .x3(row_reg[3][c]),
                .x4(row_reg[4][c]), .x5(row_reg[5][c]), .x6(row_reg[6][c]), .x7(row_reg[7][c]),
                .valid_out(col_v[c]),
                .y0(col_out[0][c]), .y1(col_out[1][c]), .y2(col_out[2][c]), .y3(col_out[3][c]),
                .y4(col_out[4][c]), .y5(col_out[5][c]), .y6(col_out[6][c]), .y7(col_out[7][c])
            );
        end
    endgenerate

    wire v_col_done = col_v[0]; // all aligned

    // ---------------- Pack outputs -----------------------------------------
    always @(posedge clk) begin
        if (rst) begin
            y <= '0;
            valid_out <= 1'b0;
        end else begin
            valid_out <= v_col_done;
            if (v_col_done) begin
                for (i=0;i<8;i=i+1) for (j=0;j<8;j=j+1) begin
                    y[(i*8+j)*OUT_W +: OUT_W] <= col_out[i][j];
                end
            end
        end
    end
endmodule

// -----------------------------------------------------------------------------
// NOTES
// -----
// 1. Latency = 6 clocks (3 for row cores + 3 for col cores);
//    `valid_out` is a single‑cycle pulse aligned with packed `y`.
// 2. Resource usage ≈ 16 × (1‑D core adders + multipliers) – still lightweight
//    for FPGA DSP48 banks.
// 3. Ideal for burst‑mode DMA (e.g., write 64 pixels, wait 6 clk, read 64 coeffs).
// -----------------------------------------------------------------------------
