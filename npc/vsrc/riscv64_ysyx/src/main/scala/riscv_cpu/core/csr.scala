package examples

import chisel3._
import chisel3.stage._
import chisel3.util._


class csr extends Module with riscv_macros {//hi = Input(UInt(32.W))lo寄存器
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val io = IO(new Bundle { 

    val      csr_read_addr = Input(UInt(12.W))
    val      csr_write_addr = Input(UInt(12.W))
    val      csr_write_data = Input(UInt(data_length.W))
    val      csr_write_en = Input(UInt(1.W))
    
    val      int_i = Input(UInt(6.W))
    val      timer_int_has = Output(Bool())
    val      pc = Input(UInt(data_length.W))
    val      mem_bad_vaddr = Input(UInt(data_length.W))
    val      exception_type_i = Input(UInt(32.W))
    val      in_branchjump_jr = Input(UInt(2.W))

    val      return_pc = Output(UInt(data_length.W))
    val      exception = Output(UInt(1.W))
    val      csr_read_data = Output(UInt(data_length.W))
    val      csr_random = Output(UInt(data_length.W))

    val      csr_status = Output(UInt(6.W))
    val      Int_able = Output(Bool())
    val      asid    =  Output(UInt(8.W))

    val      csr_tlb_read_data  = Flipped(new tlb_write_or_read_port)
    val      csr_tlb_write_data = new tlb_write_or_read_port
    val      csr_tlb_write_en   = Input(Bool())
    val      csr_index_tlb_write_able = Input(Bool())
    })
    val ebase_reset_value = "b10_1011_1111_1100_0000_0000_0000_0000_00".U
    //"1.U(1.W),0.U(1.W),0xbfc0.U(16.W),0.U(4.W),0.U(10.W)

    val csr_index = RegInit(0.U(data_length.W))    // 0
    val csr_random = RegInit(0.U(data_length.W))   // 1
    val csr_entrylo0 = RegInit(0.U(data_length.W)) // 2
    val csr_entrylo1 = RegInit(0.U(data_length.W)) // 3
    val csr_pagemask = RegInit(0.U(data_length.W)) // 5
    val csr_badvaddr = RegInit(0.U(data_length.W)) // 8
    val csr_count = RegInit(0.U(data_length.W))    // 9
    val csr_entryhi = RegInit(0.U(data_length.W))  // 10
    val csr_compare = RegInit(0.U(data_length.W))  // 11
    
    val csr_cause = RegInit("b0000_0000_0100_0000_0000_0000_0000_0000".U(data_length.W))   // 12
    val csr_status = Reg(UInt(data_length.W))    // 13
    val csr_status_to_be = Wire(UInt(data_length.W))//csr赋值用的
    csr_status := Mux(reset.asBool,Cat(0xa.U(32.W),0x00001800.U(32.W)),csr_status_to_be)
    val csr_epc = RegInit(0.U(data_length.W))      // 14
    val csr_mtvec = RegInit(0.U(data_length.W))
   
    val csr_prid = RegInit(0.U(data_length.W))     // 15 0
    
    val csr_ebase = RegInit(ebase_reset_value)
    val csr_config0 = RegInit("b1_000_0000_0000_0000_0_00_000_001_0000_010".U(data_length.W)) // 16, 0
    val csr_config1 = "b0_001111_00000_00000_00000_00000_00000".U(data_length.W)  // 16, 1

    val csr_counter_half = RegInit(0.U.asBool)
    val csr_counter_half_last = RegInit(0.U.asBool)
    csr_counter_half := Mux(clock.asBool,~csr_counter_half,csr_counter_half)
    csr_counter_half_last := csr_counter_half



    val pc_Reg = RegInit(0.U(data_length.W))
    pc_Reg := io.pc

    io.Int_able := ! csr_status(1) && csr_status(0)
    io.csr_status :=  csr_status(15,10)
    

    val int_signal  =((csr_status(15,8) & csr_cause(15,8)) =/= 0.U) &&  ! csr_status(1) && csr_status(0) //感觉这个写法有问题，逻辑太长了.用来判断到底有没有中断
    val exception_type   = Cat(io.exception_type_i(31,1),int_signal)//15-8分别是六根硬件中断线和两根软件中断线

