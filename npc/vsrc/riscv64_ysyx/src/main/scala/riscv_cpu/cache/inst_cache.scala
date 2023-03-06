package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import os.write



class inst_cache  extends Module with riscv_macros {
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val inst_num_in_one_sram = 2

    val inst_cache_size  = 4096;
    val inst_cache_bank_num = 2;
    // val inst_cache_
    val inst_cache_ways_num = 2;

    val io = IO(new Bundle {
        val port = new axi_ram_port
        val     sram_hit   = Output(UInt(1.W))
        // val     sram_write_en  = Output(UInt(2.W))
        val     fec_1_pc_valid = Output(UInt(3.W))
       // val     cache_working_on = Output(Bool())
        val     stage2_flush = Input(Bool())
        val     stage2_stall = Output(Bool())
        val     stage1_valid_flush = Input(Bool())
        val     inst_ready_to_use = Input(Bool())
        val     inst_buffer_full = Input(Bool())
        val     stage2_exception = Output(UInt(2.W))

        //tlb 有关信号
        // if(tlb_on) {
            val     csr_asid = Input(UInt(8.W))

            val     v_addr_for_tlb = Output(UInt(data_length.W))
            val     p_addr_for_tlb = Input(UInt(data_length.W))
            //发起tlb查找请求
            //部分地址需要进行mmu 映射
            val     tlb_req        = Output(Bool())
            val     tlb_exception  = Input(UInt(2.W))

        // }else {
        //     val csr_asid = 0.U
        //     val v_addr_for_tlb  = Wire(UInt(data_length.W))
        //     val p_addr_for_tlb  = v_addr_for_tlb
        //     val tlb_req = Wire(Bool())
        //     val tlb_exception = 0.U
        // }
        val     inst_ready_branch = (Input(Bool()))
        val     inst_buffer_empty  =  (Input(Bool()))

        val     sram_req    = Input(UInt(1.W))
        val     sram_wr     = Input(UInt(1.W))
        val     sram_size   = Input(UInt(2.W))
        val     sram_addr   = Input(UInt(data_length.W))
        val     sram_wdata  = Input(UInt(32.W))
        val     sram_addr_ok= Output(UInt(1.W))
        val     sram_data_ok= Output(UInt(1.W))
        val     sram_data_valid = Output(UInt(3.W))
        val     sram_write_en  = Output(UInt(2.W))//有多少位数据是有效的

        val     sram_rdata_L  = Output(UInt(40.W))

        val     sram_cache = Input(UInt(1.W))

        val     tag_valid_flush = Input(Bool())

        val     sram = Vec(2 * 2,Flipped(new sram_port))


    })

  

    val lru = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
  
    val stage1_flush = Wire(Bool())
    val stage1_stall = Wire(Bool())
    val stage2_flush = Wire(Bool())
    val stage2_stall = Wire(Bool())
   
    val icache_tag_0     = Module(new icache_tag).io
    
    val icache_tag_1     = Module(new icache_tag).io
    // if()
    icache_tag_0.asid := io.csr_asid
    icache_tag_1.asid := io.csr_asid
    icache_tag_0.tag_all_flush := io.tag_valid_flush
    icache_tag_1.tag_all_flush := io.tag_valid_flush
    val icache_data_way0 =  VecInit(Seq.fill(2)(Module(new icache_data).io))
    val icache_data_way1 =  VecInit(Seq.fill(2)(Module(new icache_data).io))

    icache_data_way0(0).sram <> io.sram(0)
    icache_data_way0(1).sram <> io.sram(1)
    icache_data_way1(0).sram <> io.sram(2)
    icache_data_way1(1).sram <> io.sram(3)
        // icache_data_way0(0).
    val state_reset = 0.U
    val state_lookup = 1.U
    val state_access_ram_0 =  "b0010".U
    val state_access_ram_1 = "b0011".U
    val state_data_ready   = "b0100".U
    val state_miss_access_ram_0 = "b0101".U
    val state_miss_access_ram_1 = "b0110".U
    val state_miss_update       = "b0111".U

