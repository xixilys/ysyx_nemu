package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
class decoder_port extends Bundle {
        val   BranchD_Flag  =      Output(UInt(1.W))
        val   RegWriteD     =      Output(UInt(1.W))
        val   MemToRegD     =      Output(UInt(1.W))
        val   MemWriteD     =      Output(UInt(1.W))
        val   ALUCtrlD      =      Output(UInt(16.W)) // 独热码
        val   ALUSrcD       =      Vec(2,Output(Bool()))
        val   RegDstD       =      Output(UInt(5.W))
        val   ImmUnsigned   =      Output(UInt(1.W))
        val   BranchD       =      Output(UInt(6.W))
        val   JumpD         =      Output(UInt(1.W))
        val   JRD           =      Output(UInt(1.W))
        val   LinkD         =      Output(UInt(1.W))
        val   csrWriteD     =      Output(UInt(1.W))
        val   csrToRegD     =      Output(UInt(1.W))
        val   LoadUnsignedD =      Output(UInt(1.W))
        val   MemWidthD     =      Output(UInt(2.W))

        val   ImmD          =      Output(UInt(64.W))
        val   ebreakD       =      Output(Bool())
        val   data_wD        =      Output(Bool())
        val   muldiv_control =     Output(UInt(24.W))
        val   muldiv_cal    = Output(Bool())
        val   alu_cal       = Output(Bool())
        //use for csr control inst
        val   csr_control   = Output(UInt(3.W))
        val   csr_Imm       = Output(Bool())
        //用于进行difftest用的，告诉仿真环境这个指令可以跳过
        val   inst_should_skip = Output(Bool())
        val   fence_i_control = Output(Bool())
        
        // val   BadInstrD=      Output(UInt(1.W))
        // val   BreakD=      Output(UInt(1.W))
        // val   SysCallD=      Output(UInt(1.W))
        // val   EretD   =   Output(UInt(1.W))
}



class cu extends Module with riscv_macros {
    val io1 = IO(new Bundle{
        val   InstrD = Input(UInt(32.W))
        val   BadInstrD=      Output(UInt(1.W))
      
        val   SysCallD=      Output(UInt(1.W))
        val   EretD   =   Output(UInt(1.W))
        val   Tlb_Control   =      Output(UInt(3.W))
        val   commit_cache_ins = Output(Bool()) //关闭cache和分支预测
       
        val   dmem_addr_cal  = Output(Bool())

        // val   pcD             = Input(UInt(data_length.W))
    })   
    val io = IO(new decoder_port )

    
    val alu_tap = Seq()
    val OpD = io1.InstrD(6,0)//首字母为o的大写(>_<)
    val Funct3D = io1.InstrD(14,12)
    val Funct7D = io1.InstrD(31,25)
    val Funct6D = io1.InstrD(31,26)

    val immI   = sign_extend(io1.InstrD(31,20),12)
    val immS   = sign_extend(Cat(io1.InstrD(31,25),io1.InstrD(11,7)),12)
    val immU   = sign_extend(Cat(io1.InstrD(31,12),0.U(12.W)),32)
    val immSB  = sign_extend(Cat(io1.InstrD(31),io1.InstrD(7),io1.InstrD(30,25),io1.InstrD(11,8),0.U(1.W)),13)
    val immUJ  = Cat(io1.InstrD(31),io1.InstrD(19,12),io1.InstrD(20),io1.InstrD(30,21))
 
    val Rs1D    = io1.InstrD(19,15)
    val Rs2D    = io1.InstrD(24,20)
    val RdD     = io1.InstrD(11,7)
 
    io1.commit_cache_ins  := 0.U

