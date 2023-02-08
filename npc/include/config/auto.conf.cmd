deps_config := \
	npc_nemu/src/device/Kconfig \
	npc_nemu/src/memory/Kconfig \
	/home/ysyx/ysyx-test/ysyx_nemu/npc/npc_nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