    val work_state = RegInit(state_lookup)
    val access_work_state = Wire(UInt(4.W))
    val write_counter  = RegInit(0.U(3.W))
    val wait_data_L  = RegInit(0.U(40.W))
    val hit_reg = RegInit(0.U(1.W))
    //copy from thu llcl 
    //all control signals
    stage1_flush := !stage1_stall && io.stage1_valid_flush
    stage2_flush := io.stage2_flush
    stage1_stall := io.sram_req
    io.stage2_stall := stage2_stall
    //满了就停止流水线嘛
   
    
    val stage1_stall_reg = RegInit(0.U.asBool)
    stage1_stall_reg := stage1_stall //将stall信号延迟一个周期，以取
    //stage 1  打一拍存下数据sram信号，输入仅有一个信号，输出按照pc和pc+4给出
    val stage1_sram_addr_reg = RegEnable(Mux(stage1_flush,0.U,io.sram_addr),0.U,stage1_stall ) //把这个加4的过程放到stage2，尽量减少stage1的逻辑层数
    val stage1_sram_phy_addr_reg = RegInit(0.U(data_length.W))
    val stage1_sram_cache_reg = RegEnable(Mux(stage1_flush,0.U,io.sram_cache),0.U(1.W),stage1_stall )   
    val stage1_sram_req_reg = RegEnable(Mux(stage1_flush,0.U,io.inst_ready_to_use),0.U(1.W),stage1_stall || stage1_flush) 


    val stage1_finished = RegInit(0.U.asBool)
    val stage1_exception = RegInit(0.U(2.W))

    val stage1_addr_line_mapping = memory_mapping(stage1_sram_addr_reg)

    val stage2_exception = RegInit(0.U(2.W))

    // val access_work_state_for_lookup = Wire(Bool())
    //要不要进行tlb查询
    io.tlb_req := check_mapped(stage1_sram_addr_reg) 
    io.v_addr_for_tlb := stage1_sram_addr_reg 

    /**********段時間內向不用mmu************/
    stage1_sram_phy_addr_reg  :=  Mux(stage1_stall_reg,io.p_addr_for_tlb,stage1_sram_phy_addr_reg)
   

    stage1_finished := Mux(stage1_stall.asBool,0.U,Mux(work_state === state_miss_update || work_state === state_access_ram_1 ,1.U,0.U))

        // Mux(io.stage1_valid_flush(0),1.U,Mux(/*work_state === state_data_ready || work_state === state_lookup*/0.U.asBool,0.U,
        // Mux(io.stage1_valid_flush(1),2.U,stage1_sram_valid)))

    stage2_stall := (access_work_state === state_lookup  || access_work_state === state_data_ready || stage1_exception =/= 0.U) &&
         (!io.inst_buffer_full  ) //有分支指令导致的挂逼

    icache_tag_0.op     := 0.U
    icache_tag_1.op     := 0.U
    
    icache_tag_0.addr   := stage1_sram_addr_reg
    icache_tag_1.addr   := stage1_sram_addr_reg

    val decoder_inst_data_0 = Cat(Branch_data_Decoder(io.port.rdata(31,0)),Jump_Decoder(io.port.rdata(31,0)),Branch_Decoder(io.port.rdata(31,0)),io.port.rdata(31,0))
    val decoder_inst_data_1 = Cat(Branch_data_Decoder(io.port.rdata(63,32)),Jump_Decoder(io.port.rdata(63,32)),Branch_Decoder(io.port.rdata(63,32)),io.port.rdata(63,32))
    val decoder_inst_data  = Mux(stage1_sram_addr_reg(2),decoder_inst_data_1,decoder_inst_data_0)

