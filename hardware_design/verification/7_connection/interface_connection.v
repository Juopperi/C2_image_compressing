
parameters:
#(
	INPUT_ADD_BASE : 8'h00;
	INPUT_ADD_RANGE: 64;
	OUTPUT_ADD_BASE: 8'hF0;
	OUTPUT_ADD_RANGE: 64;
)

ports:
{
	input 	 	   start;
	input   [31:0] read;
	output 		   done;
	output  [31:0] write;
}
