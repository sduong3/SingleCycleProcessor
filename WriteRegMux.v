`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:21 03/03/2017 
// Design Name: 
// Module Name:    WriteRegMux 
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
module WriteRegMux(
	#(parameter width=5)
	(input select,
    input [width-1:0] input0, input1,
    output [width-1:0] out
    );

//if select is 1, out is input0
//else out is input1
assign out = select ? input0 : input1;

endmodule
