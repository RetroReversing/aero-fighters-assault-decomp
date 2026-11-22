/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24();
extern char D_80252C5C[];
extern s32 D_8025C398;
extern s32 D_8025C39C;
extern s32 D_8025C3A0;
extern s32 D_8025C3A4;
extern u16 D_80280BD8;

void func_80209508(void) {
char *__repair_addr;

    f32 temp_fa0;
    f32 temp_ft0;
    s32 temp_lo;
    register s32 temp_lo_2;
    s32 temp_t3;
    
    s32 temp_t8;
    s32 var_a1;
    register s32 var_s2;
    s32 temp_t4;
    register s32 var_t5;
    void *temp_a0;

    if ((temp_t3 = D_8025C398) >= D_80280BD8) {
        func_80231A24(D_80252C5C);
        return;
    }
    var_s2 = 0;
    if (temp_t3 > 0) {
        do {
            var_t5 = var_s2;
            if (var_s2 < temp_t3) {
                var_a1 = var_t5 * 4;
                temp_t4 = var_s2 * 4;
                do {
__repair_addr = (char *)(D_8025C3A0 + temp_t4);

                    temp_fa0 = *(f32 *)(__repair_addr);
                    if (*(s32 *)(D_8025C3A0 + var_a1) < temp_fa0) {
                        temp_lo = var_s2 * 0xC;
                        temp_t3 = ((s32 (*)[0x1]) D_8025C39C)[var_s2][0x0];
                        ((s32 (*)[0x1]) D_8025C39C)[var_s2][0x0] = *(s32 *)(D_8025C39C + var_a1);
                        temp_lo_2 = var_t5 * 0xC;
                        *(s32 *)(D_8025C3A0 + temp_t4) = *(s32 *)(D_8025C3A0 + var_a1);
                        *(s32 *)(D_8025C3A4 + temp_lo) = *(s32 *)(D_8025C3A4 + temp_lo_2);
                        (*(f32 *)((char *)((D_8025C3A4 + temp_lo)) + 4)) = (f32) (*(f32 *)((char *)((D_8025C3A4 + temp_lo_2)) + 4));
                        (*(f32 *)((char *)(((unsigned)D_8025C3A4 + temp_lo)) + 8)) = (f32) (*(f32 *)((char *)((D_8025C3A4 + temp_lo_2)) + 8));
                        *(s32 *)(D_8025C39C + var_a1) = temp_t3;
                        *(f32 *)(D_8025C3A0 + var_a1) = temp_fa0;
                        temp_a0 = D_8025C3A4 + temp_lo;
                        *(s32 *)(D_8025C3A4 + temp_lo_2) = (*(f32 *)((char *)(temp_a0) + 0));
                        (*(f32 *)((char *)((D_8025C3A4 + temp_lo_2)) + 4)) = (f32) (*(f32 *)((char *)(temp_a0) + 4));
                        (*(f32 *)((char *)((D_8025C3A4 + temp_lo_2)) + 8)) = (f32) (*(f32 *)((char *)(temp_a0) + 8));
                        temp_t3 = D_8025C398;
                    }
                    ++var_t5;
                    var_a1 += 4;
                } while (var_t5 < temp_t3);
            }
            ++var_s2;
        } while (var_s2 < temp_t3);
    }
    if (temp_t3 != 0) {
loop_12:
        temp_ft0 = (*(f32 *)((char *)((D_8025C3A0 + ((u32)temp_t3 * 4))) + -4));
        temp_t8 = temp_t3 - 1;
        temp_t3 = temp_t8;
        if (temp_ft0 == 2.0f) {
            D_8025C398 = temp_t8;
            if (temp_t8) {
                goto loop_12;
            }
        }
    }
}
