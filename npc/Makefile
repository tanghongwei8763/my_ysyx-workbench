TOPNAME = ysyxSoCFull
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
TOPNAME = ysyxSoCFull

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
VSRCS = $(shell find $(CURDIR) -type f -name "*.v")
VSRCS += $(shell find $(CURDIR)/../ysyxSoC/perip -type f -name "*.v")
VSRCS += $(shell find $(CURDIR)/../ysyxSoC/build -type f -name "*.v")

# rules for verilator
INC_PATH += $(abspath ./csrc/include)
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

ifeq ($(nvboard), 1)
CXXFLAGS += -DCONFIG_NVBOARD
endif

MODE_MARKER = $(BUILD_DIR)/.nvboard_mode

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) $(SRC_AUTO_BIND)
	@if [ -f $(MODE_MARKER) ]; then \
		LAST_MODE=$$(cat $(MODE_MARKER)); \
		if [ "$$LAST_MODE" != "$(nvboard)" ]; then \
			echo "模式切换，自动清理旧构建..."; \
			$(MAKE) clean; \
		fi; \
	fi
	# 记录当前模式到标记文件
	@echo $(nvboard) > $(MODE_MARKER)
	
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))


run: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@$^ $(ARGS) $(IMG)

clean:
	rm -rf $(BUILD_DIR)

include ../Makefile