    val exl_Reg     = Wire(UInt(1.W))//status 寄存器第1位 1表示例外级
    val commit_exception =(exception_type(30,0) =/= 0.U) //不等和等于运算更加耗时
    val commit_eret  = Mux(exception_type(31) && !exception_type(EXCEP_AdELI),1.U(1.W),0.U(1.W) ) //判断到底是啥例外，如果是eret过程中的地址错乱的话，就不是eret例外
    io.exception     :=  commit_exception || commit_eret.asBool // 有没异常或者是回调的东西
    exl_Reg := csr_status(1)

    val commit_next_pc   = Mux(int_signal.asBool,Mux(io.in_branchjump_jr =/= 0.U,io.pc,io.pc+4.U),io.pc)  // 处于分支延迟槽，记录前一条分支指令，响应非精确例外，写入下一条指令
    // val commit_epc   =  Mux(exception_type(EXCEP_AdELI) && exception_type(EXCEP_ERET),csr_epc,commit_next_pc)
// 写法有待商榷
    val csr_read_data_Wire = Wire(UInt(data_length.W))
    val read_addr_sel     = Cat(io.csr_read_addr) 
    val write_addr_sel    = Cat(io.csr_write_addr)//便于进行特判
    io.csr_read_data  := Mux(reset.asBool,0.U,csr_read_data_Wire) 

    val cause_exccode = Wire(UInt(data_length.W)) // cause(6,2)
    val commit_bvaddr_Wire = Wire(UInt(data_length.W))//badvaddr_pc
    io.return_pc := Mux(commit_eret.asBool,csr_epc,csr_mtvec)
    
    cause_exccode := Mux1H(Seq(//exception_type(EXCEP_INT)-> EXCEP_CODE_INT, //中断
        //(exception_type(EXCEP_AdELD) || exception_type(EXCEP_AdELI)) -> EXCEP_CODE_AdEL, //指令地址错误或者数据地址错误'
        // exception_type(EXCEP_AdES) -> EXCEP_CODE_AdES,
        exception_type(EXCEP_Sys) -> EXCEP_CODE_Sys
        // exception_type(EXCEP_Bp)   -> EXCEP_CODE_Bp  ,exception_type(EXCEP_RI)  -> EXCEP_CODE_RI,
        // exception_type(EXCEP_CODE_Ov) -> EXCEP_CODE_Ov ,exception_type(EXCEP_TLBRefill_L) -> EXCEP_CODE_TLBL,
        // exception_type(EXCEP_TLBRefill_S) -> EXCEP_CODE_TLBS ,exception_type(EXCEP_TLBInvalid_L) -> EXCEP_CODE_TLBL,
        // exception_type(EXCEP_TLBInvalid_S) -> EXCEP_CODE_TLBS ,exception_type(EXCEP_TLBModified)  -> EXCEP_CODE_MOD
    ))
    commit_bvaddr_Wire := Mux(exception_type(EXCEP_AdELI) && !exception_type(EXCEP_ERET),io.pc,io.mem_bad_vaddr)
    val write_and_read_same = (write_addr_sel === read_addr_sel) && io.csr_write_en.asBool

//csr num 相关
    csr_read_data_Wire := MuxLookup(read_addr_sel,0.U,Seq(
        MEPC_NUM    -> csr_epc,
        MCAUSE_NUM  -> csr_cause,
        MTVEC_NUM   -> csr_mtvec,
        MSTATUS_NUM -> csr_status
    ))
    //write
    val csr_write_able = io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_INDEX

