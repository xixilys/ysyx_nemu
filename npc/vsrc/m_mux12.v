module m_mux12(
	input a,b,s,
	output y
);
	assign y = (~s*b)|(s&a);
endmodule
