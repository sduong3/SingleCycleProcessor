`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:29:32 03/02/2017 
// Design Name: 
// Module Name:    Mux 
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
module Mux
	#(parameter width0 =32, width1=32)
	(input select,
    input signed [width0-1:0] input0,
	 input signed [width1-1:0] input1,
    output signed [width1-1:0] out
    );

//if select is 1, out is input1
//else out is input0
assign out = select ? input1 : input0;

endmodule
