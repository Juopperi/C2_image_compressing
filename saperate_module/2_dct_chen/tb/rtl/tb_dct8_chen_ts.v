// -----------------------------------------------------------------------------
// Testbench : 1-D 8-point DCT core (sequential version, shared multipliers) - Verify functionality
// -----------------------------------------------------------------------------
//   * Test multiple input samples
//   * Handle handshake protocol
//   * Verify output accuracy
// -----------------------------------------------------------------------------
`timescale 1ns / 1ps

module tb_dct8_chen_ts;
    // ---------- Parameter Settings -----------------------------------------------------
    parameter DATA_WIDTH  = 32;      // Data width
    parameter FRAC_BITS   = 8;       // Fractional bits
    parameter CONST_WIDTH = 10;      // Constant width
    parameter NUM_MUL     = 8;       // Number of multipliers
    parameter CLK_PERIOD  = 10;      // 10ns = 100MHz
    parameter MAX_TESTS   = 100;     // Number of tests
    parameter ERR_THRESH  = 32'h0000_8000; // Error threshold
    
    // ---------- DUT Signals -----------------------------------------------------
    reg                    clk;
    reg                    rst_n;
    
    // Input handshake signals
    reg                    in_valid;
    wire                   in_ready;
    reg  [DATA_WIDTH-1:0]  in0, in1, in2, in3, in4, in5, in6, in7;
    
    // Output handshake signals
    wire                   out_valid;
    reg                    out_ready;
    wire [DATA_WIDTH-1:0]  out0, out1, out2, out3, out4, out5, out6, out7;
    
    // ---------- Test vectors and reference outputs ------------------------------------------
    reg [DATA_WIDTH-1:0] test_inputs [0:MAX_TESTS*8-1];
    reg [DATA_WIDTH-1:0] ref_outputs [0:MAX_TESTS*8-1];
    
    // ---------- DUT Instantiation --------------------------------------------------
    dct8_chen_ts #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (FRAC_BITS),
        .CONST_W (CONST_WIDTH),
        .NUM_MUL (NUM_MUL)
    ) dut (
        .clk       (clk),
        .rst_n     (rst_n),
        .in_valid  (in_valid),
        .in_ready  (in_ready),
        .in0       (in0),
        .in1       (in1),
        .in2       (in2),
        .in3       (in3),
        .in4       (in4),
        .in5       (in5),
        .in6       (in6),
        .in7       (in7),
        .out_valid (out_valid),
        .out_ready (out_ready),
        .out0      (out0),
        .out1      (out1),
        .out2      (out2),
        .out3      (out3),
        .out4      (out4),
        .out5      (out5),
        .out6      (out6),
        .out7      (out7)
    );
    
    // ---------- Clock Generation ---------------------------------------------------
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end
    
    // ---------- Test Process ---------------------------------------------------
    integer test_idx = 0;
    integer err_cnt = 0;
    integer i, diff, fout;
    
    initial begin
        fout = $fopen("dct8_chen_ts_results.txt", "w");
        $display("==== Testing Shared Multiplier 1D DCT ====");
        
        // Load test vectors and reference outputs
        $readmemh("chen_1d_dct_input.mem", test_inputs);
        $readmemh("expected_chen_1d_dct_output.mem", ref_outputs);
        
        // Initialize signals
        rst_n = 0;
        in_valid = 0;
        out_ready = 1;
        {in0, in1, in2, in3, in4, in5, in6, in7} = {8{18'h0}};
        
        // Reset sequence
        #(CLK_PERIOD*3);
        rst_n = 1;
        #(CLK_PERIOD*2);
        
        // Test each input set sequentially
        for (test_idx = 0; test_idx < MAX_TESTS; test_idx = test_idx + 1) begin
            // Wait for DUT to be ready to receive input
            @(posedge clk);
            while (!in_ready) @(posedge clk);
            
            // Load one set of input data
            in0 = test_inputs[test_idx*8 + 0];
            in1 = test_inputs[test_idx*8 + 1];
            in2 = test_inputs[test_idx*8 + 2];
            in3 = test_inputs[test_idx*8 + 3];
            in4 = test_inputs[test_idx*8 + 4];
            in5 = test_inputs[test_idx*8 + 5];
            in6 = test_inputs[test_idx*8 + 6];
            in7 = test_inputs[test_idx*8 + 7];
            in_valid = 1;
            
            // Deassert valid signal after one clock cycle
            @(posedge clk);
            in_valid = 0;
            
            // Wait for valid output
            while (!out_valid) @(posedge clk);
            
            // Check output results
            check_output(test_idx);
            
            // Confirm output reception
            out_ready = 1;
            @(posedge clk);
            
            // Insert small delay for waveform observation
            #(CLK_PERIOD*2);
        end
        
        // Report test results
        if (err_cnt == 0) 
            $display("==== PASS! Tested %0d sets ====", MAX_TESTS);
        else
            $display("==== FAIL! %0d mismatches ====", err_cnt);
        
        $fclose(fout);
        #(CLK_PERIOD*10);
        $finish;
    end
    
    // ---------- Check Output Results ------------------------------------------------
    task check_output;
        input integer test_num;
        begin
            // Check out0
            diff = $signed(out0) - $signed(ref_outputs[test_num*8 + 0]);
            if (diff < 0) diff = -diff;
            if (diff > ERR_THRESH) begin
                $display("Mismatch Test%0d Position0: Got %h Expected %h Diff %0d", 
                        test_num, out0, ref_outputs[test_num*8 + 0], diff >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%h", out0);
            
            // Check out1
            diff = $signed(out1) - $signed(ref_outputs[test_num*8 + 1]);
            if (diff < 0) diff = -diff;
            if (diff > ERR_THRESH) begin
                $display("Mismatch Test%0d Position1: Got %h Expected %h Diff %0d", 
                        test_num, out1, ref_outputs[test_num*8 + 1], diff >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%h", out1);
            
            // Check out2
            diff = $signed(out2) - $signed(ref_outputs[test_num*8 + 2]);
            if (diff < 0) diff = -diff;
            if (diff > ERR_THRESH) begin
                $display("Mismatch Test%0d Position2: Got %h Expected %h Diff %0d", 
                        test_num, out2, ref_outputs[test_num*8 + 2], diff >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%h", out2);
            
            // Check out3
            diff = $signed(out3) - $signed(ref_outputs[test_num*8 + 3]);
            if (diff < 0) diff = -diff;
            if (diff > ERR_THRESH) begin
                $display("Mismatch Test%0d Position3: Got %h Expected %h Diff %0d", 
                        test_num, out3, ref_outputs[test_num*8 + 3], diff >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%h", out3);
            
            // Check out4
            diff = $signed(out4) - $signed(ref_outputs[test_num*8 + 4]);
            if (diff < 0) diff = -diff;
            if (diff > ERR_THRESH) begin
                $display("Mismatch Test%0d Position4: Got %h Expected %h Diff %0d", 
                        test_num, out4, ref_outputs[test_num*8 + 4], diff >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%h", out4);
            
            // Check out5
            diff = $signed(out5) - $signed(ref_outputs[test_num*8 + 5]);
            if (diff < 0) diff = -diff;
            if (diff > ERR_THRESH) begin
                $display("Mismatch Test%0d Position5: Got %h Expected %h Diff %0d", 
                        test_num, out5, ref_outputs[test_num*8 + 5], diff >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%h", out5);
            
            // Check out6
            diff = $signed(out6) - $signed(ref_outputs[test_num*8 + 6]);
            if (diff < 0) diff = -diff;
            if (diff > ERR_THRESH) begin
                $display("Mismatch Test%0d Position6: Got %h Expected %h Diff %0d", 
                        test_num, out6, ref_outputs[test_num*8 + 6], diff >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%h", out6);
            
            // Check out7
            diff = $signed(out7) - $signed(ref_outputs[test_num*8 + 7]);
            if (diff < 0) diff = -diff;
            if (diff > ERR_THRESH) begin
                $display("Mismatch Test%0d Position7: Got %h Expected %h Diff %0d", 
                        test_num, out7, ref_outputs[test_num*8 + 7], diff >> 16);
                err_cnt = err_cnt + 1;
            end
            $fdisplay(fout, "%h", out7);
        end
    endtask

endmodule