    // val ins_id = Wire(UInt(7.W))
    // val branch_id = Wire(UInt(7.W))
    val inst_code_type = MuxLookup(OpD,Cat(id_null,inst_type_NULL),  Seq(
        OP_I_ALU  -> Cat(MuxLookup(Funct3D,id_null,Seq(
            FUNCT3_ADDI -> id_addi,
            FUNCT3_SLTI -> id_slti,
            FUNCT3_SLTIU-> id_sltiu,
            FUNCT3_XORI -> id_xori,
            "b110".U    -> id_ori,
            FUNCT3_ANDI -> id_andi,
            FUNCT3_SLLI -> MuxLookup(Funct7D,id_null,Seq(
                FUNCT7_SLLI -> id_slli)),
            "b001".U ->  id_slli,
            "b101".U ->  MuxLookup(Funct6D,id_null,Seq(
                "b000000".U -> id_srli,
                "b010000".U -> id_srai
            )))),inst_type_I),
        OP_R_ALU  -> Cat(MuxLookup(Funct3D,id_null,Seq(
            "b000".U -> MuxLookup(Funct7D,id_null,Seq( 
                "b0100000".U -> id_sub,
                "b0000000".U -> id_add,
                "b0000001".U -> id_mul
            )),
            "b001".U -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000000".U -> id_sll,
                "b0000001".U -> id_mulh
            )),
            "b010".U -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000001".U -> id_mulhsu,
                "b0000000".U -> id_slt)),
            "b011".U -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000000".U -> id_sltu,
                "b0000001".U -> id_mulhu)),
            "b100".U -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000000".U -> id_xor,
                "b0000001".U -> id_div)),
            "b101".U -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000000".U -> id_srl,
                "b0000001".U -> id_divu,
                "b0100000".U -> id_sra)),
            "b110".U -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000000".U -> id_or,
                "b0000001".U -> id_rem)),
            "b111".U -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000000".U -> id_and,
                "b0000001".U -> id_remu)))),inst_type_RR),
        OP_BRANCH -> Cat(MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> id_beq,
            "b001".U  -> id_bne,
            "b100".U  -> id_blt,
            "b101".U  -> id_bge,
            "b110".U  -> id_bltu,
            "b111".U  -> id_bgeu
        )),inst_type_SB),
        OP_JAL        -> Cat(id_jal,inst_type_UJ),
        OP_JALR       -> Cat(id_jalr,inst_type_I),
        OP_LUI        -> Cat(id_lui,inst_type_U),
        OP_AUIPC      -> Cat(id_auipc,inst_type_U),
        OP_L    -> Cat(MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> id_lb,
            "b001".U  -> id_lh,
            "b010".U  -> id_lw,
            "b100".U  -> id_lbu,
            "b101".U  -> id_lhu,
            "b110".U  -> id_lwu,
            "b011".U  -> id_ld 
        )),inst_type_I),
        OP_S     -> Cat(MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> id_sb,
            "b001".U  -> id_sh,
            "b010".U  -> id_sw,
            "b011".U  -> id_sd
        )),inst_type_S),
        OP_IW     -> Cat(MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> id_addiw,
            "b001".U  -> id_slliw,
            "b101".U  -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000000".U -> id_srliw,
                "b0100000".U -> id_sraiw))
        )),inst_type_I),
        OP_W      -> Cat(MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> MuxLookup(Funct7D,id_null,Seq( 
                "b0000000".U -> id_addw,
                "b0100000".U -> id_subw,
                "b0000001".U -> id_mulw
            )),
            "b001".U  -> MuxLookup(Funct7D,id_null,Seq(
                "b0000000".U -> id_sllw
                )),
            "b101".U  -> MuxLookup(Funct7D,id_null,Seq(
                "b0000000".U -> id_srlw,
                "b0100000".U -> id_sraw,
                "b0000001".U -> id_divuw
            )),
            "b110".U  -> id_remw,
            "b111".U  -> id_remuw,
            "b100".U  -> id_divw
        )),inst_type_RR),
        0.U       -> Cat(id_mynop,inst_type_I),
        OP_SPECIAL -> MuxLookup(Funct3D,id_null,Seq(
            "b000".U -> Cat(MuxLookup(Funct7D,id_null,Seq(
                "b0000000".U -> id_ecall,
                "b0011000".U -> id_mret
            )),inst_type_NULL),
            "b001".U -> Cat(id_csrrw,inst_type_I),
            "b010".U -> Cat(id_csrrs,inst_type_I),
            "b011".U -> Cat(id_csrrc,inst_type_I),
            "b101".U -> Cat(id_csrrwi,inst_type_I),
            "b110".U -> Cat(id_csrrsi,inst_type_I),
            "b111".U -> Cat(id_csrrci,inst_type_I)
        )),
        OP_FENCE -> MuxLookup(Funct3D,id_null,Seq(
            "b001".U -> Cat(id_fence_i,inst_type_special)   
        ))))

    val ins_code  = inst_code_type(inst_code_type.getWidth - 1,3)
    val inst_type = inst_code_type(2,0)
    
    io.fence_i_control :=  io1.InstrD === "b0000_0000_0000_00000_001_00000_0001111".U
    

    io.csrToRegD :=    MuxLookup(ins_code ,0.U,Seq(
        id_csrrc  -> 1.U,
        id_csrrs  -> 1.U,
        id_csrrw  -> 1.U,
        id_csrrwi -> 1.U,
        id_csrrsi -> 1.U,
        id_csrrci -> 1.U
        ))
    io.csrWriteD := MuxLookup(ins_code ,0.U,Seq(
        id_csrrc  -> 1.U,
        id_csrrs  -> 1.U,
        id_csrrw  -> 1.U,
        id_csrrwi -> 1.U,
        id_csrrsi -> 1.U,
        id_csrrci -> 1.U))
        
    io.csr_control :=  MuxLookup(ins_code,0.U,Seq(
        id_csrrw  -> csr_control_csrrw ,
        id_csrrwi -> csr_control_csrrw ,
        id_csrrc  -> csr_control_csrrc,
        id_csrrci -> csr_control_csrrc,
        id_csrrs  -> csr_control_csrrs,
        id_csrrsi -> csr_control_csrrs).map{case(a,b) => (a,UIntToOH(b))}
    )
    io.csr_Imm     := ins_code === id_csrrwi || ins_code === id_csrrci || ins_code === id_csrrsi
    // io.csr
    
    
    io.inst_should_skip := MuxLookup(ins_code,0.U,Seq(
        
    ))

    
    
    io.ImmD := Mux1H(Seq(
        (inst_type === inst_type_U)   -> immU,
        (inst_type === inst_type_I)   -> immI,
        (inst_type === inst_type_S)   -> immS,
        (inst_type === inst_type_SB)  -> immSB,
        (inst_type === inst_type_UJ)  -> immUJ ))
    
    io.LinkD := ins_code === id_jalr || ins_code === id_jal
    


    io.BranchD    := Branch_data_Decoder(io1.InstrD)
    io.JRD        := OpD === OP_JALR
    io.JumpD      := OpD === OP_JALR || OpD === OP_JAL

    io.BranchD_Flag := MuxLookup(OpD,0.U,Seq(
        OP_BRANCH -> MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> 1.U,
            "b001".U  -> 1.U,
            "b100".U  -> 1.U,
            "b101".U  -> 1.U,
            "b110".U  -> 1.U,
            "b111".U  -> 1.U
    ))))

    io1.BadInstrD := ins_code === id_null
    io1.SysCallD  := ins_code === id_ecall
    io1.EretD     := ins_code === id_mret
    io.ebreakD    := io1.InstrD === Cat(0x0010.U(16.W),0x0073.U(16.W))
    // val RdD     = io1.InstrD(11,7)
    io.RegDstD    := RdD
    
    io.ImmUnsigned := MuxLookup(ins_code,0.U,Seq(
        id_sltiu    -> 1.U,
        id_bgeu     -> 1.U,
        id_divu     -> 1.U,
        id_divuw    -> 1.U,
        id_mulhu    -> 1.U,
        id_mulhsu   -> 1.U,
        id_sltu     -> 1.U,
    ))
