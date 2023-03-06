package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._
import firrtl.PrimOps
import scala.math._
import scala.reflect.runtime.Macros

abstract class ExplicitInvalidateModule extends Module {
    ExplicitCompileOptions.NotStrict.copy(explicitInvalidate = true)
}


trait riscv_macros {

// data_length
val difftest_on  = true
val tlb_on = false
val log_on = false
val cache_on = 0.U.asBool

val data_length = 64
val data_width = 2 // 0 -> byte ,1 -> 2 bytes ,2-> 4 bytes ,3-> 8 bytes 
val addr_length = 32

val tlb_length = 16
val tlb_index_width = (log10(tlb_length)/log10(2)).toInt




    // inst & func def

/************************* inst type down ****************/

val inst_type_NULL = 0.U(3.W)
val inst_type_U    = 1.U(3.W)
val inst_type_I    = 2.U(3.W)
val inst_type_S    = 3.U(3.W)
val inst_type_SB   = 4.U(3.W)
val inst_type_RR   = 5.U(3.W)
val inst_type_UJ   = 6.U(3.W)
val inst_type_special = 7.U(3.W)

/************************* inst type up ****************/
//opcode
//U type
val OP_AUIPC = "b0010111".U(7.W)
val OP_LUI   = "b0110111".U(7.W)

val OP_S     = "b0100011".U(7.W)
val OP_L     = "b0000011".U(7.W)


//UJ type
val OP_JAL   = "b1101111".U(7.W)
val OP_JALR  = "b1100111".U(7.W)

val OP_I_ALU  = "b0010011".U(7.W)
val OP_IW     = "b0011011".U(7.W)
val OP_W      = "b0111011".U(7.W)
//包括i type和 R type

//R type
val OP_R_ALU  = "b0110011".U(7.W)
val OP_BRANCH = "b1100011".U(7.W)

//special inst
val OP_SPECIAL  = "b1110011".U(7.W)
val OP_FENCE    = "b0001111".U(7.W)


// val OP_BRANCH = "b000001".U(7.W)
val OP_PRIVILEGE = "b010000".U(7.W)
val OP_SPECIAL2 = "b011100".U(7.W)
val OP_CACHE = "b101111".U(7.W) //cache指令，后面应该是只实现了其中几个，后续仔细讨论



//funct3
val FUNCT3_ADDI  = "b000".U
val FUNCT3_SLTI  = "b010".U
val FUNCT3_SLTIU = "b011".U
val FUNCT3_XORI  = "b100".U
val FUNCT3_ORI   = "b110".U
val FUNCT3_ANDI  = "b111".U
    //shift
val FUNCT3_SLLI  = "b001".U
val FUNCT3_SRLI  = "b101".U
val FUNCT3_SRAI  = "b101".U

val FUNC_ADD = "b100000".U(6.W)
val FUNC_ADDU = "b100001".U(6.W)
val FUNC_SUB = "b100010".U(6.W)
val FUNC_SUBU = "b100011".U(6.W)
val FUNC_SLT = "b101010".U(6.W)
val FUNC_SLTU = "b101011".U(6.W)
val FUNC_DIV = "b011010".U(6.W)
val FUNC_DIVU = "b011011".U(6.W)
val FUNC_MULT = "b011000".U(6.W)
val FUNC_MULTU = "b011001".U(6.W)
val FUNC_AND = "b100100".U(6.W)
val FUNC_NOR = "b100111".U(6.W)
val FUNC_OR = "b100101".U(6.W)
val FUNC_XOR = "b100110".U(6.W)
val FUNC_SLL = "b000000".U(6.W)
val FUNC_SLLV = "b000100".U(6.W)
val FUNC_SRA = "b000011".U(6.W)
val FUNC_SRAV = "b000111".U(6.W)
val FUNC_SRL = "b000010".U(6.W)
val FUNC_SRLV = "b000110".U(6.W)
val FUNC_JR = "b001000".U(6.W)
val FUNC_JALR = "b001001".U(6.W)
val FUNC_MFHI = "b010000".U(6.W)
val FUNC_MFLO = "b010010".U(6.W)
val FUNC_MTHI = "b010001".U(6.W)
val FUNC_MTLO = "b010011".U(6.W)
val FUNC_BREAK = "b001101".U(6.W)
val FUNC_SYSCALL = "b001100".U(6.W)
val FUNC_SYNC   = "b001111".U

val FUNC_TEQ = "b110100".U(6.W)
val FUNC_TNE = "b110110".U(6.W)
val FUNC_TGE = "b110000".U(6.W) //大于等于就trap    as 有符号整数
val FUNC_TGEU = "b110001".U(6.W) //大于等于就trap    as 无符号整数
val FUNC_TLT = "b110010".U(6.W) //小与就trap    as 有符号整数
val FUNC_TLTU = "b110011".U(6.W) //小于就trap    as 无符号整数



val FUNC_MUL  = "b000010".U(6.W) // 乘法，结果放到普通寄存器里面去


//funct7
val FUNCT7_SLLI = "b000000".U
val FUNCT7_SRLI = "b000000".U
val FUNCT7_SRAI = "b010000".U

val RT_BGEZ = "b00001".U(5.W)
val RT_BGEZAL = "b10001".U(5.W)
val RT_BLTZ = "b00000".U(5.W)
val RT_BLTZAL = "b10000".U(5.W)
val RS_ERET = "b10000".U(5.W)
val FULL_ERET =  "b01000010_00000000_00000000_00011000".U(32.W)
val RS_MFC0 = "b00000".U(5.W)
val RS_MTC0 = "b00100".U(5.W)


//REGIMM 以下

val RT_TEQI = "b01100".U(5.W) //如果相等则trap
val RT_TNEI = "b01110".U(5.W)
val RT_TGEI = "b01000".U(5.W) //大于等于就trap , as 有符号整数
val RT_TGEIU = "b01001".U(5.W) //大于等于就trap , as 无符号整数
val RT_TLTI = "b01010".U(5.W) //小于就trap , as 有符号整数
val RT_TLTIU = "b01011".U(5.W) //小于就trap , as 无符号整数



//特权指令🏇
val CO_SET = 1.U(1.W)
val CO_RESET = 0.U(1.W)
// val RS_ERET = "b10000".U(5.W)
//co_reset
val COP_MFC0 = "b0000".U(5.W)
val COP_MTC0 = "b0100".U(5.W)
//co_set
val FUNC_TLBP =  "b001000".U(6.W)
val FUNC_TLBR =  "b000001".U(6.W)
val FUNC_TLBWI = "b000010".U(6.W)
val FUNC_TLBWR = "b000110".U(6.W)
val FUNC_ERET = "b011000".U(6.W)
val FUNC_WAIT = "b100000".U(6.W)


//funct7
val id_null    = 0.U
val id_lui     = 1.U
val id_jal     = 2.U
val id_jalr    = 3.U
val id_addi    = 4.U
val id_addiw   = 5.U
val id_ld      = 6.U
val id_lbu     = 7.U
val id_lb      = 8.U
val id_lhu     = 9.U
val id_lh      = 10.U
val id_lwu     = 11.U 
val id_lw      = 12.U 
val id_slti    = 13.U 
val id_sltiu   = 14.U 
val id_slli    = 15.U 
val id_slliw   = 16.U 
val id_srliw   = 17.U 
val id_sraiw   = 18.U 
val id_srli    = 19.U 
val id_srai    = 20.U 
val id_andi    = 21.U 
val id_ori     = 22.U 
val id_xori    = 23.U 
val id_sb      = 24.U 
val id_sh      = 25.U 
val id_sw      = 26.U 
val id_sd      = 27.U 
val id_beq     = 28.U 
val id_bne     = 29.U 
val id_bge     = 30.U 
val id_bgeu    = 31.U 
val id_blt     = 32.U 
val id_bltu    = 33.U 
val id_divu    = 35.U 
val id_div     = 36.U 
val id_remu    = 37.U 
val id_rem     = 38.U 
val id_divw    = 39.U 
val id_divuw   = 40.U 
val id_remw    = 41.U 
val id_remuw   = 42.U 
val id_mulw    = 43.U 
val id_mul     = 44.U 
val id_mulh    = 45.U 
val id_mulhu   = 46.U
val id_mulhsu  = 47.U 
val id_add     = 48.U
val id_sll     = 49.U
val id_srl     = 50.U
val id_sra     = 51.U
val id_slt     = 52.U
val id_sltu    = 53.U
val id_sub     = 54.U
val id_and     = 55.U
val id_or      = 56.U
val id_sllw    = 57.U
val id_srlw    = 58.U
val id_sraw    = 59.U
val id_addw    = 60.U 
val id_subw    = 61.U 
val id_ebreak  = 62.U 
val id_inv     = 63.U 
val id_auipc   = 64.U
val id_xor     = 65.U
//csr relative inst
val id_csrrci  = 70.U
val id_csrrsi  = 71.U
val id_csrrwi  = 72.U
val id_csrrc   = 73.U
val id_csrrs   = 74.U
val id_csrrw   = 75.U
val id_ecall   = 76.U
val id_mret    = 77.U

// fence inst
val id_fence_i = id_mret + 1.U

val id_mynop = 80.U

// alu cmd def
val ALU_XOR  = 0.U
val ALU_ADD  = 1.U
val ALU_ADDE = 2.U
val ALU_ADDU = 3.U
val ALU_AND  = 4.U
val ALU_SRL  = 5.U
val ALU_SUB  = 6.U
val ALU_LUI  = 7.U
val ALU_SUBE = 8.U
val ALU_SUBU = 9.U
val ALU_NOR  = 10.U
val ALU_OR   = 11.U
val ALU_SLL  = 12.U
val ALU_SLT  = 13.U
val ALU_SLTU = 14.U
val ALU_SRA  = 15.U



//muldiv cmd def 
val MULDIV_DIVU   =  0.U
val MULDIV_DIV    =  1.U
val MULDIV_REMU   =  2.U
val MULDIV_REM    =  3.U
val MULDIV_DIVW   =  4.U
val MULDIV_DIVUW  =  5.U
val MULDIV_REMW   =  6.U
val MULDIV_REMUW  =  7.U
val MULDIV_MULW   =  8.U
val MULDIV_MUL    =  9.U
val MULDIV_MULH   =  10.U
val MULDIV_MULHU  =  11.U
val MULDIV_MULHSU =  12.U 




// cu control signals def
// MemRL(2)  BranchD_Flag  RegWriteD(1)	RegDstD(2)	ALUSrcD(2)	ImmUnsigned(1) BranchD(6)	JumpD(1)	JRD(1)	LinkD(1)	
// HiLoWriteD(2)  HiLoToRegD(2)	csrWriteD(1) csrToRegD(1) MemWriteD(1)	MemToRegD(1) LoadUnsignedD(1)	MemWidthD(2)
val CTRL_NULL  =  "b00_0_0_00_00_0_000000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_ITYPE =  "b00_0_1_00_01_0_000000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)//JR用于表示是不是JR或者JALR指令，该指令储存在寄存器中
val CTRL_ITYPEU=  "b00_0_1_00_01_1_000000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_RTYPE =  "b00_0_1_01_00_0_000000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_RTYPES = "b00_0_1_01_10_0_000000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_LB  =    "b00_0_1_00_01_0_000000_0_0_0_00_00_0_0_0_1_0_00".U(29.W)
val CTRL_LBU =    "b00_0_1_00_01_0_000000_0_0_0_00_00_0_0_0_1_1_00".U(29.W)
val CTRL_LH  =    "b00_0_1_00_01_0_000000_0_0_0_00_00_0_0_0_1_0_01".U(29.W)
val CTRL_LHU=     "b00_0_1_00_01_0_000000_0_0_0_00_00_0_0_0_1_1_01".U(29.W)
val CTRL_LW =     "b00_0_1_00_01_0_000000_0_0_0_00_00_0_0_0_1_0_10".U(29.W)
val CTRL_LWL =    "b10_0_1_00_01_0_000000_0_0_0_00_00_0_0_0_1_0_10".U(29.W)
val CTRL_LWR =    "b01_0_1_00_01_0_000000_0_0_0_00_00_0_0_0_1_0_10".U(29.W)
val CTRL_SB =     "b00_0_0_00_01_0_000000_0_0_0_00_00_0_0_1_0_0_00".U(29.W)
val CTRL_SH =     "b00_0_0_00_01_0_000000_0_0_0_00_00_0_0_1_0_0_01".U(29.W)
val CTRL_SW =     "b00_0_0_00_01_0_000000_0_0_0_00_00_0_0_1_0_0_10".U(29.W)
val CTRL_SWL =    "b10_0_0_00_01_0_000000_0_0_0_00_00_0_0_1_0_0_10".U(29.W)
val CTRL_SWR =    "b01_0_0_00_01_0_000000_0_0_0_00_00_0_0_1_0_0_10".U(29.W)
val CTRL_BEQ =    "b00_1_0_00_00_0_000001_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_BNE =    "b00_1_0_00_00_0_000010_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_BGEZ =   "b00_1_0_00_00_0_000100_0_0_0_00_00_0_0_0_0_0_00".U(29.W)//branch 部分仅仅用来代表是大于跳转还是小于跳转
val CTRL_BGEZAL = "b00_1_1_10_00_0_000100_0_0_1_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_BGTZ =   "b00_1_0_00_00_0_001000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_BLEZ =   "b00_1_0_00_00_0_010000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_BLTZ =   "b00_1_0_00_00_0_100000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_BLTZAL = "b00_1_1_10_00_0_100000_0_0_1_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_J  =     "b00_0_0_00_00_0_000000_1_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_JAL =    "b00_0_1_10_00_0_000000_1_0_1_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_JR  =    "b00_0_0_00_00_0_000000_1_1_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_JALR =   "b00_0_1_01_00_0_000000_1_1_1_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_DIV =    "b00_0_0_00_00_0_000000_0_0_0_11_00_0_0_0_0_0_00".U(29.W)
val CTRL_DIVU =   "b00_0_0_00_00_0_000000_0_0_0_11_00_0_0_0_0_0_00".U(29.W)
val CTRL_MULT =   "b00_0_0_00_00_0_000000_0_0_0_11_00_0_0_0_0_0_00".U(29.W)
val CTRL_MULTU =  "b00_0_0_00_00_0_000000_0_0_0_11_00_0_0_0_0_0_00".U(29.W)
val CTRL_MFHI =   "b00_0_1_01_00_0_000000_0_0_0_00_10_0_0_0_0_0_00".U(29.W)
val CTRL_MFLO  =  "b00_0_1_01_00_0_000000_0_0_0_00_01_0_0_0_0_0_00".U(29.W)
val CTRL_MTHI =   "b00_0_0_00_00_0_000000_0_0_0_10_00_0_0_0_0_0_00".U(29.W)
val CTRL_MTLO =   "b00_0_0_00_00_0_000000_0_0_0_01_00_0_0_0_0_0_00".U(29.W)
val CTRL_BREAK =  "b00_0_0_00_00_0_000000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_SYSCALL ="b00_0_0_00_00_0_000000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_ERET =   "b00_0_0_00_00_0_000000_0_0_0_00_00_0_0_0_0_0_00".U(29.W)
val CTRL_MFC0 =   "b00_0_1_00_00_0_000000_0_0_0_00_00_0_1_0_0_0_00".U(29.W)
val CTRL_MTC0 =   "b00_0_0_00_00_0_000000_0_0_0_00_00_1_0_0_0_0_00".U(29.W)
//既需要读csr又需要写csr
//因为我们是在mem1阶段进行tlb的查询，如果使能了csrwrite可能会导致错误的前递
val CTRL_TLBP =   "b00_0_0_00_00_0_000000_0_0_0_00_00_0_1_0_0_0_00".U(29.W)
//同样也是读csr中的某个寄存器，但是不写寄存器拉
val CTRL_TLBR =   "b00_0_0_00_00_0_000000_0_0_0_00_00_0_1_0_0_0_00".U(29.W)
val CTRL_TLBWI =  "b00_0_0_00_00_0_000000_0_0_0_00_00_0_1_0_0_0_00".U(29.W)


