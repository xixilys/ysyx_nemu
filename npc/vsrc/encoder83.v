module encoder83(
	input [7:0]x,
	input en,
	output reg [3:0]y,
	output reg [6:0]out,
	integer i
	
);
 bcd7seg seg(.x(y),.en(en),.y(out));
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
		for(i=0;i<=7;i++) begin
			if(x[i] == 1) y = i[3:0];
			
		end
		
	end
	else y = 4'b0000;
end
endmodule
 
