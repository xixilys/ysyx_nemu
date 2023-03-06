package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import scala.math._
import scala.reflect.runtime.Macros
import javax.swing.plaf.basic.BasicToolBarUI

class data_cache  extends Module with riscv_macros {
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val data_length_width = Chisel.`package`.log2Up(data_length / 8)
    val bank_num = 2
    val bank_num_width = Chisel.`package`.log2Up(bank_num)
    val sum_width =  10 - 4 + 1
    val io = IO(new Bundle {
       
        val port = new axi_ram_port
        
        val stage2_stall = Output(Bool())
        val csr_asid = Input(UInt(8.W))
        val stage1_wr = Output(Bool())

        val v_addr_for_tlb = Output(UInt(addr_length.W))
        val p_addr_for_tlb = Input(UInt(addr_length.W))
        //发起tlb查找请求
        //部分地址需要进行mmu 映射
        
        val tlb_exception  = Input(UInt(3.W))
        //stage1就需要把产生例外的信息扔到内核里面去
        val stage1_tlb_exception = Output(UInt(3.W))
        val data_wstrb = Input(UInt((data_length / 8).W))

         // from cpu  sram like
        val sram_req    = Input(UInt(1.W))
        val sram_wr     = Input(UInt(1.W))
        val sram_size   = Input(UInt(3.W))
        val sram_addr   = Input(UInt(addr_length.W))
        val sram_wdata  = Input(UInt(data_length.W))
        val sram_addr_ok= Output(UInt(1.W))
        val sram_data_ok= Output(UInt(1.W))
        val sram_rdata  = Output(UInt(data_length.W))
        // val     sram_data_valid = Output(UInt(3.W))

        // val     sram_rdata_L  = Output(UInt(32.W))
        // val     sram_rdata_M  = Output(UInt(32.W))
        // val     sram_rdata_R  = Output(UInt(32.W))

        val sram_cache = Input(UInt(1.W))
        val fence_i_control = Input(Bool())
        val sram = Vec(bank_num * 2,Flipped(new sram_port))
    })
    val tlb_req        = Wire(Bool())

    val work_state = RegInit("b11000".U(5.W))
    val access_work_state = Wire(UInt(5.W))
    val write_counter  = RegInit(0.U(3.W))
    val read_counter  = RegInit(0.U(3.W))
    val wait_data  = RegInit(0.U(data_length.W))


    val dcache_tag_0 = Module(new dcache_tag).io
    val dcache_tag_1 = Module(new dcache_tag).io

    val lru = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    val way0_dirty = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    val way1_dirty = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
    
    val way0_wen =  Wire(Vec(bank_num,UInt(1.W)))
    val way1_wen =  Wire(Vec(bank_num,UInt(1.W)))
    val stage1_sram_addr_reg = RegInit(0.U(addr_length.W))
    val stage1_sram_cache_reg = RegInit(0.U(1.W))
    val stage1_sram_wdata_reg = RegInit(0.U(data_length.W))
    val stage1_sram_size_reg = RegInit(0.U(3.W))
    val stage1_sram_wr_reg = RegInit(0.U(1.W))
    val stage1_sram_req_reg = RegInit(0.U.asBool)

    val stage1_sram_hit0_reg  = RegInit(0.U.asBool)
    val stage1_sram_hit1_reg  = RegInit(0.U.asBool)
    val stage1_sram_valid0_reg  = RegInit(0.U.asBool)
    val stage1_sram_valid1_reg  = RegInit(0.U.asBool)
    val stage1_wstrb_reg = RegInit(0.U((data_length / 8).W))
    
    val stage1_sram_phy_addr_reg = RegInit(0.U(addr_length.W))
    val stage1_exception  =  RegInit(0.U(3.W))
    // val stage1_sram_hit_reg  = RegInit(0.U.asBool)
    // val stage1_sram_hit_reg  = RegInit(0.U.asBool)
    // val sram_req_reg  = RegInit(0.U(1.W))
    // val access_cache_addr =  Mux(io.sram_req.asBool,io.sram_addr,sram_addr_reg)
    // val access_cache_size =  Mux(io.sram_req.asBool,io.sram_size,sram_size_reg)
    // val access_cache_wdata =  Mux(io.sram_req.asBool,io.sram_wdata,sram_wdata_reg)
    // val access_cache_wr =  Mux(io.sram_req.asBool,io.sram_wr,sram_wr_reg)    
    // val access_cache_state =  Mux(io.sram_req.asBool,io.sram_cache,sram_cache_reg)        
    val dirty_victim = Wire(UInt(1.W))
    val dcache_data_way0 =  VecInit(Seq.fill(bank_num)(Module(new dcache_data).io))
    val dcache_data_way1 =  VecInit(Seq.fill(bank_num)(Module(new dcache_data).io))
    val hit_0_reg       = RegInit(0.U(1.W))
    val hit_1_reg       = RegInit(0.U(1.W))

