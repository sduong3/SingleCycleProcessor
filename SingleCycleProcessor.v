`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:48 03/02/2017 
// Design Name: 
// Module Name:    SingleCylceProcessor 
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
module SingleCylceProcessor
		#(parameter width=32)
		(input CLK, RST,
		output signed [31:0] WD3);

wire signed [31:0] PC_in, PC_out;
wire signed [31:0] Instr;		//current instruction
wire RegWrite, RegDst, ALUSrc, Branch, MemWrite, MemtoReg, Jump;
wire PCSrc;
wire signed [31:0] PCPlus1, PCBranch, branchResult;
wire signed [31:0] PCJump;
wire signed [31:0] SignImm;
wire signed [31:0] RD1, RD2;
wire [1:0] ALUOp;
wire [2:0] ALUControl;
wire signed [31:0] SrcA, SrcB;
wire Zero;
wire signed [31:0] ALUResult;
wire signed [31:0] ReadData, Result;
wire signed [4:0] WriteRegResult;

ProgramCounter PC (.CLK(CLK), .RST(RST), .PC_in(PC_in), .PC_out(PC_out));
InstructionMemory instrMem (.addr_in(PC_out), .Instr(Instr));
ControlUnit controlUnit (.Op(Instr[31:26]), .ALUOp(ALUOp), .RegDst(RegDst), .ALUSrc(ALUSrc), .Branch(Branch), .MemWrite(MemWrite), .MemtoReg(MemtoReg), .Jump(Jump), .RegWrite(RegWrite));
ALUDecoder decoder (.Funct(Instr[5:0]), .ALUOp(ALUOp), .ALUControl(ALUControl));
RegisterFile RF (.CLK(CLK), .WE3(RegWrite), .A1(Instr[25:21]), .A2(Instr[20:16]), .A3(WriteRegResult), .WD3(Result), .RD1(RD1), .RD2(RD2));

PCJump pcJump (.Instr(Instr[25:0]), .PCPlus1(PCPlus1[31:26]), .PCJump(PCJump), .Jump(Jump));
SignExtend SE (.immediate(Instr[15:0]), .SignImm(SignImm)); 
PCPlus1Adder pcAdder (.PC(PC_out), .PCPlus1(PCPlus1)); 
PCBranchAdder branchAdder (.SignImm(SignImm), .PCPlus1(PCPlus1), .PCBranch(PCBranch));

Mux SrcBMux (.select(ALUSrc), .input0(RD2), .input1(SignImm), .out(SrcB));		//if ALUSrc is 1, SrcB is SignImm
ALU alu (.SrcA(RD1), .SrcB(SrcB), .ALUControl(ALUControl), .Zero(Zero), .ALUResult(ALUResult));
PCSource source (.Branch(Branch), .Zero(Zero), .PCSrc(PCSrc));
DataMemory DM (.CLK(CLK), .WE(MemWrite), .A(ALUResult), .WD(RD2), .RD(ReadData));
Mux ResultMux (.select(MemtoReg), .input0(ALUResult), .input1(ReadData), .out(Result));		//if MemtoReg is 1, Result is ReadData


Mux branchMux (.select(PCSrc), .input0(PCPlus1), .input1(PCBranch), .out(branchResult));	//if PCSrc is 1, branchResult is PCBranch 
Mux #(.width0(5), .width1(5)) WriteRegMux(.select(RegDst), .input0(Instr[20:16]), .input1(Instr[15:11]), .out(WriteRegResult));	//if RegDst is 1 (from Control unit), WriteRegResult is Instr[15:11]
Mux jumpMux(.select(Jump), .input0(branchResult), .input1(PCJump), .out(PC_in));	//if Jump (from the Control unit) equals 1, PC_in is PCJump

finalResult answer (.x(Result), .y(WD3));
endmodule

