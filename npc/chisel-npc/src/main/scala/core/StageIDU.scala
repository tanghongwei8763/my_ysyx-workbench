package core

import chisel3._
import chisel3.util._

class StageIDU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new IF_ID_Bus))
    val out = Decoupled(new ID_EX_Bus)

    val flush = Input(Bool())

    val rs1_addr = Output(UInt(5.W))
    val rs2_addr = Output(UInt(5.W))
    val rs1_data = Input(UInt(32.W))
    val rs2_data = Input(UInt(32.W))
  })

  val opcode = io.in.bits.inst(6, 0)
  val funct3 = io.in.bits.inst(14, 12)
  val funct7 = io.in.bits.inst(31, 25)
  val rs1    = io.in.bits.inst(19, 15)
  val rs2    = io.in.bits.inst(24, 20)
  val rd     = io.in.bits.inst(11, 7)

  val alu_op      = WireDefault(ALUOp.ADD)
  val imm_sel     = WireDefault(ImmSel.I)
  val src1_sel    = WireDefault(false.B)   // 0=rs1, 1=PC
  val src2_sel    = WireDefault(false.B)   // 0=rs2, 1=imm
  val reg_wen     = WireDefault(false.B)
  val mem_ren     = WireDefault(false.B)
  val mem_wen     = WireDefault(false.B)
  val is_load     = WireDefault(false.B)
  val is_branch   = WireDefault(false.B)
  val is_jal      = WireDefault(false.B)
  val is_jalr     = WireDefault(false.B)
  val mem_size    = WireDefault(0.U(2.W))   // 0=byte, 1=half, 2=word
  val is_unsigned = WireDefault(false.B)

  // R-type: 寄存器-寄存器 ALU 操作 (opcode = 0x33)
  when(opcode === "b0110011".U) {
    reg_wen := true.B
    alu_op := MuxLookup(funct3, ALUOp.ADD)(Seq(
      0.U -> Mux(funct7(5), ALUOp.SUB, ALUOp.ADD),
      1.U -> ALUOp.SLL,
      2.U -> ALUOp.SLT,
      3.U -> ALUOp.SLTU,
      4.U -> ALUOp.XOR,
      5.U -> Mux(funct7(5), ALUOp.SRA, ALUOp.SRL),
      6.U -> ALUOp.OR,
      7.U -> ALUOp.AND,
    ))
  }

  // I-type ALU: 立即数 ALU 操作 (opcode = 0x13)
  when(opcode === "b0010011".U) {
    reg_wen  := true.B
    src2_sel := true.B  
    imm_sel  := ImmSel.I
    alu_op := MuxLookup(funct3, ALUOp.ADD)(Seq(
      0.U -> ALUOp.ADD, 
      1.U -> ALUOp.SLL, 
      2.U -> ALUOp.SLT, 
      3.U -> ALUOp.SLTU,
      4.U -> ALUOp.XOR, 
      5.U -> Mux(funct7(5), ALUOp.SRA, ALUOp.SRL), 
      6.U -> ALUOp.OR,   
      7.U -> ALUOp.AND,  
    ))
  }

  // Load 类 (opcode = 0x03)
  when(opcode === "b0000011".U) {
    reg_wen     := true.B
    mem_ren     := true.B
    src2_sel    := true.B
    is_load     := true.B
    imm_sel     := ImmSel.I
    mem_size    := funct3(1, 0)
    is_unsigned := funct3(2)      
  }

  // Store 类 (opcode = 0x23)
  when(opcode === "b0100011".U) {
    mem_wen     := true.B
    src2_sel    := true.B
    imm_sel     := ImmSel.S
    mem_size    := funct3(1, 0)
  }

  // Branch 类 (opcode = 0x63)
  when(opcode === "b1100011".U) {
    is_branch   := true.B
    src2_sel    := true.B      
    imm_sel     := ImmSel.B
  }

  // JAL (opcode = 0x6F)
  when(opcode === "b1101111".U) {
    reg_wen   := true.B
    is_jal    := true.B
    src1_sel  := true.B        
    src2_sel  := true.B
    imm_sel   := ImmSel.J
  }

  // JALR (opcode = 0x67)
  when(opcode === "b1100111".U) {
    reg_wen   := true.B
    is_jalr   := true.B
    src2_sel  := true.B
    imm_sel   := ImmSel.I
  }

  // LUI (opcode = 0x37)
  when(opcode === "b0110111".U) {
    reg_wen   := true.B
    src2_sel  := true.B
    imm_sel   := ImmSel.U
    alu_op    := ALUOp.COPY_B  
  }

  // AUIPC (opcode = 0x17)
  when(opcode === "b0010111".U) {
    reg_wen   := true.B
    src1_sel  := true.B   
    src2_sel  := true.B   
    imm_sel   := ImmSel.U
    alu_op    := ALUOp.ADD_PC 
  }


  val imm_gen = Module(new ImmGen)
  imm_gen.io.inst := io.in.bits.inst
  imm_gen.io.sel  := imm_sel
  val imm = imm_gen.io.imm

  val decoded = Wire(new ID_EX_Bus)
  decoded.pc          := io.in.bits.pc
  decoded.inst        := io.in.bits.inst
  decoded.imm         := imm
  decoded.rd_addr     := rd
  decoded.rs1_addr    := rs1
  decoded.rs2_addr    := rs2
  decoded.rs1_val     := io.rs1_data
  decoded.rs2_val     := io.rs2_data
  decoded.alu_op      := alu_op
  decoded.src1_sel    := src1_sel
  decoded.src2_sel    := src2_sel
  decoded.reg_wen     := reg_wen
  decoded.mem_ren     := mem_ren
  decoded.mem_wen     := mem_wen
  decoded.is_load     := is_load
  decoded.is_branch   := is_branch
  decoded.is_jal      := is_jal
  decoded.is_jalr     := is_jalr
  decoded.mem_size    := mem_size
  decoded.is_unsigned := is_unsigned

  io.rs1_addr := rs1
  io.rs2_addr := rs2


  val pipe_data  = Reg(new ID_EX_Bus)
  val pipe_valid = RegInit(false.B)

  val stall = !io.out.ready

  when(io.flush) {
    pipe_valid := false.B 
  } .elsewhen(!stall & io.in.valid) {
    pipe_valid := io.in.valid
    pipe_data  := decoded 
  }.elsewhen(stall) {
    pipe_valid := pipe_valid
  }.otherwise {
    pipe_valid := false.B
  }

  io.in.ready  := !stall
  io.out.valid := pipe_valid
  io.out.bits  := pipe_data
}