val csr_control_csrrs = 0.U
val csr_control_csrrc = 1.U
val csr_control_csrrw = 2.U

// // csr address & select
val csr_ADDR_SEL_INDEX      = "b00000_0".U 
val csr_ADDR_SEL_RANDOM     = "b00001_0".U 
val csr_ADDR_SEL_ENTRYLO0   = "b00010_0".U 
val csr_ADDR_SEL_ENTRYLO1   = "b00011_0".U 
val csr_ADDR_SEL_PAGEMASK   = "b00101_0".U 
val csr_ADDR_SEL_BADVADDR   = "b01000_0".U 
val csr_ADDR_SEL_COUNT      = "b01001_0".U 
val csr_ADDR_SEL_ENTRYHI    = "b01010_0".U 
val csr_ADDR_SEL_COMPARE    = "b01011_0".U 
val csr_ADDR_SEL_STATUS     = "b01100_0".U 
val csr_ADDR_SEL_CAUSE      = "b01101_0".U 
val csr_ADDR_SEL_EPC        = "b01110_0".U 
val csr_ADDR_SEL_PRID       = "b01111_0".U 
val csr_ADDR_SEL_CONFIG0    = "b10000_0".U 
val csr_ADDR_SEL_CONFIG1    = "b00000_1".U 
val csr_ADDR_SEL_EBASE      = "b01111_1".U


