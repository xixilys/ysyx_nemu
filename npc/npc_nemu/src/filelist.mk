SRCS-y += $(NPC_NEMU_HOME)/src/nemu-main.c
DIRS-y += $(NPC_NEMU_HOME)/src/cpu $(NPC_NEMU_HOME)/src/monitor $(NPC_NEMU_HOME)/src/utils
DIRS-$(CONFIG_MODE_SYSTEM) += $(NPC_NEMU_HOME)/src/memory
DIRS-BLACKLIST-$(CONFIG_TARGET_AM) += $(NPC_NEMU_HOME)/src/monitor/sdb

SHARE = $(if $(CONFIG_TARGET_SHARE),1,0)
LIBS += $(if $(CONFIG_TARGET_NATIVE_ELF),-lreadline -ldl -pie,)

ifdef mainargs
ASFLAGS += -DBIN_PATH=\"$(mainargs)\"
endif
SRCS-$(CONFIG_TARGET_AM) += $(NPC_NEMU_HOME)/src/am-bin.S
.PHONY: $(NPC_NEMU_HOME)/src/am-bin.S
