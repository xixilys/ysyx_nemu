# .DEFAULT_GOAL = app

# Add necessary options if the target is a shared library
ifeq ($(SHARE),1)
SO = -so
CFLAGS  += -fPIC
LDFLAGS += -rdynamic -shared -fPIC
endif

# VERILATOR = verilator
# # VERILATOR_CFLAGS += -j 20
# VERILATOR_CFLAGS += -MMD --build -cc  \
# 				-O3 --x-assign fast --x-initial fast --noassert
# VERILATOR_CFLAGS += --trace
# NPC_HOME = /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc



# VSRCS = $(shell find $(abspath $(NPC_HOME)/vsrc/riscv64_ysyx) -name "*.v")
# CSRCS = $(shell find $(abspath $(NPC_HOME)/csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")



WORK_DIR  = $(NPC_NEMU_HOME)
INC_PATH := $(WORK_DIR)/include $(INC_PATH) 

CFLAGS  := -O2 -MMD -Wall $(INCLUDES) $(CFLAGS)
LDFLAGS := -O2 $(LDFLAGS)
# INCFLAGS = $(addprefix -I, $(INC_PATH))
# VER_CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" 
# VER_LDFLAGS += -lSDL2 -lSDL2_image 

# VERI_BUILD_DIR = $(NPC_HOME)/build
# Verilator_OBJ_DIR = $(VERI_BUILD_DIR)/obj_dir
# BIN = $(VERI_BUILD_DIR)/$(TOPNAME)



# OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o) $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

# Compilation patterns
# $(OBJ_DIR)/%.o: %.c
# 	@echo + CC $<
# 	@mkdir -p $(dir $@)
# 	@$(CC) $(CFLAGS) -c  -o $@ $<
# 	$(call call_fixdep, $(@:.o=.d), $@)
# $(addprefix -CFLAGS , $(VER_CFLAGS)) $(addprefix -LDFLAGS , $(VER_LDFLAGS)) 
#--Mdir $(OBJ_DIR) #--exe -o $(abspath $(BIN)) 
# $(OBJ_DIR)/%.o: %.cc $(VSRCS)
# 	$(VERILATOR) $(VERILATOR_CFLAGS) \
# 		-top $(TOPNAME) $^ --Mdir $(Verilator_OBJ_DIR)  
# 	@echo $(VERILATOR_HOME)
# 	@echo sbsbsbsbsbsb
# 	@echo $(INC_PATH)
# 	@echo + CXX $<
# 	@mkdir -p $(dir $@)
# 	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
# 	$(call call_fixdep, $(@:.o=.d), $@)


# Depencies

# -include $(OBJS:.o=.d)

# Some convenient rules

# .PHONY: app clean

# app: $(BIN)

# $(BIN):   $(VSRCS) $(CSRCS)
# 	@echo $(CSRCS)
# 	@echo $(VSRCS)
# 	@echo $(VER_CFLAGS)
# 	@echo $(VER_LDFLAGS)
# 	@echo $(TOPNAME)
# 	@echo sbsbsbsbs
# 	@rm -rf $(VERI_BUILD_DIR)
# 	@$(VERILATOR) $(VERILATOR_CFLAGS) \
# 		-top $(TOPNAME) $^ \
# 		$(addprefix -CFLAGS , $(VER_CFLAGS)) $(addprefix -LDFLAGS , $(VER_LDFLAGS)) \
# 		--Mdir $(Verilator_OBJ_DIR) --exe -o $(abspath $(BIN))
# 	# $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
# 	# # @echo + LD $@
# 	# # @$(LD)  -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS)

# clean:
# 	-rm -rf $(BUILD_DIR)
