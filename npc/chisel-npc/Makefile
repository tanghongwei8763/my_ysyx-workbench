# =============================================================================
# Makefile — Chisel → Verilog 生成
# =============================================================================
# 用法:
#   make         生成 CPU.v (五级流水线 RISC-V 处理器核)
#   make clean   清理构建产物
# =============================================================================

TOP       ?= core.CPU
BUILD_DIR  = build
OUTPUT     = $(BUILD_DIR)/CPU.v

.PHONY: all verilog verilate clean

all: verilog

verilog:
	mkdir -p $(BUILD_DIR)
	sbt "runMain $(TOP)" 2>&1 | tee build.log

verilate: verilog
	verilator --lint-only -I$(BUILD_DIR) $(OUTPUT) 2>&1 || true

clean:
	rm -rf $(BUILD_DIR) target build.log
