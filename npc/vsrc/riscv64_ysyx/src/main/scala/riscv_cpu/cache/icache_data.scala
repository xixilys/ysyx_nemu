package examples

import chisel3._
import chisel3.stage._
import chisel3.util._

class icache_data_ram extends BlackBox {
    val io = IO(new Bundle {
     
    val        clka = Input(UInt(1.W))
    val        ena  = Input(UInt(1.W))
    val        wea   = Input(UInt(5.W))
    val        addra   = Input(UInt(7.W))
    val        dina  = Input(UInt(40.W))
    val        douta  = Output(UInt(40.W))
  
    })
}


class icache_data  extends Module with riscv_macros {
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val io = IO(new Bundle {
        val        en   = Input(UInt(1.W))
        val        wen   = Input(UInt((data_length / 8).W))
        val        addr   = Input(UInt(addr_length.W))
        val        wdata   = Input(UInt(data_length.W))
        val        rdata  = Output(UInt(40.W))
        val        sram = Flipped(new sram_port)
    })
    //开始拼
    val icache_data_ram_0 = Module(new ysyx_sram_with_mask(64))
    icache_data_ram_0.io.ena   := io.en
    icache_data_ram_0.io.wea  := io.wen
    icache_data_ram_0.io.addra := io.addr(10,4)
    icache_data_ram_0.io.dina := io.wdata
    io.sram <> icache_data_ram_0.io.sram_port
    val addr_reg = RegNext(io.addr)

    val get_data =    Mux(addr_reg(2),icache_data_ram_0.io.douta(63,32),icache_data_ram_0.io.douta(31,0)) 
    io.rdata   := Cat(Branch_data_Decoder(get_data),Jump_Decoder(get_data),Branch_Decoder(get_data),get_data)
}
// object icache_data_test extends App{
//     (new ChiselStage).emitVerilog(new icache_data)
// }


