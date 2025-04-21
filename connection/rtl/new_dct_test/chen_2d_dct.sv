`timescale 1ns / 1ps
// -----------------------------------------------------------------------------
// 2‑D 8×8 DCT – combinational (row‑col decomposition)
// -----------------------------------------------------------------------------
//  Using 16 instances of the 1‑D module dct8_chen (8 rows + 8 columns):
//      1. Apply DCT to each of the 8 rows (in parallel).
//      2. Wire the 8×8 intermediate matrix through a transpose network
//         (pure combinational permute) to feed the column stage.
//      3. Outputs are flattened back to a 64‑sample vector, same order as input
//         but now holding frequency coefficients.
//
//  Interface
//  =========
//      din_flat  –  64×IN_W  bits,  (row‑major order: Y[0][0] … Y[0][7] … Y[7][7])
//      dout_flat –  64×IN_W  bits,  (same flatten order)
//
//  Parameters propagate straight to the child modules; they must match the
//  dct8_chen instantiation you use elsewhere.
// -----------------------------------------------------------------------------
//  * Requires SystemVerilog for unpacked arrays and "+:" bit‑slice.
//  * Fully combinational → latency = 0; add pipeline flops around instances
//    if timing becomes critical.
// -----------------------------------------------------------------------------

module dct8x8_2d #(
    parameter int IN_W    = 32,
    parameter int FRAC    = 14,
    parameter int CONST_W = 16
)(
    input  logic [IN_W*64-1:0] din_flat,
    output logic [IN_W*64-1:0] dout_flat
);

    // ------------------------------------------------------------------
    //  Helper typedef for readability
    // ------------------------------------------------------------------
    typedef logic signed [IN_W-1:0] sample_t;

    // Unpack flattened input into a 2‑D array [row][col]
    sample_t din     [0:7][0:7];
    sample_t row_dct [0:7][0:7];   // after 1‑D DCT on rows
    sample_t dout    [0:7][0:7];   // final 2‑D DCT results

    // Flatten ↔ array wiring (combinational)
    genvar r,c;
    generate
        for (r = 0; r < 8; r = r + 1) begin : G_IN_DEFLAT
            for (c = 0; c < 8; c = c + 1) begin : G_IN_SLICE
                // Row‑major unpack: bit index = (r*8 + c)*IN_W
                localparam int IDX = (r*8 + c)*IN_W;
                always_comb begin
                    din[r][c] = din_flat[IDX +: IN_W];
                end
            end
        end
    endgenerate

    // ------------------------------------------------------------------
    //  Row‑wise 1‑D DCT – 8 instances in parallel
    // ------------------------------------------------------------------
    generate
        for (r = 0; r < 8; r = r + 1) begin : G_ROW_DCT
            dct8_chen #(
                .IN_W   (IN_W),
                .FRAC   (FRAC),
                .CONST_W(CONST_W)
            ) u_row (
                // inputs
                .in0 (din[r][0]), .in1 (din[r][1]), .in2 (din[r][2]), .in3 (din[r][3]),
                .in4 (din[r][4]), .in5 (din[r][5]), .in6 (din[r][6]), .in7 (din[r][7]),
                // outputs
                .out0(row_dct[r][0]), .out1(row_dct[r][1]), .out2(row_dct[r][2]), .out3(row_dct[r][3]),
                .out4(row_dct[r][4]), .out5(row_dct[r][5]), .out6(row_dct[r][6]), .out7(row_dct[r][7])
            );
        end
    endgenerate

    // ------------------------------------------------------------------
    //  Column‑wise 1‑D DCT – another 8 instances
    //         Note the transpose: column c is fed with row_dct[0..7][c]
    // ------------------------------------------------------------------
    generate
        for (c = 0; c < 8; c = c + 1) begin : G_COL_DCT
            dct8_chen #(
                .IN_W   (IN_W),
                .FRAC   (FRAC),
                .CONST_W(CONST_W)
            ) u_col (
                .in0 (row_dct[0][c]), .in1 (row_dct[1][c]), .in2 (row_dct[2][c]), .in3 (row_dct[3][c]),
                .in4 (row_dct[4][c]), .in5 (row_dct[5][c]), .in6 (row_dct[6][c]), .in7 (row_dct[7][c]),
                .out0(dout[0][c]), .out1(dout[1][c]), .out2(dout[2][c]), .out3(dout[3][c]),
                .out4(dout[4][c]), .out5(dout[5][c]), .out6(dout[6][c]), .out7(dout[7][c])
            );
        end
    endgenerate

    // ------------------------------------------------------------------
    //  Re‑flatten 2‑D output array back to row‑major vector
    // ------------------------------------------------------------------
    generate
        for (r = 0; r < 8; r = r + 1) begin : G_OUT_FLAT
            for (c = 0; c < 8; c = c + 1) begin : G_OUT_SLICE
                localparam int IDX = (r*8 + c)*IN_W;
                always_comb begin
                    dout_flat[IDX +: IN_W] = dout[r][c];
                end
            end
        end
    endgenerate

endmodule
