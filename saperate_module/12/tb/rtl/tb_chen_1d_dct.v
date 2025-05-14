// -----------------------------------------------------------------------------
// Testbench : 1‑D 8‑point DCT core (combinational) – compare against golden vectors
// -----------------------------------------------------------------------------
//   * Reads   chen_1d_dct_input.mem   (8 words / line)
//   * Reads   expected_chen_1d_dct_output.mem  (8 words / line)
//   * Feeds DUT with input and checks output immediately
//   * Collects output and checks absolute error ≤ 0.5 LSB (Q16.16)
//   * Pure combinational module: no need for handshaking or clock-based sampling
// -----------------------------------------------------------------------------
`timescale 1ns / 1ns

module tb_chen_1d_dct;
    // ---------- Parameters ---------------------------------------------------
    parameter DATA_WIDTH  = 32;      // Q16.16 words
    parameter FRAC_BITS   = 8;      // Fraction bits
    parameter CONST_WIDTH = 10;      // Width for constants
    parameter WORDS_PER_LINE = 8;    // 8-point 1D DCT
    parameter MAX_LINES = 100;      // must match generator
    parameter ERR_THRESH = 32'h0000_8000; // ±0.5 LSB

    // ---------- DUT signals --------------------------------------------------
    reg  [DATA_WIDTH-1:0] in0, in1, in2, in3, in4, in5, in6, in7;
    wire [DATA_WIDTH-1:0] out0, out1, out2, out3, out4, out5, out6, out7;

    // Instantiate the combinational dct8_chen module
    dct8_chen #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (FRAC_BITS),
        .CONST_W (CONST_WIDTH)
    ) dut (
        .in0(in0), .in1(in1), .in2(in2), .in3(in3),
        .in4(in4), .in5(in5), .in6(in6), .in7(in7),
        .out0(out0), .out1(out1), .out2(out2), .out3(out3),
        .out4(out4), .out5(out5), .out6(out6), .out7(out7)
    );

    // ---------- Memories -----------------------------------------------------
    reg [DATA_WIDTH-1:0] input_mem  [0:MAX_LINES*WORDS_PER_LINE-1];
    reg [DATA_WIDTH-1:0] golden_mem [0:MAX_LINES*WORDS_PER_LINE-1];

    integer line, idx, diff, fout, err_cnt = 0;

    // ---------- Stimulus -----------------------------------------------------
    initial begin
        fout = $fopen("actual_chen_1d_dct_output.mem", "w");
        $display("==== TB (vector mode) 1‑D 8‑point DCT Combinational ====");

        $readmemh("chen_1d_dct_input.mem",  input_mem);
        $readmemh("expected_chen_1d_dct_output.mem", golden_mem);

        // Test each line one by one
        for (line = 0; line < MAX_LINES; line = line + 1) begin
            // Load input line
            in0 = input_mem[line*WORDS_PER_LINE + 0];
            in1 = input_mem[line*WORDS_PER_LINE + 1];
            in2 = input_mem[line*WORDS_PER_LINE + 2];
            in3 = input_mem[line*WORDS_PER_LINE + 3];
            in4 = input_mem[line*WORDS_PER_LINE + 4];
            in5 = input_mem[line*WORDS_PER_LINE + 5];
            in6 = input_mem[line*WORDS_PER_LINE + 6];
            in7 = input_mem[line*WORDS_PER_LINE + 7];
            
            // Add a small delay to allow combinational logic to settle
            #1;
            
            // Check output against golden reference
            check_output(line*WORDS_PER_LINE);
            
            // Small delay between lines for readability in waveform
            #5;
        end

        if (err_cnt == 0) $display("==== PASS, %0d lines ====", MAX_LINES);
        else              $display("==== FAIL, %0d mismatches ====", err_cnt);

        $fclose(fout);
        #20; $finish;
    end

    // ---------- Helper : check output against golden reference ---------------
    task check_output(input integer base_idx);
        integer d;
        begin
            // Check out0
            d = $signed(out0) - $signed(golden_mem[base_idx + 0]);
            if (d < 0) d = -d;
            if (d > ERR_THRESH) begin
                $display("Mismatch line %0d idx 0: got %h exp %h diff %0d", line, out0, 
                          golden_mem[base_idx + 0], d >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%08X", out0);

            // Check out1
            d = $signed(out1) - $signed(golden_mem[base_idx + 1]);
            if (d < 0) d = -d;
            if (d > ERR_THRESH) begin
                $display("Mismatch line %0d idx 1: got %h exp %h diff %0d", line, out1, 
                          golden_mem[base_idx + 1], d >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%08X", out1);

            // Check out2
            d = $signed(out2) - $signed(golden_mem[base_idx + 2]);
            if (d < 0) d = -d;
            if (d > ERR_THRESH) begin
                $display("Mismatch line %0d idx 2: got %h exp %h diff %0d", line, out2, 
                          golden_mem[base_idx + 2], d >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%08X", out2);

            // Check out3
            d = $signed(out3) - $signed(golden_mem[base_idx + 3]);
            if (d < 0) d = -d;
            if (d > ERR_THRESH) begin
                $display("Mismatch line %0d idx 3: got %h exp %h diff %0d", line, out3, 
                          golden_mem[base_idx + 3], d >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%08X", out3);

            // Check out4
            d = $signed(out4) - $signed(golden_mem[base_idx + 4]);
            if (d < 0) d = -d;
            if (d > ERR_THRESH) begin
                $display("Mismatch line %0d idx 4: got %h exp %h diff %0d", line, out4, 
                          golden_mem[base_idx + 4], d >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%08X", out4);

            // Check out5
            d = $signed(out5) - $signed(golden_mem[base_idx + 5]);
            if (d < 0) d = -d;
            if (d > ERR_THRESH) begin
                $display("Mismatch line %0d idx 5: got %h exp %h diff %0d", line, out5, 
                          golden_mem[base_idx + 5], d >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%08X", out5);

            // Check out6
            d = $signed(out6) - $signed(golden_mem[base_idx + 6]);
            if (d < 0) d = -d;
            if (d > ERR_THRESH) begin
                $display("Mismatch line %0d idx 6: got %h exp %h diff %0d", line, out6, 
                          golden_mem[base_idx + 6], d >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%08X", out6);

            // Check out7
            d = $signed(out7) - $signed(golden_mem[base_idx + 7]);
            if (d < 0) d = -d;
            if (d > ERR_THRESH) begin
                $display("Mismatch line %0d idx 7: got %h exp %h diff %0d", line, out7, 
                          golden_mem[base_idx + 7], d >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%08X", out7);
        end
    endtask

endmodule 