include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/ysyxsoc.mk
COMMON_CFLAGS += -march=rv32im_zicsr -mabi=ilp32   # overwrite
LDFLAGS       += -melf32lriscv                    # overwrite

# 该变体在 bootloader 中启用 Zicbom dcache 刷写(start.S 用 #ifdef 守卫),
# 供 chisel-npc 的写回式 dcache 在取指前把脏行刷回内存.
ASFLAGS       += -D__ARCH_RISCV32_YSYXSOC_CHISEL__
