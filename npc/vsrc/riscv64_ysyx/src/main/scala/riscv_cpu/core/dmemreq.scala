package examples

import chisel3._
import chisel3.stage._
import chisel3.util._

//地址u映射扔到了cache那里来做处理
class dmemreq extends Module with riscv_macros {//hi = Input(UInt(32.W))lo寄存器
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val io = IO(new Bundle { 
    val           en = Input(UInt(1.W))

    val     MemWriteE = Input(UInt(1.W))
    val     MemToRegE = Input(UInt(1.W))
    val     MemWidthE = Input(UInt(2.W))
    val     VAddrE = Input(UInt(data_length.W))
    val     WriteDataE = Input(UInt(data_length.W))
    val     addr_ok = Input(UInt(1.W))
    val     memrl = Input(UInt(2.W))
    // val     MemRLE   = Input(UInt(2.W))

    val     req = Output(UInt(1.W))
    // val     wr = Output(UInt(4.W))
    val     wr = Output(UInt(1.W))
    val     size = Output(UInt(2.W))
    val     addr = Output(UInt(data_length.W))
    val     wdata = Output(UInt(data_length.W))
    val     addr_pending = Output(UInt(1.W))
    val     wstrb = Output(UInt((data_length / 8).W))
    })
    // def get_size( width:UInt):UInt=
    //     MuxLookup(width,0.U(2.W),Seq(
    //         0.U -> "b11".U,
    //         1.U -> "b00".U,
    //         2.U -> "b01".U,
    //         3.U -> "b10".U
    //     ))
    def get_byte(data:UInt,offset:UInt):UInt = MuxLookup(Cat(offset),0.U,Seq(
        "b000".U -> unsign_extend(data(7,0),8),
        "b001".U -> unsign_extend(Cat(data(7,0),0.U(8.W)),16),
        "b010".U -> unsign_extend(Cat(data(7,0),0.U(16.W)),24),
        "b011".U -> unsign_extend(Cat(data(7,0),0.U(24.W)),32),
        "b100".U -> unsign_extend(Cat(data(7,0),0.U(32.W)),40),
        "b101".U -> unsign_extend(Cat(data(7,0),0.U(40.W)),48),
        "b110".U -> unsign_extend(Cat(data(7,0),0.U(48.W)),56),
        "b111".U -> unsign_extend(Cat(data(7,0),0.U(56.W)),64)))

    def get_halfword(data:UInt,offset:UInt):UInt = MuxLookup(Cat(offset),0.U,Seq(
        "b000".U -> unsign_extend(Cat(data(15,0)),16),
        "b010".U -> unsign_extend(Cat(data(15,0),0.U(16.W)),32),
        "b100".U -> unsign_extend(Cat(data(15,0),0.U(32.W)),48),
        "b110".U -> unsign_extend(Cat(data(15,0),0.U(48.W)),64))
        )
    def get_word(data : UInt,offset:UInt) :UInt = {
        MuxLookup(Cat(offset),0.U,Seq(
            "b000".U -> unsign_extend(Cat(data(31,0)),32),
            "b100".U -> unsign_extend(Cat(data(31,0),0.U(32.W)),64),
        ))
    }

    def get_data(data:UInt,offset:UInt,width:UInt,memwl:UInt):UInt = {//感觉有问题，可以根据cpu书160页改!！！！
        val ra = offset(2,0)
        MuxLookup(width,0.U,Seq(
            0.U -> get_byte(data,ra),
            1.U -> get_halfword(data,ra),
            2.U -> get_word(data,ra),
            3.U -> Mux(offset === 0.U ,data,0.U)))
        }

    def get_wstrb(sram_size:UInt,offset:UInt,memrl:UInt) = {
        MuxLookup((sram_size),0.U,Seq(
            0.U -> MuxLookup(offset,0.U,Seq(
                    0.U -> "b00000001".U,
                    1.U -> "b00000010".U,
                    2.U -> "b00000100".U,
                    3.U -> "b00001000".U,
                    4.U -> "b00010000".U,
                    5.U -> "b00100000".U,
                    6.U -> "b01000000".U,
                    7.U -> "b10000000".U   
                )),
            1.U -> MuxLookup(offset,0.U,Seq(
                    0.U -> "b00000011".U,
                    2.U -> "b00001100".U,
                    4.U -> "b00110000".U,
                    6.U -> "b11000000".U
                )),
            2.U -> MuxLookup(offset,0.U,Seq(
                    0.U -> "b00001111".U,
                    4.U -> "b11110000".U    
                )),
            3.U -> MuxLookup(offset,0.U,Seq(
                    0.U -> "b11111111".U
            ))
        ))
    
}
        
    val ra = io.VAddrE(2,0)//offset，实地址的后两位代表一个偏之
    io.addr_pending := 0.U
    io.wr       := io.MemWriteE
    // MuxLookup(Cat(io.MemWidthE,ra),0.U,Seq(
    //     "b0100".U -> "b0001".U,
    //     "b0101".U -> "b0010".U,
    //     "b0110".U -> "b0100".U,
    //     "b0111".U -> "b1000".U,
    //     "b1000".U -> "b0011".U,
    //     "b1010".U -> "b1100".U,//字节使能
    //     "b1100".U -> "b1111".U
    // )),0.U)
    io.size     := (io.MemWidthE)
    io.addr     := io.VAddrE//Cat(io.VAddrE(data_length,2),Mux(io.memrl =/= 0.U,0.U,io.VAddrE(1,0)))
    io.wstrb    := get_wstrb(io.MemWidthE,ra,io.memrl)
    io.wdata    := Mux(check_cached(io.VAddrE).asBool,get_data(io.WriteDataE,ra,io.MemWidthE,io.memrl),io.WriteDataE)
    io.req      := io.en.asBool && (io.MemToRegE.asBool || io.MemWriteE.asBool)

}

// object dmemreq_test extends App{
//     (new ChiselStage).emitVerilog(new dmemreq)
// }

