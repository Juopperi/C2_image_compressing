// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (win64) Build 5239630 Fri Nov 08 22:35:27 MST 2024
// Date        : Mon Apr 21 19:50:14 2025
// Host        : wenruoxu running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub ./jpeg_pipeline_synth_stub.v
// Design      : jpeg_compression_pipeline
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* DATA_DEPTH = "8" *) (* DATA_WIDTH = "32" *) (* INPUT_WIDTH = "8" *) 
(* NETLIST_CHECKSUM = "63db5b55" *) (* PIXEL_COUNT = "64" *) 
module jpeg_compression_pipeline(clk, reset_n, r_all, g_all, b_all, y_zigzag, 
  cb_zigzag, cr_zigzag)
/* synthesis syn_black_box black_box_pad_pin="clk,reset_n,r_all[511:0],g_all[511:0],b_all[511:0],y_zigzag[2047:0],cb_zigzag[2047:0],cr_zigzag[2047:0]" */;
  input clk;
  input reset_n;
  input [511:0]r_all;
  input [511:0]g_all;
  input [511:0]b_all;
  output [2047:0]y_zigzag;
  output [2047:0]cb_zigzag;
  output [2047:0]cr_zigzag;
endmodule
