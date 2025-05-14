// -----------------------------------------------------------------------------
// Testbench : 2‑D 8×8 DCT core (pipelined) – compare against golden vectors
// -----------------------------------------------------------------------------
//   * Reads   chen_2d_dct_input.mem   (row‑major 64 words / block)
//   * Reads   expected_chen_2d_dct_output.mem  (row‑major 64 words / block)
//   * Feeds DUT block by block with valid/ready handshaking
//   * Collects output and checks absolute error ≤ 0.5 LSB (Q16.16)
// -----------------------------------------------------------------------------
`timescale 1ns / 1ns

module tb_chen_2d_pipe;
    // ---------- Parameters ---------------------------------------------------
    parameter DATA_WIDTH  = 32;        // Q16.16 words
    parameter FRAC_BITS   = 8;        // Fraction bits
    parameter CONST_WIDTH = 10;        // Width for constants
    parameter WORDS_PER_BLK = 64;      // 8×8
    parameter MAX_BLOCKS = 100;        // must match generator
    parameter ERR_THRESH = 32'h0000_8000; // ±0.5 LSB
    parameter CLK_PERIOD = 10;         // 10ns = 100MHz

    // ---------- Testbench signals --------------------------------------------
    reg                     clk;
    reg                     rst_n;

    // Block-level input interface
    reg                     in_valid;
    reg  [64*DATA_WIDTH-1:0] in_block;
    wire                    in_ready;

    // Block-level output interface
    wire                    out_valid;
    wire [64*DATA_WIDTH-1:0] out_block;
    reg                     out_ready;

    // ---------- DUT instance -------------------------------------------------
    dct8x8_2d_pipe_block #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (FRAC_BITS),
        .CONST_W (CONST_WIDTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid(in_valid),
        .in_block(in_block),
        .in_ready(in_ready),
        .out_valid(out_valid),
        .out_block(out_block),
        .out_ready(out_ready)
    );

    // ---------- Memories -----------------------------------------------------
    reg [DATA_WIDTH-1:0] input_mem  [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] golden_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];

    integer blk, idx, diff, fout, err_cnt = 0;
    integer input_idx = 0;
    integer output_idx = 0;
    integer testing_block = 0;

    // ---------- Clock generator ----------------------------------------------
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // ---------- Helper : pack 64 words into flat vector ----------------------
    task pack_input_block(input integer block_num);
        integer i;
        begin
            in_block = 0;
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                in_block[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[block_num*WORDS_PER_BLK + i];
            end
        end
    endtask

    // ---------- Helper : check output block against golden reference ---------
    task check_output_block(input integer block_num);
        integer i;
        integer d;
        reg [DATA_WIDTH-1:0] exp_value;
        reg [DATA_WIDTH-1:0] got_value;
        begin
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                got_value = out_block[i*DATA_WIDTH +: DATA_WIDTH];
                exp_value = golden_mem[block_num*WORDS_PER_BLK + i];
                
                d = $signed(got_value) - $signed(exp_value);
                if (d < 0) d = -d;
                
                if (d > ERR_THRESH) begin
                    $display("Mismatch blk %0d idx %0d: got %h exp %h diff %0d", 
                              block_num, i, got_value, exp_value, d >> 16);
                    err_cnt = err_cnt + 1;
                end
                
                // Write actual output to file for comparison
                $fdisplay(fout, "%08X", got_value);
            end
        end
    endtask

    // ---------- Stimulus -----------------------------------------------------
    initial begin
        fout = $fopen("actual_chen_2d_pipe_output.mem", "w");
        $display("==== TB 2‑D 8×8 DCT Pipelined ====");

        // Load test vectors
        $readmemh("chen_2d_dct_input.mem",  input_mem);
        $readmemh("expected_chen_2d_dct_output.mem", golden_mem);

        // Initialize signals
        rst_n = 0;
        in_valid = 0;
        out_ready = 1;  // Always ready to accept output initially
        
        // Reset sequence
        #(CLK_PERIOD*3);
        rst_n = 1;
        #(CLK_PERIOD*2);
        
        // Test each block one by one
        for (blk = 0; blk < MAX_BLOCKS; blk = blk + 1) begin
            // Prepare input block
            pack_input_block(blk);
            
            // Wait for DUT to be ready
            @(posedge clk);
            while (!in_ready) @(posedge clk);
            
            // Apply input with valid signal
            in_valid = 1;
            testing_block = blk;
            
            // Wait for one clock cycle and deassert valid
            @(posedge clk);
            in_valid = 0;
            
            // Wait for output valid
            @(posedge clk);
            while (!out_valid) @(posedge clk);
            
            // Check output against reference
            check_output_block(blk);
            
            // Acknowledge output
            out_ready = 1;
            @(posedge clk);
            
            // Small delay between blocks for readability in waveform
            #(CLK_PERIOD*2);
        end

        // Final results
        if (err_cnt == 0) $display("==== PASS, %0d blocks ====", MAX_BLOCKS);
        else              $display("==== FAIL, %0d mismatches ====", err_cnt);

        $fclose(fout);
        #(CLK_PERIOD*10); 
        $finish;
    end

endmodule 