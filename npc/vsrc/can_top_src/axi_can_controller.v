

(* CORE_GENERATION_INFO="axi_can_controller_axi_can_controller,hls_ip_2020_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu11p-flga2577-1-e,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=2.000000,HLS_SYN_LAT=1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=371,HLS_SYN_LUT=607,HLS_VERSION=2020_2}" *)

module axi_can_controller (
        ap_clk,
        ap_rst_n,
        tx_valid,
        tx_data,
        tx_ready,
        rx_valid,
        rx_last,
        rx_data,
        rx_id,
        rx_ide,
        int_wire,
        s_axi_control_AWVALID,
        s_axi_control_AWREADY,
        s_axi_control_AWADDR,
        s_axi_control_WVALID,
        s_axi_control_WREADY,
        s_axi_control_WDATA,
        s_axi_control_WSTRB,
        s_axi_control_ARVALID,
        s_axi_control_ARREADY,
        s_axi_control_ARADDR,
        s_axi_control_RVALID,
        s_axi_control_RREADY,
        s_axi_control_RDATA,
        s_axi_control_RRESP,
        s_axi_control_BVALID,
        s_axi_control_BREADY,
        s_axi_control_BRESP,
        interrupt
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;
parameter    C_S_AXI_CONTROL_DATA_WIDTH = 32;
parameter    C_S_AXI_CONTROL_ADDR_WIDTH = 7;
parameter    C_S_AXI_DATA_WIDTH = 32;

parameter C_S_AXI_CONTROL_WSTRB_WIDTH = (32 / 8);
parameter C_S_AXI_WSTRB_WIDTH = (32 / 8);

input   ap_clk;
input   ap_rst_n;
output  [0:0] tx_valid;
output  [31:0] tx_data;
input  [0:0] tx_ready;
input  [0:0] rx_valid;
input  [0:0] rx_last;
input  [31:0] rx_data;
input  [28:0] rx_id;
input  [0:0] rx_ide;
output  [0:0] int_wire;
input   s_axi_control_AWVALID;
output   s_axi_control_AWREADY;
input  [C_S_AXI_CONTROL_ADDR_WIDTH - 1:0] s_axi_control_AWADDR;
input   s_axi_control_WVALID;
output   s_axi_control_WREADY;
input  [C_S_AXI_CONTROL_DATA_WIDTH - 1:0] s_axi_control_WDATA;
input  [C_S_AXI_CONTROL_WSTRB_WIDTH - 1:0] s_axi_control_WSTRB;
input   s_axi_control_ARVALID;
output   s_axi_control_ARREADY;
input  [C_S_AXI_CONTROL_ADDR_WIDTH - 1:0] s_axi_control_ARADDR;
output   s_axi_control_RVALID;
input   s_axi_control_RREADY;
output  [C_S_AXI_CONTROL_DATA_WIDTH - 1:0] s_axi_control_RDATA;
output  [1:0] s_axi_control_RRESP;
output   s_axi_control_BVALID;
input   s_axi_control_BREADY;
output  [1:0] s_axi_control_BRESP;
output   interrupt;

reg[0:0] int_wire;

 reg    ap_rst_n_inv;
wire    ap_start;
reg    ap_done;
reg    ap_idle;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    ap_ready;
wire   [31:0] axi_in_reg1;
wire   [31:0] axi_in_reg2;
wire   [31:0] axi_out_reg1_i;
reg   [31:0] axi_out_reg1_o;
reg    axi_out_reg1_o_ap_vld;
wire   [31:0] axi_out_reg2_i;
wire   [31:0] axi_out_reg2_o;
reg    axi_out_reg2_o_ap_vld;
wire   [63:0] can_rx_data_buffer;
reg    can_rx_data_buffer_ap_vld;
reg   [0:0] full_state_V;
wire   [0:0] or_ln60_fu_227_p2;
reg   [0:0] or_ln60_reg_340;
reg   [31:0] axi_in_reg2_read_reg_344;
reg   [0:0] ap_phi_mux_full_state_V_loc_0_phi_fu_207_p6;
reg   [0:0] full_state_V_loc_0_reg_203;
wire   [0:0] tmp_2_fu_251_p3;
wire    ap_CS_fsm_state2;
wire   [31:0] p_Result_s_fu_233_p5;
wire   [31:0] p_Result_1_fu_282_p5;
wire   [0:0] xor_ln60_fu_221_p2;
wire   [2:0] tmp_fu_275_p4;
wire   [1:0] tmp_1_fu_295_p3;
reg   [1:0] ap_NS_fsm;
wire    ap_ce_reg;

// power-on initialization
initial begin
 ap_CS_fsm = 2'd1;
 full_state_V = 1'd0;
end

axi_can_controller_control_s_axi #(
    .C_S_AXI_ADDR_WIDTH( C_S_AXI_CONTROL_ADDR_WIDTH ),
    .C_S_AXI_DATA_WIDTH( C_S_AXI_CONTROL_DATA_WIDTH ))