io.RegWriteD := MuxLookup(ins_code,0.U,Seq(
        id_divu   -> 1.U,
        id_div    -> 1.U,
        id_remu   -> 1.U,
        id_rem    -> 1.U,
        id_divw   -> 1.U,
        id_divuw  -> 1.U,
        id_remw   -> 1.U,
        id_remuw  -> 1.U,
        id_mulw   -> 1.U,
        id_mul    -> 1.U,
        id_mulh   -> 1.U,
        id_mulhu  -> 1.U,
        id_mulhsu -> 1.U,
        id_mulw   -> 1.U,
        id_add    -> 1.U,
        id_sll    -> 1.U,
        id_srl    -> 1.U,
        id_sra    -> 1.U,
        id_slt    -> 1.U,
        id_sltu   -> 1.U,
        id_sub    -> 1.U,
        id_and    -> 1.U,
        id_or     -> 1.U,
        id_sllw   -> 1.U,
        id_srlw   -> 1.U,
        id_sraw   -> 1.U,
        id_addw   -> 1.U,
        id_subw   -> 1.U,
        id_jalr   -> 1.U,
        id_jal    -> 1.U,
        id_addi   -> 1.U,
        id_addiw  -> 1.U,
        id_ld     -> 1.U,
        id_lbu    -> 1.U,
        id_lb     -> 1.U,
        id_lhu    -> 1.U,
        id_lh     -> 1.U,
        id_lwu    -> 1.U,
        id_lw     -> 1.U,
        id_lbu    -> 1.U,
        id_lhu    -> 1.U,
        id_slti   -> 1.U,
        id_sltiu  -> 1.U,
        id_slli   -> 1.U,
        id_slliw  -> 1.U,
        id_srliw  -> 1.U,
        id_sraiw  -> 1.U,
        id_srli   -> 1.U,
        id_srai   -> 1.U,
        id_andi   -> 1.U,
        id_ori    -> 1.U,
        id_xori   -> 1.U,
        id_xor    -> 1.U,
        id_auipc  -> 1.U,
        id_lui    -> 1.U,
        id_csrrc  -> 1.U,
        id_csrrs  -> 1.U,
        id_csrrw  -> 1.U,
        id_csrrwi -> 1.U,
        id_csrrsi -> 1.U,
        id_csrrci -> 1.U
    )) 
    io.data_wD   := MuxLookup(ins_code,0.U,Seq(
        id_divw   -> 1.U,
        id_divuw  -> 1.U,
        id_remw   -> 1.U,
        id_remuw  -> 1.U,
        id_mulw   -> 1.U,
        id_mulw   -> 1.U,
        id_sllw   -> 1.U,
        id_srlw   -> 1.U,
        id_sraw   -> 1.U,
        id_addw   -> 1.U,
        id_subw   -> 1.U,
        id_addiw  -> 1.U,
        id_slliw  -> 1.U,
        id_srliw  -> 1.U,
        id_sraiw  -> 1.U
    ))

