require_extension(EXT_ZCA);
require(insn.rvc_rs1() != 0);
reg_t tmp = npc;
set_pc(RVC_RS1 & ~reg_t(1));
WRITE_REG(X_RA, tmp);
if (RVC_RS1 != 1 && RVC_RS1 != 5 && RVC_RS1 != 7) {
    STATE.lp_expected = true;
}
