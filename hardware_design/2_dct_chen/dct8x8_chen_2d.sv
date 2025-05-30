// ============================================================================
// 8×8 2‑D DCT (based on a single instance of dct8_chen_ts)
//   • External interface: flattened 64-point parallel input/output
//   • Internal resources: 1 × dct8_chen_ts + 64 × IN_W RAM
// ============================================================================
`timescale 1ns/1ps
module dct8x8_chen_2d #(
    parameter int IN_W = 32,
    parameter int CONST_W = 5
)(
    input  logic                     clk,
    input  logic                     rst_n,

    // ---------- Flattened 64-point input interface (8×8 pixels) ----------
    input  logic                     in_valid,
    output logic                     in_ready,
    input  logic signed [64*IN_W-1:0] in_data,  // Flattened 64 input points

    // ---------- Flattened 64-point output interface (8×8 DCT) ----------
    output logic                     out_valid,
    input  logic                     out_ready,
    output logic signed [64*IN_W-1:0] out_data  // Flattened 64 output points
);

    // --------------------------------------------------------------------
    // Internal State
    // --------------------------------------------------------------------
    typedef enum logic [2:0] {
        S_IDLE,        // Wait for input
        S_ROW_PROC,    // Process rows
        S_ROW_WAIT,    // Wait for row result
        S_COL_PROC,    // Process columns
        S_COL_WAIT,    // Wait for column result
        S_DONE         // Computation complete, output ready
    } state_t;

    state_t state, nstate;

    // Row/column counters
    logic [2:0] row_cnt, col_cnt;
    
    // Input buffer (64 x IN_W)
    logic signed [IN_W-1:0] input_buffer [0:63];
    
    // Output buffer (64 x IN_W)
    logic signed [IN_W-1:0] output_buffer [0:63];

    // --------------------------------------------------------------------
    // Row-to-column transpose RAM (64 × IN_W)
    // --------------------------------------------------------------------
    (* ram_style="block" *)
    logic signed [IN_W-1:0] trans_buff [0:63];

    // Write control
    logic we_trans;
    logic signed [IN_W-1:0] wdata_trans [0:7];

    // RAM write control
    always_ff @(posedge clk) begin
        if(we_trans) begin
            // Write 8 elements
            for(int j=0; j<8; j++) begin
                trans_buff[row_cnt*8 + j] <= wdata_trans[j];
            end
        end
    end

    // Read addresses and data
    logic [5:0] raddr_trans [0:7];
    logic signed [IN_W-1:0] rdata_trans [0:7];

    genvar i;
    generate
        for(i=0;i<8;i++) begin : g_colread
            assign rdata_trans[i] = trans_buff[raddr_trans[i]];
        end
    endgenerate

    // --------------------------------------------------------------------
    // Connection to 1-D DCT core
    // --------------------------------------------------------------------
    logic core_in_valid, core_in_ready;
    logic core_out_valid;
    logic signed [IN_W-1:0] core_in [0:7];
    logic signed [IN_W-1:0] core_out[0:7];

    dct8_chen_ts #(
        .IN_W   (IN_W),
        .CONST_W(CONST_W)
    ) u_dct (
        .clk      (clk),
        .rst_n    (rst_n),

        .in_valid (core_in_valid),
        .in_ready (core_in_ready),
        .in0(core_in[0]),.in1(core_in[1]),.in2(core_in[2]),.in3(core_in[3]),
        .in4(core_in[4]),.in5(core_in[5]),.in6(core_in[6]),.in7(core_in[7]),

        .out_valid(core_out_valid),
        .out_ready(1'b1),                // Always ready internally
        .out0(core_out[0]),.out1(core_out[1]),.out2(core_out[2]),.out3(core_out[3]),
        .out4(core_out[4]),.out5(core_out[5]),.out6(core_out[6]),.out7(core_out[7])
    );

    // --------------------------------------------------------------------
    // Top-level handshaking
    // --------------------------------------------------------------------
    assign in_ready = (state == S_IDLE);
    assign out_valid = (state == S_DONE);

    // Output mapping – flatten the output buffer to out_data
    // Row-major order concatenation
    always_comb begin
        for (int i = 0; i < 64; i++) begin
            out_data[i*IN_W +: IN_W] = output_buffer[i];
        end
    end

    // --------------------------------------------------------------------
    // Load flattened input into buffer when in_valid is asserted
    // --------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if(state == S_IDLE && in_valid) begin
            for (int i = 0; i < 64; i++) begin
                input_buffer[i] <= in_data[i*IN_W +: IN_W];
            end
        end
    end

    // --------------------------------------------------------------------
    // State machine
    // --------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n) state <= S_IDLE;
        else       state <= nstate;

    always_comb begin
        nstate = state;
        case(state)
            S_IDLE:
                if(in_valid)
                    nstate = S_ROW_PROC;
            
            S_ROW_PROC:
                if(core_in_ready)
                    nstate = S_ROW_WAIT;
            
            S_ROW_WAIT:
                if(core_out_valid) begin
                    if(row_cnt == 3'd7)
                        nstate = S_COL_PROC;
                    else
                        nstate = S_ROW_PROC;
                end
            
            S_COL_PROC:
                if(core_in_ready)
                    nstate = S_COL_WAIT;
            
            S_COL_WAIT:
                if(core_out_valid) begin
                    if(col_cnt == 3'd7)
                        nstate = S_DONE;
                    else
                        nstate = S_COL_PROC;
                end
            
            S_DONE:
                if(out_ready)
                    nstate = S_IDLE;
            
            default: ;
        endcase
    end

    // --------------------------------------------------------------------
    // DCT core input data selection
    // --------------------------------------------------------------------
    always_comb begin
        // Default: column processing (read from transpose buffer)
        for(int j=0; j<8; j++) begin
            core_in[j] = rdata_trans[j];
        end
        
        // Row processing phase: select from input buffer
        if(state == S_ROW_PROC) begin
            for(int j=0; j<8; j++) begin
                core_in[j] = input_buffer[row_cnt*8 + j];
            end
        end
    end

    assign core_in_valid = (state == S_ROW_PROC) || (state == S_COL_PROC);

    // --------------------------------------------------------------------
    // Row counter
    // --------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n)
            row_cnt <= 3'd0;
        else if(state == S_IDLE)
            row_cnt <= 3'd0;
        else if(state == S_ROW_WAIT && core_out_valid)
            row_cnt <= row_cnt + 3'd1;

    // --------------------------------------------------------------------
    // Write row results into transpose buffer
    // --------------------------------------------------------------------
    assign we_trans = (state == S_ROW_WAIT) && core_out_valid;
    
    // Core output connected to transpose buffer write port
    genvar w;
    generate
        for(w=0; w<8; w++) begin : g_wdata
            assign wdata_trans[w] = core_out[w];
        end
    endgenerate

    // --------------------------------------------------------------------
    // Column counter and transpose buffer read address generation
    // --------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n)
            col_cnt <= 3'd0;
        else if(state == S_IDLE)
            col_cnt <= 3'd0;
        else if(state == S_COL_WAIT && core_out_valid)
            col_cnt <= col_cnt + 3'd1;

    // Generate read addresses for column processing
    integer k;
    always_comb begin
        for(k=0; k<8; k++)
            raddr_trans[k] = k*6'd8 + col_cnt;  // Column fixed, row incremented
    end

    // --------------------------------------------------------------------
    // Store column processing result into final output buffer
    // --------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if(state == S_COL_WAIT && core_out_valid) begin
            for(int j=0; j<8; j++) begin
                output_buffer[j*8 + col_cnt] <= core_out[j];
            end
        end
    end

endmodule