// // exception
val EXCEP_INT       = 0x0  .U     // interrupt
val EXCEP_AdELD     = 0x4  .U     // lw addr error
val EXCEP_AdELI     = 0x14 .U     // pc fetch error
val EXCEP_AdES      = 0x5  .U     // sw addr 
val EXCEP_Sys       = 0x8  .U     // syscall
val EXCEP_Bp        = 0x9  .U     // break point
val EXCEP_RI        = 0xa  .U     // reserved instr
val EXCEP_Ov        = 0xc  .U     // overflow      
val EXCEP_Tr        = 0xd  .U     // trap
val EXCEP_ERET      = 0x1f .U     // eret treated as exception
val EXCEP_TLBInvalid_L  = 0x2 .U  
val EXCEP_TLBRefill_L   = 0x3 .U  
val EXCEP_TLBInvalid_S  = 0x7 .U
val EXCEP_TLBRefill_S   = 0x6 .U
val EXCEP_TLBModified   = 0x1 .U
val EXCEP_FENCE_I   = 0x18.U


// // exception mask
val EXCEP_MASK_INT           ="b00000000_00000000_00000000_00000001".U
val EXCEP_MASK_AdELD         ="b00000000_00000000_00000000_00010000".U
val EXCEP_MASK_AdELI         ="b00000000_00010000_00000000_00000000".U
val EXCEP_MASK_AdES          ="b00000000_00000000_00000000_00100000".U
val EXCEP_MASK_Sys           ="b00000000_00000000_00000001_00000000".U
val EXCEP_MASK_Bp            ="b00000000_00000000_00000010_00000000".U
val EXCEP_MASK_RI            ="b00000000_00000000_00000100_00000000".U
val EXCEP_MASK_Ov            ="b00000000_00000000_00010000_00000000".U
val EXCEP_MASK_Tr            ="b00000000_00000000_00100000_00000000".U
val EXCEP_MASK_ERET          ="b10000000_00000000_00000000_00000000".U
val EXCEP_MASK_TLBInvalid_L  ="b00000000_00000000_00000000_00000100".U
val EXCEP_MASK_TLBRefill_L   ="b00000000_00000000_00000000_00001000".U
val EXCEP_MASK_TLBInvalid_S  ="b00000000_00000000_00000000_10000000".U
val EXCEP_MASK_TLBRefill_S   ="b00000000_00000000_00000000_01000000".U
val EXCEP_MASK_TLBModified   ="b00000000_00000000_00000000_00000010".U
val EXCEP_MASK_FENCE_I       ="b00000001_00000000_00000000_00000000".U

