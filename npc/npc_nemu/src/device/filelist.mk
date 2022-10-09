DIRS-y += $(NPC_NEMU_HOME)/src/device/io
SRCS-$(CONFIG_DEVICE) += $(NPC_NEMU_HOME)/src/device/device.c $(NPC_NEMU_HOME)/src/device/alarm.c $(NPC_NEMU_HOME)/src/device/intr.c
SRCS-$(CONFIG_HAS_SERIAL) += $(NPC_NEMU_HOME)/src/device/serial.c
SRCS-$(CONFIG_HAS_TIMER) += $(NPC_NEMU_HOME)/src/device/timer.c
SRCS-$(CONFIG_HAS_KEYBOARD) += $(NPC_NEMU_HOME)/src/device/keyboard.c
SRCS-$(CONFIG_HAS_VGA) += $(NPC_NEMU_HOME)/src/device/vga.c
SRCS-$(CONFIG_HAS_AUDIO) += $(NPC_NEMU_HOME)/src/device/audio.c
SRCS-$(CONFIG_HAS_DISK) += $(NPC_NEMU_HOME)/src/device/disk.c
SRCS-$(CONFIG_HAS_SDCARD) += $(NPC_NEMU_HOME)/src/device/sdcard.c

SRCS-BLACKLIST-$(CONFIG_TARGET_AM) += $(NPC_NEMU_HOME)/src/device/alarm.c

ifdef CONFIG_DEVICE
ifndef CONFIG_TARGET_AM
LIBS += -lSDL2
endif
endif
