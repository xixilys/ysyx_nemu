deps_config := \
	npc_nemu/src/device/Kconfig \
	npc_nemu/src/memory/Kconfig \
	/home/ddddddd/my_learn/cpu_relative/ysyx-workbench/npc/npc_nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