    for(i <- 0 to (inst_cache_bank_num - 1) ) {
        // pre decoder
        // Cat(Branch_data_Decoder(io.port.rdata(31,0)),Jump_Decoder(io.port.rdata(31,0)),Branch_Decoder(io.port.rdata(31,0)),
        icache_data_way0(i).addr := stage1_sram_addr_reg
        icache_data_way0(i).wdata := Cat(io.port.rdata(63,32),io.port.rdata(31,0))
        icache_data_way0(i).en := 1.U
    }
    for(i <- 0 to (inst_cache_bank_num - 1)  ) {
        icache_data_way1(i).addr := stage1_sram_addr_reg
        icache_data_way1(i).wdata := Cat(io.port.rdata(63,32),io.port.rdata(31,0))
        icache_data_way1(i).en := 1.U
    }

    val hit = (icache_tag_0.hit.asBool && icache_tag_0.valid.asBool) || 
        (icache_tag_1.hit.asBool && icache_tag_1.valid.asBool)

    lru(stage1_sram_addr_reg(10,4)) := Mux(access_work_state === state_lookup,
        Mux(icache_tag_0.hit.asBool /*&& icache_tag_0.valid.asBool*/,1.U.asBool,
        Mux(icache_tag_1.hit.asBool /*&& icache_tag_1.valid.asBool*/,0.U.asBool,lru(stage1_sram_addr_reg(10,4)) )),
        Mux(work_state === state_miss_update,~lru(stage1_sram_addr_reg(10,4)),  lru(stage1_sram_addr_reg(10,4)) ))

    val hit0 = icache_tag_0.hit.asBool && icache_tag_0.valid.asBool
    val hit1 = icache_tag_1.hit.asBool && icache_tag_1.valid.asBool
 
    val stage2_sram_addr_reg = RegInit(0.U(3.W))//RegEnable(Mux(stage2_flush,0.U,stage1_sram_addr_reg),0.U,stage2_stall) //把这个加4的过程放到stage2，尽量减少stage1的逻辑层数

    stage2_sram_addr_reg :=  Mux(stage2_flush,0.U,Mux(stage2_stall,Cat(stage1_sram_addr_reg(3),stage1_sram_addr_reg(1,0)),stage2_sram_addr_reg))