control_s_axi_U(
    .AWVALID(s_axi_control_AWVALID),
    .AWREADY(s_axi_control_AWREADY),
    .AWADDR(s_axi_control_AWADDR),
    .WVALID(s_axi_control_WVALID),
    .WREADY(s_axi_control_WREADY),
    .WDATA(s_axi_control_WDATA),
    .WSTRB(s_axi_control_WSTRB),
    .ARVALID(s_axi_control_ARVALID),
    .ARREADY(s_axi_control_ARREADY),
    .ARADDR(s_axi_control_ARADDR),
    .RVALID(s_axi_control_RVALID),
    .RREADY(s_axi_control_RREADY),
    .RDATA(s_axi_control_RDATA),
    .RRESP(s_axi_control_RRESP),
    .BVALID(s_axi_control_BVALID),
    .BREADY(s_axi_control_BREADY),
    .BRESP(s_axi_control_BRESP),
    .ACLK(ap_clk),
    .ARESET(ap_rst_n_inv),
    .ACLK_EN(1'b1),
    .axi_in_reg1(axi_in_reg1),
    .axi_in_reg2(axi_in_reg2),
    .axi_out_reg1_o(axi_out_reg1_o),
    .axi_out_reg1_o_ap_vld(axi_out_reg1_o_ap_vld),
    .axi_out_reg1_i(axi_out_reg1_i),
    .axi_out_reg2_o(axi_out_reg2_o),
    .axi_out_reg2_o_ap_vld(axi_out_reg2_o_ap_vld),
    .axi_out_reg2_i(axi_out_reg2_i),
    .can_rx_data_buffer(can_rx_data_buffer),
    .can_rx_data_buffer_ap_vld(can_rx_data_buffer_ap_vld),
    .ap_start(ap_start),
    .interrupt(interrupt),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_idle(ap_idle)
);

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (or_ln60_fu_227_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (tmp_2_fu_251_p3 == 1'd1))) begin
        full_state_V <= 1'd0;
    end else if (((or_ln60_reg_340 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        full_state_V <= 1'd1;
    end
end

always @ (posedge ap_clk) begin
    if (((or_ln60_reg_340 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        full_state_V_loc_0_reg_203 <= 1'd1;
    end else if (((ap_start == 1'b1) & (or_ln60_fu_227_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (tmp_2_fu_251_p3 == 1'd1))) begin
        full_state_V_loc_0_reg_203 <= 1'd0;
    end else if (((ap_start == 1'b1) & (or_ln60_fu_227_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (tmp_2_fu_251_p3 == 1'd0))) begin
        full_state_V_loc_0_reg_203 <= full_state_V;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        axi_in_reg2_read_reg_344 <= axi_in_reg2;
        or_ln60_reg_340 <= or_ln60_fu_227_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((or_ln60_reg_340 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_phi_mux_full_state_V_loc_0_phi_fu_207_p6 = 1'd1;
    end else begin
        ap_phi_mux_full_state_V_loc_0_phi_fu_207_p6 = full_state_V_loc_0_reg_203;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        axi_out_reg1_o = p_Result_1_fu_282_p5;
    end else if (((ap_start == 1'b1) & (or_ln60_fu_227_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        axi_out_reg1_o = p_Result_s_fu_233_p5;
    end else begin
        axi_out_reg1_o = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((ap_start == 1'b1) & (or_ln60_fu_227_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1)))) begin
        axi_out_reg1_o_ap_vld = 1'b1;
    end else begin
        axi_out_reg1_o_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        axi_out_reg2_o_ap_vld = 1'b1;
    end else begin
        axi_out_reg2_o_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (or_ln60_fu_227_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        can_rx_data_buffer_ap_vld = 1'b1;
    end else begin
        can_rx_data_buffer_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((or_ln60_reg_340 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        int_wire = 1'd1;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        int_wire = 1'd0;
    end else begin
        int_wire = 1'd0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 2'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign axi_out_reg2_o = {{axi_out_reg2_i[31:2]}, {tmp_1_fu_295_p3}};

assign can_rx_data_buffer[31:0] = rx_data;

assign or_ln60_fu_227_p2 = (xor_ln60_fu_221_p2 | full_state_V);

assign p_Result_1_fu_282_p5 = {{axi_out_reg1_i[31:3]}, {tmp_fu_275_p4}};

assign p_Result_s_fu_233_p5 = {{rx_id}, {axi_out_reg1_i[2:0]}};

assign tmp_1_fu_295_p3 = {{ap_phi_mux_full_state_V_loc_0_phi_fu_207_p6}, {tx_ready}};

assign tmp_2_fu_251_p3 = axi_in_reg2[32'd1];

assign tmp_fu_275_p4 = {{{rx_ide}, {rx_last}}, {rx_valid}};

assign tx_data = axi_in_reg1;

assign tx_valid = axi_in_reg2_read_reg_344[0:0];

assign xor_ln60_fu_221_p2 = (rx_last ^ 1'd1);

endmodule //axi_can_controller
