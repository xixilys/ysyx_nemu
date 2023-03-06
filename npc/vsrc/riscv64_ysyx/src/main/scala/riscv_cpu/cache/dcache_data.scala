package examples

import chisel3._
import chisel3.stage._
import chisel3.util._

class dcache_data_ram extends BlackBox with riscv_macros{
    val io = IO(new Bundle {
     
    val        clka = Input(UInt(1.W))
    val        ena  = Input(UInt(1.W))
    val        wea   = Input(UInt(4.W))
    val        addra   = Input(UInt(7.W))
    val        dina  = Input(UInt(data_length.W))
    val        douta  = Output(UInt(data_length.W))
  
    })
}


class dcache_data  extends Module with riscv_macros {
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val io = IO(new Bundle {
     
    val        en   = Input(UInt(1.W))
    val        wen   = Input(UInt((data_length / 8).W))
    val        addr   = Input(UInt(addr_length.W))
    val        wdata   = Input(UInt(data_length.W))
    val        rdata  = Output(UInt(data_length.W))
    val        sram = Flipped(new sram_port)
  
    })

    val dcache_data_ram_0 = Module(new ysyx_sram_with_mask(64))
    dcache_data_ram_0.io.ena   := io.en
    dcache_data_ram_0.io.wea  := io.wen
    dcache_data_ram_0.io.addra := io.addr(10,4)
    dcache_data_ram_0.io.dina := io.wdata
    io.sram <> dcache_data_ram_0.io.sram_port

    io.rdata   := dcache_data_ram_0.io.douta
}
// object dcache_data_test extends App{
//     (new ChiselStage).emitVerilog(new dcache_data)
// }


