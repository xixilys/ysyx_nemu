#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#include <verilator_use.h>



#if defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif
#ifdef CONFIG_ITRACE_COND
#define MAX_MTRACE_LOOP_DEPTH 30
#define read_type 1
#define write_type 2
#endif

#define spi_flash_base 0x30000000
#define spi_flash_max  0x3fffffff

#define uart_base 0x10000000
#define uart_max  0x10000fff

#define clint_base 0x02000000
#define clint_max  0x0200ffff

uint8_t *guest_to_host(paddr_t paddr)
{
  return pmem + paddr - CONFIG_MBASE;
}
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

typedef struct
{
  size_t paddr;
  size_t data;
  int len;
  uint8_t type;
  size_t pc;
} mtrace_type;

#ifdef CONFIG_ITRACE_COND
mtrace_type mtrace_loop[MAX_MTRACE_LOOP_DEPTH] = {};
int mtrace_loop_index = 0;

static void mtrace_loop_push(mtrace_type *loop, mtrace_type instance, int *index)
{

  loop[*index] = instance;
  (*index)++;
  if (*index >= MAX_MTRACE_LOOP_DEPTH)
  {
    *index = 0;
  }
}
void mtrace_loop_print(mtrace_type *loop, int index)
{
  int i = index;
  for (; i < MAX_MTRACE_LOOP_DEPTH; i++)
  {
    printf("    pc -> %08lx mem_type ->", mtrace_loop[i].pc);
    if (mtrace_loop[i].type == read_type)
    {
      printf("mem read  ");
    }
    else if (mtrace_loop[i].type == write_type)
    {
      printf("mem write ");
    }
    printf("mem_addr -> %lx  mem_data -> %016lx mem_len -> %x \n", mtrace_loop[i].paddr, mtrace_loop[i].data, mtrace_loop[i].len);
    //  printf("     inst ->  %08x __ pc ->  ",loop[i].isa.inst.val);
  }
  for (i = 0; i < index - 1; i++)
  {
    printf("    pc -> %08lx mem_type ->", mtrace_loop[i].pc);
    if (mtrace_loop[i].type == read_type)
    {
      printf("mem read  ");
    }
    else if (mtrace_loop[i].type == write_type)
    {
      printf("mem write ");
    }
    printf("mem_addr -> %lx  mem_data -> %016lx mem_len -> %x \n", mtrace_loop[i].paddr, mtrace_loop[i].data, mtrace_loop[i].len);
  }
  printf("--->pc -> %08lx mem_type ->", mtrace_loop[i].pc);
  if (mtrace_loop[i].type == read_type)
  {
    printf("mem read  ");
  }
  else if (mtrace_loop[i].type == write_type)
  {
    printf("mem write ");
  }
  printf("mem_addr -> %lx  mem_data -> %016lx mem_len -> %x \n", mtrace_loop[i].paddr, mtrace_loop[i].data, mtrace_loop[i].len);
}

#endif

static word_t pmem_read(paddr_t addr, int len)
{
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data)
{
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr)
{
#ifdef CONFIG_ITRACE_COND
  mtrace_loop_print(mtrace_loop, mtrace_loop_index);
#endif

  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR ") at pc = " FMT_WORD,
        addr, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE, cpu.pc);
}

