package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import os.mtime
import riscv_cpu.peripherals.Margin._



class timer_periph(base_addr:UInt) extends  Module with riscv_macros {
    val bytes_reserved = 0XBFFF.U 
    val Bound_Address  = base_addr + bytes_reserved
    val Bus_Interface  = "AXI4L"
    
    val msip_offset     = 0x0.U
    val mtimecmp_offset = 0x4000.U
    val mtime_offset    = 0xBFF8.U

    val io = IO(new Bundle {
        val axi_port = Flipped(new axi_ram_port(64,32))
        val int_line = Output(Bool())
        val mie = Output(Bool())
    })
    val mtime  =  RegInit(0.U(data_length.W))
    val mtimecmp = RegInit(0.U(data_length.W))
    val msip  =  RegInit(0.U(32.W))

    // read and write 不能互相影响，应该要主动分开
    val axi_read_state = RegInit(0.U(3.W))
    val axi_write_state = RegInit(0.U(3.W))
    val axi_read_addr = RegInit(0.U(data_length.W))
    val axi_write_addr = RegInit(0.U(data_length.W))
    val axi_write_size = RegInit(0.U(4.W)) 
    val axi_write_data = Wire(UInt(data_length.W))

    axi_read_state := MuxLookup(axi_read_state,axi_read_state,Seq(
        axi_idle   -> Mux(io.axi_port.arvalid.asBool && io.axi_port.arready.asBool,axi_work1,axi_read_state),
        axi_work1  -> Mux(io.axi_port.rready.asBool,axi_read_state,axi_idle)
        // axi_work1  -> 
    ))
    axi_write_state := MuxLookup(axi_write_state,axi_write_state,Seq(
        axi_idle   -> Mux(io.axi_port.awvalid.asBool && io.axi_port.awready.asBool,axi_work1,axi_write_state),
        axi_work1  -> Mux(io.axi_port.wready.asBool,axi_work2,axi_write_state),
        axi_work2  -> axi_idle
        // axi_work1  -> 
    ))
    axi_read_addr := Mux(io.axi_port.arvalid.asBool && io.axi_port.arready.asBool,io.axi_port.araddr,axi_read_addr)
    axi_write_addr := Mux(io.axi_port.awvalid.asBool && io.axi_port.awready.asBool,io.axi_port.awaddr,axi_write_addr)
    axi_write_size := Mux(io.axi_port.awvalid.asBool && io.axi_port.awready.asBool,axi_size2truesize(io.axi_port.awsize),axi_write_size)
    axi_write_data := io.axi_port.wdata << (io.axi_port.awaddr(2,0) << 3)

    val  read_data  = MuxLookup(axi_read_addr,0.U,Seq(
        (msip_offset + base_addr)  -> msip,
        (mtime_offset + base_addr) -> mtime,
        (mtimecmp_offset + base_addr ) -> mtimecmp 
    ))
    
    //read related line 
    io.axi_port.rdata := read_data
    io.axi_port.rlast := axi_read_state === axi_work1 && io.axi_port.rready.asBool
    io.axi_port.rvalid := axi_read_state === axi_work1 
    io.axi_port.arready := 1.U
    io.axi_port.rid := 0.U
    io.axi_port.rresp := 0.U

    // val final_data = axi
    val mtime_to_be = Wire(Vec(data_length/8,UInt(8.W)))
    mtime_to_be.zipWithIndex.foreach{case(a,index) => 
            mtime_to_be(index) := Mux(axi_write_addr(2,0) <= index.U && ( Cat(0.U(1.W),axi_write_addr(2,0)) + axi_write_size > index.U),
                axi_write_data((index + 1) * 8 - 1 ,index * 8), mtime((index + 1) * 8 - 1 ,index * 8))
    }
    mtime := Mux(axi_write_state === axi_work1 && io.axi_port.wvalid.asBool && axi_write_addr(data_length - 1,3) === (base_addr + mtime_offset)(data_length - 1,3),
        mtime_to_be.asUInt,mtime + 1.U)
    val mtimecmp_to_be = Wire(Vec(data_length/8,UInt(8.W)))
    mtimecmp_to_be.zipWithIndex.foreach{case(a,index) => 
            mtimecmp_to_be(index) := Mux(axi_write_addr(2,0) <= index.U && ( Cat(0.U(1.W),axi_write_addr(2,0)) + axi_write_size > index.U),
                axi_write_data((index + 1) * 8 - 1 ,index * 8), mtimecmp((index + 1) * 8 - 1 ,index * 8))
    }
    mtimecmp := Mux(axi_write_state === axi_work1&& io.axi_port.wvalid.asBool && axi_write_addr(data_length - 1,3) === (base_addr + mtimecmp_offset)(data_length - 1,3),
        mtimecmp_to_be.asUInt,mtimecmp)
    msip := Mux(axi_read_addr === axi_work1 && io.axi_port.wvalid.asBool && axi_write_addr === (base_addr + msip_offset),Cat(0.U(31.W),axi_write_data(0)),msip)

    io.axi_port.awready  := 1.U
    io.axi_port.wready   := axi_write_state === axi_work1
    io.axi_port.bid      := 0.U
    io.axi_port.bresp    := 0.U
    io.axi_port.bvalid   := axi_write_state === axi_work2

    io.int_line := mtime >= mtimecmp
    io.mie      := msip(0)
    // ext_int(0)
    
    
    
}



