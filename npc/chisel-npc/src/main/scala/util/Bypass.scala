package core

import chisel3._
import chisel3.util._

class Bypass(val depth: Int = 4) extends Module {
  val io = IO(new Bundle {
    val rs1_addr  = Input(UInt(5.W))
    val rs2_addr  = Input(UInt(5.W))
    val src1_data = Input(UInt(32.W))
    val src2_data = Input(UInt(32.W))

    val rd_w_bypass_data = Input(UInt(32.W))
    val rd_w_bypass_en   = Input(Bool())
    val rd_w_bypass      = Input(UInt(5.W))

    val bypass_src1_data = Output(UInt(32.W))
    val bypass_src2_data = Output(UInt(32.W))
  })

    val valid = RegInit(VecInit(Seq.fill(depth)(false.B)))
    val addr  = Reg(Vec(depth, UInt(5.W)))
    val data  = Reg(Vec(depth, UInt(32.W)))

    val bypass_src1 = Wire(UInt(32.W))
    val bypass_src2 = Wire(UInt(32.W))
    bypass_src1 := io.src1_data
    bypass_src2 := io.src2_data

    for (i <- (depth - 1) to 0 by -1) {
        when (valid(i) && (addr(i) === io.rs1_addr) && (io.rs1_addr =/= 0.U)) {
            bypass_src1 := data(i)
        }
        when (valid(i) && (addr(i) === io.rs2_addr) && (io.rs2_addr =/= 0.U)) {
            bypass_src2 := data(i)
        }
    }
    when (io.rd_w_bypass_en && (io.rd_w_bypass === io.rs1_addr) && (io.rs1_addr =/= 0.U)) {
        bypass_src1 := io.rd_w_bypass_data
    }
    when (io.rd_w_bypass_en && (io.rd_w_bypass === io.rs2_addr) && (io.rs2_addr =/= 0.U)) {
        bypass_src2 := io.rd_w_bypass_data
    }

    // 输出连接
    io.bypass_src1_data := bypass_src1
    io.bypass_src2_data := bypass_src2

    when (io.rd_w_bypass_en) {
        for (i <- (depth - 1) to 1 by -1) {
            valid(i) := valid(i - 1)
            addr(i)  := addr(i - 1)
            data(i)  := data(i - 1)
        }
        valid(0) := true.B
        addr(0)  := io.rd_w_bypass
        data(0)  := io.rd_w_bypass_data
    }
}