    io.sram(0) <> dcache_data_way0(0).sram
    io.sram(1) <> dcache_data_way0(1).sram
    io.sram(2) <> dcache_data_way1(0).sram
    io.sram(3) <> dcache_data_way1(1).sram

    //val state_reset = "b00000".U;
    // val state_miss_write_write_1 = "b10000".U
    // val state_miss_write_write_2 = "b10001".U
    // val state_miss_access_ram_read_2 = "b10010".U
    // val state_miss_access_ram_read_3 = "b10011".U
    // val state_miss_write_update = "b10100".U


    val state_miss_access_ram_read_3 = "b00000".U
    val state_access_ram_read_0      = "b00001".U;
    val state_access_ram_read_1      = "b00010".U;
    val state_access_ram_write_0     = "b00011".U;
    val state_access_ram_write_1     = "b00100".U;
    val state_access_ram_write_2     = "b00101".U;

    val state_miss_write_write_1     = "b00110".U
    val state_miss_write_write_2     = "b00111".U
    val state_miss_access_ram_read_2 = "b01000".U

    val state_miss_write_read_0      = "b01001".U
    val state_miss_write_read_1      = "b01010".U
    val state_miss_write_read_2      = "b01011".U
    val state_miss_access_ram_read_0 = "b01100".U
    val state_miss_access_ram_read_1 = "b01101".U
    val state_miss_read_update       = "b01110".U
    val state_miss_write_write_0     = "b01111".U
    val state_miss_write_update      = "b10000".U
    val state_clear_all_cache_0      = "b10001".U
    val state_clear_write_cache_0    = "b10010".U
    val state_clear_write_cache_1    = "b10011".U
    val state_clear_write_cache_2    = "b10100".U
    val state_clear_all_cache_1      = "b10101".U
    

    val state_data_ready = "b11000".U;
    val state_lookup = "b11001".U;
    //清空整个dcache
    //只有当 dirty and valid才需要write back
    val data_cache_under_write_all_back = RegInit(0.U.asBool())
    val data_should_write_back = Wire(Bool())
    val data_all_write_back    = Wire(Bool())
    val data_write_back_counter = RegInit(0.U((sum_width + 1).W))
    val data_write_back_way    = Wire(Bool())
    val data_cache_under_write_back = (work_state === state_clear_all_cache_0 || work_state === state_clear_all_cache_1 || work_state === state_clear_write_cache_0
        || work_state === state_clear_write_cache_1 || work_state === state_clear_write_cache_2)
    // val all_invalid_counter = RegInit(0.U(sum_width.W))   
    //计数到满
    data_write_back_counter := MuxCase(data_write_back_counter,Seq(
        (work_state === state_clear_all_cache_0 && !data_should_write_back) ->  (data_write_back_counter + 1.U),
        (work_state === state_clear_all_cache_1)  ->   (data_write_back_counter + 1.U)
    ))//Mux(work_state === state_clear_all_cache_0 ,data_write_back_counter + 1.U,data_write_back_counter)
    // data
    // data_should_write_back := data_write_back_counter =/= pow(2,sum_width + 1).toInt.asUInt
    data_all_write_back    := data_write_back_counter === (pow(2,sum_width + 1).toInt - 1).asUInt
    data_should_write_back := Mux(data_write_back_counter(sum_width),dcache_tag_1.w_valid &&  way1_dirty(data_write_back_counter(sum_width - 1 ,0)).asBool,
        dcache_tag_0.w_valid && way0_dirty(data_write_back_counter(sum_width - 1 ,0)).asBool) 
        // way0_dirty(stage)
        //  way0_dirty(stage1_sram_addr_reg(10,4)),way1_dirty(stage1_sram_addr_reg(10,4))

    val stage2_stall = Wire(Bool())
    val stage2_flush = 0.U.asBool
    io.stage2_stall := stage2_stall

    val stage2_addr_same_as_stage1 = Wire(Bool())
    val stage2_exception  =  RegInit(0.U(3.W))
    val stage2_wdata_reg = RegEnable(Mux(stage2_flush,0.U,stage1_sram_wdata_reg),0.U,stage2_stall)
        //RegInit(0.U(32.W))

    val state_ready_lookup_will_to_be  = Wire(UInt(5.W))
    val state_lookup_for_less_delay = Wire(UInt(5.W))

    val stage2_sram_write_reg = RegInit(0.U.asBool)

    val stage2_sram_cache_reg = RegInit(0.U.asBool)
        


    val stage1_addr_req_not_same = RegInit(0.U.asBool)
    val stage1_stall_reg = RegInit(0.U.asBool)
    stage1_stall_reg := io.sram_req.asBool //将req信号延迟一个周期，以取

    val write_access_complete_reg = RegInit(0.U.asBool)

    stage1_addr_req_not_same := stage1_sram_addr_reg =/= io.sram_addr

