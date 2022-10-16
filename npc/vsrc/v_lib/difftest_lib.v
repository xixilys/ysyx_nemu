import "DPI-C" function void cpu_commited_func();
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void set_pc_ptr(input logic [63:0] a);
import "DPI-C" function void set_debug_pc_ptr(input logic [63:0] a);
import "DPI-C" function void cpu_ebreak();
import "DPI-C" function void mem_trace_func(input logic [0:0]mem_write_state,input logic [63:0] addr,input logic [63:0] data,input logic [63:0] pc,input logic [2:0]size);

//二维数组打包为一维数组
`define PACK_ARRAY(PK_WIDTH,PK_LEN,PK_SRC,PK_DEST) \
                generate \
                genvar pk_idx; \
                for (pk_idx=0; pk_idx<(PK_LEN); pk_idx=pk_idx+1) \
                begin \
                        assign PK_DEST[((PK_WIDTH)*pk_idx+((PK_WIDTH)-1)):((PK_WIDTH)*pk_idx)] = PK_SRC[pk_idx][((PK_WIDTH)-1):0]; \
                end \
                endgenerate

//一维数组展开为二维数组
`define UNPACK_ARRAY(PK_WIDTH,PK_LEN,PK_DEST,PK_SRC) \
                generate \
                genvar unpk_idx; \
                for (unpk_idx=0; unpk_idx<(PK_LEN); unpk_idx=unpk_idx+1) \
                begin \
                        assign PK_DEST[unpk_idx][((PK_WIDTH)-1):0] = PK_SRC[((PK_WIDTH)*unpk_idx+(PK_WIDTH-1)):((PK_WIDTH)*unpk_idx)]; \
                end \
                endgenerate
//抄自csdn
`define data_length 64

module difftest_commit (
    input reset,
    input clock,
    input [`data_length * 32 - 1:0]gpr_wire,
    input [`data_length - 1:0]pc,
    input [`data_length - 1:0]debug_pc,
    input inst_commit,
    output reg data_ok_ok,
    input cpu_ebreak_sign
);
    wire [`data_length - 1 :0] gpr [31:0];
    wire [`data_length - 1 :0] pc_debug;
    wire [`data_length - 1:0] commit_pc;
    assign pc_debug = debug_pc;
    
    `UNPACK_ARRAY(`data_length,32,gpr,gpr_wire)
    initial begin 
      set_gpr_ptr(gpr);

    end
  always @(posedge clock ) begin
    if(reset == 1'b0 && inst_commit == 1'b1) begin
        set_pc_ptr(pc);
        set_debug_pc_ptr(debug_pc);
        cpu_commited_func();
    end
    if(cpu_ebreak_sign == 1'b1) begin
      cpu_ebreak();
    end
    assign data_ok_ok = 1'b1;

  end



endmodule //difftest_commit_module

module  mem_trace_module (
    input reset,
    input clock,
    input [`data_length  - 1:0]addr,
    input [`data_length - 1:0]data,
    input [`data_length - 1 : 0]pc,
    input mem_req,
    input [2:0]mem_size,
    input mem_write_read
);
  
  always @(posedge clock ) begin
    if(reset == 1'b0 && mem_req == 1'b1) begin
        mem_trace_func(mem_write_read,addr,data,pc,mem_size);
    end
  end



endmodule //difftest_commit_module

