ARCH ?= riscv32e-npc
ifeq ($(ARCH), riscv32e-npc)
TOPNAME = ysyx_25020037
else
ifeq ($(ARCH), riscv32e-ysyxsoc)
TOPNAME = ysyxSoCFull
endif
endif
TOPNAME = ysyxSoCFull
YOSYSTOP = ysyx_25020037
VERILATOR = verilator
NXDC_FILES = constr/$(TOPNAME).nxdc
INC_PATH ?=

BUILD_DIR = $(NPC_HOME)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

nvboard ?= 0
ifndef NVBOARD_HOME
$(error NVBOARD_HOME is not set. Please set the environment variable NVBOARD_HOME to your NVBoard installation path)
endif

ISA ?= 
ARGS ?= 
IMG ?= 

SIMULATOR = $(BIN)

VERILATOR_FLAGS += --trace -cc --exe \
                   --timescale "1ns/1ns" --no-timing \
				   -MMD --build -cc  \
					-O3 --x-assign fast --x-initial fast --noassert
INCLUDES = -I./csrc/include \
           -I../ysyxSoC/perip/uart16550/rtl \
           -I../ysyxSoC/perip/spi/rtl 
VERILATOR_FLAGS += $(INCLUDES)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
ifeq ($(nvboard), 1)
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk
CSRCS += $(SRC_AUTO_BIND)
endif

CSRCS = $(wildcard $(CURDIR)/csrc/core/*.cpp)
CSRCS += $(wildcard $(CURDIR)/csrc/memory/*.cpp)
CSRCS += $(wildcard $(CURDIR)/csrc/tools/*.cpp)
VSRCS += $(wildcard $(CURDIR)/vsrc/include/ *.v)
VSRCS += $(wildcard $(CURDIR)/vsrc/tools/ *.v)
ifeq ($(ARCH), riscv32e-npc)
VSRCS = $(wildcard $(CURDIR)/vsrc/core-npc/ *.v)
else
ifeq ($(ARCH), riscv32e-ysyxsoc)
VSRCS = $(wildcard $(CURDIR)/vsrc/core-soc/ *.v)
VSRCS += $(shell find $(CURDIR)/../ysyxSoC/perip -type f -name "*.v")
VSRCS += $(shell find $(CURDIR)/../ysyxSoC/build -type f -name "*.v")
endif
endif

# rules for verilator
INC_PATH += $(abspath ./csrc/include)
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

ifeq ($(nvboard), 1)
CXXFLAGS += -DCONFIG_NVBOARD
endif

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) $(SRC_AUTO_BIND)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))


run: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@$^ $(ARGS) $(IMG)

yosys:
	cd $(NPC_HOME)/../../yosys-sta && make sta DESIGN=$(YOSYSTOP) \
											RTL_FILES="$(shell find $(NPC_HOME)/vsrc/core-soc $(NPC_HOME)/vsrc/tools -name "*.v")" \
											CLK_FREQ_MHZ=500 \
											INCLUDE_PATH=$(NPC_HOME)/vsrc/include
	cd $(NPC_HOME)

perf:

clean:
	rm -rf $(BUILD_DIR)

clean-yosys:
	cd $(NPC_HOME)/../../yosys-sta && make clean
	cd $(NPC_HOME)

include ../Makefile
