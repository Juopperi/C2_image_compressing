delete wave *
restart -f 

add wave clk
add wave reset
add wave input_integer
add wave output_bit
add wave huff_tb/dut/state
add wave huff_tb/dut/huff_logic_proc/input_reg
add wave huff_tb/dut/huff_logic_proc/output_reg
add wave huff_tb/dut/huff_logic_proc/index
add wave huff_tb/dut/huff_logic_proc/length

run 200ns