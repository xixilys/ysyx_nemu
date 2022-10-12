module timer(
	input rst,
	input stop,
	input start,
	input clk,
	output [6:0]bcd1,
	output [6:0]bcd2
);
reg clk_1s;
reg [7:0]x2;
reg [7:0]x1;
reg [7:0]count_clk;
lower_frequency f1(.rst(rst),.clk(clk),.out_clk(clk_1s));
bcd7seg bcd_1(.x(x1[3:0]),.en(1),.y(bcd1));
bcd7seg bcd_2(.x(x2[3:0]),.en(1),.y(bcd2));
always @(posedge clk_1s or posedge rst) begin
	if(rst == 1) begin
		count_clk <= 0;
	end
	else if(count_clk == 99 && stop == 0 && start == 1) 
		count_clk <= 0;
	else if(stop == 0 && start == 1) count_clk <= count_clk + 1;
	else count_clk <= count_clk;
		x2 =( count_clk%10);
		x1 = (count_clk/10);
end

endmodule
