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

/* Type for a 16-bit quantity.  */
typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;

/* Types for signed and unsigned 32-bit quantities.  */
typedef uint32_t Elf32_Word;
typedef	int32_t  Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef	int32_t  Elf64_Sword;

/* Types for signed and unsigned 64-bit quantities.  */
typedef uint64_t Elf32_Xword;
typedef	int64_t  Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef	int64_t  Elf64_Sxword;

/* Type of addresses.  */
typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;

/* Type of file offsets.  */
typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;




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
    Elf64_Half	e_type;			/* Object file type */
    Elf64_Half	e_machine;		/* Architecture */
    Elf64_Word	e_version;		/* Object file version */
    Elf64_Addr	e_entry;		/* Entry point virtual address */
    Elf64_Off	e_phoff;		/* Program header table file offset */
    Elf64_Off	e_shoff;		/* Section header table file offset */
    Elf64_Word	e_flags;		/* Processor-specific flags */
    Elf64_Half	e_ehsize;		/* ELF header size in bytes */
    Elf64_Half	e_phentsize;		/* Program header table entry size */
    Elf64_Half	e_phnum;		/* Program header table entry count */
    Elf64_Half	e_shentsize;		/* Section header table entry size */
    Elf64_Half	e_shnum;		/* Section header table entry count */
    Elf64_Half	e_shstrndx;		/* Section header string table index */
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
    Elf64_Word	sh_name;		/* Section name (string tbl index) */
    Elf64_Word	sh_type;		/* Section type */
    Elf64_Xword	sh_flags;		/* Section flags */
    Elf64_Addr	sh_addr;		/* Section virtual addr at execution */
    Elf64_Off	sh_offset;		/* Section file offset */
    Elf64_Xword	sh_size;		/* Section size in bytes */
    Elf64_Word	sh_link;		/* Link to another section */
    Elf64_Word	sh_info;		/* Additional section information */
    Elf64_Xword	sh_addralign;		/* Section alignment */
    Elf64_Xword	sh_entsize;		/* Entry size if section holds table */
} Elf64_Shdr;


typedef struct {
    uint32_t      st_name;
    unsigned char st_info;
    unsigned char st_other;
    uint16_t      st_shndx;
    ElfN_Addr     st_value;
    uint64_t      st_size;
} Elf64_Sym;

typedef   struct elf_data{
  char *elf_file ;
  int has_use;
  struct elf_data * next;
  ElfN_Ehdr elf_header ;
  Elf64_Phdr * elf_program_header ;
  Elf64_Shdr * elf_section_header ;
  char  *elf_string_table ;
  char  *elf_sec_name_table ;
  size_t sec_entry_num ;
  Elf64_Sym  * elf_symbol_table ;
}elf_list;

typedef struct {
  size_t pc;
  size_t target_pc;
  int symbol_table_index;
  uint8_t type;
  elf_list * elf_ptr;
  
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