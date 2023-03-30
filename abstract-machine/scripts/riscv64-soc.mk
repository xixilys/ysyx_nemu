include $(AM_HOME)/scripts/isa/riscv64.mk

AM_SRCS := riscv/soc/start.S \
           riscv/soc/trm.c \
           riscv/soc/ioe.c \
           riscv/soc/timer.c \
           riscv/soc/input.c \
           riscv/soc/cte.c \
           riscv/soc/trap.S \
           riscv/soc/gpu.c\
           riscv/soc/disk.c\
           riscv/soc/audio.c\
		   riscv/soc/uart.c\
           platform/dummy/vme.c \
           platform/dummy/mpe.c

NPCFLAGS += -l $(shell dirname $(IMAGE).elf)/npc-log.txt
NPCFLAGS += -b
NPCFLAGS +=  -f $(IMAGE).elf

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
CFLAGS += -I$(AM_HOME)/am/src/riscv/soc/include
CFLAGS  += -DISA_H=\"riscv/riscv.h\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin


run: image 
	$(MAKE)  -C  $(NPC_HOME) ISA=$(ISA) run  ARGS="$(NPCFLAGS)"   IMG=$(IMAGE).bin 