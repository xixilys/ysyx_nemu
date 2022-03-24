module lower_frequency(
	input clk,
	input rst,
	output reg out_clk
);
reg [31:0]counter_clk;
always @(posedge clk or posedge rst) begin
	if(rst == 1) begin
		counter_clk <= 0;
	end
	else if(counter_clk == 24999) begin
		counter_clk <= 0;
		out_clk <= ~out_clk;
	end
	else  counter_clk <= counter_clk + 1;
end
endmodule

