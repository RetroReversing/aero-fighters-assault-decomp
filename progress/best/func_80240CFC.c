/* Partial candidate from function #55834575785 in project #13; rechecked locally. */
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 __initFromBank(void *, s32 *);          /* extern */
s32 __postNextSeqEvent(void *);                 /* extern */
s32 __seqpReleaseVoice(void *, s32, s32);   /* extern */
s32 __seqpStopOsc(void *, s32 *);           /* extern */
s32 __unmapVoice(void *, s32 *);            /* extern */
s32 __voiceNeedsNoteKill(void *, s32, s32);     /* extern */
s16 __vsVol(s32 *, void *);                     /* extern */
s32 alEvtqFlushType(s32, s32);              /* extern */
s32 alEvtqNextEvent(s32, s16 *);                    /* extern */
s32 alEvtqPostEvent(s32, s16 *, s32);           /* extern */
s32 alSynFreeVoice(s32, s32 *);             /* extern */
s32 alSynSetPitch(s32, s32 *, f32);         /* extern */
s32 alSynSetVol(s32, s32 *, int, s32);      /* extern */
s32 alSynStopVoice(s32, s32 *);             /* extern */
s32 func_8024023C(s16 *, void *);               /* extern */
s32 func_802404DC(s16 *);                       /* extern */
s32 func_80249284(s32 *, s16 *);            /* extern */
extern f32 D_80255928;

