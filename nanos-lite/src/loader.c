#include <proc.h>
#include <elf.h>
#include <fs.h>
// #include<stdio.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXCEPT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
#define EXCEPT_TYPE  EM_
#elif defined(__ISA_ARM__)
#define EXCEPT_TYPE  EM_ARM
#elif defined(__ISA_MIPS32__)
#define EXCEPT_TYPE  EM_MIPS
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
#define EXCEPT_TYPE  EM_RISCV
#else
# error unsupported ISA 
#endif


size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);


static uintptr_t loader(PCB *pcb, const char *filename) {
  if (filename == NULL) {
    printf("No elf is given");
    return (uintptr_t)NULL;
  }

  
//打开elf文件
  Elf_Ehdr * elf_header = (Elf_Ehdr *)malloc(sizeof(Elf_Ehdr));
  
  int fs_fd = fs_open(filename,0,0);
  assert(fs_fd >= 0);
  // assert(0);
  fs_read(fs_fd,elf_header,sizeof(Elf64_Ehdr));
  //通过魔数来判断是不是正常的elf文件
  assert(*(uint32_t *)(elf_header->e_ident) == 0x464C457F);

  assert(elf_header->e_machine == EXCEPT_TYPE);
  // Elf64_Shdr * elf_section_header = (Elf64_Shdr *)malloc(elf_header->e_phnum * elf_header->e_phentsize);
  Elf_Phdr * elf_program_header = (Elf_Phdr *)malloc(elf_header->e_shnum * elf_header->e_shentsize);
 
  // ramdisk_read(elf_section_header,elf_header->e_shoff,elf_header->e_shnum * elf_header->e_shentsize);
  fs_lseek(fs_fd,elf_header->e_phoff,0);
  fs_read(fs_fd, elf_program_header, elf_header -> e_phnum * elf_header -> e_phentsize);
  for(int i = 0;i < elf_header->e_phnum;i++) {
    
    if(elf_program_header[i].p_type == PT_LOAD) {
      fs_lseek(fs_fd,elf_program_header[i].p_offset,0);
      fs_read(fs_fd,(void*)(elf_program_header[i].p_vaddr),elf_program_header[i].p_filesz);
      memset(((void*)elf_program_header[i].p_vaddr + elf_program_header[i].p_filesz),0,(elf_program_header[i].p_memsz -  elf_program_header[i].p_filesz));
    }
  }
  fs_close(fs_fd);
  
  return elf_header->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  // sb_for_waiting();
  printf("are you ok \n");
  ((void(*)())entry) ();
  
}



