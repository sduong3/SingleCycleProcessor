`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:39:20 03/03/2017 
// Design Name: 
// Module Name:    ALU 
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
module ALU
	#(parameter widthA=5, widthB=32)
	(input signed [widthA-1:0] SrcA,
	input signed [widthB-1:0] SrcB,
	input [2:0] ALUControl,
	output reg Zero,
    output reg signed [widthB-1:0] ALUResult);

always @* begin
	case (ALUControl)
		3'b010:	ALUResult = SrcA + SrcB;				//Addition
		3'b110:	ALUResult = SrcA - SrcB;				//Subtraction
		3'b000:	ALUResult = SrcA & SrcB;				//And
		3'b001:	ALUResult = SrcA | SrcB;				//Or
		3'b111:	ALUResult = (SrcA < SrcB) ? 1 : 0;	//SLT
	//	3'b011:	ALUResult = 								//multiply
		default: ALUResult = 32'bx;
	endcase
	
	Zero = (ALUResult == 0) ? 1'b1 : 1'b0;					//Set zero flag if ALUResult is 0
end

endmodule
