module IFU(
  input  [31:0] io_mem_instrution,
  output [31:0] io_ifu_instruction
);
  assign io_ifu_instruction = io_mem_instrution; // @[IFU.scala 15:33 17:27]
endmodule
module IDU(
  input  [31:0] io_idu_instruction,
  output [31:0] io_idu_src1,
  output [31:0] io_idu_src2,
  output [31:0] io_idu_dest,
  output [31:0] io_idu_inscode,
  output [3:0]  io_idu_instype
);
  wire  type_r_test = io_idu_instruction[6:0] == 7'h33 | io_idu_instruction[6:0] == 7'h3b; // @[IDU.scala 25:56]
  wire  type_I_test = io_idu_instruction[6:0] == 7'h67 | io_idu_instruction[6:0] == 7'h13; // @[IDU.scala 26:57]
  wire  type_S_test = io_idu_instruction[6:0] == 7'h3 | io_idu_instruction[6:0] == 7'h23; // @[IDU.scala 27:57]
  wire  type_SB_test = io_idu_instruction[6:0] == 7'h63; // @[IDU.scala 28:47]
  wire  type_U_test = io_idu_instruction[6:0] == 7'h37 | io_idu_instruction[6:0] == 7'h17; // @[IDU.scala 29:57]
  wire  type_UJ_test = io_idu_instruction[6:0] == 7'h6f; // @[IDU.scala 30:47]
  wire  type_Ebreak_test = io_idu_instruction == 32'h100073; // @[IDU.scala 31:47]
  wire [3:0] _instype_T = type_Ebreak_test ? 4'h6 : 4'hf; // @[Mux.scala 101:16]
  wire [3:0] _instype_T_1 = type_UJ_test ? 4'h5 : _instype_T; // @[Mux.scala 101:16]
  wire [3:0] _instype_T_2 = type_U_test ? 4'h4 : _instype_T_1; // @[Mux.scala 101:16]
  wire [3:0] _instype_T_3 = type_SB_test ? 4'h3 : _instype_T_2; // @[Mux.scala 101:16]
  wire [3:0] _instype_T_4 = type_S_test ? 4'h2 : _instype_T_3; // @[Mux.scala 101:16]
  wire [3:0] _instype_T_5 = type_I_test ? 4'h1 : _instype_T_4; // @[Mux.scala 101:16]
  wire [3:0] instype = type_r_test ? 4'h0 : _instype_T_5; // @[Mux.scala 101:16]
  wire [4:0] type_R_I_S_SB_src1 = io_idu_instruction[19:15]; // @[IDU.scala 44:47]
  wire [4:0] type_R_S_SB_src2 = io_idu_instruction[24:20]; // @[IDU.scala 45:46]
  wire [4:0] type_R_I_U_UJ_dest = io_idu_instruction[11:7]; // @[IDU.scala 46:48]
  wire [63:0] _type_I_src2_T_4 = {52'hfffffffffffff,io_idu_instruction[31:20]}; // @[Cat.scala 31:58]
  wire [63:0] _type_I_src2_T_5 = {52'h0,io_idu_instruction[31:20]}; // @[Cat.scala 31:58]
  wire [63:0] type_I_src2 = io_idu_instruction[31] ? _type_I_src2_T_4 : _type_I_src2_T_5; // @[IDU.scala 19:11]
  wire [11:0] type_S_dest = {io_idu_instruction[31:25],type_R_I_U_UJ_dest}; // @[Cat.scala 31:58]
  wire [12:0] type_SB_dest = {io_idu_instruction[31],io_idu_instruction[7],io_idu_instruction[30:25],io_idu_instruction[
    11:8],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] type_U_src1 = {io_idu_instruction[31:12],12'h0}; // @[Cat.scala 31:58]
  wire [19:0] type_UJ_src1 = {io_idu_instruction[31],io_idu_instruction[19:12],io_idu_instruction[20],io_idu_instruction
    [30:21]}; // @[Cat.scala 31:58]
  wire  _io_idu_src1_T = instype == 4'h0; // @[IDU.scala 59:30]
  wire  _io_idu_src1_T_1 = instype == 4'h1; // @[IDU.scala 60:30]
  wire  _io_idu_src1_T_2 = instype == 4'h2; // @[IDU.scala 61:30]
  wire  _io_idu_src1_T_3 = instype == 4'h3; // @[IDU.scala 62:30]
  wire  _io_idu_src1_T_4 = instype == 4'h4; // @[IDU.scala 63:30]
  wire  _io_idu_src1_T_5 = instype == 4'h5; // @[IDU.scala 64:30]
  wire [31:0] _io_idu_src1_T_6 = _io_idu_src1_T_5 ? {{12'd0}, type_UJ_src1} : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_src1_T_7 = _io_idu_src1_T_4 ? type_U_src1 : _io_idu_src1_T_6; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_src1_T_8 = _io_idu_src1_T_3 ? {{27'd0}, type_R_I_S_SB_src1} : _io_idu_src1_T_7; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_src1_T_9 = _io_idu_src1_T_2 ? {{27'd0}, type_R_I_S_SB_src1} : _io_idu_src1_T_8; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_src1_T_10 = _io_idu_src1_T_1 ? {{27'd0}, type_R_I_S_SB_src1} : _io_idu_src1_T_9; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_src2_T_8 = _io_idu_src1_T_3 ? {{27'd0}, type_R_S_SB_src2} : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_src2_T_9 = _io_idu_src1_T_2 ? {{27'd0}, type_R_S_SB_src2} : _io_idu_src2_T_8; // @[Mux.scala 101:16]
  wire [63:0] _io_idu_src2_T_10 = _io_idu_src1_T_1 ? type_I_src2 : {{32'd0}, _io_idu_src2_T_9}; // @[Mux.scala 101:16]
  wire [63:0] _io_idu_src2_T_11 = _io_idu_src1_T ? {{59'd0}, type_R_S_SB_src2} : _io_idu_src2_T_10; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_dest_T_6 = _io_idu_src1_T_5 ? {{27'd0}, type_R_I_U_UJ_dest} : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_dest_T_7 = _io_idu_src1_T_4 ? {{27'd0}, type_R_I_U_UJ_dest} : _io_idu_dest_T_6; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_dest_T_8 = _io_idu_src1_T_3 ? {{19'd0}, type_SB_dest} : _io_idu_dest_T_7; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_dest_T_9 = _io_idu_src1_T_2 ? {{20'd0}, type_S_dest} : _io_idu_dest_T_8; // @[Mux.scala 101:16]
  wire [31:0] _io_idu_dest_T_10 = _io_idu_src1_T_1 ? {{27'd0}, type_R_I_U_UJ_dest} : _io_idu_dest_T_9; // @[Mux.scala 101:16]
  wire [16:0] _io_idu_inscode_T_3 = {io_idu_instruction[31:25],io_idu_instruction[14:12],io_idu_instruction[6:0]}; // @[Cat.scala 31:58]
  assign io_idu_src1 = _io_idu_src1_T ? {{27'd0}, type_R_I_S_SB_src1} : _io_idu_src1_T_10; // @[Mux.scala 101:16]
  assign io_idu_src2 = _io_idu_src2_T_11[31:0]; // @[IDU.scala 66:17]
  assign io_idu_dest = _io_idu_src1_T ? {{27'd0}, type_R_I_U_UJ_dest} : _io_idu_dest_T_10; // @[Mux.scala 101:16]
  assign io_idu_inscode = {{15'd0}, _io_idu_inscode_T_3}; // @[IDU.scala 82:20]
  assign io_idu_instype = type_r_test ? 4'h0 : _instype_T_5; // @[Mux.scala 101:16]
endmodule
module EXU(
  input         clock,
  input  [31:0] io_exu_src1,
  input  [31:0] io_exu_src2,
  input  [31:0] io_exu_dest,
  input  [31:0] io_exu_inscode,
  input  [31:0] io_exu_instype,
  output [63:0] io_exu_answer
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] Riscv_Reg_0; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_1; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_2; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_3; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_4; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_5; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_6; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_7; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_8; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_9; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_10; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_11; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_12; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_13; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_14; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_15; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_16; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_17; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_18; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_19; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_20; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_21; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_22; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_23; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_24; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_25; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_26; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_27; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_28; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_29; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_30; // @[EXU.scala 43:25]
  reg [63:0] Riscv_Reg_31; // @[EXU.scala 43:25]
  wire  _type_I_answer_T = io_exu_instype == 32'h1; // @[EXU.scala 49:42]
  wire  _type_I_answer_T_2 = io_exu_inscode[9:0] == 10'h13; // @[EXU.scala 50:30]
  wire [63:0] _GEN_1 = 5'h1 == io_exu_src1[4:0] ? Riscv_Reg_1 : Riscv_Reg_0; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_2 = 5'h2 == io_exu_src1[4:0] ? Riscv_Reg_2 : _GEN_1; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_3 = 5'h3 == io_exu_src1[4:0] ? Riscv_Reg_3 : _GEN_2; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_4 = 5'h4 == io_exu_src1[4:0] ? Riscv_Reg_4 : _GEN_3; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_5 = 5'h5 == io_exu_src1[4:0] ? Riscv_Reg_5 : _GEN_4; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_6 = 5'h6 == io_exu_src1[4:0] ? Riscv_Reg_6 : _GEN_5; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_7 = 5'h7 == io_exu_src1[4:0] ? Riscv_Reg_7 : _GEN_6; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_8 = 5'h8 == io_exu_src1[4:0] ? Riscv_Reg_8 : _GEN_7; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_9 = 5'h9 == io_exu_src1[4:0] ? Riscv_Reg_9 : _GEN_8; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_10 = 5'ha == io_exu_src1[4:0] ? Riscv_Reg_10 : _GEN_9; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_11 = 5'hb == io_exu_src1[4:0] ? Riscv_Reg_11 : _GEN_10; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_12 = 5'hc == io_exu_src1[4:0] ? Riscv_Reg_12 : _GEN_11; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_13 = 5'hd == io_exu_src1[4:0] ? Riscv_Reg_13 : _GEN_12; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_14 = 5'he == io_exu_src1[4:0] ? Riscv_Reg_14 : _GEN_13; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_15 = 5'hf == io_exu_src1[4:0] ? Riscv_Reg_15 : _GEN_14; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_16 = 5'h10 == io_exu_src1[4:0] ? Riscv_Reg_16 : _GEN_15; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_17 = 5'h11 == io_exu_src1[4:0] ? Riscv_Reg_17 : _GEN_16; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_18 = 5'h12 == io_exu_src1[4:0] ? Riscv_Reg_18 : _GEN_17; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_19 = 5'h13 == io_exu_src1[4:0] ? Riscv_Reg_19 : _GEN_18; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_20 = 5'h14 == io_exu_src1[4:0] ? Riscv_Reg_20 : _GEN_19; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_21 = 5'h15 == io_exu_src1[4:0] ? Riscv_Reg_21 : _GEN_20; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_22 = 5'h16 == io_exu_src1[4:0] ? Riscv_Reg_22 : _GEN_21; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_23 = 5'h17 == io_exu_src1[4:0] ? Riscv_Reg_23 : _GEN_22; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_24 = 5'h18 == io_exu_src1[4:0] ? Riscv_Reg_24 : _GEN_23; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_25 = 5'h19 == io_exu_src1[4:0] ? Riscv_Reg_25 : _GEN_24; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_26 = 5'h1a == io_exu_src1[4:0] ? Riscv_Reg_26 : _GEN_25; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_27 = 5'h1b == io_exu_src1[4:0] ? Riscv_Reg_27 : _GEN_26; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_28 = 5'h1c == io_exu_src1[4:0] ? Riscv_Reg_28 : _GEN_27; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_29 = 5'h1d == io_exu_src1[4:0] ? Riscv_Reg_29 : _GEN_28; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_30 = 5'h1e == io_exu_src1[4:0] ? Riscv_Reg_30 : _GEN_29; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_31 = 5'h1f == io_exu_src1[4:0] ? Riscv_Reg_31 : _GEN_30; // @[EXU.scala 50:{78,78}]
  wire [63:0] _GEN_224 = {{32'd0}, io_exu_src2}; // @[EXU.scala 50:78]
  wire [63:0] _type_I_answer_T_5 = _GEN_31 + _GEN_224; // @[EXU.scala 50:78]
  wire  _type_I_answer_T_7 = io_exu_inscode[9:0] == 10'h113; // @[EXU.scala 51:30]
  wire [63:0] _type_I_answer_T_9 = 5'h1f == io_exu_src1[4:0] ? Riscv_Reg_31 : _GEN_30; // @[EXU.scala 51:82]
  wire [31:0] _type_I_answer_T_10 = io_exu_src2; // @[EXU.scala 51:103]
  wire [63:0] _GEN_225 = {{32{_type_I_answer_T_10[31]}},_type_I_answer_T_10}; // @[EXU.scala 51:89]
  wire  _type_I_answer_T_11 = $signed(_type_I_answer_T_9) < $signed(_GEN_225); // @[EXU.scala 51:89]
  wire  _type_I_answer_T_14 = io_exu_inscode[9:0] == 10'h193; // @[EXU.scala 52:30]
  wire  _type_I_answer_T_16 = _GEN_31 < _GEN_224; // @[EXU.scala 52:82]
  wire [63:0] _type_I_answer_T_18 = _type_I_answer_T_14 ? {{63'd0}, _type_I_answer_T_16} : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _type_I_answer_T_19 = _type_I_answer_T_7 ? {{63'd0}, _type_I_answer_T_11} : _type_I_answer_T_18; // @[Mux.scala 101:16]
  wire [63:0] _GEN_97 = 5'h1 == io_exu_dest[4:0] ? Riscv_Reg_1 : Riscv_Reg_0; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_98 = 5'h2 == io_exu_dest[4:0] ? Riscv_Reg_2 : _GEN_97; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_99 = 5'h3 == io_exu_dest[4:0] ? Riscv_Reg_3 : _GEN_98; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_100 = 5'h4 == io_exu_dest[4:0] ? Riscv_Reg_4 : _GEN_99; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_101 = 5'h5 == io_exu_dest[4:0] ? Riscv_Reg_5 : _GEN_100; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_102 = 5'h6 == io_exu_dest[4:0] ? Riscv_Reg_6 : _GEN_101; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_103 = 5'h7 == io_exu_dest[4:0] ? Riscv_Reg_7 : _GEN_102; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_104 = 5'h8 == io_exu_dest[4:0] ? Riscv_Reg_8 : _GEN_103; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_105 = 5'h9 == io_exu_dest[4:0] ? Riscv_Reg_9 : _GEN_104; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_106 = 5'ha == io_exu_dest[4:0] ? Riscv_Reg_10 : _GEN_105; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_107 = 5'hb == io_exu_dest[4:0] ? Riscv_Reg_11 : _GEN_106; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_108 = 5'hc == io_exu_dest[4:0] ? Riscv_Reg_12 : _GEN_107; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_109 = 5'hd == io_exu_dest[4:0] ? Riscv_Reg_13 : _GEN_108; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_110 = 5'he == io_exu_dest[4:0] ? Riscv_Reg_14 : _GEN_109; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_111 = 5'hf == io_exu_dest[4:0] ? Riscv_Reg_15 : _GEN_110; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_112 = 5'h10 == io_exu_dest[4:0] ? Riscv_Reg_16 : _GEN_111; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_113 = 5'h11 == io_exu_dest[4:0] ? Riscv_Reg_17 : _GEN_112; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_114 = 5'h12 == io_exu_dest[4:0] ? Riscv_Reg_18 : _GEN_113; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_115 = 5'h13 == io_exu_dest[4:0] ? Riscv_Reg_19 : _GEN_114; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_116 = 5'h14 == io_exu_dest[4:0] ? Riscv_Reg_20 : _GEN_115; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_117 = 5'h15 == io_exu_dest[4:0] ? Riscv_Reg_21 : _GEN_116; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_118 = 5'h16 == io_exu_dest[4:0] ? Riscv_Reg_22 : _GEN_117; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_119 = 5'h17 == io_exu_dest[4:0] ? Riscv_Reg_23 : _GEN_118; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_120 = 5'h18 == io_exu_dest[4:0] ? Riscv_Reg_24 : _GEN_119; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_121 = 5'h19 == io_exu_dest[4:0] ? Riscv_Reg_25 : _GEN_120; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_122 = 5'h1a == io_exu_dest[4:0] ? Riscv_Reg_26 : _GEN_121; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_123 = 5'h1b == io_exu_dest[4:0] ? Riscv_Reg_27 : _GEN_122; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_124 = 5'h1c == io_exu_dest[4:0] ? Riscv_Reg_28 : _GEN_123; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_125 = 5'h1d == io_exu_dest[4:0] ? Riscv_Reg_29 : _GEN_124; // @[Mux.scala 101:{16,16}]
  wire [63:0] _GEN_126 = 5'h1e == io_exu_dest[4:0] ? Riscv_Reg_30 : _GEN_125; // @[Mux.scala 101:{16,16}]
  assign io_exu_answer = 5'h1f == io_exu_dest[4:0] ? Riscv_Reg_31 : _GEN_126; // @[EXU.scala 75:{23,23}]
  always @(posedge clock) begin
    if (5'h0 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_0 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_0 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_0 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_0 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_0 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_0 <= _GEN_125;
      end
    end else begin
      Riscv_Reg_0 <= 64'h0; // @[EXU.scala 44:18]
    end
    if (5'h1 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_1 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_1 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_1 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_1 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_1 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_1 <= _GEN_125;
      end
    end
    if (5'h2 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_2 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_2 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_2 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_2 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_2 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_2 <= _GEN_125;
      end
    end
    if (5'h3 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_3 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_3 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_3 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_3 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_3 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_3 <= _GEN_125;
      end
    end
    if (5'h4 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_4 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_4 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_4 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_4 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_4 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_4 <= _GEN_125;
      end
    end
    if (5'h5 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_5 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_5 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_5 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_5 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_5 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_5 <= _GEN_125;
      end
    end
    if (5'h6 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_6 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_6 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_6 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_6 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_6 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_6 <= _GEN_125;
      end
    end
    if (5'h7 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_7 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_7 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_7 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_7 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_7 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_7 <= _GEN_125;
      end
    end
    if (5'h8 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_8 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_8 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_8 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_8 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_8 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_8 <= _GEN_125;
      end
    end
    if (5'h9 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_9 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_9 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_9 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_9 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_9 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_9 <= _GEN_125;
      end
    end
    if (5'ha == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_10 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_10 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_10 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_10 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_10 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_10 <= _GEN_125;
      end
    end
    if (5'hb == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_11 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_11 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_11 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_11 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_11 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_11 <= _GEN_125;
      end
    end
    if (5'hc == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_12 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_12 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_12 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_12 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_12 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_12 <= _GEN_125;
      end
    end
    if (5'hd == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_13 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_13 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_13 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_13 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_13 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_13 <= _GEN_125;
      end
    end
    if (5'he == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_14 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_14 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_14 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_14 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_14 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_14 <= _GEN_125;
      end
    end
    if (5'hf == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_15 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_15 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_15 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_15 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_15 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_15 <= _GEN_125;
      end
    end
    if (5'h10 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_16 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_16 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_16 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_16 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_16 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_16 <= _GEN_125;
      end
    end
    if (5'h11 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_17 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_17 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_17 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_17 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_17 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_17 <= _GEN_125;
      end
    end
    if (5'h12 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_18 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_18 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_18 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_18 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_18 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_18 <= _GEN_125;
      end
    end
    if (5'h13 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_19 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_19 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_19 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_19 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_19 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_19 <= _GEN_125;
      end
    end
    if (5'h14 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_20 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_20 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_20 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_20 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_20 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_20 <= _GEN_125;
      end
    end
    if (5'h15 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_21 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_21 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_21 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_21 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_21 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_21 <= _GEN_125;
      end
    end
    if (5'h16 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_22 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_22 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_22 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_22 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_22 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_22 <= _GEN_125;
      end
    end
    if (5'h17 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_23 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_23 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_23 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_23 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_23 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_23 <= _GEN_125;
      end
    end
    if (5'h18 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_24 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_24 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_24 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_24 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_24 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_24 <= _GEN_125;
      end
    end
    if (5'h19 == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_25 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_25 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_25 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_25 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_25 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_25 <= _GEN_125;
      end
    end
    if (5'h1a == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_26 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_26 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_26 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_26 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_26 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_26 <= _GEN_125;
      end
    end
    if (5'h1b == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_27 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_27 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_27 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_27 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_27 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_27 <= _GEN_125;
      end
    end
    if (5'h1c == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_28 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_28 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_28 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_28 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_28 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_28 <= _GEN_125;
      end
    end
    if (5'h1d == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_29 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_29 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_29 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_29 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_29 <= Riscv_Reg_30; // @[Mux.scala 101:16]
      end else begin
        Riscv_Reg_29 <= _GEN_125;
      end
    end
    if (5'h1e == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_30 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_30 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_30 <= 64'h0;
        end
      end else if (5'h1f == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
        Riscv_Reg_30 <= Riscv_Reg_31; // @[Mux.scala 101:16]
      end else if (!(5'h1e == io_exu_dest[4:0])) begin // @[Mux.scala 101:16]
        Riscv_Reg_30 <= _GEN_125;
      end
    end
    if (5'h1f == io_exu_dest[4:0]) begin // @[EXU.scala 67:28]
      if (_type_I_answer_T) begin // @[Mux.scala 101:16]
        if (io_exu_instype == 32'h1) begin // @[EXU.scala 49:25]
          if (_type_I_answer_T_2) begin // @[Mux.scala 101:16]
            Riscv_Reg_31 <= _type_I_answer_T_5;
          end else begin
            Riscv_Reg_31 <= _type_I_answer_T_19;
          end
        end else begin
          Riscv_Reg_31 <= 64'h0;
        end
      end else if (!(5'h1f == io_exu_dest[4:0])) begin // @[Mux.scala 101:16]
        if (5'h1e == io_exu_dest[4:0]) begin // @[Mux.scala 101:16]
          Riscv_Reg_31 <= Riscv_Reg_30; // @[Mux.scala 101:16]
        end else begin
          Riscv_Reg_31 <= _GEN_125;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  Riscv_Reg_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  Riscv_Reg_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  Riscv_Reg_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  Riscv_Reg_3 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  Riscv_Reg_4 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  Riscv_Reg_5 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  Riscv_Reg_6 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  Riscv_Reg_7 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  Riscv_Reg_8 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  Riscv_Reg_9 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  Riscv_Reg_10 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  Riscv_Reg_11 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  Riscv_Reg_12 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  Riscv_Reg_13 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  Riscv_Reg_14 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  Riscv_Reg_15 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  Riscv_Reg_16 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  Riscv_Reg_17 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  Riscv_Reg_18 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  Riscv_Reg_19 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  Riscv_Reg_20 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  Riscv_Reg_21 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  Riscv_Reg_22 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  Riscv_Reg_23 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  Riscv_Reg_24 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  Riscv_Reg_25 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  Riscv_Reg_26 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  Riscv_Reg_27 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  Riscv_Reg_28 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  Riscv_Reg_29 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  Riscv_Reg_30 = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  Riscv_Reg_31 = _RAND_31[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module riscv_control(
  input         clock,
  input         reset,
  input  [31:0] io_mem_instrution,
  output [63:0] io_pc,
  output [31:0] io_riscv_instruction,
  output [63:0] io_answer,
  output [31:0] io_src1,
  output [31:0] io_src2,
  output [31:0] io_dest,
  output [31:0] io_inscode,
  output [3:0]  io_instype,
  output        io_trap_flag
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] ifu_instance_io_mem_instrution; // @[riscv_control.scala 31:30]
  wire [31:0] ifu_instance_io_ifu_instruction; // @[riscv_control.scala 31:30]
  wire [31:0] idu_instance_io_idu_instruction; // @[riscv_control.scala 53:30]
  wire [31:0] idu_instance_io_idu_src1; // @[riscv_control.scala 53:30]
  wire [31:0] idu_instance_io_idu_src2; // @[riscv_control.scala 53:30]
  wire [31:0] idu_instance_io_idu_dest; // @[riscv_control.scala 53:30]
  wire [31:0] idu_instance_io_idu_inscode; // @[riscv_control.scala 53:30]
  wire [3:0] idu_instance_io_idu_instype; // @[riscv_control.scala 53:30]
  wire  exu_instance_clock; // @[riscv_control.scala 64:30]
  wire [31:0] exu_instance_io_exu_src1; // @[riscv_control.scala 64:30]
  wire [31:0] exu_instance_io_exu_src2; // @[riscv_control.scala 64:30]
  wire [31:0] exu_instance_io_exu_dest; // @[riscv_control.scala 64:30]
  wire [31:0] exu_instance_io_exu_inscode; // @[riscv_control.scala 64:30]
  wire [31:0] exu_instance_io_exu_instype; // @[riscv_control.scala 64:30]
  wire [63:0] exu_instance_io_exu_answer; // @[riscv_control.scala 64:30]
  reg [63:0] pc; // @[riscv_control.scala 29:21]
  wire [3:0] instype = idu_instance_io_idu_instype; // @[riscv_control.scala 45:24 59:13]
  wire [63:0] _pc_T_2 = pc + 64'h4; // @[riscv_control.scala 81:14]
  wire [63:0] riscv_ins = {{32'd0}, ifu_instance_io_ifu_instruction}; // @[riscv_control.scala 27:25 34:24]
  IFU ifu_instance ( // @[riscv_control.scala 31:30]
    .io_mem_instrution(ifu_instance_io_mem_instrution),
    .io_ifu_instruction(ifu_instance_io_ifu_instruction)
  );
  IDU idu_instance ( // @[riscv_control.scala 53:30]
    .io_idu_instruction(idu_instance_io_idu_instruction),
    .io_idu_src1(idu_instance_io_idu_src1),
    .io_idu_src2(idu_instance_io_idu_src2),
    .io_idu_dest(idu_instance_io_idu_dest),
    .io_idu_inscode(idu_instance_io_idu_inscode),
    .io_idu_instype(idu_instance_io_idu_instype)
  );
  EXU exu_instance ( // @[riscv_control.scala 64:30]
    .clock(exu_instance_clock),
    .io_exu_src1(exu_instance_io_exu_src1),
    .io_exu_src2(exu_instance_io_exu_src2),
    .io_exu_dest(exu_instance_io_exu_dest),
    .io_exu_inscode(exu_instance_io_exu_inscode),
    .io_exu_instype(exu_instance_io_exu_instype),
    .io_exu_answer(exu_instance_io_exu_answer)
  );
  assign io_pc = pc; // @[riscv_control.scala 30:11]
  assign io_riscv_instruction = riscv_ins[31:0]; // @[riscv_control.scala 28:26]
  assign io_answer = exu_instance_io_exu_answer; // @[riscv_control.scala 73:15]
  assign io_src1 = idu_instance_io_idu_src1; // @[riscv_control.scala 41:20 55:10]
  assign io_src2 = idu_instance_io_idu_src2; // @[riscv_control.scala 42:20 56:10]
  assign io_dest = idu_instance_io_idu_dest; // @[riscv_control.scala 43:20 57:10]
  assign io_inscode = idu_instance_io_idu_inscode; // @[riscv_control.scala 44:24 58:13]
  assign io_instype = idu_instance_io_idu_instype; // @[riscv_control.scala 45:24 59:13]
  assign io_trap_flag = instype == 4'h6; // @[riscv_control.scala 74:34]
  assign ifu_instance_io_mem_instrution = io_mem_instrution; // @[riscv_control.scala 33:36]
  assign idu_instance_io_idu_instruction = riscv_ins[31:0]; // @[riscv_control.scala 54:38]
  assign exu_instance_clock = clock;
  assign exu_instance_io_exu_src1 = idu_instance_io_idu_src1; // @[riscv_control.scala 41:20 55:10]
  assign exu_instance_io_exu_src2 = idu_instance_io_idu_src2; // @[riscv_control.scala 42:20 56:10]
  assign exu_instance_io_exu_dest = idu_instance_io_idu_dest; // @[riscv_control.scala 43:20 57:10]
  assign exu_instance_io_exu_inscode = idu_instance_io_idu_inscode; // @[riscv_control.scala 44:24 58:13]
  assign exu_instance_io_exu_instype = {{28'd0}, instype}; // @[riscv_control.scala 69:33]
  always @(posedge clock) begin
    if (reset) begin // @[riscv_control.scala 29:21]
      pc <= 64'h80000000; // @[riscv_control.scala 29:21]
    end else begin
      pc <= _pc_T_2; // @[riscv_control.scala 81:8]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  pc = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
