module fourbitadder(
	input [3:0]a,
	input [3:0]b,
	output   overflower,
	output  [3:0]result,
	output  carry,
	output zero
);
	assign {carry,result} = a + b ;
	assign overflower = (a[3]==b[3])&&(result[3]!=a[3]);
	assign zero = ~(|result); 
endmodule
