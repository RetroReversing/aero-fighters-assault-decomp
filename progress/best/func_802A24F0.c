/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24();
s32 func_802A5090();
extern char D_80324BF8[];
extern char D_80324C18[];

s32 func_802A24F0(s32 arg0, u8 *arg1, u8 arg2, u8 *arg3, s32 arg4) {
    s32 sp30;
    u8 sp2F;
    s32 *sp24;
    s32 *temp_a0;
    
    s32 temp_t6;
    
    s32 var_t2;
    
    u8 temp_t1;
    u8 var_t0;
    void *temp_v1;

    temp_t1 = *arg1;
    temp_t6 = (arg2 & 0xFF) & 0xFF;
    var_t2 = 0;
    var_t0 = 0;
    if ((s32) temp_t1 > 0) {
loop_1:
        temp_v1 = *(s32 *)(arg0 + (var_t0 * 4));
        if ((temp_v1 != NULL) && ((*(u8 *)((char *)(temp_v1) + 0x1305)) == 0)) {
            sp2F = (unsigned)var_t0;
            var_t2 = 1;
        } else {
            sp30 = (var_t0 + 1) & 0xFF;
            var_t0 = (u8) sp30;
            if (sp30 < (*arg1)) {
                goto loop_1;
            }
        }
    }
    if (var_t2 != 0) {
        var_t2 = *(s32 *)(arg0 + (sp2F * 4));
    } else if ((s32) var_t0 >= temp_t6) {
        sp30 = 0;
        { func_80231A24(D_80324BF8, arg4, temp_t1 + 1); }
        var_t2 = 0;
        *arg3 += 1;
    } else {
        temp_a0 = (void *)(arg0); temp_a0 = (void *)((char *)temp_a0 + (s32)((var_t0 * 4)));
        sp24 = temp_a0;
        func_802A5090(temp_a0);
        temp_t6 = *temp_a0;
        var_t2 = temp_t6;
        if (temp_t6 == 0) {
            sp30 = temp_t6;temp_t6=0;
            var_t2 = sp30;
            func_80231A24(D_80324C18, 4, arg4);
        } else {
            *arg1 += 1;
        }
    }
    return var_t2;
}
