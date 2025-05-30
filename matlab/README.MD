This file is intended to help users to become familiar with this MATLAB project.
This is a software JPEG compression implementation. It consists of all necessary modules to assemble the compression chain.

Included files are the following:
- compression_ref.m : implements the compression algorithm using standard MATLAB functions up until quantization. From that point on, it reverses the process and displays the compressed image. MATLAB's inbuilt functions are used because this file is intended to serve as a reference to test possible alternative compression algorithms in stages such as DCT.
- compression.m (MAIN FILE): implements the compression algorithm without relying, as much as possible, on MATLAB's inbuilt functions. This was done to achieve a logic more similar to that of the hardware design. This script does perform the last steps of the compression process, including, zigzag scanning, runlength encoding, Huffman encoding and file writing. It also prints the values after each step until quantization. In order to view relevant data after this point, the user must view variables through the MATLAB workspace. At the end of the script, it adds the option to view the compressed image at quantization, such as in compression_ref.m.
    - Note: an inut image must be specified at the beginning of each of the scripts above.

- chromasub.m : implements different subsampling alternatives. In the main file, a subsampling mode must be specified as a parameter.

- dct_tr.m : implements the Discrete Cosine Transform.

- quant.m : implements quantization. A variable quantization index must be selected in the main file, being specified in the parameters of this function's call. Standard quantization corresponds to a value of 50; higher values equal higher quality and file size.

- encoding.m : implements zigzag scanning, AC runlength encoding and Huffman encoding. This function calls the Huffman AC coding functions.

- huffman_ac_y.m and hufman_ac_cbcr : these files implement AC Huffman encoding, selecting the corresponding code given the number of zeros and the coefficient's number of bits. It then appends the coefficient's value in one's complement.

- huffman_dc_y.m and hufman_dc_cbcr : these files implement DC Huffman encoding, selecting the corresponding code given the coefficient's number of bits. It then appends the coefficient's value in one's complement.

- file_writing.m : implements JPEG file writing using JFIF. It starts by writing the header and then does the same with Huffman-encoded data, after which it finishes with the EOI marker. A filename must be specified as a parameter when calling this function from the main script.

- matrix_writing.m : writes the elements of matrices to a text file.

- reconstruct.m : obtains the RGB values from the compressed image. This allows to display it using an inbuilt MATLAB function.

