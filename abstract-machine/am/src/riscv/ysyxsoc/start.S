.section .bl.f, "ax"
.weak _start
.type _start, @function
_start:
  mv s0, zero

  la a0, _bl_s
  la a1, _bl_s_load_lma
  la a2, _ebl_s
  sub a2, a2, a0
  mv t0, zero
0:
  bgeu t0, a2, 1f
  add t1, a1, t0
  lw t2, 0(t1)
  add t1, a0, t0
  sw t2, 0(t1)
  addi t0, t0, 4
  j 0b
1:

#ifdef __ARCH_RISCV32_YSYXSOC_CHISEL__
  la    a0, _bl_s
  la    a2, _ebl_s
  sub   a2, a2, a0
  addi  t0, a0, 0
  jal _bl_dcache_flush          // 自拷贝写入 sram 的脏行刷回内存, 否则跳到 sram 后取指取不到新代码
#endif

  mv a0, zero
  mv a1, zero
  mv a2, zero
  mv t0, zero
  mv t1, zero
  mv t2, zero
  fence.i
  la ra, _do_bl_ss
  jalr ra

#ifdef __ARCH_RISCV32_YSYXSOC_CHISEL__
.globl _bl_dcache_flush
.type _bl_dcache_flush, @function
_bl_dcache_flush:
  beqz  a2, 1f            # 空区域直接返回
  add   t1, t0, a2        # t1 = 末尾地址
  addi  t1, t1, 15        # 向上取整到块长(16B), 覆盖末尾不完整块
  andi  t1, t1, -16
0:
  bgeu  t0, t1, 1f
  .insn r 0x0F, 0b010, 0, x0, t0, x2   # cbo.flush t0
  addi  t0, t0, 16
  j     0b
1:
  ret
#endif

.section .bl.s, "ax"
.globl _do_bl_ss
.type _do_bl_ss, @function
_do_bl_ss:
  la a0, _text_start
  la a1, _text_load_lma
  la a2, _text_end
  jal _bl_ss_load_align4

#ifdef __ARCH_RISCV32_YSYXSOC_CHISEL__
  la    a0, _text_start
  la    a2, _text_end
  sub   a2, a2, a0
  addi  t0, a0, 0
  la   t3, _bl_dcache_flush      // sram→flash 超 jal 范围, 用 la+jalr
  jalr t3
#endif

  la a0, _data_start
  la a1, _data_load_lma
  la a2, _data_end
  jal _bl_ss_load_align4

#ifdef __ARCH_RISCV32_YSYXSOC_CHISEL__
  la    a0, _data_start
  la    a2, _data_end
  sub   a2, a2, a0
  addi  t0, a0, 0
  la   t3, _bl_dcache_flush      // sram→flash 超 jal 范围, 用 la+jalr
  jalr t3
#endif

  la a0, _bss_start
  la a2, _bss_end
  sub a2, a2, a0
  beqz a2, 1f
  mv t0, zero
0:
  bgeu t0, a2, 1f
  add t1, a0, t0
  sw zero, 0(t1)
  addi t0, t0, 4
  j 0b
1:

#ifdef __ARCH_RISCV32_YSYXSOC_CHISEL__
  la    a0, _bss_start
  la    a2, _bss_end
  sub   a2, a2, a0
  addi  t0, a0, 0
  la   t3, _bl_dcache_flush      // sram→flash 超 jal 范围, 用 la+jalr
  jalr t3
#endif

  mv a0, zero
  mv a1, zero
  mv a2, zero
  mv t0, zero
  mv t1, zero
  mv t2, zero
  fence.i
  la sp, _stack_pointer
  la ra, _trm_init
  jalr ra

.globl _bl_ss_load_align4
.type _bl_ss_load_align4, @function
_bl_ss_load_align4:
  sub a2, a2, a0
  beqz a2, 1f
  mv t0, zero
0:
  bgeu t0, a2, 1f
  add t1, a1, t0
  lw t2, 0(t1)
  add t1, a0, t0
  sw t2, 0(t1)
  addi t0, t0, 4
  j 0b
1:

  ret
