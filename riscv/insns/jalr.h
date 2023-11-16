reg_t tmp = npc;
set_pc((RS1 + insn.i_imm()) & ~reg_t(1));
WRITE_RD(tmp);
if (RVC_RS1 != 1 && RVC_RS1 != 5 && RVC_RS1 != 7) {
    STATE.lp_expected = true;
}
