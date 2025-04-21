// -----------------------------------------------------------------------------
// 2‑D 8×8 DCT – 单核、行/列 4‑clk 复用版 (基于 dct8_chen_ts, NUM_MUL=8)
// -----------------------------------------------------------------------------
`timescale 1ns / 1ps
module dct8x8_2d_pipe_block_ts #(
    parameter int IN_W    = 32,   // 与 dct8_chen_ts.IN_W 对齐
    parameter int FRAC    = 8,
    parameter int CONST_W = 10
)(
    input  logic                     clk,
    input  logic                     rst_n,

    // whole‑block input (64 pixels)
    input  logic                     in_valid,
    input  logic [64*IN_W-1:0]       in_block,
    output logic                     in_ready,

    // whole‑block output (64 coeffs)
    output logic                     out_valid,
    output logic [64*IN_W-1:0]       out_block,
    input  logic                     out_ready
);
    // ------------------------------------------------------------ type alias
    typedef logic signed [IN_W-1:0] sample_t;

    // ------------------------------------------------------------ memories
    sample_t pix_mem [0:63];   // input pixels
    sample_t row_mem [0:63];   // row‑DCT results
    sample_t coef_mem[0:63];   // final coefficients

    // ------------------------------------------------------------ FSM
    typedef enum logic [1:0] {S_IDLE,S_ROW,S_COL,S_OUT} state_t;
    state_t state, n_state;

    logic [3:0] row_cnt;   // how many rows finished (0‑7)
    logic [3:0] col_cnt;   // how many columns finished (0‑7)

    // ------------------------------------------------------------ dct core i/f
    logic core_in_valid, core_in_ready;
    logic core_out_valid;
    sample_t dct_in [0:7];
    sample_t dct_out[0:7];

    // input mux (same as旧版)
    always_comb begin
        for(int i=0;i<8;i++) begin
            if(state==S_ROW)
                dct_in[i] = pix_mem[row_cnt*8 + i];
            else if(state==S_COL)
                dct_in[i] = row_mem[i*8 + col_cnt];
            else
                dct_in[i] = '0;
        end
    end

    // ------------------------------------------------------------ dct8_chen_ts
    dct8_chen_ts #(
        .IN_W    (IN_W),
        .FRAC    (FRAC),
        .CONST_W (CONST_W),
        .NUM_MUL (8)          // 4‑clk/row
    ) u_core (
        .clk       (clk),
        .rst_n     (rst_n),

        .in_valid  (core_in_valid),
        .in_ready  (core_in_ready),
        .in0(dct_in[0]), .in1(dct_in[1]), .in2(dct_in[2]), .in3(dct_in[3]),
        .in4(dct_in[4]), .in5(dct_in[5]), .in6(dct_in[6]), .in7(dct_in[7]),

        .out_valid (core_out_valid),
        .out_ready (1'b1),            // always ready
        .out0(dct_out[0]), .out1(dct_out[1]), .out2(dct_out[2]), .out3(dct_out[3]),
        .out4(dct_out[4]), .out5(dct_out[5]), .out6(dct_out[6]), .out7(dct_out[7])
    );

    // ------------------------------------------------------------ sequential
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            state   <= S_IDLE;
            row_cnt <= 0;
            col_cnt <= 0;
        end else begin
            state <= n_state;

            // capture block (S_IDLE)
            if(state==S_IDLE && in_valid && in_ready) begin
                for(int i=0;i<64;i++)
                    pix_mem[i] <= in_block[i*IN_W +: IN_W];
            end

            // Row phase: store when core finishes a row
            if(state==S_ROW && core_out_valid) begin
                for(int i=0;i<8;i++)
                    row_mem[row_cnt*8 + i] <= dct_out[i];
                row_cnt <= row_cnt + 1;
            end

            // Column phase
            if(state==S_COL && core_out_valid) begin
                for(int i=0;i<8;i++)
                    coef_mem[i*8 + col_cnt] <= dct_out[i];
                col_cnt <= col_cnt + 1;
            end

            // reset counters
            if(state==S_ROW && core_out_valid && row_cnt==4'd7) row_cnt <= 0;
            if(state==S_COL && core_out_valid && col_cnt==4'd7) col_cnt <= 0;
        end
    end

    // ------------------------------------------------------------ core handshake
    // core_in_valid ‑‑ 单拍脉冲：当且仅当处于 ROW/COL 且 core_in_ready=1
    logic core_req_sent;
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n) core_req_sent <= 0;
        else if(state==S_ROW || state==S_COL) begin
            if(core_out_valid)         core_req_sent <= 0;          // row done
            else if(core_in_valid)     core_req_sent <= 1;          // waiting
        end else core_req_sent <= 0;

    assign core_in_valid = (state==S_ROW || state==S_COL) &&
                           core_in_ready && !core_req_sent;

    // ------------------------------------------------------------ next‑state FSM
    always_comb begin
        n_state  = state;
        in_ready = 0;
        out_valid= 0;

        case(state)
            //---------------------- IDLE
            S_IDLE: begin
                in_ready = 1;
                if(in_valid) n_state = S_ROW;
            end
            //---------------------- ROW phase
            S_ROW : if(core_out_valid && row_cnt==4'd7) n_state = S_COL;
            //---------------------- COL phase
            S_COL : if (core_out_valid && col_cnt == 4'd7) n_state = S_OUT;

            //---------------------- OUT phase
            S_OUT : begin
                out_valid = 1;
                if(out_ready) n_state = S_IDLE;
            end
        endcase
    end

    // ------------------------------------------------------------ pack output
    always_comb begin
        out_block = '0;
        for(int i=0;i<64;i++)
            out_block[i*IN_W +: IN_W] = coef_mem[i];
    end

endmodule
