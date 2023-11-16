require_extension(EXT_ZCA);
require(insn.rvc_rs1() != 0);
set_pc(RVC_RS1 & ~reg_t(1));
if (RVC_RS1 != 1 && RVC_RS1 != 5 && RVC_RS1 != 7) {
    STATE.lp_expected = true;
}
