package examples

import  chisel3._
import  chisel3.stage._
import chisel3.util._


class cfu extends Module with riscv_macros {
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val io = IO(new Bundle { 
        val     AddrPendingF = Input(UInt(1.W))
        val     DataPendingF = Input(UInt(1.W))
        val     Inst_Fifo_Empty = Input(UInt(1.W))
        val     data_fence_i_control = Input(Bool())

        val     dmem_calD  = Input(Bool())

        
        val     BranchD = Input(UInt(6.W))
        val     BranchD_Flag = Input(UInt(1.W))
        val     JumpD = Input(UInt(1.W))
        val     JRD = Input(UInt(1.W))
        val     CanBranchD = Input(UInt(1.W))

        val     DivPendingE = Input(UInt(1.W))

        val     AddrPendingE = Input(UInt(1.W))
        val     DataPendingM = Input(UInt(1.W))
        
        val     InException = Input(UInt(1.W))


        val     WriteRegE = Input(UInt(5.W))
        val     MemToRegE = Input(UInt(1.W))
        val     RegWriteE = Input(UInt(1.W))
        val     csrToRegE = Input(UInt(1.W))
        
        val     WriteRegM = Input(UInt(5.W))
        val     MemToRegM = Input(UInt(1.W))
        val     RegWriteM = Input(UInt(1.W))

        val     csrWriteM = Input(UInt(1.W))

        val     WriteRegM2 = Input(UInt(5.W))
        val     MemToRegM2 = Input(UInt(1.W))
        val     RegWriteM2 = Input(UInt(1.W))

        val     csrWriteM2 = Input(UInt(1.W))
        
        val     WriteRegW = Input(UInt(5.W))  
        val     RegWriteW = Input(UInt(1.W))

        val     csrWriteW = Input(UInt(1.W))

        val    ReadcsrAddrE= Input(UInt(12.W))

        val    WritecsrAddrM= Input(UInt(12.W))
    

        val    WritecsrAddrM2= Input(UInt(12.W))
        
        
        val     R2D = Input(UInt(5.W))
        val     R1D = Input(UInt(5.W))

        val     R2E = Input(UInt(5.W))
        val     R1E = Input(UInt(5.W))
        
        val    StallF = Output(UInt(1.W)) 
        val    StallD = Output(UInt(1.W))
        val    StallE = Output(UInt(1.W))
        val    StallM = Output(UInt(1.W))
        val    StallM2 = Output(UInt(1.W))
        val    StallW = Output(UInt(1.W))
        val    FlushD = Output(UInt(1.W))//流水线冲刷
        val    FlushE = Output(UInt(1.W))
        val    FlushM = Output(UInt(1.W))
        val    FlushM2 = Output(UInt(1.W))       
        val    FlushW = Output(UInt(1.W))

        val    Forward1E = Output(UInt(2.W))
        val    Forward2E = Output(UInt(2.W))
        val    Forward1D = Output(UInt(2.W))
        val    Forward2D = Output(UInt(2.W))
        
        
        // val    ForwardHE = Output(UInt(2.W))
        val    ForwardcsrE = Output(UInt(2.W)) //只关注ex阶段读的前di

        // val    data_cache_stage2_stall = Input(Bool())
    })

    //wb阶段不需要加前递，因为regfile里面加了相关的算法
    io.Forward2D := Mux(io.R2D === 0.U,0.U ,Mux(io.R2D === io.WriteRegM && io.RegWriteM.asBool && !io.MemToRegM.asBool,"b01".U,Mux(
        io.R2D === io.WriteRegM2 && io.RegWriteM2.asBool && !io.MemToRegM2.asBool,"b10".U,0.U)))//当R2为操作数的时候将该寄存器前递
    io.Forward1D := Mux(io.R1D === 0.U,0.U ,Mux(io.R1D === io.WriteRegM && io.RegWriteM.asBool && !io.MemToRegM.asBool,"b01".U,Mux(
        io.R1D === io.WriteRegM2 && io.RegWriteM2.asBool && !io.MemToRegM2.asBool,"b10".U,0.U)))//当R2为操作数的时候将该寄存器前递

    //exe阶段与
    

    io.Forward2E := Mux(io.R2E === 0.U,0.U,MuxCase(0.U,Seq(
        (io.R2E === io.WriteRegM && io.RegWriteM.asBool && !io.MemToRegM.asBool)    -> "b10".U,
        (io.R2E === io.WriteRegM2 && io.RegWriteM2.asBool && !io.MemToRegM2.asBool) -> "b11".U,
        (io.R2E === io.WriteRegW && io.RegWriteW.asBool)    -> "b01".U

    )))

    io.Forward1E := Mux(io.R1E === 0.U,0.U,MuxCase(0.U,Seq(
        (io.R1E === io.WriteRegM && io.RegWriteM.asBool && !io.MemToRegM.asBool)    -> "b10".U,
        (io.R1E === io.WriteRegM2 && io.RegWriteM2.asBool && !io.MemToRegM2.asBool) -> "b11".U,
        (io.R1E === io.WriteRegW && io.RegWriteW.asBool )    -> "b01".U

    )))
    

