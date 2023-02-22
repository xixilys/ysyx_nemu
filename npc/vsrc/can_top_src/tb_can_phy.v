module tb_can_phy(
    input  wire    can_tx,
    output wire    can_rx,


    inout          can_bus    // can_bus = CAN_H - CAN_L
);

assign can_bus = can_tx ? 1'bz : 1'b1;
assign can_rx = ~can_bus;
// assign can_rx = ~can_tx;

endmodule

// module sb_tb_can_phy_top(
//     input wire can_tx1
// )


module  tb_can_phy_top(
    input  wire    can_tx1,
    output wire    can_rx1,
    input  wire    can_tx2,
    output wire    can_rx2
);
    tri      can_bus;    // can_bus = CAN_H - CAN_L
    pulldown(can_bus);   // pull CAN_H to CAN_L by a resistor

    tb_can_phy can1_phy(can_tx1, can_rx1, can_bus);
    tb_can_phy can2_phy(can_tx2, can_rx2, can_bus);

endmodule