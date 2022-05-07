module my_and(
	input a,b,
	output c);
	assign c = a&b;
endmodule

module my_or(
	input a,b,
	output c);
	assign c = a|b;
	endmodule

module my_not(
	input a,
	output b);
assign b = ~a;
endmodule


module m_mux12(a,b,y,s);
	input a,b,s;
	output y;
	wire l,r,s_n;
	my_not n1(.a(s) , .b(s_n));
	my_and a1(.a(s_n),.b(a),.c(l));
	my_and a2(.a(s)  ,.b(b),.c(r));
	my_or  o1(.a(l),.b(r),.c(y));
endmodule