    io.ForwardcsrE := Mux(io.csrToRegE.asBool,MuxCase(0.U,Seq(
        ((Cat(io.ReadcsrAddrE) === Cat(io.WritecsrAddrM)) && io.csrWriteM.asBool) -> "b01".U,
        ((Cat(io.ReadcsrAddrE) === Cat(io.WritecsrAddrM2)) && io.csrWriteM2.asBool) -> "b10".U
    )),0.U)

    
    val fifo_empty_stall = io.Inst_Fifo_Empty.asBool
    val br_Stall = (io.CanBranchD.asBool && (io.BranchD_Flag .asBool) && 
        ((io.RegWriteE.asBool && (io.WriteRegE === io.R2D || io.WriteRegE === io.R1D)) || //直接要写的寄存器和冲突了
        (io.MemToRegM.asBool && (io.WriteRegM === io.R2D || io.WriteRegM === io.R1D)) || 
        (io.MemToRegM2.asBool && (io.WriteRegM2 === io.R2D || io.WriteRegM2 === io.R1D)))) && !io.InException.asBool //需要从mem读的寄存器冲突了
    val jr_Stall = ( io.JRD.asBool || io.dmem_calD.asBool) && 
        ((io.RegWriteE.asBool && (io.WriteRegE === io.R1D)) || //直接要写的寄存器和冲突了
        (io.MemToRegM.asBool && (io.WriteRegM === io.R1D ) ) || 
        (io.MemToRegM2.asBool && (io.WriteRegM2 === io.R1D )))  && !io.InException.asBool //需要从mem读的寄存器冲突了

    val dmem_addr_cal_Stall = jr_Stall//(io.dmem_calD) && 
    
    
    val divStall = io.DivPendingE.asBool//除法需要计算很多个时钟周期
    val csrStall = 0.U.asBool//(io.csrWriteM.asBool && io.csrToRegE.asBool ) || (io.csrWriteW.asBool && io.csrToRegE.asBool )
    val ifStall = io.AddrPendingF.asBool 
    val dmemStall = io.DataPendingM.asBool

    val mem2regM_Stall = (/*io.R2E =/= 0.U && */io.R2E === io.WriteRegM && io.RegWriteM.asBool && io.MemToRegM.asBool) || 
                (/*io.R1E =/= 0.U &&*/ io.R1E === io.WriteRegM && io.RegWriteM.asBool && io.MemToRegM.asBool) ||//mem阶段出现mem2reg并且此时需要前递时，停止流水线
                (/*io.R2D =/= 0.U &&*/ io.R2D === io.WriteRegM && io.RegWriteM.asBool && io.MemToRegM.asBool) || 
                (/*io.R1D =/= 0.U &&*/ io.R1D === io.WriteRegM && io.RegWriteM.asBool && io.MemToRegM.asBool) ||
                (/*io.R2E =/= 0.U &&*/ io.R2E === io.WriteRegM2 && io.RegWriteM2.asBool && io.MemToRegM2.asBool) || 
                (/*io.R1E =/= 0.U &&*/ io.R1E === io.WriteRegM2 && io.RegWriteM2.asBool && io.MemToRegM2.asBool) ||//mem阶段出现mem2reg并且此时需要前递时，停止流水线
                (/*io.R2D =/= 0.U &&*/ io.R2D === io.WriteRegM2 && io.RegWriteM2.asBool && io.MemToRegM2.asBool) || 
                (/*io.R1D =/= 0.U &&*/ io.R1D === io.WriteRegM2 && io.RegWriteM2.asBool && io.MemToRegM2.asBool) 



    


    val has_Stall = /*lm_Stall ||*/br_Stall||jr_Stall||dmem_addr_cal_Stall||divStall.asBool||csrStall ||ifStall||dmemStall
    val excepStall = io.InException.asBool && has_Stall
    val excepFlush = io.InException.asBool 
    // val fence_iFlush = io.data_fence_i_control
 //Stall 摊位，池子
    io.StallF := Mux(reset.asBool,1.U,!(/*lm_Stall||*/br_Stall||jr_Stall|| divStall||csrStall||dmemStall/*||excepStall||memrlStall*/||mem2regM_Stall || fifo_empty_stall))
    io.StallD := Mux(reset.asBool,1.U,!(/*lm_Stall||*/br_Stall||jr_Stall|| divStall||csrStall||dmemStall/*||excepStall||memrlStall */|| mem2regM_Stall))
    io.StallE := Mux(reset.asBool,1.U,!(divStall||csrStall||dmemStall/*||excepStall */|| mem2regM_Stall))
    io.StallM := Mux(reset.asBool,1.U,!(dmemStall/*||excepStall*/))
    io.StallM2 := Mux(reset.asBool,1.U,!(dmemStall/*||excepStall*/))
    io.StallW := Mux(reset.asBool,1.U,!(dmemStall/*excepStall*/))
//flush冲洗
    io.FlushD := Mux(reset.asBool,0.U, (io.StallD.asBool && 0.U.asBool) || ( excepFlush  /*|| fifo_empty_stall*/ ))
    io.FlushE := Mux(reset.asBool,0.U,((io.StallE.asBool && ( ifStall ||br_Stall|| jr_Stall  /*||memrlStall ||| lm_Stall | br_Stall || jr_Stall */  )))|| excepFlush  )
    io.FlushM := Mux(reset.asBool,0.U,((io.StallM.asBool && ( csrStall || divStall ||mem2regM_Stall.asBool)) || excepFlush))
    io.FlushM2 := Mux(reset.asBool,0.U,((io.StallM2.asBool && 0.U.asBool ) || excepFlush ))
    io.FlushW := Mux(reset.asBool,0.U,((io.StallW.asBool && ( dmemStall || excepFlush))))

}

// object cfu_test extends App{
//     (new ChiselStage).emitVerilog(new cfu)
// }