    val stage2_sram_cache_reg = RegInit(0.U.asBool)
    stage2_sram_cache_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,stage1_sram_cache_reg,stage2_sram_cache_reg))
        
    val stage2_sram_req_reg = RegInit(0.U.asBool)
    stage2_sram_req_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,stage1_sram_req_reg,Mux(io.sram_write_en === 0.U,stage2_sram_req_reg,0.U)))
  
    
    val stage2_hit0_reg = RegInit(0.U.asBool)
    stage2_hit0_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,hit0,stage2_hit0_reg))
        

    val stage2_hit1_reg = RegInit(0.U.asBool)
    stage2_hit1_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,hit1,stage2_hit1_reg))
       

    val stage2_hit_reg  = RegInit(0.U.asBool)
    stage2_hit_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,hit,stage2_hit_reg))
        
    val stage2_data_valid_reg = RegInit(0.U(3.W))
    
    stage2_exception  := Mux(stage2_stall,stage1_exception,Mux(stage2_flush,0.U,stage2_exception))

    stage2_data_valid_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,"b001".U,stage2_data_valid_reg))

    val stage2_write_en_reg = RegInit(0.U(2.W))
    //要分支并且inst_buffer并不是空的
    stage2_write_en_reg := Mux(io.stage1_valid_flush,0.U,Mux(stage2_stall,1.U,stage2_write_en_reg))
       
    //stage 3  存入指令缓冲队列，在issue阶段前仍然为顺序结构

  
    val word_L_selection0 = icache_data_way0(stage2_sram_addr_reg(2)).rdata
    val word_L_selection1 = icache_data_way1(stage2_sram_addr_reg(2)).rdata


    val hit_word_L = Mux(stage2_hit0_reg.asBool,word_L_selection0,word_L_selection1) //如果没有命中可以通过data_ok来判断是否需要接受数据
 
    val has_stage2_stall = RegInit(0.U.asBool)
    has_stage2_stall := stage2_stall

    val sram_rdata_L_Reg = RegInit(0.U(40.W))


    val access_sram_rdata_L =  Mux(work_state === state_data_ready ,wait_data_L,Mux(work_state === state_lookup,hit_word_L,0.U))
  

    sram_rdata_L_Reg := Mux(has_stage2_stall,access_sram_rdata_L,sram_rdata_L_Reg)
    
    io.sram_data_valid := stage2_data_valid_reg

    for(i <- 0 to (inst_cache_bank_num - 1) ) {icache_data_way0(i).wen  := Mux(work_state === state_miss_access_ram_1 && io.port.rvalid.asBool
        && lru(stage1_sram_addr_reg(10,4)) === 0.U && write_counter === i.asUInt,"b11111111".U,0.U) }
    for(i <- 0 to (inst_cache_bank_num - 1) ) {icache_data_way1(i).wen  := Mux(work_state === state_miss_access_ram_1 && io.port.rvalid.asBool
        && lru(stage1_sram_addr_reg(10,4)) === 1.U && write_counter === i.asUInt,"b11111111".U,0.U) }
    
    io.sram_rdata_L := Mux(!io.inst_buffer_full && has_stage2_stall,access_sram_rdata_L,sram_rdata_L_Reg)
  

    access_work_state :=  Mux(work_state===state_access_ram_0 && io.port.arready.asBool,state_access_ram_1,
        Mux(work_state===state_access_ram_1 ,Mux(io.port.rlast.asBool && io.port.rvalid.asBool,state_data_ready,state_access_ram_1),
        Mux(work_state===state_data_ready,Mux(hit.asBool.asBool,Mux(stage1_sram_req_reg.asBool,Mux(stage1_sram_cache_reg.asBool,state_lookup,Mux(stage1_finished,state_data_ready,state_access_ram_0)),state_lookup),
           Mux(stage1_sram_req_reg.asBool,Mux(stage1_sram_cache_reg.asBool,Mux(stage1_finished,state_data_ready,state_miss_access_ram_0),Mux(stage1_finished,state_data_ready,state_access_ram_0)),state_lookup)),
           //Mux(stage1_sram_req_reg.asBool,Mux(stage1_sram_cache_reg.asBool,state_lookup,state_access_ram_0),state_lookup),
        Mux(work_state===state_lookup,Mux(hit.asBool.asBool,Mux(stage1_sram_req_reg.asBool,Mux(stage1_sram_cache_reg.asBool,state_lookup,state_access_ram_0),state_lookup),
           Mux(stage1_sram_req_reg.asBool,Mux(stage1_sram_cache_reg.asBool,state_miss_access_ram_0,state_access_ram_0),state_lookup)),
        Mux(work_state===state_miss_access_ram_0 && io.port.arready.asBool,state_miss_access_ram_1,
        Mux(work_state===state_miss_access_ram_1 ,Mux(io.port.rlast.asBool && io.port.rvalid.asBool,state_miss_update,work_state),
        Mux(work_state===state_miss_update,state_data_ready,work_state)))))))//咱们复位都是在一个时钟周期内复位的


    work_state := Mux(stage1_exception =/= 0.U,state_lookup,access_work_state)

    wait_data_L := Mux(work_state === state_access_ram_1 && io.port.rvalid.asBool && write_counter === 0.U,decoder_inst_data,
         Mux(work_state === state_miss_access_ram_1 && io.port.rvalid.asBool && write_counter === stage1_sram_addr_reg(3),
            decoder_inst_data,wait_data_L))



    write_counter :=  Mux(work_state === state_miss_access_ram_1 || work_state === state_access_ram_1,Mux(io.port.rvalid.asBool && io.port.rlast.asBool,0.U,Mux(io.port.rvalid.asBool,write_counter+1.U,write_counter)),write_counter)
    icache_tag_0.wen := Mux(work_state === state_miss_update  && lru(stage1_sram_addr_reg(10,4)) === 0.U,1.U,0.U)
    icache_tag_1.wen := Mux(work_state === state_miss_update  && lru(stage1_sram_addr_reg(10,4)) === 1.U,1.U,0.U)
    icache_tag_0.wdata := Mux(work_state === state_miss_update  ,Cat(1.U(1.W),stage1_sram_addr_reg(31,11)),0.U)  
    icache_tag_1.wdata := Mux(work_state === state_miss_update  ,Cat(1.U(1.W),stage1_sram_addr_reg(31,11)),0.U)

       
    io.fec_1_pc_valid := Mux(!stage1_sram_cache_reg.asBool,"b111".U,Mux(stage1_sram_addr_reg(4,2) <= 5.U , "b111".U,
        Mux(stage1_sram_addr_reg(4,2)  === 6.U,"b011".U,"b001".U)))

    io.stage2_exception := stage2_exception
    //axi signal
    io.port.arid := 0.U
    io.port.araddr := Mux(work_state === state_access_ram_0,stage1_sram_phy_addr_reg,
        Mux(work_state === state_miss_access_ram_0,Cat(stage1_sram_phy_addr_reg(63,4),0.U(4.W)),0.U))
    //io.port.arlen  := Mux(stage1_sram_cache_reg.asBool,"b111".U,"b010".U)
    io.port.arlen  := Mux(stage1_sram_cache_reg.asBool,"b001".U,0.U)
    io.port.arsize := Mux(stage1_sram_cache_reg.asBool,"b011".U,"b010".U)
    io.port.arburst := Mux(stage1_sram_cache_reg.asBool,1.U,0.U)
    //io.port.arburst := 1.U//Mux(sram_cache_reg.asBool,1.U,0.U) //啥时候都得burst传输 如果都可以burst传输的话，不知道支持不支持burst
    // io.port.arlock  := 0.U
    // io.port.arcache := 0.U
    // io.port.arprot  := 0.U
    io.port.arvalid := (work_state === state_access_ram_0 || work_state === state_miss_access_ram_0) && stage1_exception === 0.U
    io.port.rready  := 1.U

    io.sram_addr_ok := 1.U
    io.sram_data_ok := Mux(work_state === state_data_ready,1.U,0.U)//|write_counter_same
    io.sram_hit :=  Mux(work_state === state_lookup ,stage2_hit_reg,0.U)

    //io.port.sram_write_en := Mux(io.sram_hit.asBool || io.port.sram_data_ok.asBool,stage2_write_en_reg,0.U)

       // don't care
    io.port.awid    := "b0001".U
    io.port.awaddr  := "b0".U
    io.port.awlen   := "b0".U
    io.port.awsize  := "b010".U
    io.port.awburst := "b00".U
    // io.port.awlock  := "b00".U
    // io.port.awcache := "b0000".U
    // io.port.awprot  := "b000".U
    io.port.awvalid := "b0".U

    // io.port.wid    := "b0001".U
    io.port.wdata  := "b0".U
    io.port.wstrb  := "b0000".U
    io.port.wlast  := "b0".U
    io.port.wvalid := "b0".U

    io.port.bready := 0.U
    // io.port.arqos := 0.U

    io.sram_write_en := Mux(io.inst_buffer_full,0.U, Mux((stage2_sram_req_reg /*&& (io.sram_data_ok.asBool || io.sram_hit.asBool )*/) || 
        (!stage2_sram_req_reg && stage2_sram_addr_reg(1,0) =/= 0.U ) ,stage2_write_en_reg,0.U))//当出现inst error 的时候
}
// object inst_cache_test extends App{
//     (new ChiselStage).emitVerilog(new inst_cache)
// }


