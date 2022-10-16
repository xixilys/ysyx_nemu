# TOPNAME = mycpu_top
# NXDC_FILES = pin_bind.nxdc

# include $(NVBOARD_HOME)/scripts/nvboard.mk

# include $(NPC_NEMU_HOME)/nemu_npc.mk

# $(shell mkdir -p $(VERI_BUILD_DIR))

# # constraint file
# # SRC_AUTO_BIND = $(abspath $(VERI_BUILD_DIR)/auto_bind.cpp)
# # $(SRC_AUTO_BIND): $(NXDC_FILES)
# # 	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# # project source


# #  CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
# #  CSRCS += $(SRC_AUTO_BIND)

# # rules for NPC_NEMU_HOME


# # rules for verilator



# run: $(BIN)
# 	@$^

# clean:
# 	-rm -rf $(BUILD_DIR)
# 	-rm -rf $(VERI_BUILD_DIR)



# .PHONY:  run



TOPNAME = mycpu_top
NXDC_FILES = pin_bind.nxdc
INC_PATH ?=


VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O0 --x-assign fast --x-initial fast --noassert 
VERILATOR_CFLAGS += --trace-fst -j 10
VERILATOR_CFLAGS += --threads 10

NOW_PLACE = $(shell pwd)

BUILD_DIR = $(NOW_PLACE)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
default: $(BIN)
include $(NPC_NEMU_HOME)/nemu_npc.mk
$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc/riscv64_ysyx) -name "*.v")
VSRCS += $(shell find $(abspath ./vsrc/v_lib) -name "*.v")
# CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS = $(SRCS) $(CXXSRC)
# CSRCS = $(NPC_NEMU_HOME)/nemu-main.c

# rules for NVBoard

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" $(CXXFLAGS)
LDFLAGS += -lSDL2 -lSDL2_image $(LIBS) 

$(BIN): $(VSRCS) $(CSRCS)
	python3 $(NPC_HOME)/verilog_add_something.py
	-rm $(NPC_NEMU_HOME)/include/generated/autoconf.h 
	cp $(NPC_HOME)/include/generated/autoconf.h $(NPC_NEMU_HOME)/include/generated/
	@echo $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN)) 
        
		$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

# run: $(BIN)
# 	@$^

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean run