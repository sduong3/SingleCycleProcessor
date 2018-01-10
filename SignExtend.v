`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:57:58 03/03/2017 
// Design Name: 
// Module Name:    SignExtend 
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
module SignExtend
	(input signed [15:0] immediate,
    output signed [31:0] SignImm);

//SignImm[15:0] = instr[15:0]
//SignImm[31:16] = Instr[15]
assign SignImm = {{16{immediate[15]}}, immediate};

endmodule
