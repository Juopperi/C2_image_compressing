delete wave *
restart -f 

add wave input_R
add wave input_G
add wave input_B
add wave output_Y
add wave output_Cr
add wave output_Cb
add wave conversion_tb/test/Y
add wave conversion_tb/test/Cr
add wave conversion_tb/test/Cb

run 100ns