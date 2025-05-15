// -----------------------------------------------------------------------------
// Testbench : RGB to YCbCr converter with DCT
// -----------------------------------------------------------------------------
// Tests the RGB to YCbCr conversion followed by DCT processing
// For each 8x8 block:
// - Feeds RGB input data
// - Selects component for DCT processing (Y, Cb, or Cr)
// - Verifies DCT output against expected values
// -----------------------------------------------------------------------------
`timescale 1ns / 1ps

module tb_rgb2ycbcr_dct;
    // ---------- Parameters ---------------------------------------------------
    parameter int INPUT_WIDTH = 8;           // RGB input width
    parameter int FIXED_POINT_LENGTH = 32;   // YCbCr and DCT fixed point length
    parameter int CONST_W = 16;              // DCT constant width
    parameter int PIXEL_COUNT = 64;          // 8x8 block (64 pixels)
    parameter int CORE_COUNT = 8;            // RGB2YCbCr core count
    parameter int MAX_BLOCKS = 1000;         // Number of test blocks
    parameter int CLK_PERIOD = 10;           // 10ns = 100MHz
    parameter int ERR_THRESH = 0; // ±0.5 LSB tolerance

    // ---------- Testbench signals --------------------------------------------
    logic                                     clk;
    logic                                     rst_n;
    
    // RGB input interface
    logic                                     in_valid;
    logic                                     in_ready;
    logic [INPUT_WIDTH*PIXEL_COUNT-1:0]       r_all;
    logic [INPUT_WIDTH*PIXEL_COUNT-1:0]       g_all;
    logic [INPUT_WIDTH*PIXEL_COUNT-1:0]       b_all;
    
    // Component select for DCT
    logic [1:0]                               component_sel; 
    
    // DCT output interface
    logic                                     out_valid;
    logic                                     out_ready;
    logic signed [64*FIXED_POINT_LENGTH/2-1:0]  out_data;
    
    // Test vectors
    logic [INPUT_WIDTH-1:0]                   r_mem[0:MAX_BLOCKS*PIXEL_COUNT-1];
    logic [INPUT_WIDTH-1:0]                   g_mem[0:MAX_BLOCKS*PIXEL_COUNT-1];
    logic [INPUT_WIDTH-1:0]                   b_mem[0:MAX_BLOCKS*PIXEL_COUNT-1];
    logic [FIXED_POINT_LENGTH/2-1:0]            expected_y_dct[0:MAX_BLOCKS*PIXEL_COUNT-1];
    logic [FIXED_POINT_LENGTH/2-1:0]            expected_cb_dct[0:MAX_BLOCKS*PIXEL_COUNT-1];
    logic [FIXED_POINT_LENGTH/2-1:0]            expected_cr_dct[0:MAX_BLOCKS*PIXEL_COUNT-1];
    logic [FIXED_POINT_LENGTH/2-1:0]            output_mem[0:PIXEL_COUNT-1];

    integer blk, i, j, diff, fout_y, fout_cb, fout_cr, err_cnt;
    string component_name;

    // ---------- DUT instance -------------------------------------------------
    rgb2ycbcr_dct #(
        .INPUT_WIDTH(INPUT_WIDTH),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .CONST_W(CONST_W),
        .PIXEL_COUNT(PIXEL_COUNT),
        .CORE_COUNT(CORE_COUNT)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid(in_valid),
        .in_ready(in_ready),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .component_sel(component_sel),
        .out_valid(out_valid),
        .out_ready(out_ready),
        .out_data(out_data)
    );

    // ---------- Clock generator ----------------------------------------------
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // ---------- Helper : load input block from memory -----------------------
    task set_input_block(input integer block_num);
        integer base_idx, i;
        begin
            base_idx = block_num * PIXEL_COUNT;
            
            // Pack all 64 RGB values
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                r_all[i*INPUT_WIDTH +: INPUT_WIDTH] = r_mem[base_idx + i];
                g_all[i*INPUT_WIDTH +: INPUT_WIDTH] = g_mem[base_idx + i];
                b_all[i*INPUT_WIDTH +: INPUT_WIDTH] = b_mem[base_idx + i];
            end
        end
    endtask

    // ---------- Helper : save output values ---------------------------------
    task save_output_block;
        integer i;
        begin
            // Save all 64 outputs
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                output_mem[i] = out_data[i*FIXED_POINT_LENGTH +: FIXED_POINT_LENGTH];
                
                case (component_sel)
                    2'b00: $fdisplay(fout_y, "%08X", output_mem[i]);
                    2'b01: $fdisplay(fout_cb, "%08X", output_mem[i]);
                    2'b10: $fdisplay(fout_cr, "%08X", output_mem[i]);
                endcase
            end
        end
    endtask

    // ---------- Helper : check output block against reference ---------------
    task check_output_block(input integer block_num);
        integer i, d;
        logic [FIXED_POINT_LENGTH/2-1:0] exp_value;
        logic [FIXED_POINT_LENGTH/2-1:0] got_value;
        begin
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                got_value = output_mem[i];
                
                case (component_sel)
                    2'b00: exp_value = expected_y_dct[block_num*PIXEL_COUNT + i];
                    2'b01: exp_value = expected_cb_dct[block_num*PIXEL_COUNT + i];
                    2'b10: exp_value = expected_cr_dct[block_num*PIXEL_COUNT + i];
                    default: exp_value = expected_y_dct[block_num*PIXEL_COUNT + i];
                endcase
                
                d = $signed(got_value) - $signed(exp_value);
                if (d < 0) d = -d;
                
                if (d > ERR_THRESH) begin
                    $display("Mismatch blk %0d idx %0d %s: got %h exp %h diff %0d", 
                              block_num, i, component_name, got_value, exp_value, d);
                    err_cnt = err_cnt + 1;
                end
            end
        end
    endtask

    // ---------- Stimulus -----------------------------------------------------
    initial begin
        fout_y = $fopen("actual_ycbcr_dct_y_output.mem", "w");
        fout_cb = $fopen("actual_ycbcr_dct_cb_output.mem", "w");
        fout_cr = $fopen("actual_ycbcr_dct_cr_output.mem", "w");
        
        $display("==== TB RGB to YCbCr + DCT ====");

        // Load test vectors - 修改为使用我们生成的文件名
        $readmemh("r_input.mem", r_mem);       // 修改
        $readmemh("g_input.mem", g_mem);       // 修改
        $readmemh("b_input.mem", b_mem);       // 修改
        $readmemh("expected_y_quant_output.mem", expected_y_dct);   // 修改
        $readmemh("expected_cb_quant_output.mem", expected_cb_dct); // 修改
        $readmemh("expected_cr_quant_output.mem", expected_cr_dct); // 修改

        // Initialize signals
        rst_n = 0;
        in_valid = 0;
        out_ready = 1;  // Always ready to accept output initially
        err_cnt = 0;
        
        // Reset sequence
        #(CLK_PERIOD*3);
        rst_n = 1;
        #(CLK_PERIOD*2);
        
        // Test all components (Y, Cb, Cr) for each block
        for (blk = 0; blk < MAX_BLOCKS; blk = blk + 1) begin
            for (j = 0; j < 3; j = j + 1) begin
                component_sel = j[1:0];
                
                case (component_sel)
                    2'b00: component_name = "Y";
                    2'b01: component_name = "Cb";
                    2'b10: component_name = "Cr";
                    default: component_name = "Y";
                endcase
                
                $display("Testing block %0d, component %s", blk, component_name);
                
                // Prepare RGB input block
                set_input_block(blk);
                
                // Wait for DUT to be ready
                @(posedge clk);
                while (!in_ready) @(posedge clk);
                
                // Apply input with valid signal
                in_valid = 1;
                
                // Wait for handshake to complete
                @(posedge clk);
                while (in_valid && !in_ready) @(posedge clk);
                in_valid = 0;
                
                // Wait for output valid
                @(posedge clk);
                while (!out_valid) @(posedge clk);
                
                // Save output values
                save_output_block();
                
                // Acknowledge output
                out_ready = 1;
                @(posedge clk);
                out_ready = 0;
                
                // Check output against reference
                check_output_block(blk);
                
                // Small delay between component tests
                #(CLK_PERIOD*2);
            end
            
            // Larger delay between blocks
            #(CLK_PERIOD*5);
        end

        // Final results
        if (err_cnt == 0) $display("==== PASS, %0d blocks ====", MAX_BLOCKS);
        else              $display("==== FAIL, %0d mismatches ====", err_cnt);

        $fclose(fout_y);
        $fclose(fout_cb);
        $fclose(fout_cr);
        
        #(CLK_PERIOD*10);
        $finish;
    end

endmodule