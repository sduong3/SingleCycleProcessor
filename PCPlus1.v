`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:55:32 03/03/2017 
// Design Name: 
// Module Name:    PCPlus1Adder 
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
module PCPlus1Adder
	#(parameter width=32)
	(input signed [width-1:0] PC,
    output signed [width-1:0] PCPlus1);

assign PCPlus1 = PC + 1;

endmodule
