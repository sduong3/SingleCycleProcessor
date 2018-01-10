`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:39:18 03/03/2017
// Design Name:   SingleCylceProcessor
// Module Name:   C:/Users/Steven/Documents/SDSU/SDSU 2016-2017/Spring 2017/COMPE475/HW2/HW2/tb_SingleCycleProcessor.v
// Project Name:  HW2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SingleCylceProcessor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_SingleCycleProcessor;

	// Inputs
	reg CLK;
	reg RST;

	// Outputs
	wire signed [31:0] WD3;

	// Instantiate the Unit Under Test (UUT)
	SingleCylceProcessor uut (
		.CLK(CLK), 
		.RST(RST), 
		.WD3(WD3)
	);

	initial begin
		// Initialize Inputs
		
		CLK = 0; RST = 1;
		end
		
		always begin
			#10; CLK = ~CLK;
		end
		
		/*initial begin
		$dumpfile("dump.vcd");
		$dumpvars(0, uut);
    end
	 */
		initial begin
		@(posedge CLK) RST = 0;
		@(posedge CLK) 
		@(posedge CLK) 
		@(posedge CLK)
		@(posedge CLK) 
		@(posedge CLK) 
		@(posedge CLK)
		@(posedge CLK) 
		@(posedge CLK) 
		@(posedge CLK)
		@(posedge CLK) 
		@(posedge CLK)
		@(posedge CLK) 
		@(posedge CLK) 
		@(posedge CLK)
		@(posedge CLK) 
		@(posedge CLK)
		@(posedge CLK) 
		@(posedge CLK) 

		$finish;
       end 
		// Add stimulus here


endmodule