    stage1_sram_addr_reg := Mux(io.sram_req.asBool,io.sram_addr,stage1_sram_addr_reg)
    stage1_sram_cache_reg := Mux(io.sram_req.asBool,io.sram_cache,stage1_sram_cache_reg)
    stage1_sram_wdata_reg := Mux(io.sram_req.asBool,io.sram_wdata,stage1_sram_wdata_reg)
    stage1_sram_size_reg  := Mux(io.sram_req.asBool,io.sram_size,stage1_sram_size_reg)
    stage1_sram_wr_reg    := Mux(io.sram_req.asBool,io.sram_wr,stage1_sram_wr_reg)
    stage1_sram_req_reg   := Mux(io.sram_req.asBool,1.U,Mux(stage2_stall,0.U,stage1_sram_req_reg))
    stage1_wstrb_reg      := Mux(io.sram_req.asBool,io.data_wstrb,stage1_wstrb_reg)

    stage1_sram_hit0_reg := Mux(io.sram_req.asBool,dcache_tag_0.hit,stage1_sram_hit0_reg)
    stage1_sram_hit1_reg := Mux(io.sram_req.asBool,dcache_tag_1.hit,stage1_sram_hit1_reg)
    stage1_sram_valid0_reg := Mux(io.sram_req.asBool,dcache_tag_0.valid,stage1_sram_valid0_reg)
    stage1_sram_valid1_reg := Mux(io.sram_req.asBool,dcache_tag_1.valid,stage1_sram_valid1_reg)
    // sram_req_reg := io.sram_req
//简单起见，将后面的东西
    way0_dirty(stage1_sram_addr_reg(10,4)) := Mux(state_lookup_for_less_delay === state_lookup && stage1_sram_wr_reg.asBool && stage1_sram_hit0_reg && stage1_sram_valid0_reg,1.U,
        Mux(work_state === state_miss_read_update && lru(stage1_sram_addr_reg(10,4)) === 0.U,0.U,
        Mux(work_state === state_miss_write_update &&lru(stage1_sram_addr_reg(10,4)) === 0.U,1.U,way0_dirty(stage1_sram_addr_reg(10,4)))))//告诉我有没有脏数据，只需要在这些情况进行更新

    way1_dirty(stage1_sram_addr_reg(10,4)) := Mux(state_lookup_for_less_delay === state_lookup && stage1_sram_wr_reg.asBool && stage1_sram_hit1_reg && stage1_sram_valid1_reg,1.U,
        Mux(work_state === state_miss_read_update && lru(stage1_sram_addr_reg(10,4)) === 1.U,0.U,
        Mux(work_state === state_miss_write_update &&lru(stage1_sram_addr_reg(10,4)) === 1.U,1.U,way1_dirty(stage1_sram_addr_reg(10,4)))))


    // val dirty_victim_addr = stage1_sram_addr_reg//Mux(io.sram_req.asBool,io.sram_addr,sram_addr_reg)
    dirty_victim := Mux(lru(stage1_sram_addr_reg(10,4)) === 0.U,way0_dirty(stage1_sram_addr_reg(10,4)),way1_dirty(stage1_sram_addr_reg(10,4)))//index

    dcache_tag_0.op  := 0.U
    dcache_tag_1.op  := 0.U
    dcache_tag_0.waddr := Mux(data_cache_under_write_back,Cat(data_write_back_counter(sum_width - 1 ,0),0.U(4.W)),stage1_sram_addr_reg)
    dcache_tag_1.waddr := Mux(data_cache_under_write_back,Cat(data_write_back_counter(sum_width - 1 ,0),0.U(4.W)),stage1_sram_addr_reg)

    dcache_tag_0.raddr := io.sram_addr
    dcache_tag_1.raddr := io.sram_addr

    val stage1_addr_line_mapping = memory_mapping(stage1_sram_addr_reg)

    tlb_req := check_mapped(stage1_sram_addr_reg) && stage1_sram_req_reg
    io.v_addr_for_tlb := stage1_sram_addr_reg
    io.stage1_wr      := stage1_sram_wr_reg
    stage1_sram_phy_addr_reg  := Mux(stage1_stall_reg,memory_mapping(Mux(tlb_req,io.p_addr_for_tlb,stage1_sram_addr_reg)),stage1_sram_phy_addr_reg)
    stage1_exception := Mux(stage2_stall,0.U,io.tlb_exception)

    
    lru(stage1_sram_addr_reg(10,4)) := Mux(state_lookup_for_less_delay === state_lookup,
        Mux(stage1_sram_hit0_reg && stage1_sram_valid0_reg,1.U.asBool,
        Mux(stage1_sram_hit1_reg &&stage1_sram_valid1_reg,0.U.asBool,lru(stage1_sram_addr_reg(10,4)) )),
        Mux(work_state === state_miss_read_update||work_state === state_miss_write_update,~lru(stage1_sram_addr_reg(10,4)),  lru(stage1_sram_addr_reg(10,4))))
    
