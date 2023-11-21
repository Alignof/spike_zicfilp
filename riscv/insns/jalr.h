reg_t tmp = npc;
set_pc((RS1 + insn.i_imm()) & ~reg_t(1));
WRITE_RD(tmp);
if (insn.rs1() != 1 && insn.rs1() != 5 && insn.rs1() != 7) {
    STATE.lp_expected = true;
}