// // exception code
// val EXCEP_CODE_INT      = 0x0 .U     // interrupt
// val EXCEP_CODE_AdEL     = 0x4 .U     // pc fetch or lw addr error
// val EXCEP_CODE_AdES     = 0x5 .U     // sw addr 
val EXCEP_CODE_Sys      =   0xb.U     // syscall
// val EXCEP_CODE_Bp       = 0x9 .U     // break point
// val EXCEP_CODE_RI       = 0xa .U     // reserved instr
// val EXCEP_CODE_Ov       = 0xc .U     // overflow      
// val EXCEP_CODE_Tr       = 0xd .U     // trap
// val EXCEP_CODE_ERET     = 0x1f.U     // eret treated as exception
// val EXCEP_CODE_TLBL     = 0x2 .U     // tlbl, refill bfc00200, invalid bfc00380
// val EXCEP_CODE_TLBS     = 0x3 .U     // tlbs, refill bfc00200, invalid bfc00380
// val EXCEP_CODE_MOD      = 0x1 .U     // modifiedlength-1))),value(length-1,0))

//csr num
val MEPC_NUM     = 0x341.U
val MSTATUS_NUM  = 0x300.U
val MCAUSE_NUM   = 0x342.U
val MTVEC_NUM    = 0x305.U
val MIE_NUM      = 0x304.U
val MIP_NUM      = 0x344.U
val MHARTID_NUM  = 0xF14.U 


