`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:16:07 04/02/2021 
// Design Name: 
// Module Name:    TSP_PST_TTR_TNV 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module TSP_PST_TTR_TNV(
	input clk,reset,ss,
	input [1:0] mode,
	output reg [7:0] led
    );
	 reg	[1:0] TT_led;
	always @(posedge clk,posedge reset)	begin
		if(reset==1'b1)
			led = 8'h00;
		else
		begin
			if(ss==1'b1)
			begin
				if(led==8'hFF||TT_led!=mode)
					led = 8'h00;
				if(mode==2'b00)	//PST
					led = (led<<1) + 8'h01;
				else if(mode==2'b01)	//TSP
					led = (led>>1) + 8'h80;
				else if(mode==2'b10) //TTR
				begin
					led[3:0] = (led[3:0]>>1) + 4'b1000;
					led[7:4] =  (led[7:4]<<1) + 4'b0001;
				end
				else if(mode==2'b11)	//TNV
				begin
					led[3:0] = (led[3:0]<<1) + 4'b0001;
					led[7:4] =  (led[7:4]>>1) + 4'b1000;
				end
			end
			else
				led = led;
			TT_led = mode;
		end
	end
endmodule
