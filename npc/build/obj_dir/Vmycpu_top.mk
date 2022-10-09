# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vmycpu_top.mk

default: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/build/mycpu_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vmycpu_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vmycpu_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-O2 \
	-MMD \
	-Wall \
	-O2 \
	-DITRACE_COND=true \
	-D__GUEST_ISA__=riscv64 \
	-I/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/include \
	-I/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/include \
	-I/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/engine/interpreter \
	-I/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/nvboard/include \
	-DTOP_NAME="Vmycpu_top" \
	-I/usr/lib/llvm-13/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_FORMAT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-fPIE \
	-MMD \
	-O3 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-O2 \
	-O2 \
	-lSDL2 \
	-lSDL2_image \
	-lreadline \
	-ldl \
	-pie \
	-lLLVM-13 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu-exec \
	dut_without_isa \
	ref \
	map \
	mmio \
	port-io \
	hostcall \
	init \
	dut \
	init \
	inst \
	logo \
	reg \
	intr \
	mmu \
	paddr \
	vaddr \
	monitor \
	expr \
	sdb \
	watchpoint \
	nemu-main \
	axi \
	verilator_use \
	disasm \
	log \
	rand \
	state \
	timer \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/cpu \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/cpu/difftest \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/device/io \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/engine/interpreter \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64 \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/difftest \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/system \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/memory \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/monitor \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/monitor/sdb \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/sim \
	/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/utils \


### Default rules...
# Include list of all generated classes
include Vmycpu_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu-exec.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/cpu/cpu-exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut_without_isa.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/cpu/difftest/dut_without_isa.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ref.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/cpu/difftest/ref.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/device/io/map.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/device/io/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
port-io.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/device/io/port-io.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
hostcall.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/engine/interpreter/hostcall.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/engine/interpreter/init.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/difftest/dut.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/init.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
inst.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/inst.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
logo.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/logo.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
intr.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/system/intr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmu.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/isa/riscv64/system/mmu.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/memory/paddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vaddr.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/memory/vaddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
nemu-main.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/nemu-main.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
axi.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/sim/axi.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilator_use.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/sim/verilator_use.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/utils/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/utils/log.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rand.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/utils/rand.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
state.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/utils/state.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/npc_nemu/src/utils/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/ddddddd/SynologyDrive/ysyx/ysyx-workbench/npc/build/mycpu_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
