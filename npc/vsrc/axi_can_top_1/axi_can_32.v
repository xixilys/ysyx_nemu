
	module axi_can_32 #
	(
		// Users to add parameters here

		// User parameters ends
		// Do not modify the parameters beyond this line


		// Parameters of Axi Slave Bus Interface S00_AXI
		parameter integer C_S00_AXI_DATA_WIDTH	= 32,
		parameter integer C_S00_AXI_ADDR_WIDTH	= 5,
		parameter  [10:0] LOCAL_ID	= 11'h200
	)
	(
		// Users to add ports here

		// User ports ends
		// Do not modify the ports beyond this line


		// Ports of Axi Slave Bus Interface S00_AXI

		input clk,
  		input rst_n,


		input [4-1:0] axi_port_arid,
		input [32-1:0] axi_port_araddr,
		input [8-1:0] axi_port_arlen,
		input [3-1:0] axi_port_arsize,
		input [2-1:0] axi_port_arburst,
		// input [2-1:0] axi_port_arlock,
		input axi_port_arvalid,
		output axi_port_arready,
		output [4-1:0] axi_port_rid,
		output [32-1:0] axi_port_rdata,
		output [2-1:0] axi_port_rresp,
		output axi_port_rlast,
		output axi_port_rvalid,
		input axi_port_rready,
		input [4-1:0] axi_port_awid,
		input [32-1:0] axi_port_awaddr,
		input [8-1:0] axi_port_awlen,
		input [3-1:0] axi_port_awsize,
		input [2-1:0] axi_port_awburst,

		input axi_port_awvalid,
		output axi_port_awready,
		input [32-1:0] axi_port_wdata,
		input [4-1:0] axi_port_wstrb,
		input axi_port_wlast,
		input axi_port_wvalid,
		output axi_port_wready,
		output [4-1:0] axi_port_bid,
		output [1:0] axi_port_bresp,
		output axi_port_bvalid,
		input axi_port_bready,
		
		
		(*mark_debug = "true"*)input wire can_rx,
		(*mark_debug = "true"*)output wire can_tx,
		
		output wire can_intr
	);
// Instantiation of Axi Bus Interface S00_AXI
	axi_slave_32 # ( 
	       .LOCAL_ID(LOCAL_ID),
		.C_S_AXI_DATA_WIDTH(C_S00_AXI_DATA_WIDTH),
		.C_S_AXI_ADDR_WIDTH(C_S00_AXI_ADDR_WIDTH)
	) axi_slave_32_inst (
		.S_AXI_ACLK(clk),
		.S_AXI_ARESETN(rst_n),
		.S_AXI_AWADDR(axi_port_awaddr[C_S00_AXI_ADDR_WIDTH-1 : 0]),
		// .S_AXI_AWPROT(axi_port_awprot),
		.S_AXI_AWVALID(axi_port_awvalid),
		.S_AXI_AWREADY(axi_port_awready),
		.S_AXI_WDATA(axi_port_wdata),
		.S_AXI_WSTRB(axi_port_wstrb),
		.S_AXI_WVALID(axi_port_wvalid),
		.S_AXI_WREADY(axi_port_wready),
		.S_AXI_BRESP(axi_port_bresp),
		.S_AXI_BVALID(axi_port_bvalid),
		.S_AXI_BREADY(axi_port_bready),
		.S_AXI_ARADDR(axi_port_araddr[C_S00_AXI_ADDR_WIDTH-1 : 0]),
		// .S_AXI_ARPROT(axi_port_arprot),
		.S_AXI_ARVALID(axi_port_arvalid),
		.S_AXI_ARREADY(axi_port_arready),
		.S_AXI_RDATA(axi_port_rdata),
		.S_AXI_RRESP(axi_port_rresp),
		.S_AXI_RVALID(axi_port_rvalid),
		.S_AXI_RREADY(axi_port_rready),
		.can_tx(can_tx),
		.can_rx(can_rx),
		.can_intr(can_intr)
	);
	assign axi_port_rlast = axi_port_rvalid;

	// Add user logic here

	// User logic ends

	endmodule
