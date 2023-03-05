
  module axi_can_top
     (clk,
      rst_n,
      can_rx,
      can_tx,
      int_wire,
      
      axi_port_arid,
      axi_port_araddr,
      axi_port_arlen,
      axi_port_arsize,
      axi_port_arburst,
      axi_port_arlock,
      axi_port_arcache,
      axi_port_arprot,
      axi_port_arvalid,
      axi_port_arready,
      axi_port_rid,
      axi_port_rdata,
      axi_port_rresp,
      axi_port_rlast,
      axi_port_rvalid,
      axi_port_rready,
      axi_port_awid,
      axi_port_awaddr,
      axi_port_awlen,
      axi_port_awsize,
      axi_port_awburst,
      axi_port_awlock,
      axi_port_awcache,
      axi_port_awprot,
      axi_port_awvalid,
      axi_port_awready,
      axi_port_wid,
      axi_port_wdata,
      axi_port_wstrb,
      axi_port_wlast,
      axi_port_wvalid,
      axi_port_wready,
      axi_port_bid,
      axi_port_bresp,
      axi_port_bvalid,
      axi_port_bready
  
      );
  
  input clk;
  input rst_n;
  input can_rx;
  output can_tx;
  output [0:0]int_wire;
  
  input [4-1:0] axi_port_arid;
  input [64-1:0] axi_port_araddr;
  input [4-1:0] axi_port_arlen;
  input [3-1:0] axi_port_arsize;
  input [2-1:0] axi_port_arburst;
  input [2-1:0] axi_port_arlock;
  input [4-1:0] axi_port_arcache;
  input [3-1:0] axi_port_arprot;
  input axi_port_arvalid;
  output axi_port_arready;
  output [4-1:0] axi_port_rid;
  output [64-1:0] axi_port_rdata;
  output [2-1:0] axi_port_rresp;
  output axi_port_rlast;
  output axi_port_rvalid;
  input axi_port_rready;
  input [4-1:0] axi_port_awid;
  input [64-1:0] axi_port_awaddr;
  input [4-1:0] axi_port_awlen;
  input [3-1:0] axi_port_awsize;
  input [2-1:0] axi_port_awburst;
  input [2-1:0] axi_port_awlock;
  input [4-1:0] axi_port_awcache;
  input [3-1:0] axi_port_awprot;
  input axi_port_awvalid;
  output axi_port_awready;
  input [4-1:0] axi_port_wid;
  input [64-1:0] axi_port_wdata;
  input [8-1:0] axi_port_wstrb;
  input axi_port_wlast;
  input axi_port_wvalid;
  output axi_port_wready;
  output [4-1:0] axi_port_bid;
  output [2-1:0] axi_port_bresp;
  output axi_port_bvalid;
  input axi_port_bready;
  
  
  
    parameter [63:0] CAN_BASE_ADDR = 64'h21000000;
    parameter [15:0] LOCAL_ID = 16'b1;
    parameter [15:0] RX_ID_SHORT_FILTER =  16'b00000000011 ; // acks the id 00000000011(3)
    parameter [15:0] RX_ID_SHORT_MASK  =  16'b11111111111 ;

  assign axi_port_rid = 0;
  //sb代码只支持一个一组，那就直接rlast和rvalid一起置高即可
  assign axi_port_rlast = axi_port_rvalid;
  assign axi_port_bid = 0;
  
  assign axi_port_rdata[63:32] = 0;
  wire [63:0]araddr;
  wire [63:0]awaddr;
  
  wire [3:0] wstrb;
  
  assign araddr = (axi_port_araddr - CAN_BASE_ADDR);
  assign awaddr = (axi_port_awaddr - CAN_BASE_ADDR);
  
  
  // assign axi_port_wstrb = {1'b0,wstrb[3],1'b0,wstrb[2],1'b0,wstrb[1],1'b0,wstrb[0]};
  
  assign wstrb = {axi_port_wstrb[6],axi_port_wstrb[4],axi_port_wstrb[2],axi_port_wstrb[0]};
  




  axi_can_top32 
  #(
    .LOCAL_ID          ( LOCAL_ID[10:0] ), // local-id = 00000000010(2)
    .RX_ID_SHORT_FILTER( RX_ID_SHORT_FILTER[10:0] ), // acks the id 00000000011(3)
    .RX_ID_SHORT_MASK  ( RX_ID_SHORT_MASK[10:0] )
  )
  axi_can_top32_0
  (
      .ap_clk_0(clk),
      .ap_rst_n_0(rst_n),
      .can_rx_0(can_rx),
      .can_tx_0(can_tx),
      .int_wire_0(int_wire),
      .s_axi_control_0_araddr(araddr[7:1]),
      .s_axi_control_0_arready(axi_port_arready),
      .s_axi_control_0_arvalid(axi_port_arvalid),
      .s_axi_control_0_awaddr(awaddr[7:1]),
      .s_axi_control_0_awready(axi_port_awready),
      .s_axi_control_0_awvalid(axi_port_awvalid),
      .s_axi_control_0_bready(axi_port_bready),
      .s_axi_control_0_bresp(axi_port_bresp),
      .s_axi_control_0_bvalid(axi_port_bvalid),
      .s_axi_control_0_rdata(axi_port_rdata[31:0]),
      .s_axi_control_0_rready(axi_port_rready),
      .s_axi_control_0_rresp(axi_port_rresp),
      .s_axi_control_0_rvalid(axi_port_rvalid),
      .s_axi_control_0_wdata(axi_port_wdata[31:0]),
      .s_axi_control_0_wready(axi_port_wready),
      .s_axi_control_0_wstrb(wstrb),
      .s_axi_control_0_wvalid(axi_port_wvalid)
  );
  endmodule