    val hit = (stage1_sram_hit0_reg && stage1_sram_valid0_reg) ||
        (stage1_sram_hit1_reg && stage1_sram_valid1_reg)
   
        // 还没弄完
    data_cache_under_write_all_back := Mux(work_state === state_data_ready || work_state === state_lookup,io.fence_i_control,data_cache_under_write_all_back)
    state_ready_lookup_will_to_be := Mux(io.fence_i_control,state_clear_all_cache_0,
            Mux(hit,Mux(stage1_sram_req_reg.asBool,Mux(stage1_sram_wr_reg.asBool,
            Mux(stage1_sram_cache_reg.asBool,state_lookup,state_access_ram_write_0),Mux(stage1_sram_cache_reg.asBool,state_lookup,state_access_ram_read_0)),state_lookup),
            Mux(stage1_sram_req_reg.asBool,Mux(!stage1_sram_cache_reg.asBool,Mux(stage1_sram_wr_reg.asBool,state_access_ram_write_0,state_access_ram_read_0),
            Mux(dirty_victim.asBool,state_miss_write_read_0,Mux(stage1_sram_wr_reg.asBool,state_miss_access_ram_read_2,state_miss_access_ram_read_0))),state_lookup)))
   
    val state_ready_lookup_should_be = Mux(hit,Mux(stage1_sram_req_reg.asBool,Mux(stage1_sram_cache_reg.asBool,state_lookup,0.U),state_lookup),
            Mux(stage1_sram_req_reg.asBool,0.U,state_lookup))

  
    access_work_state := MuxLookup(work_state,work_state,Seq(
        state_access_ram_read_0 -> Mux(io.port.arready.asBool, state_access_ram_read_1,work_state),
        state_access_ram_read_1 -> Mux(io.port.rvalid.asBool,state_data_ready,work_state),
        state_data_ready        -> state_ready_lookup_will_to_be,
        state_access_ram_write_0-> Mux(io.port.awready.asBool,Mux(io.port.wready.asBool,state_access_ram_write_2,state_access_ram_write_1),work_state),
        state_access_ram_write_1-> Mux(io.port.wready.asBool,state_access_ram_write_2,work_state),
        state_access_ram_write_2-> Mux(io.port.bvalid.asBool ,state_data_ready,state_access_ram_write_2),

        state_lookup            -> state_ready_lookup_will_to_be,
        state_miss_access_ram_read_0 -> Mux(io.port.arready.asBool,state_miss_access_ram_read_1,work_state),
        state_miss_access_ram_read_1 -> Mux(io.port.rlast.asBool && io.port.rvalid.asBool,Mux(stage1_sram_wr_reg.asBool,state_miss_write_update,state_miss_read_update),work_state),
        state_miss_read_update    -> state_data_ready,
        state_miss_write_read_0   -> Mux(io.port.awready.asBool,state_miss_write_read_1,work_state),
        state_miss_write_read_1   -> Mux(io.port.wready.asBool && write_counter === (bank_num - 1).U,state_miss_write_read_2,work_state),
        state_miss_write_read_2   -> Mux(io.port.bvalid.asBool,state_miss_access_ram_read_0,work_state),
       // state_lookup      -> Mux(hit,state_data_ready,Mux(dirty_victim.asBool,state_miss_write_write_0,state_miss_access_ram_read_2)),
        state_miss_access_ram_read_2 -> Mux(io.port.arready.asBool,state_miss_access_ram_read_3,work_state),
        state_miss_access_ram_read_3 -> Mux(io.port.rvalid.asBool  && io.port.rlast.asBool,state_miss_write_update,work_state),
        state_miss_write_update   -> state_data_ready,
        state_miss_write_write_0  -> Mux(io.port.awready.asBool,state_miss_write_write_1,work_state),
        state_miss_write_write_1  -> Mux(io.port.wready.asBool && write_counter === (bank_num - 1).U , state_miss_write_write_2,work_state),
        state_miss_write_write_2  -> Mux(io.port.bvalid.asBool,state_miss_access_ram_read_2,work_state),
        //状态机利用之前的write back的
        // state_clear_all_cache_0   -> Mux(data_should_write_back,state_clear_write_cache_0,Mux(data_all_write_back,state_clear_all_cache_1,work_state)),
         state_clear_all_cache_0   -> Mux(data_should_write_back,state_clear_write_cache_0,Mux(data_all_write_back,state_data_ready,work_state)),
        state_clear_write_cache_0 -> Mux(io.port.awready.asBool,state_clear_write_cache_1,work_state),
        state_clear_write_cache_1 -> Mux(io.port.wready.asBool && write_counter === (bank_num - 1).U,state_clear_write_cache_2,work_state),
        state_clear_write_cache_2 -> Mux(io.port.bvalid.asBool,state_clear_all_cache_1,work_state),
        state_clear_all_cache_1   -> Mux(data_all_write_back,state_data_ready,state_clear_all_cache_0)))
      
