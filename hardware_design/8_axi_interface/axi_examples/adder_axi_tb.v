`timescale 1 ns / 1 ps

module adder_tb;

    // Clock and reset signals
    reg axi_aclk = 0;
    reg axi_aresetn = 0;
    
    // AXI4-Lite interface signals
    reg [31:0] axi_awaddr;
    reg axi_awvalid;
    wire axi_awready;
    
    reg [31:0] axi_wdata;
    reg [3:0] axi_wstrb;
    reg axi_wvalid;
    wire axi_wready;
    
    wire [1:0] axi_bresp;
    wire axi_bvalid;
    reg axi_bready;
    
    reg [31:0] axi_araddr;
    reg axi_arvalid;
    wire axi_arready;
    
    wire [31:0] axi_rdata;
    wire [1:0] axi_rresp;
    wire axi_rvalid;
    reg axi_rready;

    // Register addresses - matching C++ code addresses
    localparam ADDR_REG_A      = 32'h00;
    localparam ADDR_REG_B      = 32'h04;
    localparam ADDR_REG_CTRL   = 32'h08;
    localparam ADDR_REG_STAT   = 32'h0C;
    localparam ADDR_REG_RES    = 32'h10;
    
    // Parameters matching the AXI interface
    localparam C_AXI_DATA_WIDTH = 32;
    localparam C_AXI_ADDR_WIDTH = 32;
    
    // Instantiate the Unit Under Test (UUT)
    adder #(
        .C_AXI_DATA_WIDTH(C_AXI_DATA_WIDTH),
        .C_AXI_ADDR_WIDTH(C_AXI_ADDR_WIDTH)
    ) uut (
        .axi_aclk(axi_aclk),
        .axi_aresetn(axi_aresetn),
        
        .axi_awaddr(axi_awaddr),
        .axi_awvalid(axi_awvalid),
        .axi_awready(axi_awready),
        
        .axi_wdata(axi_wdata),
        .axi_wstrb(axi_wstrb),
        .axi_wvalid(axi_wvalid),
        .axi_wready(axi_wready),
        
        .axi_bresp(axi_bresp),
        .axi_bvalid(axi_bvalid),
        .axi_bready(axi_bready),
        
        .axi_araddr(axi_araddr),
        .axi_arvalid(axi_arvalid),
        .axi_arready(axi_arready),
        
        .axi_rdata(axi_rdata),
        .axi_rresp(axi_rresp),
        .axi_rvalid(axi_rvalid),
        .axi_rready(axi_rready)
    );
    
    // Clock generation (100MHz)
    always #5 axi_aclk = ~axi_aclk;
    
    // Variables for test data
    reg [31:0] a, b, result_expected, result_actual;
    reg [31:0] read_data;
    
    // Tasks for AXI4-Lite transactions
    
    // Write register task
    task write_register;
        input [31:0] addr;
        input [31:0] data;
        begin
            // Address phase
            @(posedge axi_aclk);
            axi_awaddr = addr;
            axi_awvalid = 1;
            axi_wdata = data;
            axi_wstrb = 4'hF; // All bytes enabled
            axi_wvalid = 1;
            axi_bready = 1;
            
            // Wait for handshake
            wait(axi_awready && axi_wready);
            @(posedge axi_aclk);
            axi_awvalid = 0;
            axi_wvalid = 0;
            
            // Wait for write response
            wait(axi_bvalid);
            @(posedge axi_aclk);
            axi_bready = 0;
            
            // Small delay
            repeat(2) @(posedge axi_aclk);
        end
    endtask
    
    // Read register task
    task read_register;
        input [31:0] addr;
        output [31:0] data;
        begin
            // Address phase
            @(posedge axi_aclk);
            axi_araddr = addr;
            axi_arvalid = 1;
            axi_rready = 1;
            
            // Wait for address ready
            wait(axi_arready);
            @(posedge axi_aclk);
            axi_arvalid = 0;
            
            // Wait for data valid
            wait(axi_rvalid);
            data = axi_rdata;
            @(posedge axi_aclk);
            axi_rready = 0;
            
            // Small delay
            repeat(2) @(posedge axi_aclk);
        end
    endtask
    
    // Task to poll until adder operation completes (STATUS = 0xFFFFFFFF)
    task wait_for_completion;
        output [31:0] status;
        integer timeout_counter;
        begin
            timeout_counter = 0;
            status = 0;
            
            while ((status & 32'h0FFFFFFF) != 32'h0FFFFFFF && timeout_counter < 1000) begin
                read_register(ADDR_REG_STAT, status);
                timeout_counter = timeout_counter + 1;
                
                if (timeout_counter % 100 == 0)
                    $display("Waiting for completion... (STATUS=0x%h)", status);
            end
            
            if (timeout_counter >= 1000)
                $display("Timeout waiting for PL adder to complete!");
            else
                $display("Addition completed (STATUS=0x%h)", status);
        end
    endtask
    
    // Task to execute an adder operation and check the result
    task test_adder_operation;
        input [31:0] operand_a;
        input [31:0] operand_b;
        begin
            a = operand_a;
            b = operand_b;
            result_expected = a + b;
            
            $display("\n========= Starting AXI4 Adder Test: %0d + %0d =========", a, b);
            
            // Write to A register
            write_register(ADDR_REG_A, a);
            $display("Wrote to REG_A: %0d", a);
            
            // Write to B register
            write_register(ADDR_REG_B, b);
            $display("Wrote to REG_B: %0d", b);
            
            // Read back A and B to verify
            read_register(ADDR_REG_A, read_data);
            $display("Read from REG_A: %0d", read_data);
            
            read_register(ADDR_REG_B, read_data);
            $display("Read from REG_B: %0d", read_data);
            
            // Start addition by writing to control register
            write_register(ADDR_REG_CTRL, 32'hFFFFFFFF);
            $display("Started addition operation (CTRL=0xFFFFFFFF)");
            
            // Wait for status to indicate completion
            wait_for_completion(read_data);
            
            // Read result
            read_register(ADDR_REG_RES, result_actual);
            $display("Result: %0d", result_actual);
            
            // Compare results
            $display("Expected: %0d + %0d = %0d", a, b, result_expected);
            $display("Actual  : %0d + %0d = %0d", a, b, result_actual);
            
            if (result_actual == result_expected)
                $display("TEST PASSED: %0d + %0d = %0d", a, b, result_actual);
            else
                $display("TEST FAILED: Expected %0d, got %0d", result_expected, result_actual);
            
            // Show debug info
            scan_registers();
            
            // Add delay between tests
            repeat(10) @(posedge axi_aclk);
        end
    endtask
    
    // Debug function to scan register values (matching C++ debug function)
    task scan_registers;
        reg [31:0] reg_a, reg_b, reg_ctrl, reg_stat, reg_res;
        begin
            $display("===== DEBUG: Register Scan =====");
            $display("Expected input: A=%0d, B=%0d, Expected result=%0d", a, b, a + b);
            
            read_register(ADDR_REG_A, reg_a);
            read_register(ADDR_REG_B, reg_b);
            read_register(ADDR_REG_CTRL, reg_ctrl);
            read_register(ADDR_REG_STAT, reg_stat);
            read_register(ADDR_REG_RES, reg_res);
            
            $display("Actual read: A register [0x%08h] = 0x%08h (%0d)", ADDR_REG_A, reg_a, reg_a);
            $display("Actual read: B register [0x%08h] = 0x%08h (%0d)", ADDR_REG_B, reg_b, reg_b);
            $display("Actual read: CTRL register [0x%08h] = 0x%08h", ADDR_REG_CTRL, reg_ctrl);
            $display("Actual read: STAT register [0x%08h] = 0x%08h", ADDR_REG_STAT, reg_stat);
            $display("Actual read: Result register [0x%08h] = 0x%08h (%0d)", ADDR_REG_RES, reg_res, reg_res);
            $display("PL adder result: %0d, Correct: %s", reg_res, (reg_res == a + b) ? "YES" : "NO");
            $display("============================\n");
        end
    endtask
    
    // Main test sequence
    initial begin
        // Initialize all inputs
        axi_awvalid = 0;
        axi_wvalid = 0;
        axi_bready = 0;
        axi_arvalid = 0;
        axi_rready = 0;
        axi_wstrb = 4'hF;
        
        // Reset sequence
        axi_aresetn = 0;
        repeat(10) @(posedge axi_aclk);
        axi_aresetn = 1;
        repeat(5) @(posedge axi_aclk);
        
        $display("AXI4-Lite Adder Testbench Started");
        
        // Initialize control register
        write_register(ADDR_REG_CTRL, 0);
        
        // Run test cases (similar to the C++ test cases)
        
        // Test case 1: 10 + 20
        test_adder_operation(10, 20);
        
        // Test case 2: 100 + 200
        test_adder_operation(100, 200);
        
        // Test case 3: Overflow test
        test_adder_operation(32'hFFFFFFFF, 32'h00000001);
        
        // Additional test case: Negative numbers
        test_adder_operation(32'hFFFFFFF6, 32'h00000005); // -10 + 5 = -5
        
        // Finish simulation
        repeat(20) @(posedge axi_aclk);
        $display("AXI4-Lite Adder Testbench Completed");
        $finish;
    end
    
    // Optional: Add waveform dumping
    initial begin
        $dumpfile("adder_tb.vcd");
        $dumpvars(0, adder_tb);
    end

endmodule