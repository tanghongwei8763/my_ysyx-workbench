package core

import chisel3._
import chisel3.util._

class DataBankSRAM(depth: Int) extends Module {
  val addrWidth = log2Ceil(depth)
  val io = IO(new Bundle {
    val addra = Input(UInt(addrWidth.W))
    val dina  = Input(UInt(32.W))
    val douta = Output(UInt(32.W))
    val ena   = Input(Bool())
    val wea   = Input(UInt(4.W))
  })

  val mem = Reg(Vec(depth, UInt(32.W)))
  val doutReg = RegInit(0.U(32.W))

  when(io.ena) {
    when(io.wea.orR) {
      // 字节级写入: 读旧值 → 按掩码替换字节 → 写回
      val old = mem(io.addra)
      val newData = Cat(
        Mux(io.wea(3), io.dina(31, 24), old(31, 24)),
        Mux(io.wea(2), io.dina(23, 16), old(23, 16)),
        Mux(io.wea(1), io.dina(15, 8),  old(15, 8)),
        Mux(io.wea(0), io.dina(7, 0),   old(7, 0))
      )
      mem(io.addra) := newData
    }.otherwise {
      doutReg := mem(io.addra)
    }
  }

  io.douta := doutReg
}

class TagVSRAM(width: Int, depth: Int) extends Module {
  val addrWidth = log2Ceil(depth)
  val io = IO(new Bundle {
    val addra = Input(UInt(addrWidth.W))
    val dina  = Input(UInt(width.W))
    val douta = Output(UInt(width.W))
    val ena   = Input(Bool())
    val wea   = Input(Bool())
  })

  val mem = Reg(Vec(depth, UInt(width.W)))
  val doutReg = RegInit(0.U(width.W))

  when(io.ena) {
    when(io.wea) {
      mem(io.addra) := io.dina
    }.otherwise {
      doutReg := mem(io.addra)
    }
  }

  io.douta := doutReg
}
