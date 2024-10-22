module  ps2_keyboard(
	input clk,clrn,ps2_clk,ps2_data,
	input nextdata_n,
	output [7:0]data,
	output reg ready,
	output reg overflow  
);
reg [9:0]buffer;
reg [7:0]fifo[7:0];
reg [2:0]w_ptr,r_ptr;
reg [3:0]count; 
reg [2:0]ps2_clk_sync;
always @(posedge clk) begin
	ps2_clk_sync <={ ps2_clk_sync[1:0],ps2_clk};
end

wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

always @(posedge clk ) begin
	if(clrn == 1) begin
		count <= 0; w_ptr <= 0;r_ptr <= 0;overflow <= 0; ready <= 0;
	end
	else begin
		if(ready) begin 
			if(nextdata_n == 1'b0)
			begin
				r_ptr <= r_ptr + 3'b1;
				if(w_ptr==(r_ptr+1'b1))
					ready <= 1'b0;
		    end
		end
		if(sampling ) begin
			if(count == 4'd10) begin
				if((buffer[0] == 0) && (ps2_data) && (^buffer[9:1])) begin
					fifo[w_ptr] <= buffer[8:1];
					////$display("recieve %x",buffer[8:1]);
					w_ptr <= w_ptr +1;
					ready <= 1'b1;
					overflow <= overflow | (r_ptr ==  (w_ptr + 3'b1));

				end
				count <= 0;
			end else begin
				buffer[count] <= ps2_data;
			
				count <= count+3'b1;
			end
		end
	end
end
assign data = fifo[r_ptr];
endmodule 
