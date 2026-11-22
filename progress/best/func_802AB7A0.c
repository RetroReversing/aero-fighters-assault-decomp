/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24();
extern char D_80326270[];
extern u8 D_80348B98;

s32 func_802AB7A0(s32 arg0) {
int *__repair_home0 = &arg0;

    u8 sp1F;
    register unsigned long var_v1;
    register int sp18;
    u8 temp_a1;

    temp_a1 = D_80348B98;
    sp1F = temp_a1;
    func_80231A24(D_80326270, temp_a1);
    sp18 = temp_a1;
    var_v1 = 0;
    if ((s32) temp_a1 > 0) {
        D_80348B98 = (unsigned)sp1F - 1;
        var_v1 = 1;
    }
    return var_v1 & 0xFF;
}