    val access_work_state_for_stall = MuxLookup(work_state,work_state(4,3),Seq(
        state_access_ram_read_1 -> Mux(io.port.rvalid.asBool,state_data_ready(4,3),work_state(4,3)),
        state_data_ready        -> state_ready_lookup_should_be(4,3),
        state_access_ram_write_2->  Mux(io.port.bvalid.asBool ,state_data_ready(4,3),state_access_ram_write_2(4,3)),
        state_lookup            -> state_ready_lookup_should_be(4,3),
        state_miss_read_update    -> state_data_ready(4,3),
        state_miss_write_update   -> state_data_ready(4,3)))

    state_lookup_for_less_delay := MuxLookup(work_state,work_state,Seq(
        state_data_ready        -> state_ready_lookup_should_be,
        state_lookup            -> state_ready_lookup_should_be))

    stage2_stall := access_work_state_for_stall=== "b11".U || stage1_exception =/= 0.U
   //stage1 打一拍接收数据
    work_state := Mux(stage1_exception =/= 0.U,state_lookup,access_work_state)
    //axi总线写完下一刻就读可能会导致数据错误
    wait_data := Mux(work_state === state_access_ram_read_1 && io.port.rvalid.asBool,io.port.rdata,
        Mux(work_state === state_miss_access_ram_read_1 && io.port.rvalid.asBool && read_counter === stage1_sram_addr_reg(bank_num_width + data_length_width  - 1,data_length_width),io.port.rdata,wait_data))
    
    write_counter := Mux(work_state === state_miss_write_read_1 || work_state === state_miss_write_read_0 ,Mux(io.port.wready.asBool,Mux(write_counter === (bank_num - 1).U,0.U,write_counter+1.U),write_counter),
        Mux(work_state === state_miss_write_write_1 || work_state === state_miss_write_write_0 ,Mux(io.port.wready.asBool,Mux(write_counter === (bank_num - 1).U,0.U,write_counter+1.U),write_counter),
        Mux(work_state === state_clear_write_cache_1 || work_state === state_clear_write_cache_0,Mux(io.port.wready.asBool,Mux(write_counter === (bank_num - 1).U,0.U,write_counter+1.U),write_counter),write_counter)))
    read_counter := Mux(work_state === state_miss_access_ram_read_1,Mux(io.port.rvalid.asBool && io.port.rlast.asBool, 0.U, Mux(io.port.rvalid.asBool,read_counter+1.U,read_counter )),
        Mux(work_state === state_miss_access_ram_read_3,Mux(io.port.rvalid.asBool && io.port.rlast.asBool, 0.U, Mux(io.port.rvalid.asBool,read_counter+1.U,read_counter )),read_counter))
//受到的数据
    val hit0 = (stage1_sram_hit0_reg && stage1_sram_valid0_reg) 
   
    val hit1 = (stage1_sram_hit1_reg && stage1_sram_valid1_reg)

    
    val stage2_sram_addr_reg = RegEnable(Mux(stage2_flush,0.U,stage1_sram_addr_reg),0.U,stage2_stall) //把这个加4的过程放到stage2，尽量减少stage1的逻辑层数
    // val stage2_sram_addr_plus_reg = RegEnable(Mux(stage2_flush,0.U,stage1_sram_addr_reg + 4.U),0.U,stage2_stall) //后面依靠output_valid 信号来决定哪个信号是有效的
    // val stage2_sram_addr_plus_plus_reg = RegEnable(Mux(stage2_flush,0.U,stage1_sram_addr_reg + 8.U),0.U,stage2_stall)
    



