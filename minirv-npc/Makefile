VERILATOR = /usr/local/bin/verilator

ISA ?= 
ARGS ?= 
IMG ?= 
#$(info ARGS: $(ARGS))
YOSYSTOP = ysyx_25020037
SIMULATOR = ./obj_dir/Vysyx_25020037

VERILATOR_FLAGS += --trace -cc --top-module ysyx_25020037
INCLUDES = -I./csrc/include
VERILATOR_FLAGS += $(INCLUDES)

CORE_SRC = $(wildcard ./csrc/core/*.cpp)
MEMORY_SRC = $(wildcard ./csrc/memory/*.cpp)
TOOLS_SRC = $(wildcard ./csrc/tools/*.cpp)
VSRC = $(wildcard ./vsrc/*.v)
VERILATOR_EXE_FLAG = --exe

VERILATOR_INPUT = $(VSRC) $(VERILATOR_EXE_FLAG) $(CORE_SRC) $(MEMORY_SRC) $(TOOLS_SRC)


verilate:
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

build: verilate
	make -C obj_dir -f Vysyx_25020037.mk Vysyx_25020037

all: sim
	#@echo "Write this Makefile by your self."

sim: build
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	#@echo "Write this Makefile by your self."
	$(SIMULATOR)

run: build
	$(SIMULATOR) $(ARGS) $(IMG)

yosys:
	cd $(NPC_HOME)/../../yosys-sta && make sta DESIGN=$(YOSYSTOP) \
											SDC_FILE=$(NPC_HOME)/ysyx_25020037.sdc \
											RTL_FILES="$(shell find $(NPC_HOME)/vsrc -name "*.v")" \
											CLK_FREQ_MHZ=250 \
											INCLUDE_PATH=$(NPC_HOME)/vsrc/include
	cd $(NPC_HOME)

clean:
	rm -rf obj_dir

yosys-clean:
	cd $(NPC_HOME)/../../yosys-sta && make clean
	cd $(NPC_HOME)

include ../Makefile
