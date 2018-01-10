`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:03:09 03/03/2017 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit
	#(parameter width=5)
	(input [width:0] Op,
	 output reg [1:0] ALUOp,
    output reg RegWrite, RegDst, ALUSrc, Branch, MemWrite, MemtoReg, Jump
    );

always @* begin
	case (Op)
		//R-type
		6'b000000:	begin
					RegWrite = 1;
					RegDst = 1;
					ALUSrc = 0;
					Branch = 0;
					MemWrite = 0;
					MemtoReg = 0;
					ALUOp = 2'b10;
					Jump = 0;
		end
		
		//lw		
		6'b100011:	begin
					RegWrite = 1;
					RegDst = 0;
					ALUSrc = 1;
					Branch = 0;
					MemWrite = 0;
					MemtoReg = 1;
					ALUOp = 2'b00;
					Jump = 0;
		end
		
		//sw		
		6'b101011:	begin
					RegWrite = 0;
					RegDst = 1'bx;	
					ALUSrc = 1;
					Branch = 0;
					MemWrite = 1;
					MemtoReg = 1'bx; 
					ALUOp = 2'b00;
					Jump = 0;
		end
		
		//beq		
		6'b000100:	begin
					RegWrite = 0;
					RegDst = 1'bx; //x 0
					ALUSrc = 0;
					Branch = 1;
					MemWrite = 0;
					MemtoReg = 1'bx;//x 0
					ALUOp = 2'b01;
					Jump = 0;
		end
		
		//addi		
		6'b001000:	begin
					RegWrite = 1;
					RegDst = 0;
					ALUSrc = 1;
					Branch = 0;
					MemWrite = 0;
					MemtoReg = 0;
					ALUOp = 2'b00;
					Jump = 0;
		end
		
		//jump		
		6'b000010:	begin
					RegWrite = 0;
					RegDst = 1'bx;
					ALUSrc = 1'bx;
					Branch = 1'bx;
					MemWrite = 0;
					MemtoReg = 1'bx;
					ALUOp = 2'bxx;
					Jump = 1;
		end
		
				
		default:	begin
					RegWrite = 1'bx;
					RegDst = 1'bx;
					ALUSrc = 1'bx;
					Branch = 1'bx;
					MemWrite = 1'bx;
					MemtoReg = 1'bx;
					ALUOp = 2'bxx;
					Jump = 1'bx;
		end
	endcase
end
endmodule
