/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 __CSPPostNextSeqEvent(void *);              /* extern */
s32 __initFromBank(void *, s32 *);          /* extern */
s32 __seqpReleaseVoice(void *, s32 *, s32); /* extern */
s32 __seqpStopOsc(void *, s32 *);           /* extern */
s32 __unmapVoice(void *, s32 *);            /* extern */
s32 __voiceNeedsNoteKill(void *, s32 *, s32); /* extern */
s32 __vsDelta(s32 *, s32);                      /* extern */
s16 __vsVol(s32 *, void *);                     /* extern */
s32 alCSeqNextEvent(s32 *, s16 *);          /* extern */
s32 alEvtqFlushType(s32, s32);              /* extern */
s32 alEvtqNextEvent(s32, s32);                      /* extern */
s32 alEvtqPostEvent(s32, s16 *, s32);           /* extern */
s32 alSynFreeVoice(s32, s32 *);             /* extern */
s32 alSynSetPitch(s32, s32 *, f32);         /* extern */
s32 alSynSetVol(s32, s32 *, s16, s32);      /* extern */
s32 alSynStopVoice(s32, s32 *);             /* extern */
s32 func_802359C0(f32, void *);                 /* extern */
s32 func_802359FC();                            /* extern */
s32 func_80235BCC();                            /* extern */
extern f32 D_80255634;

