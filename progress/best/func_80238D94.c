/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80238E34();
s32 func_802450E8();
s32 func_80245AD0();
s32 func_80245B14();
s32 func_80245B40();

s32 func_80238D94(s32 arg0, void *arg1, s32 arg2) {
    s32 sp24;
    u32 temp_v0;
    s32 temp_v0_2;

    func_80245AD0();
    sp24 = func_80238E34(arg0, (u32)arg2);
    func_80245B14();
    if ((s32)sp24 != 0) {
        return sp24;
    }
    (*(s32 *)((char *)(arg1) + 4)) = arg0;
    (*(s32 *)((char *)(arg1) + 8)) = arg2;
    (*(s32 *)((char *)(arg1) + 0)) = 0;
    (*(u8 *)((char *)(arg1) + 0x65)) = 0xFF;
    temp_v0_2 = func_802450E8(arg1);
    if (temp_v0_2) {
        return temp_v0_2;
    }
    temp_v0 = func_80245B40(arg1);
    (*(s32 *)((char *)(arg1) + 0)) |= 1;
    return temp_v0;
}
