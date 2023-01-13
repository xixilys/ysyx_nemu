// import "DPI-C" function void get_data(input bit[63:0]   addr,input bit[63:0]   wdata ,int wea,output bit[63:0]rdata,int num);
// import "DPI-C" function int new_mem(int width,int length );//返回一个内存序号


// module  sram_data #(parameter sram_width=8,parameter sram_length = 8) (
//     input reset,
//     input clock,
//     input en,
//     input [sram_length * 8 - 1 : 0]raddr,
//     input [sram_length * 8 - 1 : 0]waddr,
//     input [sram_width * 8 - 1 : 0]wdata,
//     output[sram_width * 8 - 1 : 0]rdata,
//     input [sram_width - 1 : 0]ena
  
// );
//     reg [sram_width * 8 - 1:0]get_data_reg;
//     assign rdata = get_data_reg;
//     wire [sram_width * 8 - 1 :0] rdata_dpi;
//     wire [31:0] mem_num ;
//     initial 
//         mem_num = new_mem(sram_width ,sram_length );

//   always @(posedge clock ) begin
//     if(reset == 1'b0 && en == 1'b1) begin
//         if(ena != 32b'0) begin
//           get_data(waddr,wdata,ena,rdata);
//         end
//         else begin
//           get_data(raddr,wdata,ena,rdata);
//         end
//         get_data_reg <= rdata;
//         // get_data(addr,wdata,ena);
//     end
//   end

// endmodule //difftest_commit_module