// mhartid
def sign_extend(value:UInt,length:Int,full_length:Int) = 
    // Cat(Cat(Seq.fill(full_length-length)(value(length-1))),value(length-1,0))
    Mux(value(length-1),Cat(~0.U((full_length - length).W),value(length - 1,0)),
        Cat(0.U((full_length - length).W),value(length - 1,0)))
    
def sign_extend(value:UInt,length:Int) = 
    Cat(Cat(Seq.fill(data_length-length)(value(length-1))),value(length-1,0))

def unsign_extend(value:UInt,length:Int):UInt = 
    Cat(0.U(data_length-length),value(length-1,0))
def unsign_extend(value:UInt,length:Int,full_length:Int) = 
    Cat(0.U(full_length-length),value(length-1,0))
def Mux2_4(sel:UInt,ch0:UInt,ch1:UInt,ch2:UInt,ch3:UInt):UInt = MuxLookup(sel,0.U,Seq(
    0.U -> ch0,1.U -> ch1,2.U -> ch2,3.U -> ch3))


//输入最好为4的整数倍
def Hash(num:UInt) : UInt  = {
  val length = num.getWidth 
  val num_array = Wire(Vec((length/4),UInt(1.W)))
  for(i <- 0 to (length/4)-1) {
    num_array(i) :=  num(((i+1)*4 - 1),i*4).xorR
  }
  num_array.asUInt    
} 

