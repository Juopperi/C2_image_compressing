module testbench_ycbcr_csd();
    // Parameters
    parameter SCALE = 16;
    parameter FIXED_POINT_LENGTH = 32;
    parameter INPUT_WIDTH = 8;
    parameter CLK_PERIOD = 10; // 10ns = 100MHz
    
    // Testbench signals
    reg clk;
    reg rst_n;
    reg [INPUT_WIDTH-1:0] r_in;
    reg [INPUT_WIDTH-1:0] g_in;
    reg [INPUT_WIDTH-1:0] b_in;
    wire [FIXED_POINT_LENGTH-1:0] y_out;
    wire [FIXED_POINT_LENGTH-1:0] cb_out;
    wire [FIXED_POINT_LENGTH-1:0] cr_out;
    
    // Instantiate DUT (Device Under Test)
    top_ycbcr_csd #(
        .SCALE(SCALE),
        .FIXED_POINT_LENGTH(FIXED_POINT_LENGTH),
        .INPUT_WIDTH(INPUT_WIDTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .r_in(r_in),
        .g_in(g_in),
        .b_in(b_in),
        .y_out(y_out),
        .cb_out(cb_out),
        .cr_out(cr_out)
    );
    
    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end
    
    // Test stimulus
    initial begin
        // Initialize
        rst_n = 0;
        r_in = 0;
        g_in = 0;
        b_in = 0;
        
        // Reset
        #(CLK_PERIOD*2);
        rst_n = 1;
        #(CLK_PERIOD);
        
        // Test Case 1: Black (R=0, G=0, B=0)
        r_in = 0;
        g_in = 0;
        b_in = 0;
        #(CLK_PERIOD*2);
        $display("Test Case 1 - Black:");
        $display("RGB = (%0d, %0d, %0d) -> YCbCr = (%0d, %0d, %0d)", 
                 r_in, g_in, b_in, y_out>>SCALE, cb_out>>SCALE, cr_out>>SCALE);
        
        // Test Case 2: White (R=255, G=255, B=255)
        r_in = 255;
        g_in = 255;
        b_in = 255;
        #(CLK_PERIOD*2);
        $display("Test Case 2 - White:");
        $display("RGB = (%0d, %0d, %0d) -> YCbCr = (%0d, %0d, %0d)",
                 r_in, g_in, b_in, y_out>>SCALE, cb_out>>SCALE, cr_out>>SCALE);
        
        // Test Case 3: Red (R=255, G=0, B=0)
        r_in = 255;
        g_in = 0;
        b_in = 0;
        #(CLK_PERIOD*2);
        $display("Test Case 3 - Red:");
        $display("RGB = (%0d, %0d, %0d) -> YCbCr = (%0d, %0d, %0d)",
                 r_in, g_in, b_in, y_out>>SCALE, cb_out>>SCALE, cr_out>>SCALE);
        
        // Test Case 4: Green (R=0, G=255, B=0)
        r_in = 0;
        g_in = 255;
        b_in = 0;
        #(CLK_PERIOD*2);
        $display("Test Case 4 - Green:");
        $display("RGB = (%0d, %0d, %0d) -> YCbCr = (%0d, %0d, %0d)",
                 r_in, g_in, b_in, y_out>>SCALE, cb_out>>SCALE, cr_out>>SCALE);
        
        // Test Case 5: Blue (R=0, G=0, B=255)
        r_in = 0;
        g_in = 0;
        b_in = 255;
        #(CLK_PERIOD*2);
        $display("Test Case 5 - Blue:");
        $display("RGB = (%0d, %0d, %0d) -> YCbCr = (%0d, %0d, %0d)",
                 r_in, g_in, b_in, y_out>>SCALE, cb_out>>SCALE, cr_out>>SCALE);
        
        // Test Case 6: Random value
        r_in = 128;
        g_in = 64;
        b_in = 192;
        #(CLK_PERIOD*2);
        $display("Test Case 6 - Random:");
        $display("RGB = (%0d, %0d, %0d) -> YCbCr = (%0d, %0d, %0d)",
                 r_in, g_in, b_in, y_out>>SCALE, cb_out>>SCALE, cr_out>>SCALE);
        
        // Finish simulation after some delay
        #(CLK_PERIOD*10);
        $display("Simulation completed");
        $finish;
    end
    
    // Monitor for debug
    always @(posedge clk) begin
        if (rst_n) begin
            $display("Time=%0t: RGB=(%0d,%0d,%0d) -> YCbCr=(%0f,%0f,%0f)",
                     $time, r_in, g_in, b_in, 
                     $itor(y_out)/2**SCALE, 
                     $itor(cb_out)/2**SCALE, 
                     $itor(cr_out)/2**SCALE);
        end
    end
    
endmodule 