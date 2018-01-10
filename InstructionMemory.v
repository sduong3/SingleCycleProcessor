`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:20:59 03/03/2017 
// Design Name: 
// Module Name:    InstructionMemory 
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

//Read instruction from instruction memory
module InstructionMemory #(parameter width=32)
	(input [width-1:0] addr_in, 
	output reg signed [width-1:0] Instr);
	 
reg [width-1:0] Memory [width-1:0];
initial begin
	$readmemh("sample.txt", Memory);
end

always @* begin
	Instr <= Memory[addr_in];
end

endmodule
