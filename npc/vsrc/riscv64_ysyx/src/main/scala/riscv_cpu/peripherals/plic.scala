package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import os.mtime
import riscv_cpu.peripherals.Margin._



class plic_periph(base_addr:UInt,int_source:Int) extends  Module with riscv_macros {
    val bytes_length = 16
    val bytes_section_length = 12
    val bytes_reserved = 0XBFFF.U 
    val Bound_Address  = base_addr + bytes_reserved
    val Bus_Interface  = "AXI4L"
    val base_adder   = 0x1000.U
    val enable_width = 32

    val VIRT_PLIC_BASE = base_adder
    val PLIC_PRIORITY_OFFSET                =                 (0x0).U
    val PLIC_PENDING_OFFSET                 =                  (0x1000).U
                                                                                                                                                                                                                                                                                                                                                      
    
    val PLIC_MENABLE_OFFSET                 = (0x2000).U
    val PLIC_MTHRESHOLD_OFFSET              = (0x200000).U
    val PLIC_MCLAIM_OFFSET                  = (0x200004).U
    val PLIC_MCOMPLETE_OFFSET               = (0x200004).U
    
    val PLIC_ENABLE     =               (VIRT_PLIC_BASE + PLIC_MENABLE_OFFSET + 0x80.U)
    val PLIC_THRESHOLD  =               (VIRT_PLIC_BASE + PLIC_MTHRESHOLD_OFFSET + 0x1000.U)
    val PLIC_CLAIM      =               (VIRT_PLIC_BASE + PLIC_MCLAIM_OFFSET + 0x1000.U)
    val PLIC_COMPLETE   =               (VIRT_PLIC_BASE + PLIC_MCOMPLETE_OFFSET +  0x1000.U)

def PLIC_PRIORITY(id:Int) = (VIRT_PLIC_BASE + PLIC_PRIORITY_OFFSET + ((id) * 4).U)
def PLIC_PENDING(id:Int) = (VIRT_PLIC_BASE + PLIC_PENDING_OFFSET + ((id) / 32).U)

val plic_enable_reg = RegInit(0.U(enable_width.W))
val plic_mthreshold_reg = RegInit(0.U(32.W))
val plic_interrupt_priority_reg = RegInit(VecInit(Seq.fill(int_source)(0.U(32.W))))
val plic_interrupt_finish_reg = RegInit(0.U(int_source.W))
val plic_claim_reg = RegInit(0.U(32.W))
val read_data = Wire(UInt(data_length.W))
val plic_interrupt_pending_reg = RegInit(VecInit(Seq.fill(int_source)(0.U.asBool)))



val plic_interrupt_ready = Wire(Vec(int_source,UInt(32.W)))
plic_interrupt_ready.zipWithIndex.foreach{case(a , index) => plic_interrupt_ready(index) := Mux(plic_interrupt_pending_reg(index),plic_interrupt_priority_reg(index),0.U)}

val max_value = plic_interrupt_ready.reduce((a,b) => Mux(a > b, a, b))
val max_index = plic_interrupt_ready.indexOf(max_value).S.asUInt
// printf("max index is ",max_index)

val maxIndex = max_index//Mux(max_index.asSInt > 0.asSInt,(max_index + 1).asUInt,0.U)
    val io = IO(new Bundle {
        val axi_port = Flipped(new axi_ram_port(64,32))
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
    axi_read_addr  := Mux(io.axi_port.arvalid.asBool && io.axi_port.arready.asBool,io.axi_port.araddr,axi_read_addr)
    axi_write_addr := Mux(io.axi_port.awvalid.asBool && io.axi_port.awready.asBool,io.axi_port.awaddr,axi_write_addr)
    axi_write_size := Mux(io.axi_port.awvalid.asBool && io.axi_port.awready.asBool,axi_size2truesize(io.axi_port.awsize),axi_write_size)
    axi_write_data := io.axi_port.wdata >> (axi_write_addr(2,0) << 3)
    
    
    plic_enable_reg := MuxCase(plic_enable_reg,Seq(
        (axi_write_state === axi_work1&& io.axi_port.wvalid.asBool && axi_write_addr === PLIC_ENABLE ) ->  axi_write_data(31,0)
    ))
    plic_claim_reg  := maxIndex

    val plic_claim_has_read = axi_read_addr === PLIC_CLAIM && axi_read_state === axi_work1 

    
    io.int_get.zipWithIndex.foreach{case(a,index) => 
        plic_interrupt_pending_reg(index) := MuxCase(plic_interrupt_pending_reg(index),Seq(
            // (axi_write_state === axi_work1&& io.axi_port.wvalid.asBool && axi_write_addr === ( + 1.U + index.U) ) ->  axi_write_data(0),
            (io.int_get(index) && plic_enable_reg(index)) -> 1.U.asBool, 
            (plic_claim_has_read && index.U === maxIndex.asUInt) -> 0.U.asBool
            // plic_cl
        ))
        plic_interrupt_priority_reg(index) := MuxCase(plic_interrupt_priority_reg(index),Seq(
            (axi_write_state === axi_work1 && io.axi_port.wvalid.asBool && axi_write_addr === PLIC_PRIORITY(index)) ->  axi_write_data
        ))
    }

    

    read_data := MuxCase(0.U,Seq(
        (axi_read_addr === PLIC_CLAIM) -> plic_claim_reg,
        (axi_read_addr === PLIC_ENABLE) -> plic_enable_reg
        // (axi_read_addr(bytes_length - 1,bytes_section_length) === plic_priority_addr_base(bytes_length - 1,bytes_section_length) ) -> interrupt_priority_data,
        // (axi_read_addr(bytes_length - 1,bytes_section_length) === plic_interrupt_pending_addr_base(bytes_length - 1,bytes_section_length)) -> pending_data,
        // (axi_read_addr(bytes_length - 1,bytes_section_length) === plic_enable_addr_base(bytes_length - 1,bytes_section_length)) -> enable_data,
        // (axi_read_addr(bytes_length - 1,bytes_section_length) === plic_interrupt_finish_addr_base(bytes_length - 1,bytes_section_length)) -> interrupt_finish_data,
        // (axi_read_addr === int_id_addr) -> (if(int_source <= 1) 0.U else cal_index(int_source - 2))
    )) 

    // val 
    // val pending_read_data = Mux 

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

    io.int_line := plic_interrupt_pending_reg.reduce(_ | _)


    // ext_int(0)
    
    
    
}


// class PlicPeriph_gpt(baseAddr: BigInt, intSource: Int) extends Module with AXI4LiteParameters {
//   val io = IO(new Bundle {
//     val axi = Flipped(new axi_ram_port(64,32))
//     val intLine = Output(Bool())
//     val intGet = Input(Vec(intSource, Bool()))
//   })

//   val bytesLength = 16
//   val bytesSectionLength = 12
//   val bytesReserved = 0xbfff.U(16.W)
//   val boundAddress = baseAddr + bytesReserved
//   val busInterface = "AXI4L"
//   val baseAdder = 0x1000.U(32.W)

//   val virtPlicBase = baseAdder
//   val plicPriorityOffset = 0x0.U(32.W)
//   val plicPendingOffset = 0x1000.U(32.W)
//   val plicMEnableOffset = 0x2000.U(32.W)
//   val plicMThresholdOffset = 0x200000.U(32.W)
//   val plicMClaimOffset = 0x200004.U(32.W)
//   val plicMCompleteOffset = 0x200004.U(32.W)

//   val plicEnable = virtPlicBase + plicMEnableOffset + 0x80.U(32.W)
//   val plicThreshold = virtPlicBase + plicMThresholdOffset + 0x1000.U(32.W)
//   val plicClaim = virtPlicBase + plicMClaimOffset + 0x1000.U(32.W)
//   val plicComplete = virtPlicBase + plicMCompleteOffset + 0x1000.U(32.W)

//   val plicPriorityAddrBase = baseAddr.U(32.W)
//   val plicEnableAddrBase = (baseAddr + baseAdder).U(32.W)
//   val plicInterruptPendingAddrBase = (plicEnableAddrBase + baseAdder).U(32.W)
//   val plicInterruptFinishAddrBase = (plicInterruptPendingAddrBase + baseAdder).U(32.W)

//   val intIdAddr = (baseAddr + 0xb000.U).U(32.W)

//   val plicEnableReg = RegInit(VecInit(Seq.fill(intSource)(false.B)))
//   val plicInterruptPendingReg = RegInit(VecInit(Seq.fill(intSource)(false.B)))
//   val plicInterruptPriorityReg = RegInit(VecInit(Seq.fill(intSource)(0.U(8.W))))
//   val plicInterruptFinishReg = RegInit(0.U(intSource.W))
//   val intIdReg = RegInit(0.U(8.W))
//   val readData = Wire(UInt(dataWidth.W))

//   val axi = Module(new AXI4LiteSlave)
//   io.axi <> axi.io.master
//   axi.io.addr := io.axi.AW.addr

//   axi.io.r.ready := true.B
//   axi.io.b.valid := false.B
//   axi.io.b.resp := AXI4Parameters.RESP_OKAY

//   axi.io.w.ready := true.B
//   axi.io.ar.ready := true.B

//   val axiReadData = Wire(UInt(dataWidth.W))
//   axiReadData := Cat(plicInterruptPriorityReg.reverse)

//   axi.io.r.bits.data := axiReadData
//   axi.io.b.bits.resp := AXI4Parameters.RESP_OKAY

//   // Interrupt handling
//   io.intLine := plicInterruptPendingReg.reduce(_ || _)

//   val maxPriority = RegInit(0.U(8.W))
//   val claimReg = RegInit(0.U(8.W))

//   when(io.intGet(claimReg)) {
//     plicInterruptPendingReg(claimReg) := false.B
//     plicInterruptFinishReg := plicInterruptFinishReg | (1.U << claimReg)
//     claimReg := 0.U
//   }

//   for (i <- 0 until intSource) {
//     when(io.intGet(i)) {
//       plicInterruptPendingReg(i) := true.B
//       plicInterruptPriorityReg(i) := maxPriority + 1.U
//     }
//   }

//   when(plicInterruptPendingReg.reduce(_ || _)) {
//     claimReg := PriorityEncoder(plicInterruptPriorityReg)
//     maxPriority := plicInterruptPriorityReg.max
//   }
// }