delete wave *
restart -f 

add wave clk
add wave input_array_R
add wave input_array_G
add wave input_array_B
add wave output_array_Y
add wave output_array_Cr
add wave output_array_Cb
add wave /conversioncontainer_tb/proc/array_R
add wave /conversioncontainer_tb/proc/array_G
add wave /conversioncontainer_tb/proc/array_B
add wave /conversioncontainer_tb/proc/data 

run 50ns