`timescale 1ns/1ps
module user_core_pass_thru #(
  parameter integer DATA_WIDTH = 32,
  parameter integer DEPTH      = 32,
  parameter integer CORE_LATENCY = 8
)(
  input  wire                   clk, rst_n, start,
  output reg                    busy, done,
  input  wire [DATA_WIDTH-1:0]  in_buf [0:DEPTH-1],
  output reg  [DATA_WIDTH-1:0]  out_buf[0:DEPTH-1]
);
  parameter IDLE = 2'b00, RUN = 2'b01, FIN = 2'b10;
  reg [1:0] state;
  reg [7:0] cnt;

  always @(posedge clk) begin
    if (!rst_n) begin
      state <= IDLE; 
      done <= 0; 
      busy <= 0; 
      cnt <= 0;
    end
    else begin
      case(state)
        IDLE: if (start) begin
                busy <= 1; 
                state <= RUN; 
                cnt <= 0;
                for (integer i=0; i<DEPTH; i=i+1) 
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