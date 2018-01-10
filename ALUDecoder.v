`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:11:45 03/03/2017 
// Design Name: 
// Module Name:    ALUDecoder 
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
module ALUDecoder
	#(parameter width=5)
	(input [width:0] Funct,
    input [1:0] ALUOp,
    output reg [2:0] ALUControl
    );


always @* begin	
	//R type instruction: add
	if (ALUOp == 2'b10 && Funct == 6'b100000)
		ALUControl = 3'b010;
	
	//R type instruction: subtract
	else if (ALUOp == 2'b10 && Funct == 6'b100010)
		ALUControl = 3'b110;
	
	//R type instruction: and
	else if (ALUOp == 2'b10 && Funct == 6'b100100)
		ALUControl = 3'b000;
	
	//R type instruction: or 
	else if (ALUOp == 2'b10 && Funct == 6'b100101)
		ALUControl = 3'b001;
		
	//R type instruction: slt
	else if (ALUOp == 2'b10 && Funct == 6'b101010)
		ALUControl = 3'b111; 
	
	//load word and store word
	else if (ALUOp == 2'b00)
		ALUControl = 3'b010;	//add
		
	//branch
	else if (ALUOp == 2'b01)
		ALUControl = 3'b110;	//subtract
		
	//multiply
	else if (ALUOp == 2'b10 && Funct == 6'b011000)
		ALUControl = 3'b011;
		
	else
		ALUControl = 3'bxxx;
end
endmodule