    stage2_sram_cache_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,stage1_sram_cache_reg,stage2_sram_cache_reg))   
    val stage2_sram_req_reg = RegInit(0.U.asBool)
    stage2_sram_req_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,stage1_sram_req_reg,stage2_sram_req_reg))


    stage2_sram_write_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,stage1_sram_wr_reg,stage2_sram_write_reg))
   // val stage2_sram_req_reg = RegEnable(Mux(stage2_flush,0.U,stage1_sram_req_reg),0.U(1.W),stage2_stall)  
    
    val stage2_hit0_reg = RegInit(0.U.asBool)
    stage2_hit0_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,hit0,stage2_hit0_reg))
        
       // RegEnable(Mux(stage2_flush,0.U(1.W),hit0),0.U(1.W),stage2_stall) 
    val stage2_hit1_reg = RegInit(0.U.asBool)
    stage2_hit1_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,hit1,stage2_hit1_reg))
       // RegEnable(Mux(stage2_flush,0.U(1.W),hit1),0.U(1.W),stage2_stall) 

    val stage2_hit_reg  = RegInit(0.U.asBool)
    stage2_hit_reg := Mux(stage2_flush,0.U,Mux(stage2_stall,hit,stage2_hit_reg))

    stage2_exception := Mux(stage2_stall,stage1_exception,stage2_exception)
    io.stage1_tlb_exception := stage1_exception

    //stage 3  存入指令缓冲队列，在issue阶段前仍然为顺序结构

   // val stage_2_work_state = RegInit(0.U(1.W))
   // val access_stage_2_work_state = Wire(Bool())
   // io.cache_working_on := access_stage_2_work_state
    //access_stage_2_work_state := Mux(stage2_sram_req_reg.asBool,1.U,stage_2_work_state)
   // stage_2_work_state := access_stage_2_work_state
    val word_selection0 = dcache_data_way0(stage2_sram_addr_reg(bank_num_width + data_length_width  - 1,data_length_width)).rdata
    val word_selection1 = dcache_data_way1(stage2_sram_addr_reg(bank_num_width + data_length_width  - 1,data_length_width)).rdata


    val hit_word = Mux(stage2_hit0_reg.asBool,word_selection0,word_selection1) //如果没有命中可以通过data_ok来判断是否需要接受数据

    // val word_selection0 = dcache_data_way0(sram_addr_reg(4,2)).rdata
    // val word_selection1 = dcache_data_way1(sram_addr_reg(4,2)).rdata

    val wb_word0 = dcache_data_way0(write_counter).rdata
    val wb_word1 = dcache_data_way1(write_counter).rdata
    val wen_way0_wire = Wire(Vec(bank_num,(UInt((data_length / 8).W))))
    val wen_way1_wire = Wire(Vec(bank_num,(UInt((data_length / 8).W))))

    val writeback_data = Mux(data_write_back_way,wb_word1,wb_word0)
    data_write_back_way := Mux(data_cache_under_write_back,data_write_back_counter(sum_width),lru(stage1_sram_addr_reg(10,4)).asBool)
    // val all_writeback_data  = 
    val way0_burst_read_wen = (work_state === state_miss_access_ram_read_1 || work_state === state_miss_access_ram_read_3) && io.port.rvalid.asBool && lru(stage1_sram_addr_reg(10,4)) === 0.U
    val way1_burst_read_wen = (work_state === state_miss_access_ram_read_1 || work_state === state_miss_access_ram_read_3) && io.port.rvalid.asBool && lru(stage1_sram_addr_reg(10,4)) === 1.U
    for(i <- 0 to (bank_num - 1) ) {
        dcache_data_way0(i).addr := Mux(data_cache_under_write_back,Cat(data_write_back_counter(sum_width - 1 ,0),0.U(4.W)),stage1_sram_addr_reg)
        dcache_data_way0(i).wdata := Mux(work_state === state_miss_write_update || state_lookup_for_less_delay === state_lookup ,stage1_sram_wdata_reg,Mux(work_state === state_miss_access_ram_read_1 ||work_state === state_miss_access_ram_read_3,io.port.rdata,0.U))
        dcache_data_way0(i).en := 1.U
        dcache_data_way0(i).wen := wen_way0_wire(i)
        dcache_data_way1(i).addr := Mux(data_cache_under_write_back,Cat(data_write_back_counter(sum_width - 1 ,0),0.U(4.W)),stage1_sram_addr_reg)
        dcache_data_way1(i).wdata := Mux(work_state === state_miss_write_update || state_lookup_for_less_delay === state_lookup ,stage1_sram_wdata_reg,Mux(work_state === state_miss_access_ram_read_1 ||work_state === state_miss_access_ram_read_3,io.port.rdata,0.U))
        dcache_data_way1(i).en := 1.U
        dcache_data_way1(i).wen := wen_way1_wire(i)   
    }

    for(i <- 0 to (bank_num - 1)) {
        wen_way0_wire(i) :=  Mux( stage1_sram_addr_reg(3) === i.asUInt && ((state_lookup_for_less_delay === state_lookup && stage1_sram_wr_reg.asBool && stage1_sram_hit0_reg && stage1_sram_valid0_reg)||
            (work_state === state_miss_write_update  && lru(stage1_sram_addr_reg(10,4)) === 0.U)),stage1_wstrb_reg,Cat(Seq.fill(8)(way0_wen(i))))
        wen_way1_wire(i) :=  Mux( stage1_sram_addr_reg(3) === i.asUInt && ((state_lookup_for_less_delay === state_lookup && stage1_sram_wr_reg.asBool && stage1_sram_hit1_reg && stage1_sram_valid1_reg)||
            (work_state === state_miss_write_update  && lru(stage1_sram_addr_reg(10,4)) === 1.U)),stage1_wstrb_reg,Cat(Seq.fill(8)(way1_wen(i))))
    } 
    for(i <- 0 to (bank_num - 1)) {
        way0_wen(i)  := Mux(i.asUInt === read_counter,way0_burst_read_wen ,0.U) 
        way1_wen(i)  := Mux(i.asUInt === read_counter,way1_burst_read_wen ,0.U) 
    }


   
    val cache_wdata = Mux(work_state === state_miss_access_ram_read_1 || work_state === state_miss_access_ram_read_3,io.port.rdata,
        Mux(work_state === state_lookup,stage1_sram_wdata_reg,0.U))
  
    
    dcache_tag_0.wen := Mux((work_state === state_miss_access_ram_read_1 ||work_state === state_miss_access_ram_read_3 ) && lru(stage1_sram_addr_reg(10,4)) === 0.U,1.U,0.U)
    dcache_tag_1.wen := Mux((work_state === state_miss_access_ram_read_1 ||work_state === state_miss_access_ram_read_3 ) && lru(stage1_sram_addr_reg(10,4)) === 1.U,1.U,0.U)//最近使用的是cache 0
    dcache_tag_0.wdata := Mux((work_state === state_miss_access_ram_read_1 ||work_state === state_miss_access_ram_read_3 ) ,Cat(1.U(1.W),stage1_sram_addr_reg(addr_length - 1,11)),0.U)
    dcache_tag_1.wdata := Mux((work_state === state_miss_access_ram_read_1 ||work_state === state_miss_access_ram_read_3 ) ,Cat(1.U(1.W),stage1_sram_addr_reg(addr_length - 1,11)),0.U)
      
    //axi signal
