package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._


class apb_bundle(apb_addr_w :Int,apb_data_w:Int)extends Bundle {
    val strb_length = apb_data_w / 8;
    
    val psel  = Input(Bool())
    val penable = Input(Bool())
    val pwrite = Input(Bool())
    val pwdata = Input(UInt(apb_data_w.W))
    val paddr = Input(UInt(apb_addr_w.W))
    val pstrb = Input(UInt(strb_length.W))
    val pready = Output(Bool())
    val pslverr = Output(Bool())
    val prdata = Output(UInt(apb_data_w.W))
}