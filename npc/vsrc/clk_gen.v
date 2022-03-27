module clk_gen(
	input rst,
	input clk,
	input en,
	output reg clk_out
	);
	parameter clk_freq = 1000;// 生成的时钟信号
	parameter count_limit = 50000000 / clk_freq /2;
	reg [31:0] count;
	always @(posedge clk or posedge rst) begin
		if( rst ) begin 
			count <= 32'b0;
			clk_out <= 1'b0;
		end
		else if(en) begin
				if(count == count_limit) begin
					count <= 32'b0;
					clk_out <= ~clk_out;
				end
				else begin
					count <= count + 1;
				end
		end
		else begin
			count <= count;
			clk_out <= clk_out;
		end
	end 
	endmodule 
