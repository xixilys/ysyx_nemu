package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import firrtl.PrimOps
import scala.math._
import scala.reflect.runtime.Macros
import javax.swing.plaf.basic.BasicToolBarUI


//流水线分支预测
class  branch_prediction   extends Module  with riscv_macros{
   
    val io = IO(new Bundle { //分支指令不支持同时写
        val pc = Input(UInt(addr_length.W)) //一般是支持同时判断两条指令pc和pc+4和pc+8，而对于处于八位边界的指令，还是和cache一样不做处理，只发射一条指令，我想要cache支持一次出三条了，草
        val write_pc = Input(UInt(addr_length.W))
        val aw_pht_ways_addr = Input(UInt(4.W))
        val aw_pht_addr = Input(UInt(7.W))
        val aw_bht_addr   = Input(UInt(7.W))
        val aw_target_addr = Input(UInt(addr_length.W))
        val btb_write = Input(Bool())
        val bht_write = Input(Bool())
        val pht_write = Input(Bool()) 
        val bht_in = Input(UInt(7.W))
        val pht_in = Input(UInt(2.W))
        val out = Output(UInt(2.W))
        val pre = Output(UInt(1.W))
        val bht = Output(UInt(7.W)) 


        val btb_hit = Output(Bool())
     
        val pre_target = Output(UInt(addr_length.W))
        val stage2_stall = Input(Bool())
        val stage2_flush = Input(Bool())

        val lookup_data = Output(UInt(7.W))
    })//使用一//相当于要查两个表，不知道延迟会到多高
    
    val pc_hash = Hash(io.pc(19,4)) //
    val phts_banks = Module(new PHTS_banks_oneissue(128,2,4,2)).io
    val bhts_banks = Module(new BHT_banks_oneissue(128,3,4)).io//以后这些都还可以改，也不着急
    val btb_banks = Module(new BTB_banks_oneissue(64,4)).io
   // val stage_2_bht  = RegInit(VecInit(Seq.fill(3)(0.U(7.W))))
    val stage_2_pht_lookup = RegInit(VecInit(Seq.fill(1)(0.U(7.W))))
    val stage_2_pc = RegInit(0.U(data_length.W))
    val stage_2_pc_hash = RegInit(0.U(4.W))
    val stage_2_btb_hit = RegInit(VecInit(Seq.fill(1)(0.U.asBool)))
    val stage_2_btb_target_pc = RegInit(0.U(addr_length.W))
    io.btb_hit := stage_2_btb_hit(0)

    val stage_1_pht_lookup =  Wire(Vec(1,UInt(7.W)))

  
    stage_2_pht_lookup(0) := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,stage_1_pht_lookup(0),stage_2_pht_lookup(0)))


    stage_2_pc := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,io.pc,stage_2_pc))

    stage_2_pc_hash := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,pc_hash,stage_2_pc_hash))
    stage_2_btb_hit(0) := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,btb_banks.hit(0), stage_2_btb_hit(0) ))
    stage_2_btb_target_pc := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,btb_banks.out, stage_2_btb_target_pc ))
  

    io.lookup_data := stage_2_pht_lookup(0)
          
   

    bhts_banks.ar_bank_sel := io.pc(3,2)//二路组相连嘛
    bhts_banks.write := io.bht_write
    bhts_banks.ar_addr := io.pc(10,4)

    bhts_banks.in := io.bht_in
    bhts_banks.aw_addr := io.aw_bht_addr

    phts_banks.ar_bank_sel := stage_2_pc(3,2)
    phts_banks.ar_pht_addr := stage_2_pc_hash    

    phts_banks.ar_addr := stage_2_pht_lookup(0)


    stage_1_pht_lookup(0) := bhts_banks.out ^ io.pc(16,10)

    phts_banks.aw_addr := io.aw_pht_addr
    phts_banks.aw_pht_addr := io.aw_pht_ways_addr
    phts_banks.aw_bank_sel := io.write_pc(3,2)
    phts_banks.write := io.pht_write
    phts_banks.in := io.pht_in


    btb_banks.ar_addr := io.pc
    btb_banks.aw_addr   := io.write_pc
    btb_banks.aw_target_addr := io.aw_target_addr
    btb_banks.write := io.btb_write

    //不命中就预测不跳转


    val phts_out = RegNext(phts_banks.out)
    io.out := phts_out
    io.bht := bhts_banks.out
    io.pre := branch_prediction_state_machine_code_decoder(phts_out)


    io.pre_target := stage_2_btb_target_pc


}




//流水线分支预测
class  branch_prediction_with_blockram   extends Module  with riscv_macros{
   