def  branch_prediction_state_machine_code_decoder(code:UInt) :Bool  = {
    MuxLookup(code,0.asUInt.asBool,Seq(
        Strongly_Taken -> 1.U.asBool,
        Strongly_Not_Taken -> 0.U.asBool,
        Weakly_Not_Taken -> 0.U.asBool,
        Weakly_Taken  -> 1.U.asBool))
} 
//branch prediction state machine code 
val Strongly_Not_Taken = "b00".U
val Strongly_Taken = "b11".U
val Weakly_Not_Taken = "b01".U
val Weakly_Taken = "b10".U

def br_state_machine_next_state(code:UInt,state:Bool) :UInt = {
    MuxLookup(code,code,Seq(
        Strongly_Not_Taken -> Mux(state,Weakly_Not_Taken,Strongly_Not_Taken),
        Strongly_Taken -> Mux(state,Strongly_Taken,Weakly_Taken),      
        Weakly_Not_Taken -> Mux(state,Weakly_Taken,Strongly_Not_Taken),   
        Weakly_Taken   -> Mux(state,Strongly_Taken,Weakly_Not_Taken)
    ))
}
//riscv忽略所有的不对齐指令
def check_unaligned(width:UInt,rd:UInt):UInt = 0.U
    //  (memrl === 0.U && MuxCase(1.U,Seq(
    //     (Cat(width,rd(0)) === "b010".U) -> 0.U,
    //     (Cat(width,rd) === "b1000".U) -> 0.U,
    //     (width ===       0.U )->0.U )).asBool)
