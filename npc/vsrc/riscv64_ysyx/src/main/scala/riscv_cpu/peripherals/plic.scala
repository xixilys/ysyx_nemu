package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import os.mtime
import riscv_cpu.peripherals.Margin._



class plic_periph(base_addr:UInt,int_source:Int) extends  Module with riscv_macros {
    val bytes_reserved = 0XBFFF.U 
    val Bound_Address  = base_addr + bytes_reserved
    val Bus_Interface  = "AXI4L"
    val base_adder   = 0x1000.U
    // val data_cal_length = 
    
    val plic_priority_addr_base = base_addr
    val plic_enable_addr_base   = base_addr +  base_adder
    val plic_interrupt_pending  = plic_enable_addr_base  + base_adder
    val plic_interrupt_response = plic_interrupt_pending + base_adder
    val plic_interrupt_finish   = plic_interrupt_response + base_adder 

    val int_id_addr = base_addr + 0xB000.U;
    
    // val plic_
    val plic_enable_reg = RegInit(VecInit(Seq.fill(int_source)(0.U.asBool())))
    val plic_interrupt_pending_reg = RegInit(VecInit(Seq.fill(int_source)(0.U.asBool())))
    val plic_interrupt_priority_reg = RegInit(VecInit(Seq.fill(int_source)(0.U(8.W))))
    val plic_interrupt_finish_reg = RegInit(0.U(UInt(int_source.W)))
    val int_id_reg = RegInit(0.U(8.W))
    val read_data  = Wire(UInt(data_length.W))
    
    

    val io = IO(new Bundle {
        val axi_port = Flipped(new axi_ram_port)
        val int_line = Output(Bool())
        val int_get = Vec(int_source,Input(Bool()))
    })

    
    
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

    io.int_get.zipWithIndex.foreach{case(a,index) => 
        plic_enable_reg(index) := MuxCase(plic_enable_reg(index),Seq(
            (axi_write_state === axi_work1&& io.axi_port.wvalid.asBool && axi_write_addr === (plic_enable_addr_base + 1.U + index.U) ) ->  axi_write_data(0)
        ))
        plic_interrupt_finish_reg := MuxCase(plic_interrupt_finish_reg(index),Seq(
            (axi_write_state === axi_work1&& io.axi_port.wvalid.asBool && axi_write_addr === (plic_interrupt_finish + 1.U + index.U) ) -> axi_write_data(0)
        ))
        val pending_data = plic_interrupt_pending_reg(index)
        plic_interrupt_pending_reg(index) := MuxCase(pending_data,Seq(
            (axi_write_state === axi_work1&& io.axi_port.wvalid.asBool && axi_write_addr === (plic_interrupt_pending + 1.U + index.U) ) ->  axi_write_data(0),
            (io.int_get(index) && plic_enable_reg(index)) -> 1.U.asBool
        ))
        plic_interrupt_priority_reg(index) := MuxCase(plic_interrupt_priority_reg,Seq(
            (axi_write_data === axi_work1 && io.axi_port.wvalid.asBool && axi_write_addr === (plic_priority_addr_base + 1.U + index.U)) ->  axi_write_data
        ))
        // plic_inte 
    }
    val cal_data = Wire(Vec((int_source - 1),UInt(8.W)))
    val cal_index = Wire(Vec((int_source - 1),UInt(8.W)))
    cal_data.zipWithIndex.foreach{ case(a,index) => 
        // cal_data(index) := 
        if(index == 0) {
            cal_data(index) :=  Mux(plic_interrupt_pending_reg(0),Mux(plic_interrupt_pending_reg(1),Mux(plic_interrupt_priority_reg(index + 1) > 
                plic_interrupt_priority_reg(index),plic_interrupt_priority_reg(index + 1),plic_interrupt_priority_reg(index)),plic_interrupt_priority_reg(index)),
                Mux(plic_interrupt_pending_reg(1),plic_interrupt_priority_reg(index + 1),0.U))
                // plic_interrupt_priority_reg(index )),))
                // Mux(plic_interrupt_priority_reg(index + 1) > plic_interrupt_priority_reg(index),plic_interrupt_priority_reg(index + 1),
                // plic_interrupt_priority_reg(index ))
            cal_index(index) := Mux(plic_interrupt_priority_reg(index + 1) > plic_interrupt_priority_reg(index),(index + 1).U,index.U)
        }else{ 
            cal_data(index) := Mux(cal_data(index - 1) > plic_interrupt_priority_reg(index + 1),cal_data(index - 1),plic_interrupt_priority_reg(index + 1))
            cal_index(index) := Mux(cal_data(index - 1) > plic_interrupt_priority_reg(index + 1),cal_index(index - 1),(index + 1).U)
        }
    }
    



    




    
    

    //read related line 
    io.axi_port.rdata := read_data
    io.axi_port.rlast := axi_read_state === axi_work1 && io.axi_port.rready.asBool
    io.axi_port.rvalid := axi_read_state === axi_work1 
    io.axi_port.arready := 1.U
    io.axi_port.rid := 0.U
    io.axi_port.rresp := 0.U

    // val final_data = axi



    io.axi_port.awready  := 1.U
    io.axi_port.wready   := axi_write_state === axi_work1
    io.axi_port.bid      := 0.U
    io.axi_port.bresp    := 0.U
    io.axi_port.bvalid   := axi_write_state === axi_work2


    // ext_int(0)
    
    
    
}



