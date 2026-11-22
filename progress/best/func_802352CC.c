/* Partial candidate from function #55834575735 in project #13; rechecked locally. */
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 alEvtqNextEvent(s32, void *);                   /* extern */
M2C_UNK alEvtqPostEvent(s32, s16 *, s32);           /* extern */
M2C_UNK alSynAllocVoice(s32, void *, s16 *);        /* extern */
M2C_UNK alSynFreeVoice(s32, void *);                /* extern */
M2C_UNK alSynSetFXMix(s32, void *, u8);             /* extern */
M2C_UNK alSynSetPan(s32, void *, u8);               /* extern */
M2C_UNK alSynSetPitch(s32, void *, f32);            /* extern */
M2C_UNK alSynSetVol(s32, void *, s32, s32);         /* extern */
M2C_UNK alSynStartVoice(s32, void *, s32, void *);  /* extern */
M2C_UNK alSynStopVoice(s32, void *);                /* extern */
M2C_UNK func_80235240();                            /* extern */
extern f64 D_802553C0;
extern f64 D_802553F0;
extern f32 D_802553F8;

typedef struct { unsigned char pad_0[28]; void * field_1C; short field_20; unsigned char pad_22[2]; float field_24; int field_28; short field_2C; unsigned char field_2E; unsigned char field_2F; } __repair_record_temp_s5;
typedef struct { void * field_0; unsigned char pad_4[4]; int field_8; unsigned char field_C; } __repair_record_temp_s1;
void func_802352CC(void *arg0) {
    s16 spF4;
    s8 spE4;
    s16 spE0[2];
    u8 spD7;
    f32 spD0;
    void *spC4;
    s16 spC0;
    void *sp4C;
    s16 spBA;
    f32 temp_fv0_3;
    f64 temp_fs0;
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 temp_fv0_4;
    s16 temp_v0_2;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_s0;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0_2;
    u8 temp_t6;
    u8 temp_t9;
    u8 var_t0;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_s1;
    void *temp_s5;
    void *var_s4;

    temp_fs0 = D_802553C0;
    var_s4 = (unsigned char *) arg0 + 0x28;
    temp_s7 = (unsigned char *) arg0 + 0x14;
    do {
        temp_v0_2 = M2C_FIELD(arg0, s16 *, 0x28);
        if (temp_v0_2 == 5) {
            spF4 = 5;
            alEvtqPostEvent(temp_s7, &spF4, M2C_FIELD(arg0, s32 *, 0x48));
        } else {
            temp_s5 = M2C_FIELD(arg0, void **, 0x2C);
            temp_s1 = ((__repair_record_temp_s5*)temp_s5)->field_1C;
            switch (temp_v0_2) {
            case 0:
                if ((((__repair_record_temp_s5*)temp_s5)->field_28 == 0) && (temp_s1 != NULL)) {
                    spE0[1] = 0;
                    spE4 = 0;
                    spE0[0] = ((__repair_record_temp_s5*)temp_s5)->field_20;
                    alSynAllocVoice(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, spE0);
                    temp_a3 = ((__repair_record_temp_s1*)temp_s1)->field_0;
                    var_t0 = 0x7F;
                    spBA = (s16) ((s32) (M2C_FIELD(temp_a3, u8 *, 0xC) * ((__repair_record_temp_s5*)temp_s5)->field_2C) / 127);
                    var_v1 = (((__repair_record_temp_s5*)temp_s5)->field_2E + ((__repair_record_temp_s1*)temp_s1)->field_C) - 0x40;
                    if (var_v1 <= 0) {
                        var_v1 = 0;
                    }
                    if (var_v1 < 0x7F) {
                        var_t0 = var_v1 & 0xFF;
                    }
                    spD0 = ((__repair_record_temp_s5*)temp_s5)->field_24;
                    temp_s0 = M2C_FIELD(temp_a3, s32 *, 0);
                    spD7 = var_t0;
                    alSynStartVoice(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, ((__repair_record_temp_s1*)temp_s1)->field_8, temp_a3);
                    ((__repair_record_temp_s5*)temp_s5)->field_28 = 1;
                    alSynSetPan(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, spD7);
                    alSynSetVol(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, spBA, temp_s0);
                    alSynSetPitch(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, spD0);
                    alSynSetFXMix(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, ((__repair_record_temp_s5*)temp_s5)->field_2F);
                    spC0 = 6;
                    spC4 = temp_s5;
                    temp_fv0 = (f64) ((f32) M2C_FIELD(((__repair_record_temp_s1*)temp_s1)->field_0, s32 *, 0) / ((__repair_record_temp_s5*)temp_s5)->field_24);
                    if (temp_fs0 < temp_fv0) {
                        do { alEvtqPostEvent(temp_s7, &spC0, 0x7FFFFFFF); } while (0);
                    } else {
                        do { alEvtqPostEvent(temp_s7, &spC0, (s32) temp_fv0); } while (0);
                    }
                }
                break;
            case 1:
                if ((((__repair_record_temp_s5*)temp_s5)->field_28 == 1) && (temp_s1 != NULL)) {
                    temp_fv0_2 = (f64) ((f32) M2C_FIELD(((__repair_record_temp_s1*)temp_s1)->field_0, s32 *, 8) / ((__repair_record_temp_s5*)temp_s5)->field_24);
                    if (temp_fs0 < temp_fv0_2) {
                        var_a3 = 0x7FFFFFFF;
                    } else {
                        var_a3 = (s32) temp_fv0_2;
                    }
                    alSynSetVol(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, 0, var_a3);
                    if (var_a3 != 0) {
                        spC0 = 7;
                        spC4 = temp_s5;
                        alEvtqPostEvent(temp_s7, &spC0, var_a3);
                        ((__repair_record_temp_s5*)temp_s5)->field_28 = 2;
                    } else {
                        alSynStopVoice(M2C_FIELD(arg0, s32 *, 0x38), temp_s5);
                        alSynFreeVoice(M2C_FIELD(arg0, s32 *, 0x38), temp_s5);
                        sp4C = var_s4;
                        func_80235240();
block_45:
                        ((__repair_record_temp_s5*)temp_s5)->field_28 = 0;
                    }
                }
                break;
            case 2:
                temp_t6 = M2C_FIELD(var_s4, u8 *, 8);
                ((__repair_record_temp_s5*)temp_s5)->field_2E = temp_t6;
                if ((((__repair_record_temp_s5*)temp_s5)->field_28 == 1) && (temp_s1 != NULL)) {
                    var_t0_2 = 0x7F;
                    var_v1_2 = ((temp_t6 & 0xFF) + ((__repair_record_temp_s1*)temp_s1)->field_C) - 0x40;
                    if (var_v1_2 <= 0) {
                        var_v1_2 = 0;
                    }
                    if (var_v1_2 < 0x7F) {
                        var_t0_2 = var_v1_2 & 0xFF;
                    }
                    alSynSetPan(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, var_t0_2 & 0xFF);
                }
                break;
            case 4:
                temp_fv0_3 = M2C_BITWISE(f32, M2C_FIELD(var_s4, u8 *, 8));
                ((__repair_record_temp_s5*)temp_s5)->field_24 = temp_fv0_3;
                if ((f64) temp_fv0_3 < D_802553F0) {
                    ((__repair_record_temp_s5*)temp_s5)->field_24 = (f32) D_802553F8;
                }
                if (((__repair_record_temp_s5*)temp_s5)->field_28 == 1) {
                    alSynSetPitch(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, ((__repair_record_temp_s5*)temp_s5)->field_24);
                }
                break;
            case 8:
                temp_t6 = M2C_FIELD(var_s4, u8 *, 8);
                ((__repair_record_temp_s5*)temp_s5)->field_2F = temp_t6;
                if (((__repair_record_temp_s5*)temp_s5)->field_28 == 1) {
                    alSynSetFXMix(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, temp_t6 & 0xFF);
                }
                break;
            case 3:
                ((__repair_record_temp_s5*)temp_s5)->field_2C = (s16) M2C_FIELD(var_s4, u8 *, 8);
                if ((((__repair_record_temp_s5*)temp_s5)->field_28 == 1) && (temp_s1 != NULL)) {
                    alSynSetVol(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, (s16) ((s32) (M2C_FIELD(((__repair_record_temp_s1*)temp_s1)->field_0, u8 *, 0xD) * ((__repair_record_temp_s5*)temp_s5)->field_2C) / 127), 0x3E8);
                }
                break;
            case 6:
                temp_a3_2 = ((__repair_record_temp_s1*)temp_s1)->field_0;
                temp_s0 = M2C_FIELD(temp_a3_2, s32 *, 4);
                if (temp_s0 != -1) {
                    temp_fv0_4 = (f64) ((f32) temp_s0 / ((__repair_record_temp_s5*)temp_s5)->field_24);
                    if (temp_fs0 < temp_fv0_4) {
                        var_a3_2 = 0x7FFFFFFF;
                    } else {
                    }
                    alSynSetVol(M2C_FIELD(arg0, s32 *, 0x38), temp_s5, ((s32) (M2C_FIELD(temp_a3_2, u8 *, 0xD) * ((__repair_record_temp_s5*)temp_s5)->field_2C) / 127), ((s32) temp_fv0_4));
                    spC0 = 1;
                    spC4 = temp_s5;
                    alEvtqPostEvent(temp_s7, &spC0, ((s32) temp_fv0_4));
                }
                break;
            case 7:
                alSynStopVoice(M2C_FIELD(arg0, s32 *, 0x38), temp_s5);
                alSynFreeVoice(M2C_FIELD(arg0, s32 *, 0x38), temp_s5);
                sp4C = var_s4;
                func_80235240();
                goto block_45;
            }
        }
        temp_v0 = alEvtqNextEvent(temp_s7, var_s4);
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_v0;
    } while (temp_v0 == 0);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + temp_v0);
}
