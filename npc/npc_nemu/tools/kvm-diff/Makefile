NAME  = x86-kvm
SRCS  = $(shell find src/ -name "*.c")

SHARE = 1
INC_PATH += $(NPC_NEMU_HOME)/include $(NPC_NEMU_HOME)/src/isa/x86/include
GUEST_ISA = x86

include $(NPC_NEMU_HOME)/scripts/build.mk
