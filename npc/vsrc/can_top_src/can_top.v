 /* verilator lint_off WIDTHEXPAND */ 

  module can_top (
  	rstn,
  	clk,
  	can_rx,
  	can_tx,
  	tx_valid,
  	tx_ready,
  	tx_data,
  	rx_valid,
  	rx_last,
  	rx_data,
  	rx_id,
  	rx_ide
  );
  	parameter [10:0] LOCAL_ID = 11'h456;
  	parameter [10:0] RX_ID_SHORT_FILTER = 11'h123;
  	parameter [10:0] RX_ID_SHORT_MASK = 11'h7ff;
  	parameter [28:0] RX_ID_LONG_FILTER = 29'h12345678;
  	parameter [28:0] RX_ID_LONG_MASK = 29'h1fffffff;
  	parameter [15:0] default_c_PTS = 16'd34;
  	parameter [15:0] default_c_PBS1 = 16'd5;
  	parameter [15:0] default_c_PBS2 = 16'd10;
  	input wire rstn;
  	input wire clk;
  	input wire can_rx;
  	output wire can_tx;
  	input wire tx_valid;
  	output wire tx_ready;
  	input wire [31:0] tx_data;
  	output reg rx_valid;
  	output reg rx_last;
  	output reg [7:0] rx_data;
  	output reg [28:0] rx_id;
  	output reg rx_ide;
  	initial {rx_valid, rx_last, rx_data, rx_id, rx_ide} = 1'sb0;
  	reg buff_valid = 1'sb0;
  	reg buff_ready = 1'sb0;
  	wire [31:0] buff_data;
  	reg pkt_txing = 1'sb0;
  	reg [31:0] pkt_tx_data = 1'sb0;
  	wire pkt_tx_done;
  	wire pkt_tx_acked;
  	wire pkt_rx_valid;
  	wire [28:0] pkt_rx_id;
  	wire pkt_rx_ide;
  	wire pkt_rx_rtr;
  	wire [3:0] pkt_rx_len;
  	wire [63:0] pkt_rx_data;
  	reg pkt_rx_ack = 1'sb0;
  	reg t_rtr_req = 1'sb0;
  	reg r_rtr_req = 1'sb0;
  	reg [3:0] r_cnt = 1'sb0;
  	reg [3:0] r_len = 1'sb0;
  	reg [63:0] r_data = 1'sb0;
  	reg [1:0] t_retry_cnt = 1'sb0;
  	localparam DSIZE = 32;
  	localparam ASIZE = 10;
  	reg [31:0] buffer [0:1023];
  	reg [ASIZE:0] wptr = 1'sb0;
  	reg [ASIZE:0] rptr = 1'sb0;
  	wire full = wptr == {~rptr[ASIZE], rptr[9:0]};
  	wire empty = wptr == rptr;
  	assign tx_ready = ~full;
  	always @(posedge clk or negedge rstn)
  		if (~rstn)
  			wptr <= 1'sb0;
  		else if (tx_valid & ~full)
  			wptr <= wptr + 11'sd1;
  	always @(posedge clk)
  		if (tx_valid & ~full)
  			buffer[wptr[9:0]] <= tx_data;
  	wire rdready = ~buff_valid | buff_ready;
  	reg rdack = 1'sb0;
  	reg [31:0] rddata;
  	reg [31:0] keepdata = 1'sb0;
  	assign buff_data = (rdack ? rddata : keepdata);
  	always @(posedge clk or negedge rstn)
  		if (~rstn) begin
  			buff_valid <= 1'b0;
  			rdack <= 1'b0;
  			rptr <= 1'sb0;
  			keepdata <= 1'sb0;
  		end
  		else begin
  			buff_valid <= ~empty | ~rdready;
  			rdack <= ~empty & rdready;
  			if (~empty & rdready)
  				rptr <= rptr + 11'sd1;
  			if (rdack)
  				keepdata <= rddata;
  		end
  	always @(posedge clk) rddata <= buffer[rptr[9:0]];
  	can_level_packet #(
  		.TX_ID(LOCAL_ID),
  		.default_c_PTS(default_c_PTS),
  		.default_c_PBS1(default_c_PBS1),
  		.default_c_PBS2(default_c_PBS2)
  	) can_level_packet_i(
  		.rstn(rstn),
  		.clk(clk),
  		.can_rx(can_rx),
  		.can_tx(can_tx),
  		.tx_start(pkt_txing),
  		.tx_data(pkt_tx_data),
  		.tx_done(pkt_tx_done),
  		.tx_acked(pkt_tx_acked),
  		.rx_valid(pkt_rx_valid),
  		.rx_id(pkt_rx_id),
  		.rx_ide(pkt_rx_ide),
  		.rx_rtr(pkt_rx_rtr),
  		.rx_len(pkt_rx_len),
  		.rx_data(pkt_rx_data),
  		.rx_ack(pkt_rx_ack)
  	);
  	always @(posedge clk or negedge rstn)
  		if (~rstn) begin
  			pkt_rx_ack <= 1'b0;
  			r_rtr_req <= 1'b0;
  			r_cnt <= 4'd0;
  			r_len <= 4'd0;
  			r_data <= 1'sb0;
  			{rx_valid, rx_last, rx_data, rx_id, rx_ide} <= 1'sb0;
  		end
  		else begin
  			{rx_valid, rx_last, rx_data} <= 1'sb0;
  			pkt_rx_ack <= 1'b0;
  			r_rtr_req <= 1'b0;
  			if (r_cnt > 4'd0) begin
  				rx_valid <= r_cnt <= r_len;
  				rx_last <= (r_cnt <= r_len) && (r_cnt == 4'd1);
  				{rx_data, r_data} <= {r_data, 8'd0};
  				r_cnt <= r_cnt - 4'd1;
  			end
  			else if (pkt_rx_valid) begin
  				r_len <= pkt_rx_len;
  				r_data <= pkt_rx_data;
  				if (pkt_rx_rtr) begin
  					if (~pkt_rx_ide && (pkt_rx_id[10:0] == LOCAL_ID)) begin
  						pkt_rx_ack <= 1'b1;
  						r_rtr_req <= 1'b1;
  					end
  				end
  				else if (~pkt_rx_ide) begin
  					if ((pkt_rx_id[10:0] & RX_ID_SHORT_MASK) == (RX_ID_SHORT_FILTER & RX_ID_SHORT_MASK)) begin
  						pkt_rx_ack <= 1'b1;
  						r_cnt <= 4'd8;
  						rx_id <= pkt_rx_id;
  						rx_ide <= pkt_rx_ide;
  					end
  				end
  				else if ((pkt_rx_id & RX_ID_LONG_MASK) == (RX_ID_LONG_FILTER & RX_ID_LONG_MASK)) begin
  					pkt_rx_ack <= 1'b1;
  					r_cnt <= 4'd8;
  					rx_id <= pkt_rx_id;
  					rx_ide <= pkt_rx_ide;
  				end
  			end
  		end
  	always @(posedge clk or negedge rstn)
  		if (~rstn) begin
  			buff_ready <= 1'b0;
  			pkt_tx_data <= 1'sb0;
  			t_rtr_req <= 1'b0;
  			pkt_txing <= 1'b0;
  			t_retry_cnt <= 2'd0;
  		end
  		else begin
  			buff_ready <= 1'b0;
  			if (r_rtr_req)
  				t_rtr_req <= 1'b1;
  			if (~pkt_txing) begin
  				t_retry_cnt <= 2'd0;
  				if (t_rtr_req | buff_valid) begin
  					buff_ready <= buff_valid;
  					t_rtr_req <= 1'b0;
  					if (buff_valid)
  						pkt_tx_data <= buff_data;
  					pkt_txing <= 1'b1;
  				end
  			end
  			else if (pkt_tx_done)
  				if (pkt_tx_acked || (t_retry_cnt == 2'd3))
  					pkt_txing <= 1'b0;
  				else
  					t_retry_cnt <= t_retry_cnt + 2'd1;
  		end
  endmodule
