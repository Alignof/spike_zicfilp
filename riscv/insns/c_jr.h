require_extension(EXT_ZCA);
require(insn.rvc_rs1() != 0);
set_pc(RVC_RS1 & ~reg_t(1));
if (insn.rvc_rs1() != 1 && insn.rvc_rs1() != 5 && insn.rvc_rs1() != 7) {
    STATE.lp_expected = true;
}
