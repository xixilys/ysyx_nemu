/* verilator lint_off WIDTH */
  module axi_can_top32
     (ap_clk_0,
      ap_rst_n_0,
      can_rx_0,
      can_tx_0,
      int_wire_0,
      s_axi_control_0_araddr,
      s_axi_control_0_arready,
      s_axi_control_0_arvalid,
      s_axi_control_0_awaddr,
      s_axi_control_0_awready,
      s_axi_control_0_awvalid,
      s_axi_control_0_bready,
      s_axi_control_0_bresp,
      s_axi_control_0_bvalid,
      s_axi_control_0_rdata,
      s_axi_control_0_rready,
      s_axi_control_0_rresp,
      s_axi_control_0_rvalid,
      s_axi_control_0_wdata,
      s_axi_control_0_wready,
      s_axi_control_0_wstrb,
      s_axi_control_0_wvalid);
    input ap_clk_0;
    input ap_rst_n_0;
    input can_rx_0;
    output can_tx_0;
    output [0:0]int_wire_0;
    input [6:0]s_axi_control_0_araddr;
    output s_axi_control_0_arready;
    input s_axi_control_0_arvalid;
    input [6:0]s_axi_control_0_awaddr;
    output s_axi_control_0_awready;
    input s_axi_control_0_awvalid;
    input s_axi_control_0_bready;
    output [1:0]s_axi_control_0_bresp;
    output s_axi_control_0_bvalid;
    output [31:0]s_axi_control_0_rdata;
    input s_axi_control_0_rready;
    output [1:0]s_axi_control_0_rresp;
    output s_axi_control_0_rvalid;
    input [31:0]s_axi_control_0_wdata;
    output s_axi_control_0_wready;
    input [3:0]s_axi_control_0_wstrb;
    input s_axi_control_0_wvalid;
  
    wire ap_clk_0_1;
    wire ap_rst_n_0_1;
    wire [0:0]axi_can_controller_0_int_wire;
    wire [31:0]axi_can_controller_0_tx_data;
    wire [0:0]axi_can_controller_0_tx_valid;
    wire can_rx_0_1;
    wire can_top_0_can_tx;
    wire [7:0]can_top_0_rx_data;
    wire [28:0]can_top_0_rx_id;
    wire can_top_0_rx_ide;
    wire can_top_0_rx_last;
    wire can_top_0_rx_valid;
    wire can_top_0_tx_ready;
    wire [6:0]s_axi_control_0_1_ARADDR;
    wire s_axi_control_0_1_ARREADY;
    wire s_axi_control_0_1_ARVALID;
    wire [6:0]s_axi_control_0_1_AWADDR;
    wire s_axi_control_0_1_AWREADY;
    wire s_axi_control_0_1_AWVALID;
    wire s_axi_control_0_1_BREADY;
    wire [1:0]s_axi_control_0_1_BRESP;
    wire s_axi_control_0_1_BVALID;
    wire [31:0]s_axi_control_0_1_RDATA;
    wire s_axi_control_0_1_RREADY;
    wire [1:0]s_axi_control_0_1_RRESP;
    wire s_axi_control_0_1_RVALID;
    wire [31:0]s_axi_control_0_1_WDATA;
    wire s_axi_control_0_1_WREADY;
    wire [3:0]s_axi_control_0_1_WSTRB;
    wire s_axi_control_0_1_WVALID;
  
    wire int_nouse;
    assign ap_clk_0_1 = ap_clk_0;
    assign ap_rst_n_0_1 = ap_rst_n_0;
    assign can_rx_0_1 = can_rx_0;
    assign can_tx_0 = can_top_0_can_tx;
    assign int_wire_0[0] = axi_can_controller_0_int_wire;
    assign s_axi_control_0_1_ARADDR = s_axi_control_0_araddr[6:0];
    assign s_axi_control_0_1_ARVALID = s_axi_control_0_arvalid;
    assign s_axi_control_0_1_AWADDR = s_axi_control_0_awaddr[6:0];
    assign s_axi_control_0_1_AWVALID = s_axi_control_0_awvalid;
    assign s_axi_control_0_1_BREADY = s_axi_control_0_bready;
    assign s_axi_control_0_1_RREADY = s_axi_control_0_rready;
    assign s_axi_control_0_1_WDATA = s_axi_control_0_wdata[31:0];
    assign s_axi_control_0_1_WSTRB = s_axi_control_0_wstrb[3:0];
    assign s_axi_control_0_1_WVALID = s_axi_control_0_wvalid;
    assign s_axi_control_0_arready = s_axi_control_0_1_ARREADY;
    assign s_axi_control_0_awready = s_axi_control_0_1_AWREADY;
    assign s_axi_control_0_bresp[1:0] = s_axi_control_0_1_BRESP;
    assign s_axi_control_0_bvalid = s_axi_control_0_1_BVALID;
    assign s_axi_control_0_rdata[31:0] = s_axi_control_0_1_RDATA;
    assign s_axi_control_0_rresp[1:0] = s_axi_control_0_1_RRESP;
    assign s_axi_control_0_rvalid = s_axi_control_0_1_RVALID;
    assign s_axi_control_0_wready = s_axi_control_0_1_WREADY;



    parameter [10:0] LOCAL_ID = 11'b1;
    parameter [10:0] RX_ID_SHORT_FILTER =  11'b00000000011 ; // acks the id 00000000011(3)
    parameter [10:0] RX_ID_SHORT_MASK  =  11'b11111111111 ;

     reg [31:0] buffer1;
     reg [31:0] buffer2;
     reg [28:0] rx_id;
     reg [5:0] rlast_cnt;
    axi_can_controller axi_can_controller_0
         (.ap_clk(ap_clk_0_1),
          .ap_rst_n(ap_rst_n_0_1),
          .int_wire(axi_can_controller_0_int_wire),
          .rx_data(buffer2),
          .rx_id(rx_id),
          .rx_ide(can_top_0_rx_ide),
          .rx_last(rlast_cnt != 5'b0),
          .rx_valid(can_top_0_rx_valid),
          .s_axi_control_ARADDR(s_axi_control_0_1_ARADDR),
          .s_axi_control_ARREADY(s_axi_control_0_1_ARREADY),
          .s_axi_control_ARVALID(s_axi_control_0_1_ARVALID),
          .s_axi_control_AWADDR(s_axi_control_0_1_AWADDR),
          .s_axi_control_AWREADY(s_axi_control_0_1_AWREADY),
          .s_axi_control_AWVALID(s_axi_control_0_1_AWVALID),
          .s_axi_control_BREADY(s_axi_control_0_1_BREADY),
          .s_axi_control_BRESP(s_axi_control_0_1_BRESP),
          .s_axi_control_BVALID(s_axi_control_0_1_BVALID),
          .s_axi_control_RDATA(s_axi_control_0_1_RDATA),
          .s_axi_control_RREADY(s_axi_control_0_1_RREADY),
          .s_axi_control_RRESP(s_axi_control_0_1_RRESP),
          .s_axi_control_RVALID(s_axi_control_0_1_RVALID),
          .s_axi_control_WDATA(s_axi_control_0_1_WDATA),
          .s_axi_control_WREADY(s_axi_control_0_1_WREADY),
          .s_axi_control_WSTRB(s_axi_control_0_1_WSTRB),
          .s_axi_control_WVALID(s_axi_control_0_1_WVALID),
          .tx_data(axi_can_controller_0_tx_data),
          .tx_ready(can_top_0_tx_ready),
          .tx_valid(axi_can_controller_0_tx_valid),
          .interrupt(int_nouse)
          );
     reg tx_valid_last;
     wire can_tx_valid;
     assign can_tx_valid = tx_valid_last ==1'b0 && axi_can_controller_0_tx_valid ==1'b1;
     always @(posedge ap_clk_0) begin
          tx_valid_last <=axi_can_controller_0_tx_valid;
     end


     
     always @(posedge ap_clk_0) begin
          if(can_top_0_rx_valid)begin
               buffer1[31:0] = {buffer1[23:0],can_top_0_rx_data};
               rx_id <= can_top_0_rx_id;
          end
          else begin
               buffer1 = buffer1;
          end

          if (can_top_0_rx_last)begin
               rlast_cnt <= 6'h5;     
          end
          else begin
               if(rlast_cnt != 6'b0) begin
                    rlast_cnt <= rlast_cnt-1;     
               end
               else begin
                    rlast_cnt <= 6'b0; 
               end
          end
          
     end
     always @(negedge can_top_0_rx_valid) begin
          buffer2 <= buffer1;

     end


    can_top 
    #(
    .LOCAL_ID          ( LOCAL_ID ), // local-id = 00000000010(2)
    .RX_ID_SHORT_FILTER( RX_ID_SHORT_FILTER ), // acks the id 00000000011(3)
    .RX_ID_SHORT_MASK  ( RX_ID_SHORT_MASK ),
    .RX_ID_LONG_FILTER ( 29'h12345678    ),
    .RX_ID_LONG_MASK   ( 29'h1fffffff    ),
    .default_c_PTS     ( 16'd34          ),
    .default_c_PBS1    ( 16'd5           ),
    .default_c_PBS2    ( 16'd10          )
     )can_top_0
         (.can_rx(can_rx_0_1),
          .can_tx(can_top_0_can_tx),
          .clk(ap_clk_0_1),
          .rstn(ap_rst_n_0_1),
          .rx_data(can_top_0_rx_data),
          .rx_id(can_top_0_rx_id),
          .rx_ide(can_top_0_rx_ide),
          .rx_last(can_top_0_rx_last),
          .rx_valid(can_top_0_rx_valid),
          .tx_data(axi_can_controller_0_tx_data),
          .tx_ready(can_top_0_tx_ready),
          .tx_valid(can_tx_valid));
  endmodule
