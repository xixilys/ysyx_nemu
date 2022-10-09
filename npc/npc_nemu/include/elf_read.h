#ifndef __ELF_READ_H__
#define __ELF_READ_H__

#include <common.h>
    //  The following types are used for  N-bit  architectures  (N=32,64,  ElfN
    //    stands for Elf32 or Elf64, uintN_t stands for uint32_t or uint64_t):
#define uintN_t         uint64_t

#define ElfN_Addr       uintN_t
#define ElfN_Off        uintN_t
#define ElfN_Section    uint16_t
#define ElfN_Versym     uint16_t
#define Elf_Byte        unsigned char
#define ElfN_Half       uint16_t
#define ElfN_Sword      int32_t
#define ElfN_Word       uint32_t
#define ElfN_Sxword     int64_t
#define ElfN_Xword      uint64_t



#define SHT_DYNAMIC	        0x6	
#define SHT_DYNSYM	        0xb	
#define SHT_FINI_ARRAY	    0xf
#define SHT_HASH	        0x5	
#define SHT_INIT_ARRAY	    0xe
#define SHT_NOBITS	        0x8	
#define SHT_NOTE	        0x7	
#define SHT_NULL	        0x0	
#define SHT_PREINIT_ARhat   0x10
#define SHT_PROGBITS	    0x1
#define SHT_REL	            0x9	
#define SHT_RELA	        0x4	
#define SHT_STRTAB	        0x3	
#define SHT_SYMTAB  	    0x2

#define STT_NOTYPE	0x0
#define STT_OBJECT	0x1
#define STT_FUNC	0x2
#define STT_SECTION	0x3
#define STT_FILE	0x4
#define STT_COMMON	0x5
#define STT_TLS	    0x6
#define STT_LOOS	0x10
#define STT_HIOS	0x12
#define STT_LOPROC	0x13
#define STT_HIPROC	0x15


#define ELF64_ST_BIND(i)   ((i)>>4)
#define ELF64_ST_TYPE(i)   ((i)&0xf)
#define ELF64_ST_INFO(b,t) (((b)<<4)+((t)&0xf))
#define jal_or_jalr  1
#define neither_jal_nor_jalr 0

#define func_call  10
#define func_ret   9

#define MAX_FTRACE_LOOP_DEPTH 30




#define EI_NIDENT 16


typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t      e_type;
    uint16_t      e_machine;
    uint32_t      e_version;
    ElfN_Addr     e_entry;
    ElfN_Off      e_phoff;
    ElfN_Off      e_shoff;
    uint32_t      e_flags;
    uint16_t      e_ehsize;
    uint16_t      e_phentsize;
    uint16_t      e_phnum;
    uint16_t      e_shentsize;
    uint16_t      e_shnum;
    uint16_t      e_shstrndx;
} ElfN_Ehdr;

//program header
typedef struct {
    uint32_t   p_type;
    uint32_t   p_flags;
    ElfN_Off   p_offset;
    ElfN_Addr  p_vaddr;
    ElfN_Addr  p_paddr;
    uint64_t   p_filesz;
    uint64_t   p_memsz;
    uint64_t   p_align;
} Elf64_Phdr;

typedef struct {
    uint32_t   sh_name;
    uint32_t   sh_type;
    uint64_t   sh_flags;
    ElfN_Addr sh_addr;
    ElfN_Off  sh_offset;
    uint64_t   sh_size;
    uint32_t   sh_link;
    uint32_t   sh_info;
    uint64_t   sh_addralign;
    uint64_t   sh_entsize;
} Elf64_Shdr;


typedef struct {
    uint32_t      st_name;
    unsigned char st_info;
    unsigned char st_other;
    uint16_t      st_shndx;
    ElfN_Addr     st_value;
    uint64_t      st_size;
} Elf64_Sym;



extern ElfN_Ehdr elf_header;
extern Elf64_Phdr * elf_program_header;
extern Elf64_Shdr * elf_section_header;
extern char  *elf_string_table ;
extern char  *elf_sec_name_table ;
extern size_t sec_entry_num ;
extern  Elf64_Sym  * elf_symbol_table;


typedef struct {
  size_t pc;
  size_t target_pc;
  int symbol_table_index;
  uint8_t type;
  // size_t pc;
}ftrace_type;


extern ftrace_type ftrace_loop[MAX_FTRACE_LOOP_DEPTH] ;
extern int  ftrace_loop_index;


void get_jal_type (size_t now_pc ,size_t target_pc ,uint8_t inst_type ,uint8_t reg_source,uint32_t imm_value) ;
void ftrace_loop_print(ftrace_type * loop,int index) ;
// {
//     if(inst_type == jal_or_jalr) {
//         for(int i = 0;i < sec_entry_num ; i++) {
//             if(elf_symbol_table[i].st_value  == target_pc && ELF64_ST_TYPE(elf_symbol_table[i].st_info) == STT_FUNC) {
//                 printf("it is func!!! and name = %s pc = %lx\n",&elf_string_table[elf_symbol_table[i].st_name],target_pc);
//             }
//         }
//     }
// }
#endif