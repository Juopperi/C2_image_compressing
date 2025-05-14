// ============================================================================
// 8‑point 1‑D DCT (Chen) – 8 共享乘法器 / 零 DSP 版本
//   • 每行 8 样本用 4 clk 完成 (P0‑P3)；仅 8 个 LUT 乘法器
//   • 乘法器函数标注 (* use_dsp = "no" *) 强制综合到 LUT
// ============================================================================

`timescale 1ns / 1ps
(* use_dsp="no", use_dsp48="no" *)
module dct8_chen_ts #(
    parameter int IN_W     = 32,   // 数据位宽 (>= 像素 + FRAC)
    parameter int FRAC     = 8,    // 小数位
    parameter int CONST_W  = 16,   // 常量位宽
    parameter int NUM_MUL  = 15     // 并行乘法器数 (本例=8)
)(
    input  logic                      clk,
    input  logic                      rst_n,

    // 输入握手：1 行 8 样本
    input  logic                      in_valid,
    output logic                      in_ready,
    input  logic signed [IN_W-1:0]    in0,in1,in2,in3,in4,in5,in6,in7,

    // 输出握手：8 系数
    output logic                      out_valid,
    input  logic                      out_ready,
    output logic signed [IN_W-1:0]    out0,out1,out2,out3,
                                       out4,out5,out6,out7
);

    // --------------------------------------------------------------------
    // 常量 (×2^FRAC，FRAC = 8)
    // --------------------------------------------------------------------
   
    localparam logic signed [15:0]
        C1    = 16'sd32138  // 0.980785 × 2^FRAC,
        C2    = 16'sd30274  // 0.923880 × 2^FRAC,
        C3    = 16'sd27246  // 0.831470 × 2^FRAC,
        C4    = 16'sd23170  // 0.707107 × 2^FRAC,
        C6    = 16'sd12540  // 0.382683 × 2^FRAC,
        SIN1  = 16'sd6393  // 0.195090 × 2^FRAC,
        SIN3  = 16'sd18205  // 0.555570 × 2^FRAC,
        K0    = 16'sd11585  // 0.353553 × 2^FRAC;
        K     = 16'sd16384;

    // --------------------------------------------------------------------
    // 乘法器 (组合 LUT 乘 + 右移)
    // --------------------------------------------------------------------
    function automatic logic signed [IN_W-1:0] mul_c
        (input logic signed [IN_W-1:0]    a,
         input logic signed [CONST_W-1:0] b);
        (* use_dsp="no", use_dsp48="no" *) logic signed [IN_W+CONST_W-1:0] p;
    begin
        p     = a * b;
        mul_c = p >>> FRAC;           // 截断保持 IN_W
    end
    endfunction

    // --------------------------------------------------------------------
    // FSM
    // --------------------------------------------------------------------
    typedef enum logic [2:0] {S_IDLE,P0,P1,P2,P3,S_WAIT} state_t;
    state_t state, nstate;

    // --------------------------------------------------------------------
    // Butterfly & 中间寄存
    // --------------------------------------------------------------------
    logic signed [IN_W-1:0]
        s0,s1,s2,s3,     // Sums
        d0,d1,d2,d3,     // Differences
        e0,e1,e2,e3,     // Even intermediates
        b0,b1,b2,b3,b4,b5,b6,b7; // Chen B[]

    logic signed [IN_W-1:0] y [0:7]; // final output regs
    logic signed [IN_W-1:0] t_b1, t_b5; // partial sums

    // --------------------------------------------------------------------
    // 共享乘法器 I/O
    // --------------------------------------------------------------------
    typedef struct packed {
        logic signed [IN_W-1:0]    a;
        logic signed [CONST_W-1:0] b;
    } job_t;

    job_t                job   [NUM_MUL];
    logic signed [IN_W-1:0] mul_y [NUM_MUL];

    genvar g;
    generate
        for(g=0; g<NUM_MUL; g++) begin
            assign mul_y[g] = mul_c(job[g].a, job[g].b);
        end
    endgenerate

    // --------------------------------------------------------------------
    // Input handshake
    // --------------------------------------------------------------------
    assign in_ready  = (state == S_IDLE);
    assign out_valid = (state == S_WAIT);

    // --------------------------------------------------------------------
    // State register
    // --------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n) state <= S_IDLE;
        else       state <= nstate;

    // --------------------------------------------------------------------
    // Next‑state logic
    // --------------------------------------------------------------------
    always_comb begin
        nstate = state;
        case(state)
            S_IDLE : if(in_valid)  nstate = P0;
            P0     :               nstate = P1;
            P1     :               nstate = P2;
            P2     :               nstate = P3;
            P3     :               nstate = S_WAIT;
            S_WAIT : if(out_ready) nstate = S_IDLE;
        endcase
    end

    // --------------------------------------------------------------------
    // Capture input & Butterfly (S_IDLE)
    // --------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if(state==S_IDLE && in_valid) begin
            s0 <= in0 + in7;   d0 <= in0 - in7;
            s1 <= in1 + in6;   d1 <= in1 - in6;
            s2 <= in2 + in5;   d2 <= in2 - in5;
            s3 <= in3 + in4;   d3 <= in3 - in4;

            e0 <= (in0 + in7) + (in3 + in4);
            e1 <= (in1 + in6) + (in2 + in5);
            e2 <= (in0 + in7) - (in3 + in4);
            e3 <= (in1 + in6) - (in2 + in5);

            b0 <= (in0 + in7) + (in3 + in4)
                + (in1 + in6) + (in2 + in5); // E0 + E1
        end
    end

    // --------------------------------------------------------------------
    // Multiplier job scheduler
    // --------------------------------------------------------------------
    integer k;
    always_comb begin
        for(k=0;k<NUM_MUL;k++) job[k] = '{default:0};

        case(state)
            // ------------------------- Phase 0
            P0: begin
                job[0] = '{a:(e0-e1), b:C4};
                job[1] = '{a: e2   , b:C2};
                job[2] = '{a: e3   , b:C6};
                job[3] = '{a: e2   , b:C6};
                job[4] = '{a: e3   , b:C2};
                job[5] = '{a: d0   , b:C1};
                job[6] = '{a: d1   , b:C3};
                job[7] = '{a: d2   , b:SIN3};
            end
            // ------------------------- Phase 1
            P1: begin
                job[0] = '{a: d3   , b:SIN1};
                job[1] = '{a: d0   , b:C3  };
                job[2] = '{a: d1   , b:SIN1};
                job[3] = '{a: d2   , b:C1  };
                job[4] = '{a: d3   , b:SIN3};
                job[5] = '{a: d0   , b:SIN3};
                job[6] = '{a: d1   , b:C1  };
                job[7] = '{a: d2   , b:SIN1};
            end
            // ------------------------- Phase 2
            P2: begin
                job[0] = '{a: d3   , b:C3  };
                job[1] = '{a: d0   , b:SIN1};
                job[2] = '{a: d1   , b:SIN3};
                job[3] = '{a: d2   , b:C3  };
                job[4] = '{a: d3   , b:C1  };
                job[5] = '{a: b0   , b:K0  };
                job[6] = '{a: b1   , b:K   };
                job[7] = '{a: b2   , b:K   };
            end
            // ------------------------- Phase 3
            P3: begin
                job[0] = '{a: b3   , b:K   };
                job[1] = '{a: b4   , b:K   };
                job[2] = '{a: b5   , b:K   };
                job[3] = '{a: b6   , b:K   };
                job[4] = '{a: b7   , b:K   };
            end
            default:;
        endcase
    end

    // --------------------------------------------------------------------
    // Phase‑specific accumulation & result generation
    // --------------------------------------------------------------------
    always_ff @(posedge clk) begin
        case(state)
            P0: begin
                b4      <= mul_y[0];
                b2      <= mul_y[1] + mul_y[2];
                b6      <= mul_y[3] - mul_y[4];
                t_b1    <= mul_y[5] + mul_y[6] + mul_y[7]; // 部分B1
            end

            P1: begin
                b1      <= t_b1 + mul_y[0];               // 完成B1
                b3      <=  mul_y[1] - mul_y[2]
                         -  mul_y[3] - mul_y[4];
                t_b5    <=  mul_y[5] - mul_y[6] + mul_y[7]; // 部分B5
            end

            P2: begin
                b5      <= t_b5 + mul_y[0];               // 完成B5
                b7      <=  mul_y[1] - mul_y[2]
                         +  mul_y[3] - mul_y[4];

                y[0]    <= mul_y[5];  // B0*K0
                y[1]    <= mul_y[6];  // B1*K
                y[2]    <= mul_y[7];  // B2*K
            end

            P3: begin
                y[3]    <= mul_y[0];
                y[4]    <= mul_y[1];
                y[5]    <= mul_y[2];
                y[6]    <= mul_y[3];
                y[7]    <= mul_y[4];
            end

            S_WAIT: if(out_ready) begin
                // 可选：清零寄存，非必需
            end
        endcase
    end

    // --------------------------------------------------------------------
    // Output mapping
    // --------------------------------------------------------------------
    assign {out0,out1,out2,out3,out4,out5,out6,out7} =
           {y[0], y[1], y[2], y[3], y[4], y[5], y[6], y[7]};

endmodule
