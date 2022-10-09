ifdef CONFIG_ITRACE
CXXSRC += $(NPC_NEMU_HOME)/src/utils/disasm.cc

# +CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
# +LIBS += $(shell llvm-config --libs)

 CXXFLAGS += $(shell llvm-config-13 --cxxflags) -fPIE
 LIBS += $(shell llvm-config-13 --libs)
endif
