`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:33:33 04/02/2021
// Design Name:   TSP_PST_TTR_TNV
// Module Name:   D:/TT_FPGA/TSP_PST_TTR_TNV/test.v
// Project Name:  TSP_PST_TTR_TNV
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TSP_PST_TTR_TNV
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg reset;
	reg ss;
	reg [1:0] mode;
	reg [8:0] i;
	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	TSP_PST_TTR_TNV uut (
		.clk(clk), 
		.reset(reset), 
		.ss(ss), 
		.mode(mode), 
		.led(led)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		ss = 0;
		mode = 0;
		i=0;
		// Wait 100 ns for global reset to finish
		#200;
        
		// Add stimulus here
		reset = 0;
		ss=1;
		// Add stimulus here
		for(i=0;i<255;i=i+1)
		begin
			clk = 1- clk;
			if(i==20)
				mode = 1;
			if(i==24)
				ss = 0;
			if(i==28)
			begin
				mode = 2;
				ss = 1;
			end
			if(i==48)
				mode = 3;
			if(i==64)
				mode = 1;
			if(i==84)
				mode = 0;
			if(i==100)
				mode = 2;
			if(i==116)
				reset = 1;
			if(i==124)
			begin
				mode = 3;
				reset = 0;
			end
		#100;
		end
	end
      
endmodule

