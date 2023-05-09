#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static uint32_t  *img = NULL; 
//   0x00000297,  // auipc t0,0
//   0x7DEA02B7,//lui 
//  // 0xFFF28FE7,//jalr

//   0x0002b823,  // sd  zero,16(t0)
//   0x0102b503,  // ld  a0,16(t0)
//   0x00100073,  // ebreak (used as nemu_trap)
//   0xdeadbeef,  // some data
// };

static void restart() {
  /* Set the initial program counter. */
  // cpu.pc = RESET_VECTOR;
  cpu.pc = 0x30000000;
  // img = ma

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  FILE *fp = fopen("/home/ddddddd/my_learn/cpu_relative/ysyx4_soc/ysyx/prog/src/rtthread/bsp/qemu-riscv-virt64/rtthread.bin", "rb");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  fseek(fp, 0, SEEK_SET);
  /* Load built-in image. */
  fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  // memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
  CSR(MSTATUS) = 0x0000000a00001800;

  /* Initialize this virtual computer system. */
  restart();
}
