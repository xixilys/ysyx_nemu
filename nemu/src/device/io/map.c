#include <isa.h>
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)

//下面与dtrace有关
#ifdef CONFIG_ITRACE_COND

  #define MAX_DTRACE_LOOP_DEPTH  30
  #define read_type 1
  #define write_type  2


  dtrace_type dtrace_loop[MAX_DTRACE_LOOP_DEPTH] = {};
  int  dtrace_loop_index = 0;

static void dtrace_loop_push(dtrace_type * loop,dtrace_type instance , int* index) {

  loop[*index] = instance;
  (*index) ++;
  if(*index >= MAX_DTRACE_LOOP_DEPTH) {
    *index = 0;
  }
}
void dtrace_loop_print() {
  
  int i = index;
  for(;i < MAX_DTRACE_LOOP_DEPTH;i++) {
    printf("device_type ->");
    if(dtrace_loop[i].type == read_type){
      printf("device read  ");
    }else if(dtrace_loop[i].type == write_type) {
      printf("device write ");
    }
    printf("device_base -> %lx device_offset -> %x  device_data -> %016lx device_length -> %x \n",dtrace_loop[i].addr_base,dtrace_loop[i].offset,dtrace_loop[i].data,dtrace_loop[i].len); 
    //  printf("     inst ->  %08x __ pc ->  ",loop[i].isa.inst.val);

  }
  for(i = 0;i < index - 1;i++) {
     printf("device_type ->");
    if(dtrace_loop[i].type == read_type){
      printf("device read  ");
    }else if(dtrace_loop[i].type == write_type) {
      printf("device write ");
    }
    printf("device_base -> %lx device_offset -> %x  device_data -> %016lx device_length -> %x \n",dtrace_loop[i].addr_base,dtrace_loop[i].offset,dtrace_loop[i].data,dtrace_loop[i].len); 
  }
    printf("--->device_type ->");
    if(dtrace_loop[i].type == read_type){
      printf("device read  ");
    }else if(dtrace_loop[i].type == write_type) {
      printf("device write ");
    }
    printf("device_base -> %lx device_offset -> %x  device_data -> %016lx device_length -> %x \n",dtrace_loop[i].addr_base,dtrace_loop[i].offset,dtrace_loop[i].data,dtrace_loop[i].len); 
}

#endif

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);



  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  word_t ret = host_read(map->space + offset, len);
  #ifdef CONFIG_ITRACE_COND
  dtrace_type device_read_dtrace = {};
  device_read_dtrace.type = read_type;
  device_read_dtrace.len = len;
  device_read_dtrace.addr_base = map->low;
  device_read_dtrace.offset    = offset;
  device_read_dtrace.device_name = map->name;
  device_read_dtrace.data = ret;
  dtrace_loop_push(dtrace_loop,device_read_dtrace,&dtrace_loop_index);
  #endif
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
  #ifdef CONFIG_ITRACE_COND
  dtrace_type device_read_dtrace = {};
  device_read_dtrace.type = write_type;
  device_read_dtrace.len = len;
  device_read_dtrace.addr_base = map->low;
  device_read_dtrace.offset    = offset;
  device_read_dtrace.device_name = map->name;
  device_read_dtrace.data = data;
  dtrace_loop_push();
  #endif
}
