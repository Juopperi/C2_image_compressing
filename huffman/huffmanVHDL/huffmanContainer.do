delete wave *
restart -f 

add wave clk
add wave reset
add wave test1
add wave test2
add wave /huffmancontainer_tb/dut/input_integer
add wave /huffmancontainer_tb/dut/zeros
add wave /huffmancontainer_tb/dut/output_integer
add wave /huffmancontainer_tb/dut/length
add wave /huffmancontainer_tb/dut/test/code_proc/test
add wave /huffmancontainer_tb/dut/proc/index
add wave /huffmancontainer_tb/dut/proc/max
add wave /huffmancontainer_tb/dut/proc/min

run 50ns