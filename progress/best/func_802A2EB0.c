/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24();
s32 func_802A5430();
s32 func_80320CE0();
extern char D_80324E38[];
extern char D_80324E58[];

s32 func_802A2EB0(s32 arg0, u8 *arg1, u8 arg2, u8 *arg3, s32 arg4) {
s32 *sp2C;

    register char *__repair_addr;
    register s32 *temp_a1;
    register long temp_a0;
    u8 sp36;
    register unsigned long sp38;
    u8 sp37;
    
    char temp_t0;
    long var_s0;

    sp38 = 0;
    sp36 = 0;
    var_s0 = 0;
    if ((s32) *arg1 > 0) {
loop_1:
        temp_a0 = *(s32 *)(arg0 + (var_s0 * 4));
        if ((temp_a0 != 0) && (func_80320CE0(temp_a0) == 0)) {
            sp37 = var_s0;
            sp36 = 1;
        } else {
            temp_t0 = ((u32)var_s0 + 1) & 0xFF;
            var_s0 = (u8) temp_t0;
            if (temp_t0 < (s32) *arg1) {
                goto loop_1;
            }
        }
    }
    if ((u32)sp36 != 0) {
__repair_addr = (char *)(arg0 + (sp37 * 4));

        sp38 = *(s32 *)(__repair_addr);
    } else if ((s32) var_s0 >= (s32) arg2) {
        func_80231A24(D_80324E38, arg4, *arg1 + 1);
        *arg3 += 1;
    } else {
        sp2C = temp_a1;
        temp_a1 = (void *)(arg0); temp_a1 = (void *)((char *)temp_a1 + (s32)(((s32)var_s0 * 4)));
        func_802A5430(temp_a1);
        temp_a0 = *temp_a1;
        sp38 = (u32)temp_a0;
        if (temp_a0 == 0) {
            func_80231A24(D_80324E58, 4);
        } else {
            *arg1 += 1;
        }
    }
    return sp38;
}
