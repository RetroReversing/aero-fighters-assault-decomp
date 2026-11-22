/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80205358();
s32 func_80205528();
s32 func_8023072C();
s32 func_80231A24();
s32 func_802A9B84();
s32 func_802AF76C();
s32 func_8030ACCC();
s32 func_8030BEE8();
extern char D_80326518[];
extern char D_80326548[];
extern char D_80326554[];
extern char D_80326560[];
extern char D_80326578[];
extern s8 D_8032AA80;
extern s8 D_80348BAC;

void func_802AC5BC(void *arg0) {
    char sp1C[0x64];

    func_8023072C(sp1C, D_80326518, D_80326548, D_80326554);
    func_80231A24(D_80326560, sp1C);
    func_802AF76C(arg0);
    D_8032AA80 = 1;
    func_8030BEE8();
    func_80205358(0);
    func_80205528(0);
    func_80231A24(D_80326578);
    D_8032AA80 = 0x1F;
    func_802A9B84(arg0);
    D_80348BAC = 0;
    (*(s32 *)((char *)(arg0) + 0x32A4)) = 1;
    (*(f32 *)((char *)(arg0) + 0x32B0)) = 1.0f;
    func_8030ACCC(0);
}