    csr_index := Cat(Mux(io.csr_index_tlb_write_able,io.csr_write_data(31),csr_index(31)),0.U(27.W),Mux(csr_write_able,io.csr_write_data(3,0),csr_index(3,0)))
    csr_random := csr_random(4,0) + 1.U
    csr_entrylo0 := Mux(io.csr_tlb_write_en.asBool,Cat(0.U(6.W),io.csr_tlb_write_data.paddr(0),io.csr_tlb_write_data.c(0),io.csr_tlb_write_data.d(0),
        io.csr_tlb_write_data.v(0),io.csr_tlb_write_data.g),Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_ENTRYLO0,io.csr_write_data(25,0),csr_entrylo0(25,0)))
    csr_entrylo1 := Mux(io.csr_tlb_write_en.asBool,Cat(0.U(6.W),io.csr_tlb_write_data.paddr(1),io.csr_tlb_write_data.c(1),io.csr_tlb_write_data.d(1),
        io.csr_tlb_write_data.v(1),io.csr_tlb_write_data.g),Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_ENTRYLO1,io.csr_write_data(25,0),csr_entrylo1(25,0)))
    csr_pagemask := Cat(Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_PAGEMASK,io.csr_write_data(24,13),csr_pagemask(24,13)),0.U(13.W))
    csr_badvaddr       := Mux(commit_exception,commit_bvaddr_Wire,csr_badvaddr )
    csr_count          := Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_COUNT,io.csr_write_data, Mux(csr_counter_half ,(csr_count + 1.U),csr_count))
    csr_entryhi := Mux(io.csr_tlb_write_en,Cat(io.csr_tlb_write_data.vaddr,0.U(5.W),io.csr_tlb_write_data.asid),
                        Cat(Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_ENTRYHI,io.csr_write_data(31,13),csr_entryhi(31,13)),0.U(5.W),
                        Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_ENTRYHI,io.csr_write_data(7,0),csr_entryhi(7,0))))
    csr_compare :=  Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_COMPARE,io.csr_write_data,csr_compare)        

    csr_ebase   :=  Cat(csr_ebase(31,30),Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_EBASE,io.csr_write_data(29,12),csr_ebase(29,12)),csr_ebase(11,0))

    //Mux(io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_COMPARE,io.csr_write_data,csr_compare) 
   val compare_write = io.csr_write_en.asBool && (write_addr_sel === csr_ADDR_SEL_COMPARE)
   val timer_int   =  Mux(csr_compare =/= 0.U && csr_count === csr_compare &&(!compare_write)  ,1.U(1.W),Mux(compare_write,0.U(1.W),csr_cause(30))) //定时器中断,写了compare要将这一位清零  
   io.timer_int_has := csr_compare =/= 0.U && csr_count === csr_compare//timer_int
   val interrupt   =  io.int_i(5,0) //代表是哪一根中断线

    csr_epc  := MuxCase(csr_epc,Seq(
       commit_exception.asBool -> io.pc,
       (io.csr_write_en.asBool && write_addr_sel === MEPC_NUM ) -> io.csr_write_data
    ))
    csr_status_to_be   := MuxCase(csr_status,Seq(
        (io.csr_write_en.asBool && io.csr_write_addr === MCAUSE_NUM) -> io.csr_write_data
    ))
    csr_mtvec  := MuxCase(csr_mtvec,Seq(
        (io.csr_write_en.asBool && io.csr_write_addr === MTVEC_NUM)  -> io.csr_write_data
    ))
    csr_cause  := MuxCase(csr_cause,Seq(
        (io.csr_write_en.asBool && io.csr_write_addr === MCAUSE_NUM) -> io.csr_write_data,
        commit_exception.asBool -> cause_exccode
    ))

   csr_config0  := Cat(csr_config0(31,3),Mux((io.csr_write_en.asBool && write_addr_sel === csr_ADDR_SEL_CONFIG0),io.csr_write_data(2,0),csr_config0(2,0)))

   io.csr_tlb_read_data.vaddr    :=  csr_entryhi(31,13)
   io.csr_tlb_read_data.asid     :=  csr_entryhi(7,0)
   io.csr_tlb_read_data.g        :=  csr_entrylo0(0) && csr_entrylo1(0)
   io.csr_tlb_read_data.paddr(0) :=  csr_entrylo0(25,6)
   io.csr_tlb_read_data.paddr(1) :=  csr_entrylo1(25,6)
   io.csr_tlb_read_data.c(0)     :=  csr_entrylo0(5,3)
   io.csr_tlb_read_data.c(1)     :=  csr_entrylo1(5,3)
   io.csr_tlb_read_data.d(0)     :=  csr_entrylo0(2)
   io.csr_tlb_read_data.d(1)     :=  csr_entrylo1(2)
   io.csr_tlb_read_data.v(0)     :=  csr_entrylo0(1)
   io.csr_tlb_read_data.v(1)     :=  csr_entrylo1(1)   

   io.asid := csr_entryhi(7,0)
   io.csr_random := csr_random

}//    io.int_i    := csr_entryhi(  8,0)
//    io.csr_random := 

// object csr_test extends App{
//     (new ChiselStage).emitVerilog(new csr)
// }

