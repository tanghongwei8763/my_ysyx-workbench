package core

import chisel3._
import chisel3.util._

class Bypass(val depth: Int = 4) extends Module {
  val io = IO(new Bundle {
    val rs1_addr  = Input(UInt(5.W))
    val rs2_addr  = Input(UInt(5.W))
    val src1_data = Input(UInt(32.W))
    val src2_data = Input(UInt(32.W))

    // EXU 推入
    val push_en      = Input(Bool())
    val push_addr    = Input(UInt(5.W))
    val push_data    = Input(UInt(32.W))
    val push_is_load = Input(Bool())

    // load 完成回填
    val fill_en   = Input(Bool())
    val fill_data = Input(UInt(32.W))

    val bypass_src1_data = Output(UInt(32.W))
    val bypass_src2_data = Output(UInt(32.W))
    val stall_rs1        = Output(Bool())
    val stall_rs2        = Output(Bool())
  })

  val valid   = RegInit(VecInit(Seq.fill(depth)(false.B)))
  val addr    = Reg(Vec(depth, UInt(5.W)))
  val data    = Reg(Vec(depth, UInt(32.W)))
  val is_load = RegInit(VecInit(Seq.fill(depth)(false.B)))

  // ---- 读: 最新条目 (index 小) 优先; is_load 条目数据未回填, 不输出数据并置 stall ----
  val bypass_src1 = WireDefault(io.src1_data)
  val bypass_src2 = WireDefault(io.src2_data)
  val stall_w1 = WireDefault(false.B)
  val stall_w2 = WireDefault(false.B)
  for (i <- (depth - 1) to 0 by -1) {
    when(valid(i) && (addr(i) === io.rs1_addr) && (io.rs1_addr =/= 0.U)) {
      when(is_load(i)) { stall_w1 := true.B }.otherwise { bypass_src1 := data(i) }
    }
    when(valid(i) && (addr(i) === io.rs2_addr) && (io.rs2_addr =/= 0.U)) {
      when(is_load(i)) { stall_w2 := true.B }.otherwise { bypass_src2 := data(i) }
    }
  }
  io.bypass_src1_data := bypass_src1
  io.bypass_src2_data := bypass_src2
  io.stall_rs1 := stall_w1
  io.stall_rs2 := stall_w2

  // ---- 回填目标: 最老的 (index 最大) 有效且 is_load 的条目 ----
  val fill_idx = WireDefault(0.U(log2Ceil(depth).W))
  for (i <- 0 until depth) {
    when(valid(i) && is_load(i)) { fill_idx := i.U }
  }
  // 同拍既推入又回填时, 移位会把该 load 条目向上推一位, 回填写入其移位后的位置
  val fill_target = Mux(io.push_en && (fill_idx =/= (depth - 1).U), fill_idx + 1.U, fill_idx)

  // ---- 推入: 移位, 新条目到 index 0 ----
  when(io.push_en) {
    for (i <- (depth - 1) to 1 by -1) {
      valid(i)   := valid(i - 1)
      addr(i)    := addr(i - 1)
      data(i)    := data(i - 1)
      is_load(i) := is_load(i - 1)
    }
    valid(0)   := true.B
    addr(0)    := io.push_addr
    data(0)    := io.push_data
    is_load(0) := io.push_is_load
  }

  // ---- 回填: 覆盖移位写入的目标位置, 写入 load 数据并清除标记 ----
  when(io.fill_en && valid(fill_idx) && is_load(fill_idx)) {
    data(fill_target)    := io.fill_data
    is_load(fill_target) := false.B
  }
}
