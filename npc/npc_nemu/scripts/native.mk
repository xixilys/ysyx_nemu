-include $(NPC_NEMU_HOME)/tools/../Makefile
include $(NPC_NEMU_HOME)/scripts/build.mk

include $(NPC_NEMU_HOME)/tools/difftest.mk

compile_git:
	$(call git_commit, "compile NEMU")
$(BINARY): compile_git

# Some convenient rules

override ARGS ?= --log=$(BUILD_DIR)/nemu-log.txt
override ARGS += $(ARGS_DIFF)

# Command to execute NEMU
IMG ?=
NEMU_EXEC := $(BIN) $(ARGS)   $(IMG) 

run-env: $(BIN) $(DIFF_REF_SO)

run: run-env
	$(call git_commit, "run NEMU")
	$(NEMU_EXEC) 
	
gdb: run-env
	$(call git_commit, "gdb NEMU")
	gdb -s $(BINARY) --args $(NEMU_EXEC)

clean-tools = $(dir $(shell find $(NPC_NEMU_HOME)/tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: gdb run-env clean-tools clean-all $(clean-tools)
