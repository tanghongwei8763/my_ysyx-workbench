ARCH ?= riscv32e-npc
VERILOG_DEFINES ?= 
VVP = vvp
IVERILOG = iverilog
ifeq ($(ARCH), riscv32e-npc)
TOPNAME = ysyx_25020037_npc
VERILOG_DEFINES = -DRESET_VAL
else
ifeq ($(ARCH), riscv32e-ysyxsoc)
TOPNAME = ysyxSoCFull
CXXFLAGS += -DCONFIG_YSYXSOC
endif
endif
YOSYSTOP = ysyx_25020037
VERILATOR = verilator
NXDC_FILES = constr/$(TOPNAME).nxdc
INC_PATH ?=

BUILD_DIR = $(NPC_HOME)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

# Iverilog专用目录和文件，仅针对NPC架构
IVERILOG_DIR = $(BUILD_DIR)/iverilog/npc
IVERILOG_BIN = $(IVERILOG_DIR)/sim
WAVEFORM = $(IVERILOG_DIR)/waveform.fst
MEM_INIT = $(IVERILOG_DIR)/mem_init.hex
WAVE ?= 0

nvboard ?= 0
ifndef NVBOARD_HOME
$(error NVBOARD_HOME is not set. Please set the environment variable NVBOARD_HOME to your NVBoard installation path)
endif

ISA ?= 
ARGS ?= 
IMG ?= /home/tanghongwei/ysyx-workbench/npc/rtthread-riscv32e-npc.bin

SIMULATOR = $(BIN)

VERILATOR_FLAGS += --trace -cc --exe \
                   --timescale "1ns/1ns" --no-timing \
				   -MMD --build -cc  \
					-O3 --x-assign fast --x-initial fast --noassert
INCLUDES = -I./csrc/include \
		   -I./vsrc/core \
           -I../ysyxSoC/perip/uart16550/rtl \
           -I../ysyxSoC/perip/spi/rtl 
VERILATOR_FLAGS += $(INCLUDES) $(VERILOG_DEFINES)

IVERILOG_FLAGS += -Wall -g2012 -s sim_top -o $(IVERILOG_BIN) \
    -I./vsrc/core \
    -DWAVE=$(WAVE) \
    -DMEM_INIT_PATH=\"$(MEM_INIT)\" \
    -DWAVEFORM_PATH=\"$(WAVEFORM)\"
ifeq ($(WAVE), 1)
IVERILOG_VVP_FLAGS = -lxt2  # 生成波形文件
else
IVERILOG_VVP_FLAGS =        # 不生成波形文件
endif

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR) $(OBJ_DIR) $(IVERILOG_DIR))

# constraint file
ifeq ($(nvboard), 1)
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk
CSRCS += $(SRC_AUTO_BIND)
endif

CSRCS += $(wildcard $(CURDIR)/csrc/core/*.cpp)
CSRCS += $(wildcard $(CURDIR)/csrc/memory/*.cpp)
CSRCS += $(wildcard $(CURDIR)/csrc/tools/*.cpp)
VSRCS += $(wildcard $(CURDIR)/vsrc/core/*.v)
ifeq ($(ARCH), riscv32e-npc)
VSRCS += $(wildcard $(CURDIR)/vsrc/simple-soc/*.v)
else
ifeq ($(ARCH), riscv32e-ysyxsoc)
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

$(IVERILOG_BIN): ARCH=riscv32e-npc
$(IVERILOG_BIN): TOPNAME=ysyx_25020037_npc
$(IVERILOG_BIN): $(wildcard $(CURDIR)/vsrc/core/*.vh) \
				 $(wildcard $(CURDIR)/vsrc/core/*.v) \
                 $(wildcard $(CURDIR)/vsrc/simple-soc/*.v) \
                 vsrc/sim_top.v
	@echo "Building iverilog simulation for NPC architecture..."
	$(IVERILOG) $(IVERILOG_FLAGS) $^

$(MEM_INIT): $(IMG)
	@echo "Generating memory init from BIN..."
	riscv64-linux-gnu-objcopy -I binary -O verilog --adjust-vma=-0x00000000 $^ $@

iverilog: $(MEM_INIT) $(IVERILOG_BIN)
	@echo "Running iverilog simulation (WAVE=$(WAVE))..."
	$(VVP) -n $(IVERILOG_BIN) $(IVERILOG_VVP_FLAGS)
	@if [ $(WAVE) -eq 1 ] && [ -f $(WAVEFORM) ]; then \
		echo "Waveform: $(WAVEFORM)"; \
	fi

iverilog-view:
	@gtkwave $(WAVEFORM) &

iverilog-clean:
	rm -rf $(IVERILOG_DIR)

run: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@$^ $(ARGS) $(IMG)

yosys:
	cd $(NPC_HOME)/../../yosys-sta && make sta DESIGN=$(YOSYSTOP) \
											SDC_FILE=$(NPC_HOME)/ysyx_25020037.sdc \
											RTL_FILES="$(shell find $(NPC_HOME)/vsrc/core -name "*.v")" \
											CLK_FREQ_MHZ=250 \
	cd $(NPC_HOME)

perf:

clean:
	rm -rf $(BUILD_DIR)

yosys-clean:
	cd $(NPC_HOME)/../../yosys-sta && make clean
	cd $(NPC_HOME)

include ../Makefile
