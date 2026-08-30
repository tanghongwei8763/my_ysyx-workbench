CROSS_COMPILE := riscv64-linux-gnu-
COMMON_CFLAGS := -fno-pic -march=rv64g -mcmodel=medany -mstrict-align
CFLAGS        += $(COMMON_CFLAGS) -static -ffreestanding
# 让 <riscv/riscv.h> 等按 isa 目录相对的头文件能被找到 (riscv/riscv.h 位于 am/src/riscv/ 下)
CFLAGS        += -I$(AM_HOME)/am/src
ASFLAGS       += $(COMMON_CFLAGS) -O0
LDFLAGS       += -melf64lriscv

# overwrite ARCH_H defined in $(AM_HOME)/Makefile
ARCH_H := arch/riscv.h
