/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_802235C8();
s32 func_80223840();
s32 func_802238F0();
s32 func_80223914();
s32 func_80223928();
s32 func_80223B30();
s32 func_8022B460();
s32 func_8022B948();
s32 func_80231A24();
extern char D_80255390[];
extern s32 D_80275238;
extern u16 D_80280BC4;

s32 func_80234880(s32 arg0, s32 arg1) {
    s32 sp2C;
    s32 sp30;
    s32 var_a0;
    s32 sp28;
    s32 sp24;
    unsigned temp_v0;

    sp30 = *(s32 *)(D_80275238 + ((u32)arg0 * 4));
    func_802235C8();
    if (arg0 >= (s32) D_80280BC4) {
        func_80231A24(D_80255390);
        return 0;
    }
    temp_v0 = func_80223840(sp30);
    sp28 = temp_v0;
    sp24 = func_80223914(temp_v0);
    if (func_80223928(sp28) == 0x55565257) {
        func_80223B30(sp28, &sp24, &sp30, 0x434F4D4D, 0, 0);
    }
    do { func_802238F0(sp28); } while (0);
    if (arg1 == 2) {
        return sp30;
    }
    if (arg1 == 0) {
        var_a0 = func_8022B948(sp24, 8);
    } else {
        var_a0 = 0x803DA800;
    }
    sp2C = var_a0;
    func_8022B460(var_a0, sp30, sp24);
    return sp2C;
}
