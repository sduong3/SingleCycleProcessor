`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:54:01 03/02/2017 
// Design Name: 
// Module Name:    RegisterFile 
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
module RegisterFile
				#(parameter width=5)
				(input CLK, WE3,
				input signed [width-1:0] A1, A2, A3,
				input signed [31:0] WD3,
				output reg signed [31:0] RD1, RD2);

reg signed [31:0] RegisterFile [31:0];


always @* begin
	RegisterFile[0] = 0;
	RD1 = RegisterFile[A1];
	RD2 = RegisterFile[A2];
end

always @(posedge CLK) begin
	if (WE3 == 1)					//write the value of WD3 into the RegisterFile at the specific address
		RegisterFile[A3] = WD3;	
		

end
/*
always @* begin
	RD1 <= A1;
end	

always @(posedge CLK) begin
	if (WE3 == 0)
		RD2 <= A2;
	else
		RD2 <= A3;
end
*/
endmodule