    val io = IO(new Bundle { //分支指令不支持同时写
        val pc = Input(UInt(data_length.W)) //一般是支持同时判断两条指令pc和pc+4和pc+8，而对于处于八位边界的指令，还是和cache一样不做处理，只发射一条指令，我想要cache支持一次出三条了，草
        val write_pc = Input(UInt(data_length.W))
        val aw_pht_ways_addr = Input(UInt(4.W))
        val aw_pht_addr = Input(UInt(7.W))
        val aw_bht_addr   = Input(UInt(7.W))
        val aw_target_addr = Input(UInt(data_length.W))
        val btb_write = Input(Bool())
        val bht_write = Input(Bool())
        val pht_write = Input(Bool()) 
        val bht_in = Input(UInt(7.W))
        val pht_in = Input(UInt(8.W))
        val out = Output(UInt(2.W))
        val pre = Output(UInt(1.W))
        val bht = Output(UInt(7.W)) 


        val btb_hit = Vec(1,Output(Bool()))
     
        val pre_target = Output(UInt(data_length.W))

        val stage2_stall = Input(Bool())
        val stage2_flush = Input(Bool())

        val pht_lookup_value_out = Output(UInt(8.W))

        val lookup_data = Vec(1,Output(UInt(7.W)))
    })//使用一//相当于要查两个表，不知道延迟会到多高
    
    val pc_hash = Hash(io.pc(19,4)) //
    val phts_banks = Module(new PHTS_banks_oneissue_block_ram(128,2,8,4)).io
    val bhts_banks = Module(new BHT_banks_oneissue(128,3,4)).io//以后这些都还可以改，也不着急
    val btb_banks = Module(new BTB_banks_oneissue_with_block_ram(512,4)).io
   // val stage_2_bht  = RegInit(VecInit(Seq.fill(3)(0.U(7.W))))
    val stage_2_pht_lookup = RegInit(VecInit(Seq.fill(1)(0.U(7.W))))
    val stage_2_pc = RegInit(0.U(data_length.W))
    val stage_2_pc_hash = RegInit(0.U(4.W))
    // val stage_2_btb_hit = RegInit(VecInit(Seq.fill(3)(0.U.asBool)))

    val stage2_stall_reg = RegInit(0.U.asBool)
    stage2_stall_reg := io.stage2_stall

    

    

    val stage_1_pht_lookup =  Wire(Vec(1,UInt(7.W)))

    stage_2_pht_lookup(0) := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,stage_1_pht_lookup(0),stage_2_pht_lookup(0)))

    stage_2_pc := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,io.pc,stage_2_pc))

    stage_2_pc_hash := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,pc_hash,stage_2_pc_hash))
    // stage_2_btb_hit(0) := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,btb_banks.hit_L, 0stage_2_btb_hit(0) ))
    // stage_2_btb_hit(1) := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,btb_banks.hit_M, stage_2_btb_hit(1) ))
    // stage_2_btb_hit(2) := Mux(io.stage2_flush,0.U,Mux(io.stage2_stall,btb_banks.hit_R, stage_2_btb_hit(2) ))

    io.lookup_data(0) := stage_2_pht_lookup(0)
          
   

    bhts_banks.ar_bank_sel := io.pc(3,2)//二路组相连嘛
    bhts_banks.write := io.bht_write
    bhts_banks.ar_addr := io.pc(10,4)

    bhts_banks.in := io.bht_in
    bhts_banks.aw_addr := io.aw_bht_addr

    phts_banks.ar_bank_sel := io.pc(3,2)
    phts_banks.ar_pht_addr := pc_hash//stage_2_pc_hash    

    phts_banks.ar_addr := stage_1_pht_lookup(0)

    stage_1_pht_lookup(0) := Cat(bhts_banks.out ,io.pc(14,11))



    phts_banks.aw_addr := io.aw_pht_addr
    phts_banks.aw_pht_addr := io.aw_pht_ways_addr
    phts_banks.aw_bank_sel := io.write_pc(3,2)
    phts_banks.write := io.pht_write
    phts_banks.in := io.pht_in


    btb_banks.ar_addr := io.pc
    btb_banks.aw_addr   := io.write_pc
    btb_banks.aw_target_addr := io.aw_target_addr
    btb_banks.write := io.btb_write

    



    io.out := phts_banks.out

    io.bht := bhts_banks.out

    io.pre := branch_prediction_state_machine_code_decoder(io.out)

    io.pre_target := btb_banks.out

    io.btb_hit(0) := btb_banks.hit
    io.pht_lookup_value_out := phts_banks.pht_out


}