void init_mem()
{
#if defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  // fefef
  for (i = 0; i < (int)(CONFIG_MSIZE / sizeof(p[0])); i++)
  {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

size_t mem_pc = 0;

extern "C" void flash_read(uint64_t addr, uint64_t *data) ;
word_t paddr_read(paddr_t addr, int len, uint8_t mem_type,int skip)
{
#ifdef CONFIG_ITRACE_COND
  mtrace_type mem_read_mtrace = {};
  mem_read_mtrace.type = read_type;
  mem_read_mtrace.len = len;
  mem_read_mtrace.paddr = addr;
  mem_read_mtrace.pc = mem_pc;
#endif
// printf("in_mem\n");
  //如果在所设定的内存范围内
  if (likely(in_pmem(addr)))
  {
    size_t pmem_data = pmem_read(addr, len);
#ifdef CONFIG_ITRACE_COND
    mem_read_mtrace.data = pmem_data;
    if (mem_type == mem_others)
    {
      // mtrace_loop_push(mtrace_loop, mem_read_mtrace, &mtrace_loop_index);
    }
    else if (mem_type == mem_inst_fec)
    {
      mem_pc = addr;
    }
#endif

    return pmem_data; // mem_read_mtrace.data;
  }
  //如果不在设定的内存地址范围内，则进行MMIO处理
  //MMIO目前只模拟了flash

  if(addr <= spi_flash_max && addr >= spi_flash_base) {
    word_t spi_data = 0;
    flash_read(addr - spi_flash_base,&spi_data);
    switch (len) {
    case 1: return ((uint8_t)spi_data);
    case 2: return (uint16_t )spi_data;
    case 4: return (uint32_t )spi_data;
    case 8: return spi_data;
    default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
    return spi_data; 
    }
  }else if(addr <= uart_max && addr >= uart_base ) {
    // out_of_bound
    inst_diff_skip();
    return 0;
  }else if(addr <= clint_max && addr >= clint_base) {
    // printf("addr is %lx\n",addr);
    inst_diff_skip();
    return 0; 
  }
  // else if()
  // if(skip == 1) {
  //   // printf("sbhjy\n");

  //   // IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  // }else {
  //   // IFDEF(CONFIG_DEVICE, return mmio_read_without_skip(addr, len));
  // }
  
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data,int skip)
{
#ifdef CONFIG_ITRACE_COND
  mtrace_type mem_write_mtrace = {};
  mem_write_mtrace.type = write_type;
  mem_write_mtrace.len = len;
  mem_write_mtrace.data = data;
  mem_write_mtrace.paddr = addr;
  mem_write_mtrace.pc = mem_pc;
  // mtrace_loop_push(mtrace_loop, mem_write_mtrace, &mtrace_loop_index);
#endif
//  if(addr == 0xa0000104) {
//             printf("data is %lx and len is %d\n",data,len);
//         }
// printf()
  if (likely(in_pmem(addr)))
  {
    pmem_write(addr, len, data);
    return;
  }
  if(addr <= clint_max && addr >= clint_base) {
    // printf("write addr is %lx\n",addr);
    inst_diff_skip();
    return ; 
  }
  //写可以不做处理
  // if(skip == 1) {
  //   printf("here\n");
  //   IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return );
  // }else {
  //   IFDEF(CONFIG_DEVICE, mmio_write_without_skip(addr, len, data); return );
  // }
  // out_of_bound(addr);
}

#ifdef CONFIG_ITRACE_COND

void mtrace_printf()
{
  mtrace_loop_print(mtrace_loop, mtrace_loop_index);
}

#endif
mem_debug_handle mtrace_debuger = {};

size_t* mtrace_data_tobe = NULL;
void mem_trace_func(const svOpenArrayHandle r,size_t mem_write_state,size_t size,size_t cache)
{ 
  mtrace_data_tobe = (size_t *)(((VerilatedDpiOpenVar*)r)->datap());
  mtrace_debuger.debug_mem_state = 1;
  mtrace_debuger.debug_mem_size = size;
  mtrace_debuger.debug_mem_write_state_get = mem_write_state;
  mtrace_debuger.debug_mem_addr = mtrace_data_tobe[0];
  mtrace_debuger.debug_mem_pc   = mtrace_data_tobe[2];
  mtrace_debuger.debug_mem_data = mtrace_data_tobe[1];
  mtrace_debuger.debug_mem_cache = cache;
  // printf("pc data is %lx  and data data is %lx\n",mtrace_debuger.debug_mem_pc,mtrace_debuger.debug_mem_data);
#ifdef CONFIG_ITRACE_COND
  int mem_write_state_int = mem_write_state;
  mtrace_type mem_read_mtrace = {};
  mem_read_mtrace.type = mem_write_state_int + 1;
  switch (size)
  {
  case 0:
    mem_read_mtrace.len = 1;
    break;
  case 1:
    mem_read_mtrace.len = 2;
    break;
  case 2:
    mem_read_mtrace.len = 4;
    break;
  case 3:
    mem_read_mtrace.len = 8;
    break;
  default:
    mem_read_mtrace.len = 0;
    break;
  }

  mem_read_mtrace.paddr = mtrace_debuger.debug_mem_addr;
  mem_read_mtrace.pc = mtrace_debuger.debug_mem_pc;
  mem_read_mtrace.data = mtrace_debuger.debug_mem_data;
  

  mtrace_loop_push(mtrace_loop, mem_read_mtrace, &mtrace_loop_index);
#endif
}