// r 读数据通道
    io.port.rready := 1.U
// ar 读地址通道
    io.port.arid := 1.U
    io.port.araddr := Mux(work_state === state_access_ram_read_0,Cat(stage1_sram_phy_addr_reg),
        Mux(work_state === state_miss_access_ram_read_0 || work_state === state_miss_access_ram_read_2,Cat(stage1_sram_phy_addr_reg(addr_length - 1,4),0.U(4.W)),0.U))
    io.port.arlen  := Mux(stage1_sram_cache_reg.asBool,(bank_num - 1).U,0.U)
    io.port.arsize :=  Mux(stage1_sram_cache_reg.asBool,"b011".U,stage1_sram_size_reg)
        //     0.U -> "b000".U,
        //     1.U -> "b001".U
        // )))
    io.port.arburst := Mux(stage1_sram_cache_reg.asBool,1.U,0.U)
    // io.port.arlock  := 0.U
    // io.port.arcache := 0.U
    // io.port.arprot  := 0.U

    stage2_addr_same_as_stage1 := stage2_sram_addr_reg === stage1_sram_addr_reg
    val stage2_write_stage1_read = stage2_sram_write_reg && !stage1_sram_wr_reg
    when(work_state === state_access_ram_write_0 ) {
        write_access_complete_reg := 1.U.asBool
    }.elsewhen(io.port.bvalid.asBool) {
        write_access_complete_reg := 0.U.asBool
    }.otherwise{
        write_access_complete_reg := write_access_complete_reg
    }
    
    val  awaddr_miss_addr = Cat(Mux(lru(stage1_sram_addr_reg(10,4)) === 0.U,dcache_tag_0.tag,dcache_tag_1.tag),stage1_sram_phy_addr_reg(10,4),0.U(4.W))

    io.port.arvalid := Mux(work_state === state_access_ram_read_0 || work_state === state_miss_access_ram_read_0 ||
        work_state === state_miss_access_ram_read_2,!(stage2_addr_same_as_stage1 && stage2_write_stage1_read && write_access_complete_reg) ,0.U).asBool && stage1_exception === 0.U
    io.port.rready  := 1.U
// aw 写地址通道
    io.port.awid    := "b0001".U
    io.port.awaddr  := MuxLookup(work_state,0.U,Seq(
        state_access_ram_write_0 -> Cat(stage1_sram_phy_addr_reg(addr_length - 1,0)),
        state_miss_write_read_0 ->  awaddr_miss_addr,//Cat(Mux(lru(stage1_sram_addr_reg(11,5)) === 0.U,dcache_tag_0.tag,dcache_tag_1.tag),stage1_sram_phy_addr_reg(11,5),0.U(5.W)),
        state_miss_write_write_0 -> awaddr_miss_addr,//Cat(Mux(lru(stage1_sram_addr_reg(11,5)) === 0.U,dcache_tag_0.tag,dcache_tag_1.tag),stage1_sram_phy_addr_reg(11,5),0.U(5.W))//脏数据写回
        state_clear_write_cache_0  -> Cat(Mux(data_write_back_way,dcache_tag_1.tag,dcache_tag_0.tag),data_write_back_counter(sum_width  - 1,0),0.U(4.W))))
    io.port.awlen   := Mux(stage1_sram_cache_reg.asBool || work_state === state_clear_write_cache_0,(bank_num - 1).U,0.U)
    io.port.awsize  := Mux(stage1_sram_cache_reg.asBool || work_state === state_clear_write_cache_0,"b011".U,/*MuxLookup(*/stage1_sram_size_reg)//,"b010".U,Seq(
        //     0.U -> "b000".U,
        //     1.U -> "b001".U
        // )))
    io.port.awburst := Mux(stage1_sram_cache_reg.asBool || work_state === state_clear_write_cache_0,"b01".U,0.U)
    // io.port.awlock  := "b00".U
    // io.port.awcache := "b0000".U // _0握手
    // io.port.awprot  := "b000".U
    io.port.awvalid := Mux(work_state === state_access_ram_write_0 || work_state ===state_miss_write_write_0 || work_state === state_miss_write_read_0 
         || work_state === state_clear_write_cache_0 ,1.U,0.U).asBool && stage1_exception === 0.U
