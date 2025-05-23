### Introduction
- Why we do it
	- Satellites are increassing
	- Hardware is better
- Related work
- Goal of the project
	- Decreasse resource 
- OUtline of report 

### JPEG Compression
- Reader know everyrhing else 
### Method
- Implementation Stragies
	- Design flow
		- Software implementation
		- Individual hardware parts
	- Verification
		- The process of verifing 

### Design
- General design.
	- Divide the design into modules
		- These are tested sepratly 
	- We use generics to increasses adjusatlinlites 
	- Control the resource usage.

- Seperate modules. 
	- Conversion
		- Using bit shifts for the equations
		- The impact of this 

### Result and discussion
- How much it sped up. 
	- Graph 
	- Comparison
		- Tells why the hardware is faster 
- Deviation from expected results: (Shuhang)
	- Explain that we compress a file on a SD-card
		- BUt the files is not exactly the same as the matlab version
		- This is becuase the huffman is "Wrong"
	- Show the Huffman expected and the one we get.
		- Explain that this is because the 16.16 fixed point operations and rounding in YCbCr DCT and Quant
- Hardware utilixation (Albin)
	- Show the syntheies/implemnation hardware utilization
		- Discuess these results

- Future work