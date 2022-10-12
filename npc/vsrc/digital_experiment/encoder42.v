module encoder42(
	input [3:0]x,
	input en,
	output reg [1:0]y,
	integer i
);
 
always @(x or en) begin 
	if(en) begin
		y = 0;
		/*case(x) 
			4'b0001 : y = 2'b00;
			4'b0010 : y = 2'b01;
			4'b0100 : y = 2'b10;
			4'b1000 : y = 2'b11;
			default:  y = 2'b00;
		endcase*/
		for(i=0;i<=3;i++) begin
			if(x[i] == 1) y = i[1:0];
		end
	end
	else y = 2'b00;
end

endmodule

