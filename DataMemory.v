`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:10:05 03/03/2017 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory
	(input CLK, WE,			//WE is MemWrite
    input signed [31:0] A,				//ALUResult
    input signed [4:0] WD,				//RD2 
    output reg signed [31:0] RD				//Read Data
    );

reg signed [31:0] Memory [31:0];

always @(posedge CLK or posedge WE) begin
	if (WE == 1)		//write
		Memory[A] <= WD;
end

always @* begin
	RD = Memory[A];
end

endmodule