def check_cached(address:UInt) :UInt = address(31,29) === "b100".U
def memory_mapping(address:UInt): UInt = address
    // Mux(address(31,30) === "b10".U ,
    // Cat(0.U(3.W),address(28,0)),address)//只有0x8-0x9 and 0xa-0xb为unmapped，可以直接线性映射
def check_mapped(address : UInt) :Bool = {
    !address(31) || address(31,30) === "b11".U }

    def get_cdv1(value : UInt) : UInt = {value(4,0) }
    def get_pfn1(value : UInt) : UInt = {value(24,5) }
    def get_cdv0(value : UInt) : UInt = {value(29,25) }
    def get_pfn0(value : UInt) : UInt = {value(49,30) }
    def get_g(value:UInt):Bool = { value(50) }
    def get_asid(value:UInt):UInt = {value(58,51) }
    def get_vpn2(value:UInt):UInt = {value(77,59) }

  def jr_Decoder(value : UInt):Bool = {
        val opD = value(6,0)
        val Funct3D = value(14,12)
        opD === "b1100111".U && Funct3D === "b000".U
    }
         
  def Jump_Decoder(value : UInt):Bool = {
        val opD = value(6,0)
        jr_Decoder(value) || opD === "b1101111".U
    }

    def Branch_Decoder(value : UInt):Bool = {
        val opD = value(6,0)
        val RtD = value(20,16)
        val FunctD = value(5,0)
        // MuxLookup(opD,0.U.asBool,Seq(  
        //     OP_BEQ  -> 1.U.asBool,
        //     OP_BNE  -> 1.U.asBool, 
        //     OP_BGTZ -> 1.U.asBool, 
        //     OP_BLEZ -> 1.U.asBool, 
        //     OP_REGIMM -> MuxLookup(RtD,0.U.asBool,Seq( //后面这里可以改,在id时就开始算分支
        //         RT_BGEZ   -> 1.U.asBool,
        //         RT_BGEZAL -> 1.U.asBool,
        //         RT_BLTZ   -> 1.U.asBool,
        //         RT_BLTZAL -> 1.U.asBool))
        // ))
        opD === OP_BRANCH
    }

    def Branch_data_Decoder(value : UInt):UInt = {
        val opD = value(6,0)
        val Funct3D = value(14,12)
        MuxLookup(opD,0.U,Seq( 
            OP_BRANCH -> MuxLookup(Funct3D,id_null,Seq(
                "b000".U  -> "b000001".U,//BEQ
                "b001".U  -> "b000010".U,//BNE
                "b100".U  -> "b000100".U,//BLT
                "b101".U  -> "b001000".U,//BGE
                "b110".U  -> "b010000".U,//BLTU
                "b111".U  -> "b100000".U//BGEU
        ))))
        
    }
    class mtrace_relative_bundle extends Bundle {
        val pc = UInt(data_length.W)
        val data = UInt(data_length.W)
        val mem_fetch_type = UInt((2.W))
        val addr = UInt(data_length.W)
        val len = UInt(3.W)
        val cache = Bool()
        // val 
       
    }
    object addr_map {
        val pc_start = UInt(data_length.W)
        val pc_end   = UInt(data_length.W)
    }
    def axi_size2truesize(value:UInt) : UInt = 
        MuxLookup(value,0.U,Seq(
            0.U  -> 1.U,//id_sb,
            1.U  -> 2.U,//id_sh,
            2.U  -> 4.U,//id_sw,
            3.U  -> 8.U//id_sd
        ))
    class int_bundle extends Bundle {
        val timer = Bool()
        val out_int = Bool()
    }

    class int_cause_code  {
        val ext_int_code = 11.U((data_length - 1).W)
        val time_code = 7.U((data_length - 1).W)
    }
    //status 
    val MIE_POSITION = 3

    val MTIE = 7
    val MEIE = 11
    val MPIE = 7
}