void func_80240CFC(void *arg0) {
    s32 *temp_s1_3_22;
    
    s32 spC4;
    s32 *spC0;
    s16 spBC;
    f32 spA8;
    s16 sp88;
    s16 *sp50;
    s32 sp4C;
    s32 *temp_a0;
    s32 *temp_a1;
    
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *temp_s0_4;
    s32 *temp_s1;
    s32 *temp_s1_2;
    u8 spC8;
    s32 *temp_s1_4;
    s32 *var_s1;
    s32 *var_s1_2;
    s16 temp_a2;
    s16 temp_a2_2;
    register s32 temp_a0_2;
    unsigned temp_a0_3;
    s32 temp_s0_5;
    s32 temp_s3;
    unsigned long temp_s3_2;
    s32 temp_s4;
    s32 temp_s4_2;
    u32 temp_v0;
s32 __repair_phase_temp_v0;
    
    s32 var_s5;
    u16 temp_t7;
    u8 temp_s0_3;

    sp50 = (unsigned char *) arg0 + 0x38;
    var_s5 = (unsigned char *) arg0 + 0x48;
    do {
        switch (((*(u16 *)((char *)(arg0) + 0x38)))) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            temp_a0 = (*(s32 **)((char *)(arg0) + 0x18));
            if (temp_a0 != (int)NULL) {
                do { func_80249284(temp_a0, &sp88); } while (0);
                switch ((u32)sp88) {
                     /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    func_802404DC(&sp88);
                    var_s5 = sp4C;
                    sp4C = var_s5;
                    __postNextSeqEvent(arg0);
                    break;
                case 3:                             /* switch 2 */
                    func_8024023C(&sp88, arg0);
                    __postNextSeqEvent(arg0);
                    break;
                case 4:                             /* switch 2 */
                    (*(s32 *)((char *)(arg0) + 0x2C)) = 2;
                    sp88 = 0x10;
                    alEvtqPostEvent(var_s5, &sp88, 0x7FFFFFFF);
                    break;
                }
            }
            break;
        case 9:                                     /* switch 1 */
            spBC = 9;
            alEvtqPostEvent(var_s5, &spBC, (*(s32 *)((char *)(arg0) + 0x5C)));
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
            (*(u8 *)((char *)(temp_s1_2) + 0x30)) = (u8) (*(u8 *)((char *)(arg0) + 0x44));
            (*(s32 *)((char *)(temp_s1_2) + 0x24)) = (s32) ((*(s32 *)((char *)(arg0) + 0x1C)) + temp_s3);
            alSynSetVol((*(s32 *)((char *)(arg0) + 0x14)), temp_s0_2, __vsVol(temp_s1_2, arg0), temp_s3);
            break;
        case 22:                                    /* switch 1 */
            temp_s4 = (*(s32 *)((char *)(arg0) + 0x40));
            temp_s1_3_22 = (*(s32 **)((char *)(arg0) + 0x3C));
            temp_s3_2 = (*(s32 (**)(s32, f32 *))((char *)(arg0) + 0x74))(temp_s4, &spA8);
            (*(s8 *)((char *)(temp_s1_3_22) + 0x36)) = (s8) (u32) spA8;
            temp_s1_2 = (void *) (*(s32 *)((char *)(temp_s1_3_22) + 0x24)); temp_s0_4 = (void *) (*(s32 *)((char *)(arg0) + 0x1C)); temp_a0_2 = temp_s1_2 - (u32) temp_s0_4;
            temp_v0 = (s16)(__vsVol(temp_s1_3_22, arg0));
            alSynSetVol((*(s32 *)((char *)(arg0) + 0x14)), temp_s1_3_22 + 4, temp_v0, (0 <= temp_a0_2) ? (s32) (temp_a0_2) : (s32) (0x3E8));
            spBC = 0x16;
            spC0 = temp_s1_3_22;
            spC4 = temp_s4;
            alEvtqPostEvent(var_s5, &spBC, temp_s3_2);
            break;
        case 23:                                    /* switch 1 */
            temp_s4_2 = (*(s32 *)((char *)(arg0) + 0x40));
            temp_s1_4 = (*(s32 **)((char *)(arg0) + 0x3C));
            temp_s0_3 = (*(u8 *)((char *)(arg0) + 0x44));
            temp_v0 = (*(s32 (**)(s32, f32 *))((char *)(arg0) + 0x74))(temp_s4_2, &spA8);
            (*(f32 *)((char *)(temp_s1_4) + 0x2C)) = spA8;
            alSynSetPitch((*(s32 *)((char *)(arg0) + 0x14)), temp_s1_4 + 4, (*(f32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x60)) + (temp_s0_3 * 0x10))) + 0xC)) * ((*(f32 *)((char *)(temp_s1_4) + 0x28)) * (*(f32 *)((char *)(temp_s1_4) + 0x2C))));
            spBC = 0x17;
            spC0 = temp_s1_4;
            spC4 = temp_s4_2;
            spC8 = temp_s0_3;
            alEvtqPostEvent(var_s5, &spBC, temp_v0);
            break;
        case 2:                                     /* switch 1 */
            sp4C = var_s5;
            func_802404DC(sp50);
            break;
        case 7:                                     /* switch 1 */
            func_8024023C(sp50, arg0);
            break;
        case 15:                                    /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0x2C)) != 1) {
                (*(s32 *)((char *)(arg0) + 0x2C)) = 1;
                __postNextSeqEvent(arg0);
            }
            break;
        case 16:                                    /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0x2C)) == 2) {
                if ((*(s32 **)((char *)(arg0) + 0x64)) != NULL) {
                    do {
                        temp_s0_4 = (*(s32 **)((char *)(arg0) + 0x64)) + 4;
                        alSynStopVoice((*(s32 *)((char *)(arg0) + 0x14)), temp_s0_4);
                        alSynFreeVoice((*(s32 *)((char *)(arg0) + 0x14)), temp_s0_4);
                        if ((*(u8 *)((char *)((*(s32 **)((char *)(arg0) + 0x64))) + 0x37)) != 0) {
                            __seqpStopOsc(arg0, (*(s32 **)((char *)(arg0) + 0x64)));
                        }
                        __unmapVoice(arg0, temp_s0_4);
                    } while ((*(s32 **)((char *)(arg0) + 0x64)) != NULL);
                }
                (*(s32 *)((char *)(arg0) + 0x1C)) = 0;
                (*(s32 *)((char *)(arg0) + 0x2C)) = 0;
            }
            break;
        case 17:                                    /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0x2C)) == 1) {
                alEvtqFlushType(var_s5, 0);
                alEvtqFlushType(var_s5, 2);
                var_s1 = (*(s32 **)((char *)(arg0) + 0x64));
                if (var_s1 != NULL) {
                    do {
                        if (__voiceNeedsNoteKill(arg0, (var_s1 + 4), 0xC350) != 0) {
                            __seqpReleaseVoice(arg0, (var_s1 + 4), 0xC350);
                        }
                        var_s1 = *var_s1;
                    } while (var_s1 != NULL);
                }
                (*(s32 *)((char *)(arg0) + 0x2C)) = 2;
                spBC = 0x10;
                alEvtqPostEvent(var_s5, &spBC, 0x7FFFFFFF);
            }
            break;
        case 10:                                    /* switch 1 */
            var_s1_2 = (*(s32 **)((char *)(arg0) + 0x64));
            (*(s16 *)((char *)(arg0) + 0x32)) = (s16) (*(s32 **)((char *)(arg0) + 0x3C));
            if (var_s1_2 != NULL) {
                do {
                    temp_a2_2 = __vsVol(var_s1_2, arg0);
                    if (((*(s32 *)((char *)(var_s1_2) + 0x24)) - (*(s32 *)((char *)(arg0) + 0x1C))) >= 0) {
                        alSynSetVol((*(s32 *)((char *)(arg0) + 0x14)), var_s1_2 + 4, temp_a2_2, ((*(s32 *)((char *)(var_s1_2) + 0x24)) - (*(s32 *)((char *)(arg0) + 0x1C))));
                    } else {
                        alSynSetVol((*(s32 *)((char *)(arg0) + 0x14)), var_s1_2 + 4, temp_a2_2, 0x3E8);
                    }
                    var_s1_2 = (*(s32 **)((char *)(var_s1_2) + 0));
                } while (var_s1_2 != NULL);
            }
            break;
        case 11:                                    /* switch 1 */
            (*(s32 **)((char *)(arg0) + 0x7C)) = (s32 *) (*(s32 **)((char *)(arg0) + 0x3C));
            (*(s32 *)((char *)(arg0) + 0x80)) = (s32) (*(s32 *)((char *)(arg0) + 0x40));
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (*(u8 *)((char *)(arg0) + 0x44));
            break;
        case 12:                                    /* switch 1 */
            (*(u8 *)((char *)(((*(s32 *)((char *)(arg0) + 0x60)) + ((u8) (*(s32 **)((char *)(arg0) + 0x3C)) * 0x10))) + 8)) = (u8) (*(u8 *)((char *)(arg0) + 0x3D));
            break;
        case 13:                                    /* switch 1 */
            temp_a1 = (*(s32 **)((char *)(arg0) + 0x3C));
            (*(s32 **)((char *)(arg0) + 0x18)) = temp_a1;
            if (temp_a1 != NULL) {
                (*(s32 *)((char *)(arg0) + 0x24)) = (s32) (D_80255928 * (*(f32 *)((char *)(temp_a1) + 0x14)));
            } else {
                (*(s32 *)((char *)(arg0) + 0x24)) = 0x1E8;
            }
            temp_s1_3_22 = (*(s32 **)((char *)(arg0) + 0x20));
            if (temp_s1_3_22 != NULL) {
                __initFromBank(arg0, temp_s1_3_22);
            }
            break;
        case 14:                                    /* switch 1 */
            temp_a1 = (*(s32 **)((char *)(arg0) + 0x3C));
            (*(s32 **)((char *)(arg0) + 0x20)) = temp_a1;
            __initFromBank(arg0, temp_a1);
            break;
        }
        __repair_phase_temp_v0 = alEvtqNextEvent(var_s5, sp50);
        (*(s32 *)((char *)(arg0) + 0x28)) = __repair_phase_temp_v0;
    } while (__repair_phase_temp_v0 == 0);
    (*(s32 *)((char *)(arg0) + 0x1C)) = (s32) ((*(s32 *)((char *)(arg0) + 0x1C)) + (u32)__repair_phase_temp_v0);
}
