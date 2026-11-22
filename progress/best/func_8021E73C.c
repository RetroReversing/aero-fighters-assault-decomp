/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_8022FF40();
s32 func_8022FF90();
extern f32 D_8024E77C;
extern s32 D_8024E788;

s32 func_8021E73C(void *arg0, u8 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    char *var_s2;
    u8 temp_a1;

    temp_v0 = func_8022FF90(arg1);
    var_s0 = 0;
    var_s1 = 0;
    if (temp_v0 > 0) {
        var_s2 = arg1;
        for (;;) {
            temp_a1 = *(u8 *)var_s2;
            if (temp_a1 == 0) {
                return var_s0;
            }
            if (temp_a1 != 0xA) {
                temp_v0_2 = func_8022FF40((*(s32 *)((char *)(arg0) + 0)), (u32)temp_a1);
                if (temp_v0_2 != 0) {
                    var_s0 += *(s32 *)((*(s32 *)((char *)(arg0) + 0xC)) + ((temp_v0_2 - (*(s32 *)((char *)(arg0) + 0))) * 0x10));
                } else {
                    var_s0 += D_8024E788;
                }
            }
            var_s1 += 1;
            ++var_s2;
            if (temp_v0 <= var_s1) {
                goto block_9;
            }
            continue;
            break;
        }
    }
block_9:
    return (s32) ((f32) var_s0 * D_8024E77C);
}
