NAME  = $(GUEST_ISA)-qemu
SRCS  = $(shell find src/ -name "*.c")

SHARE = 1
CFLAGS += -DNPC_NEMU_HOME=\"$(NPC_NEMU_HOME)\" -DCONFIG_ISA_$(GUEST_ISA)
INC_PATH += $(NPC_NEMU_HOME)/include

include $(NPC_NEMU_HOME)/scripts/build.mk