/***********************
    ALUSrcD  0 -> src1 or imm
             1 -> src2 or imm

**********************/
    io.ALUSrcD(0) :=  ins_code === id_auipc
        
    io.ALUSrcD(1) :=  inst_type === inst_type_I || inst_type === inst_type_UJ || inst_type === inst_type_U
    //     MuxLookup(inst_type,0.U,Seq(
    //     inst_type_U  -> 0.U,
    //     inst_type_I  -> "b1".U,
    //     inst_type_SB -> "b1".U,
    //     inst_type_UJ -> "b0".U,
    //     inst_type_RR -> "b1".U,
    //     inst_type_S  -> "b1".U
    //     //  := "b"
    // ))
    // io.ALUSrcD   := MuxLookup(inst_type,0.U,Seq(
    //     inst_type_U  -> 0.U,
    //     inst_type_I  -> "b10".U,
    //     inst_type_SB -> "b11".U,
    //     inst_type_UJ -> "b00".U,
    //     inst_type_RR -> "b11".U,
    //     inst_type_S  -> "b11".U
    //     //  := "b"
    // ))
    
    
    io.ALUCtrlD := MuxLookup(ins_code,0.U,Seq(
        id_auipc  -> ALU_ADD,
        id_add    -> ALU_ADD,
        id_addiw  -> ALU_ADD,
        id_addi   -> ALU_ADD,
        id_addw   -> ALU_ADD,
        id_slti   -> ALU_SLT,
        id_sltiu  -> ALU_SLTU,
        id_slli   -> ALU_SLL,
        id_slliw  -> ALU_SLL,
        id_srliw  -> ALU_SRL,
        id_sraiw  -> ALU_SRA,
        id_srli   -> ALU_SRL,
        id_srai   -> ALU_SRA,
        id_andi   -> ALU_AND,
        id_ori    -> ALU_OR,
        id_xori   -> ALU_XOR,
        id_lui    -> ALU_LUI,
        id_add    -> ALU_ADD,
        id_sll    -> ALU_SLL,
        id_srl    -> ALU_SRL,
        id_sra    -> ALU_SRA,
        id_slt    -> ALU_SLT,
        id_sltu   -> ALU_SLTU,
        id_sub    -> ALU_SUB,
        id_and    -> ALU_AND,
        id_or     -> ALU_OR,
        id_sllw   -> ALU_SLL,
        id_srlw   -> ALU_SRL,
        id_sraw   -> ALU_SRA,
        id_addw   -> ALU_ADD,
        id_subw   -> ALU_SUB,
        id_xor    -> ALU_XOR).map{case(a,b) => (a,UIntToOH(b))}
    )
    io.MemToRegD := MuxLookup(OpD,0.U,Seq(
        OP_L    -> MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> 1.U,
            "b001".U  -> 1.U,
            "b010".U  -> 1.U,
            "b100".U  -> 1.U,
            "b101".U  -> 1.U,
            "b110".U  -> 1.U,
            "b011".U  -> 1.U
        ))))
    
    io.MemWidthD := MuxLookup(OpD,0.U,Seq(
        OP_L    -> MuxLookup(Funct3D,0.U,Seq(
            "b000".U  -> 0.U,//lb
            "b001".U  -> 1.U,//lh
            "b010".U  -> 2.U,//lw
            "b100".U  -> 0.U,//lbu
            "b101".U  -> 1.U,//lhu
            "b110".U  -> 2.U,//lwu
            "b011".U  -> 3.U//ld 64位
        )),
        OP_S    -> MuxLookup(Funct3D,0.U,Seq(
            "b000".U  -> 0.U,//id_sb,
            "b001".U  -> 1.U,//id_sh,
            "b010".U  -> 2.U,//id_sw,
            "b011".U  -> 3.U//id_sd
        ))))
    io.LoadUnsignedD := MuxLookup(OpD,0.U,Seq(
        OP_L    -> MuxLookup(Funct3D,0.U,Seq(
            "b100".U  -> 1.U,//lbu
            "b101".U  -> 1.U,//lhu
            "b110".U  -> 1.U//lwu
        ))))
    io.MemWriteD := MuxLookup(OpD,0.U,Seq(
        OP_S     -> MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> 1.U,//id_sb,
            "b001".U  -> 1.U,//id_sh,
            "b010".U  -> 1.U,//id_sw,
            "b011".U  -> 1.U//id_sd
        ))))
    io1.Tlb_Control := 0.U
    io1.dmem_addr_cal := MuxLookup(OpD,0.U,Seq(
        OP_L    -> MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> 1.U,
            "b001".U  -> 1.U,
            "b010".U  -> 1.U,
            "b100".U  -> 1.U,
            "b101".U  -> 1.U,
            "b110".U  -> 1.U,
            "b011".U  -> 1.U)),
        OP_S     -> MuxLookup(Funct3D,id_null,Seq(
            "b000".U  -> 1.U,
            "b001".U  -> 1.U,
            "b010".U  -> 1.U,
            "b011".U  -> 1.U
        ))))
    io.muldiv_control := MuxLookup(ins_code,0.U,Seq(
        id_div   -> MULDIV_DIV,
        id_divu  -> MULDIV_DIVU,
        id_remu  -> MULDIV_REMU,
        id_rem   -> MULDIV_REM,
        id_divw  -> MULDIV_DIVW,
        id_divuw -> MULDIV_DIVUW,
        id_remw  -> MULDIV_REMW,
        id_remuw -> MULDIV_REMUW,
        id_mulw  -> MULDIV_MULW,
        id_mul   -> MULDIV_MUL,
        id_mulh  -> MULDIV_MULH,
        id_mulhsu-> MULDIV_MULHSU,
        id_mulhu -> MULDIV_MULHU
    ).map{case(a,b) => (a,UIntToOH(b))})

    io.muldiv_cal := io.muldiv_control =/= 0.U
    io.alu_cal    := io.ALUCtrlD =/= 0.U
    

    
    

}


// object cu1_test extends App{
//     (new ChiselStage).emitVerilog(new cu)
// }