void func_802363FC(void *arg0) {
    u8 sp98;
    s32 sp94;
    s32 *sp90;
    f32 sp78;
    s16 sp8C;
    s16 sp58;
    s32 sp4C[2];
    s32 *temp_a0;
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *temp_s0_6;
    s32 *temp_s0_7;
    s32 *temp_s1;
    s32 *temp_s1_2;
    s32 *temp_s1_3;
    s32 *temp_s1_4;
    s32 *var_s1;
    s32 *var_s1_2;
    s16 temp_s0_3;
    s16 temp_s0_5;
    s32 temp_s3;
    unsigned temp_s3_2;
    unsigned long temp_s4;
    s32 temp_s4_2;
    long temp_v0;
    unsigned int temp_v0_2;
    s32 var_s5;
    u16 temp_t7;
    u8 temp_s0_4;

    sp4C[1] = (unsigned char *) arg0 + 0x38;
    var_s5 = (unsigned char *) arg0 + 0x48;
    do {
        temp_t7 = (*(u16 *)((char *)(arg0) + 0x38));
        switch (temp_t7) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            temp_a0 = (*(s32 **)((char *)(arg0) + 0x18));
            if (temp_a0 != NULL) {
                alCSeqNextEvent(temp_a0, &sp58);
                switch (sp58) {                     /* switch 2 */
                case 1:                             /* switch 2 */
                    sp4C[0] = var_s5;
                    func_80235BCC();
                    __CSPPostNextSeqEvent(arg0);
                    break;
                case 3:                             /* switch 2 */
                    sp4C[0] = var_s5;
                    func_802359FC();
                    __CSPPostNextSeqEvent(arg0);
                    break;
                case 4:                             /* switch 2 */
                    (*(s32 *)((char *)(arg0) + 0x2C)) = 2;
                    sp58 = 0x10;
                    alEvtqPostEvent(var_s5, &sp58, 0x7FFFFFFF);
                    break;
                case 18:                            /* switch 2 */
                case 19:                            /* switch 2 */
                case 20:                            /* switch 2 */
                    __CSPPostNextSeqEvent(arg0);
                    break;
                }
            }
            break;
        case 9:                                     /* switch 1 */
            sp8C = 9;
            alEvtqPostEvent(var_s5, &sp8C, (*(s32 *)((char *)(arg0) + 0x5C)));
            break;
        case 5:                                     /* switch 1 */
            temp_s0 = (*(s32 **)((char *)(arg0) + 0x3C));
            alSynStopVoice((*(s32 *)((char *)(arg0) + 0x14)), temp_s0);
            alSynFreeVoice((*(s32 *)((char *)(arg0) + 0x14)), temp_s0);
            temp_s1 = (*(s32 **)((char *)(temp_s0) + 0x10));
            if ((*(u8 *)((char *)(temp_s1) + 0x37)) != 0) {
                __seqpStopOsc(arg0, temp_s1);
            }
            __unmapVoice(arg0, temp_s0);
            break;
        case 6:                                     /* switch 1 */
            temp_s0_2 = (*(s32 **)((char *)(arg0) + 0x3C));
            temp_s1_2 = (*(s32 **)((char *)(temp_s0_2) + 0x10));
            if ((*(u8 *)((char *)(temp_s1_2) + 0x34)) == 0) {
                (*(u8 *)((char *)(temp_s1_2) + 0x34)) = 1U;
            }
            temp_s3 = (*(s32 *)((char *)(arg0) + 0x40));
            (*(s32 *)((char *)(temp_s1_2) + 0x24)) = (s32) ((*(s32 *)((char *)(arg0) + 0x1C)) + temp_s3);
            (*(u8 *)((char *)(temp_s1_2) + 0x30)) = (u8) (*(u8 *)((char *)(arg0) + 0x44));
            alSynSetVol((*(s32 *)((char *)(arg0) + 0x14)), temp_s0_2, __vsVol(temp_s1_2, arg0), temp_s3);
            break;
        case 22:                                    /* switch 1 */
            temp_s4 = (*(s32 *)((char *)(arg0) + 0x40));
            temp_s1_3 = (*(s32 **)((char *)(arg0) + 0x3C));
            temp_s3 = (*(s32 (**)(s32, f32 *))((char *)(arg0) + 0x74))(temp_s4, &sp78);
            (*(s8 *)((char *)(temp_s1_3) + 0x36)) = (s8) (u32) sp78;
            temp_s0_3 = __vsVol(temp_s1_3, arg0);
            alSynSetVol((*(s32 *)((char *)(arg0) + 0x14)), temp_s1_3 + 4, temp_s0_3, __vsDelta(temp_s1_3, (*(s32 *)((char *)(arg0) + 0x1C))));
            sp8C = 0x16;
            sp90 = temp_s1_3;
            sp94 = temp_s4;
            alEvtqPostEvent(var_s5, &sp8C, temp_s3);
            break;
        case 23:                                    /* switch 1 */
            temp_s4_2 = (*(s32 *)((char *)(arg0) + 0x40));
            temp_s1_4 = (*(s32 **)((char *)(arg0) + 0x3C));
            temp_s0_4 = (*(u8 *)((char *)(arg0) + 0x44));
            temp_v0_2 = (*(s32 (**)(s32, f32 *))((char *)(arg0) + 0x74))(temp_s4_2, &sp78);
            (*(f32 *)((char *)(temp_s1_4) + 0x2C)) = sp78;
            alSynSetPitch((*(s32 *)((char *)(arg0) + 0x14)), temp_s1_4 + 4, (*(f32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x60)) + (temp_s0_4 * 0x10))) + 0xC)) * ((*(f32 *)((char *)(temp_s1_4) + 0x28)) * (*(f32 *)((char *)(temp_s1_4) + 0x2C))));
            sp8C = 0x17;
            sp90 = temp_s1_4;
            sp94 = temp_s4_2;
            sp98 = temp_s0_4;
            alEvtqPostEvent(var_s5, &sp8C, temp_v0_2);
            break;
        case 2:                                     /* switch 1 */
        case 21:                                    /* switch 1 */
            sp4C[0] = var_s5;
            func_80235BCC();
            break;
        case 7:                                     /* switch 1 */
            func_802359FC();
            sp4C[0] = var_s5;
            break;
        case 10:                                    /* switch 1 */
            var_s1 = (*(s32 **)((char *)(arg0) + 0x64));
            (*(s16 *)((char *)(arg0) + 0x32)) = (s16) (*(s32 **)((char *)(arg0) + 0x3C));
            if (var_s1 != NULL) {
                do {
                    temp_s0_3 = __vsVol(var_s1, arg0);
                    alSynSetVol((*(s32 *)((char *)(arg0) + 0x14)), var_s1 + 4, temp_s0_3, __vsDelta(var_s1, (*(s32 *)((char *)(arg0) + 0x1C))));
                    var_s1 = *var_s1;
                } while (var_s1 != NULL);
            }
            break;
        case 15:                                    /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0x2C)) != 1) {
                (*(s32 *)((char *)(arg0) + 0x2C)) = 1;
                __CSPPostNextSeqEvent(arg0);
            }
            break;
        case 16:                                    /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0x2C)) == 2) {
                if ((*(s32 **)((char *)(arg0) + 0x64)) != NULL) {
                    do {
                        temp_s0_6 = (*(s32 **)((char *)(arg0) + 0x64)) + 4;
                        alSynStopVoice((*(s32 *)((char *)(arg0) + 0x14)), temp_s0_6);
                        alSynFreeVoice((*(s32 *)((char *)(arg0) + 0x14)), temp_s0_6);
                        if ((*(u8 *)((char *)((*(s32 **)((char *)(arg0) + 0x64))) + 0x37)) != 0) {
                            __seqpStopOsc(arg0, (*(s32 **)((char *)(arg0) + 0x64)));
                        }
                        __unmapVoice(arg0, temp_s0_6);
                    } while ((*(s32 **)((char *)(arg0) + 0x64)) != NULL);
                }
                (*(s32 *)((char *)(arg0) + 0x2C)) = 0;
            }
            break;
        case 17:                                    /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0x2C)) == 1) {
                alEvtqFlushType(var_s5, 0x15);
                alEvtqFlushType(var_s5, 0);
                alEvtqFlushType(var_s5, 2);
                var_s1_2 = (*(s32 **)((char *)(arg0) + 0x64));
                if (var_s1_2 != NULL) {
                    do {
                        temp_s0_7 = (void *) ((4) + (s32) var_s1_2);
                        if (__voiceNeedsNoteKill(arg0, temp_s0_7, 0xC350) != 0) {
                            __seqpReleaseVoice(arg0, temp_s0_7, 0xC350);
                        }
                        var_s1_2 = *var_s1_2;
                    } while (var_s1_2 != NULL);
                }
                (*(s32 *)((char *)(arg0) + 0x2C)) = 2;
                sp8C = 0x10;
                alEvtqPostEvent(var_s5, &sp8C, 0x7FFFFFFF);
            }
            break;
        case 12:                                    /* switch 1 */
            (*(u8 *)((char *)(((*(s32 *)((char *)(arg0) + 0x60)) + ((u8) (*(s32 **)((char *)(arg0) + 0x3C)) * 0x10))) + 8)) = (u8) (*(u8 *)((char *)(arg0) + 0x3D));
            break;
        case 13:                                    /* switch 1 */
            (*(s32 **)((char *)(arg0) + 0x18)) = (s32 *) (*(s32 **)((char *)(arg0) + 0x3C));
            func_802359C0(D_80255634, arg0);
            temp_a1 = (*(s32 **)((char *)(arg0) + 0x20));
            if (temp_a1 != (unsigned)NULL) {
                __initFromBank(arg0, temp_a1);
            }
            break;
        case 14:                                    /* switch 1 */
            temp_a1_2 = (*(s32 **)((char *)(arg0) + 0x3C));
            (*(s32 **)((char *)(arg0) + 0x20)) = temp_a1_2;
            __initFromBank(arg0, temp_a1_2);
            break;
        }
        temp_v0 = alEvtqNextEvent(var_s5, sp4C[1]);
        (*(s32 *)((char *)(arg0) + 0x28)) = temp_v0;
    } while (temp_v0 == 0);
    (*(s32 *)((char *)(arg0) + 0x1C)) = (s32) ((*(s32 *)((char *)(arg0) + 0x1C)) + temp_v0);
}
