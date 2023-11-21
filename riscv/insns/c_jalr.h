require_extension(EXT_ZCA);
require(insn.rvc_rs1() != 0);
reg_t tmp = npc;
set_pc(RVC_RS1 & ~reg_t(1));
WRITE_REG(X_RA, tmp);
if (insn.rvc_rs1() != 1 && insn.rvc_rs1() != 5 && insn.rvc_rs1() != 7) {
    STATE.lp_expected = true;
}
