`timescale 1ns/1ps
module user_core_pass_thru #(
  parameter integer DATA_WIDTH = 32,
  parameter integer DEPTH      = 32,
  parameter integer CORE_LATENCY = 8
)(
  input  logic                   clk, rst_n, start,
  output logic                   busy, done,
  input  logic [DATA_WIDTH-1:0]  in_buf [DEPTH],
  output logic [DATA_WIDTH-1:0]  out_buf[DEPTH]
);
  typedef enum logic [1:0] {IDLE, RUN, FIN} state_t;
  state_t state;
  int cnt;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      state <= IDLE; 
      done <= 0; 
      busy <= 0; 
      cnt <= 0;
    end
    else begin
      unique case (state)
        IDLE: if (start) begin
                busy <= 1; 
                state <= RUN; 
                cnt <= 0;
                for (int i=0; i<DEPTH; i++) 
                  out_buf[i] <= in_buf[i]; // 直通
              end
        RUN : if (cnt==CORE_LATENCY-1) begin
                state <= FIN; 
                done <= 1; 
                busy <= 0;
              end else 
                cnt <= cnt+1;
        FIN : if (!start) begin          // CPU 清 0 后回到 IDLE
                done <= 0; 
                state <= IDLE;
              end
        default: state <= IDLE;
      endcase
    end
  end
endmodule 