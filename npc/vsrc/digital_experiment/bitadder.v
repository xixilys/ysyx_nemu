module bitadder(
	input c,
	input a,
	input b,
	output reg s,
	output reg c_
);
always@(a,b,c) begin

	assign s = a^b^c;
	assign c_ = (a&b) | (a^b&c);
	end
endmodule