// w 写数据通道
    // io.port.wid    := "b0001".U //
    
    // val axi_line_wdata = stage1_sram_wdata_reg << ( stage1_sram_phy_addr_reg(data_length_width - 1,0) << 3)
    val axi_line_wdata = MuxLookup(stage1_sram_phy_addr_reg(data_length_width - 1,0),stage1_sram_wdata_reg,Seq(
        1.U -> Cat(stage1_sram_wdata_reg((data_length - 1 - 1 * 8),0),0.U((8*1).W)),
        2.U -> Cat(stage1_sram_wdata_reg((data_length - 1 - 2 * 8),0),0.U((8*2).W)),
        3.U -> Cat(stage1_sram_wdata_reg((data_length - 1 - 3 * 8),0),0.U((8*3).W)),
        4.U -> Cat(stage1_sram_wdata_reg((data_length - 1 - 4 * 8),0),0.U((8*4).W)),
        5.U -> Cat(stage1_sram_wdata_reg((data_length - 1 - 5 * 8),0),0.U((8*5).W)),
        6.U -> Cat(stage1_sram_wdata_reg((data_length - 1 - 6 * 8),0),0.U((8*6).W)),
        7.U -> Cat(stage1_sram_wdata_reg((data_length - 1 - 7 * 8),0),0.U((8*7).W))
    ))
    io.port.wdata  := Mux(work_state === state_access_ram_write_1 || work_state === state_access_ram_write_0,
        axi_line_wdata,Mux(work_state === state_miss_write_read_1 || work_state === state_miss_write_read_0 ||
      work_state === state_miss_write_write_0   || work_state === state_miss_write_write_1 || 
      work_state === state_clear_write_cache_0 || work_state === state_clear_write_cache_1,writeback_data ,0.U))
    io.port.wstrb  := Mux(work_state === state_access_ram_write_1 || work_state === state_access_ram_write_0 ,stage1_wstrb_reg,Mux(work_state === state_miss_write_read_1 || work_state === state_miss_write_read_0 ||
      work_state === state_miss_write_write_0   ||  work_state === state_miss_write_write_1 ||
      work_state === state_clear_write_cache_0 || work_state === state_clear_write_cache_1 ,"b11111111".U ,0.U))
    io.port.wlast  := work_state === state_access_ram_write_1 ||(work_state === state_access_ram_write_0 && io.port.wready.asBool) || ((work_state === state_miss_write_read_1 || work_state === state_miss_write_write_1 
        || work_state === state_clear_write_cache_0 || work_state === state_clear_write_cache_1) 
        && write_counter === (bank_num - 1).U )
    io.port.wvalid := work_state === state_access_ram_write_1 || work_state === state_access_ram_write_0 || work_state === state_miss_write_read_1 || work_state === state_miss_write_read_0 ||
      work_state === state_miss_write_write_0   || work_state === state_miss_write_write_1 || work_state === state_clear_write_cache_0 || work_state === state_clear_write_cache_1
//  b 写应答
    io.port.bready := 1.U
//sram like
    io.sram_addr_ok := 1.U
    io.sram_data_ok := /*Mux(*/Mux(stage2_sram_req_reg.asBool,work_state === state_data_ready  || work_state === state_lookup,0.U)//&& !io.sram_req.asBool,1.U,Mux(((work_state === state_lookup_read && !stage1_sram_wr_reg.asBool) || (work_state === state_lookup_write && stage1_sram_wr_reg.asBool)),hit,0.U))
    val sram_rdata_reg = RegInit(0.U(data_length.W))
    sram_rdata_reg  := Mux(work_state === state_data_ready,wait_data,Mux(work_state === state_lookup,hit_word,sram_rdata_reg))
    val stage2_stall_reg = RegInit(0.U.asBool)
    stage2_stall_reg := stage2_stall.asBool
    io.sram_rdata := Mux(stage2_stall_reg,Mux(work_state === state_data_ready,wait_data,Mux(work_state === state_lookup,hit_word,0.U)),sram_rdata_reg)

}