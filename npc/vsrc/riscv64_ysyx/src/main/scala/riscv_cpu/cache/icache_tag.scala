package examples

import chisel3._
import chisel3.stage._
import chisel3.util._


class icache_tag  extends Module with riscv_macros {
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜

    val io = IO(new Bundle {
        val        wen   = Input(UInt(1.W))//write en
        val        wdata   = Input(UInt(22.W))
        val        addr   = Input(UInt(addr_length.W))
        val        hit   = Output(UInt(1.W))
        val        valid   = Output(UInt(1.W))
        val        op      = Input(UInt(1.W))
        val        asid = Input(UInt(8.W))
        val        tag_all_flush = Input(Bool())
    })
    val tag_regs = RegInit(VecInit(Seq.fill(128)(0.U(22.W)))) //初始化寄存器
    // val tag_asid_regs = RegInit(VecInit(Seq.fill(128)(0.U(8.W))))
    val addr_reg = RegInit(0.U(32.W))
    addr_reg := io.addr
    // tag_regs(io.addr(10,4)) := Mux(io.op.asBool||io.wen.asBool,io.wdata, tag_regs(io.addr(10,4)))
    tag_regs.zipWithIndex.foreach{ case(a,index) =>
        val valid_to_be = Mux(io.tag_all_flush,0.U.asBool,Mux((io.op.asBool||io.wen.asBool) && io.addr(10,4) === index.asUInt
            ,io.wdata(21), tag_regs(index)(21)))
        // tag_regs(index):= Cat()
        val tag_to_be = Mux((io.op.asBool||io.wen.asBool) && io.addr(10,4) === index.asUInt,io.wdata(20,0), tag_regs(index)(20,0))
        tag_regs(index) := Cat(valid_to_be,tag_to_be)
    }
    // tag_asid_regs(io.addr(10,4)) := Mux(io.op.asBool||io.wen.asBool,io.asid,tag_asid_regs(io.addr(10,4)))
   // val tag_t = RegInit(0.U(32.W)) // 存疑
    val tag_t = tag_regs(io.addr(10,4)) 
    io.valid := tag_t(21) //tag_t(20)run
    io.hit := Mux(tag_t(20,0) === io.addr(31,11) ,1.U,0.U)//addr前20位全为tag
}
// object icache_tag_test extends App{
//     (new ChiselStage).emitVerilog(new icache_tag)
// }


