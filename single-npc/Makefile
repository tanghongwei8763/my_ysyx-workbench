VERILATOR = /usr/local/bin/verilator

ISA ?= 
ARGS ?= 
IMG ?= 
#$(info ARGS: $(ARGS))

SIMULATOR = ./obj_dir/Vysyx_25020037_cpu

VERILATOR_FLAGS += --trace -cc --top-module ysyx_25020037_cpu
INCLUDES = -I./csrc/include
VERILATOR_FLAGS += $(INCLUDES)

CORE_SRC = $(wildcard ./csrc/core/*.cpp)
MEMORY_SRC = $(wildcard ./csrc/memory/*.cpp)
TOOLS_SRC = $(wildcard ./csrc/tools/*.cpp)
VSRC = $(wildcard ./vsrc/*.v)
VSRC += $(wildcard ./vsrc/tools/*.v)
VERILATOR_EXE_FLAG = --exe

VERILATOR_INPUT = $(VSRC) $(VERILATOR_EXE_FLAG) $(CORE_SRC) $(MEMORY_SRC) $(TOOLS_SRC)


verilate:
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

build: verilate
	make -C obj_dir -f Vysyx_25020037_cpu.mk Vysyx_25020037_cpu

all: sim
	#@echo "Write this Makefile by your self."

sim: build
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	#@echo "Write this Makefile by your self."
	$(SIMULATOR)

run: build
	$(SIMULATOR) $(ARGS) $(IMG)

clean:
	rm -rf obj_dir

include ../Makefile
