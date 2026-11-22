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

extern f32 D_802530BC;

void func_80209AA0(s32 arg0, s32 arg1, s32 arg2, u16 *arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs1;
    f32 temp_ft3;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 var_fa0;
    f32 var_fa0_10;
    f32 var_fa0_2;
    f32 var_fa0_3;
    f32 var_fa0_4;
    f32 var_fa0_5;
    f32 var_fa0_6;
    f32 var_fa0_7;
    f32 var_fa0_8;
    f32 var_fa0_9;
    f32 var_fs1;
    f32 var_fs1_2;
    f32 var_fs2;
    f32 var_fs2_2;
    f32 var_fs2_3;
    f32 var_fs2_4;
    f32 var_fs2_5;
    f32 var_fs2_6;
    f32 var_fs2_7;
    f32 var_fs2_8;
    f32 var_fv0;
    f32 var_fv1;
    s32 temp_a1_10;
    s32 temp_a1_15;
    s32 temp_a1_3;
    s32 temp_a1_8;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_fa1;
    s32 temp_fa1_2;
    s32 temp_ft2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t4_2;
    s32 temp_t4_3;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9;
    s32 temp_v1;
    s32 temp_v1_11;
    s32 temp_v1_6;
    s32 var_t4;
    s32 var_t5;
    s32 var_t6;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_8;
    s32 var_v0_9;
    s8 temp_a1_11;
    s8 temp_a1_12;
    s8 temp_a1_14;
    s8 temp_a1_4;
    s8 temp_a1_5;
    s8 temp_t0_10;
    s8 temp_t0_2;
    s8 temp_t0_4;
    s8 temp_t0_8;
    s8 temp_t1_10;
    s8 temp_t1_2;
    s8 temp_t1_4;
    s8 temp_t1_8;
    s8 temp_v1_10;
    s8 temp_v1_3;
    s8 temp_v1_5;
    s8 temp_v1_8;
    u16 *temp_a1_2;
    u16 *var_a0;
    u16 *var_a0_3;
    u16 *var_a0_5;
    u16 *var_a0_7;
    u16 *var_a1_10;
    u16 *var_a1_6;
    u16 temp_a1;
    u16 temp_t0_5;
    u16 temp_t0_6;
    u16 temp_t3_3;
    u16 temp_t6_5;
    u16 temp_t7_2;
    u16 temp_t8_4;
    u16 temp_t8_5;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 var_a2;
    u16 var_a2_2;
u16 __repair_result_var_a2_2;
    u16 var_a2_3;
u16 __repair_result_var_a2_3;
    u16 var_v0_7;
u16 __repair_result_var_v0_7;
    u16 var_v1_2;
u16 __repair_result_var_v1_2;
    u8 *var_a0_2;
    u8 *var_a0_6;
    u8 temp_a1_13;
    u8 temp_a1_6;
    u8 temp_a1_7;
    u8 temp_t0;
    u8 temp_t0_3;
    u8 temp_t0_7;
    u8 temp_t0_9;
    u8 temp_t1;
    u8 temp_t1_3;
    u8 temp_t1_5;
    u8 temp_t1_6;
    u8 temp_t1_7;
    u8 temp_t1_9;
    u8 temp_t3_2;
    u8 temp_t5;
    u8 temp_t6_4;
    u8 temp_t8_3;
    u8 temp_t9_2;
    u8 temp_v1_2;
    u8 temp_v1_4;
    u8 temp_v1_7;
    u8 temp_v1_9;
    u8 var_a1_2;
    u8 var_a1_3;
u8 __repair_result_var_a1_3;
    u8 var_a1_4;
u8 __repair_result_var_a1_4;
    u8 var_a1_5;
u8 __repair_result_var_a1_5;
    u8 var_a1_8;
    u8 var_a1_9;
    u8 var_t0;
    u8 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a1_9;
    void *var_a0_4;
    void *var_a0_8;
    void *var_a1;
    void *var_a1_11;
    void *var_a1_7;

    if (arg5 < arg4) {
        if (arg6 < arg4) {
            var_fv0 = arg4;
            var_fv1 = arg7;
        } else {
            var_fv0 = arg6;
            var_fv1 = arg9;
        }
    } else if (arg6 < arg5) {
        var_fv0 = arg5;
        var_fv1 = arg8;
    } else {
        var_fv0 = arg6;
        var_fv1 = arg9;
    }
    if (arg0 != 1) {
        if (arg0 != 2) {
            if (arg0 == 4) {
                var_v0 = 0;
                temp_fs1 = arg4 * ((1.0f - arg7) * 31.0f);
                temp_fs0 = arg5 * ((1.0f - arg8) * 31.0f);
                temp_ft5 = arg6 * ((1.0f - arg9) * 31.0f);
                temp_v1 = arg2 / 2;
                if ((temp_v1 > 0) && (!(temp_v1 & 1) || (temp_a1 = *arg3, var_v0 = 1, *arg3 = (temp_a1 & 1) | ((s32) ((arg7 * (f32) ((s32) (temp_a1 & 0xF800) >> 0xB)) + temp_fs1) << 0xB) | ((s32) ((arg8 * (f32) ((s32) (temp_a1 & 0x7C0) >> 6)) + temp_fs0) << 6) | ((s32) ((arg9 * (f32) ((s32) (temp_a1 & 0x3E) >> 1)) + temp_ft5) * 2), (temp_v1 != 1)))) {
                    temp_a1_2 = arg3 + (var_v0 * 2);
                    temp_a0 = (temp_v1 * 2) + arg3;
                    var_a2 = *temp_a1_2;
                    var_a1 = temp_a1_2 + 4;
                    var_t6 = (s32) (var_a2 & 0xF800) >> 0xB;
                    if (var_a1 != temp_a0) {
                        do {
                            temp_v0 = M2C_FIELD(var_a1, u16 *, -2);
                            temp_ft3 = (f32) ((s32) (var_a2 & 0x7C0) >> 6);
                            temp_ft2 = (s32) (var_a2 & 0x3E) >> 1;
                            temp_t2 = var_a2 & 1;
                            var_a2 = M2C_FIELD(var_a1, u16 *, 0);
                            var_a1 = (unsigned char *) var_a1 + 4;
                            M2C_FIELD(var_a1, s16 *, -8) = (s16) (temp_t2 | ((s32) ((arg7 * (f32) var_t6) + temp_fs1) << 0xB) | ((s32) ((arg8 * temp_ft3) + temp_fs0) << 6) | ((s32) ((arg9 * (f32) temp_ft2) + temp_ft5) * 2));
                            M2C_FIELD(var_a1, s16 *, -6) = (s16) ((temp_v0 & 1) | ((s32) ((arg7 * (f32) ((s32) (temp_v0 & 0xF800) >> 0xB)) + temp_fs1) << 0xB) | ((s32) ((arg8 * (f32) ((s32) (temp_v0 & 0x7C0) >> 6)) + temp_fs0) << 6) | ((s32) ((arg9 * (f32) ((s32) (temp_v0 & 0x3E) >> 1)) + temp_ft5) * 2));
                            var_t6 = (s32) (var_a2 & 0xF800) >> 0xB;
                        } while (var_a1 != temp_a0);
                    }
                    temp_v0_2 = M2C_FIELD(var_a1, u16 *, -2);
                    M2C_FIELD(var_a1, s16 *, -4) = (s16) ((var_a2 & 1) | ((s32) ((arg7 * (f32) var_t6) + temp_fs1) << 0xB) | ((s32) ((arg8 * (f32) ((s32) (var_a2 & 0x7C0) >> 6)) + temp_fs0) << 6) | ((s32) ((arg9 * (f32) ((s32) (var_a2 & 0x3E) >> 1)) + temp_ft5) * 2));
                    M2C_FIELD(var_a1, u16 *, -2) = (u16) ((temp_v0_2 & 1) | ((s32) ((arg7 * (f32) ((s32) (temp_v0_2 & 0xF800) >> 0xB)) + temp_fs1) << 0xB) | ((s32) ((arg8 * (f32) ((s32) (temp_v0_2 & 0x7C0) >> 6)) + temp_fs0) << 6) | ((s32) ((arg9 * (f32) ((s32) (temp_v0_2 & 0x3E) >> 1)) + temp_ft5) * 2));
                }
            }
        } else {
            switch (arg1) {                         /* switch 1; irregular */
            case 4:                                 /* switch 1 */
                var_v0_2 = 0;
                temp_a1_3 = arg2 & 3;
                temp_fv0 = var_fv0 * ((1.0f - var_fv1) * 7.0f);
                if (arg2 > 0) {
                    if (temp_a1_3 != 0) {
                        var_a0 = arg3;
                        var_a1_2 = (u8) *var_a0;
                        var_v0_2 = 1;
                        var_fs2 = var_fv1 * (f32) ((s32) (var_a1_2 & 0xE) >> 1);
                        if (temp_a1_3 != 1) {
                            do {
                                var_v0_2 += 1;
                                var_a0 += 1;
                                temp_a1_4 = (var_a1_2 & 0xF1) | ((s32) (var_fs2 + temp_fv0) * 2);
                                M2C_FIELD(var_a0, s8 *, -1) = temp_a1_4;
                                var_a1_2 = M2C_FIELD(var_a0, u8 *, 0);
                                M2C_FIELD(var_a0, s8 *, -1) = (s8) ((temp_a1_4 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_a1_4 & 0xE0) >> 5)) + temp_fv0) << 5));
                                var_fs2 = var_fv1 * (f32) ((s32) (var_a1_2 & 0xE) >> 1);
                            } while (temp_a1_3 != var_v0_2);
                        }
                        temp_a0_2 = var_a0 + 1;
                        temp_a1_5 = (var_a1_2 & 0xF1) | ((s32) (var_fs2 + temp_fv0) * 2);
                        M2C_FIELD(temp_a0_2, s8 *, -1) = temp_a1_5;
                        M2C_FIELD(temp_a0_2, s8 *, -1) = (s8) ((temp_a1_5 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_a1_5 & 0xE0) >> 5)) + temp_fv0) << 5));
                        if (var_v0_2 != arg2) {
                            goto block_26;
                        }
                    } else {
block_26:
                        var_a0_2 = arg3 + var_v0_2;
                        var_v0_3 = var_v0_2 + 4;
                        var_a1_3 = *var_a0_2;
                        var_fs2_2 = (var_fv1 * (f32) ((s32) (var_a1_3 & 0xE) >> 1)) + temp_fv0;
                        if (var_v0_3 != arg2) {
                            do {
                                temp_v1_2 = M2C_FIELD(var_a0_2, u8 *, 1);
                                temp_t0 = M2C_FIELD(var_a0_2, u8 *, 2);
                                temp_t1 = M2C_FIELD(var_a0_2, u8 *, 3);
                                temp_a1_6 = (var_a1_3 & 0xF1) | ((s32) var_fs2_2 * 2);
                                M2C_FIELD(var_a0_2, u8 *, 0) = temp_a1_6;
                                temp_t4 = temp_v1_2 & 0xF1;
                                __repair_result_var_a1_3 = M2C_FIELD(var_a0_2, u8 *, 4);
                                temp_fs0_2 = (f32) ((s32) (temp_v1_2 & 0xE) >> 1);
                                var_v0_3 += 4;
                                var_a0_2 += 4;
                                M2C_FIELD(var_a0_2, s8 *, -4) = (s8) ((temp_a1_6 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_a1_6 & 0xE0) >> 5)) + temp_fv0) << 5));
                                temp_v1_3 = temp_t4 | ((s32) ((var_fv1 * temp_fs0_2) + temp_fv0) * 2);
                                M2C_FIELD(var_a0_2, s8 *, -3) = temp_v1_3;
                                M2C_FIELD(var_a0_2, s8 *, -3) = (s8) ((temp_v1_3 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_v1_3 & 0xE0) >> 5)) + temp_fv0) << 5));
                                temp_t0_2 = (temp_t0 & 0xF1) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t0 & 0xE) >> 1)) + temp_fv0) * 2);
                                M2C_FIELD(var_a0_2, s8 *, -2) = temp_t0_2;
                                M2C_FIELD(var_a0_2, s8 *, -2) = (s8) ((temp_t0_2 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t0_2 & 0xE0) >> 5)) + temp_fv0) << 5));
                                temp_t1_2 = (temp_t1 & 0xF1) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t1 & 0xE) >> 1)) + temp_fv0) * 2);
                                M2C_FIELD(var_a0_2, s8 *, -1) = temp_t1_2;
                                M2C_FIELD(var_a0_2, s8 *, -1) = (s8) ((temp_t1_2 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t1_2 & 0xE0) >> 5)) + temp_fv0) << 5));
                                var_fs2_2 = (var_fv1 * (f32) ((s32) (__repair_result_var_a1_3 & 0xE) >> 1)) + temp_fv0;
                            } while (var_v0_3 != arg2);
                        }
                        temp_v1_4 = M2C_FIELD(var_a0_2, u8 *, 1);
                        temp_t0_3 = M2C_FIELD(var_a0_2, u8 *, 2);
                        temp_t1_3 = M2C_FIELD(var_a0_2, u8 *, 3);
                        temp_a1_7 = (__repair_result_var_a1_3 & 0xF1) | ((s32) var_fs2_2 * 2);
                        M2C_FIELD(var_a0_2, u8 *, 0) = temp_a1_7;
                        temp_a0_3 = var_a0_2 + 4;
                        M2C_FIELD(temp_a0_3, s8 *, -4) = (s8) ((temp_a1_7 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_a1_7 & 0xE0) >> 5)) + temp_fv0) << 5));
                        temp_v1_5 = (temp_v1_4 & 0xF1) | ((s32) ((var_fv1 * (f32) ((s32) (temp_v1_4 & 0xE) >> 1)) + temp_fv0) * 2);
                        M2C_FIELD(temp_a0_3, s8 *, -3) = temp_v1_5;
                        M2C_FIELD(temp_a0_3, s8 *, -3) = (s8) ((temp_v1_5 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_v1_5 & 0xE0) >> 5)) + temp_fv0) << 5));
                        temp_t0_4 = (temp_t0_3 & 0xF1) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t0_3 & 0xE) >> 1)) + temp_fv0) * 2);
                        M2C_FIELD(temp_a0_3, s8 *, -2) = temp_t0_4;
                        M2C_FIELD(temp_a0_3, s8 *, -2) = (s8) ((temp_t0_4 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t0_4 & 0xE0) >> 5)) + temp_fv0) << 5));
                        temp_t1_4 = (temp_t1_3 & 0xF1) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t1_3 & 0xE) >> 1)) + temp_fv0) * 2);
                        M2C_FIELD(temp_a0_3, s8 *, -1) = temp_t1_4;
                        M2C_FIELD(temp_a0_3, s8 *, -1) = (s8) ((temp_t1_4 & 0x1F) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t1_4 & 0xE0) >> 5)) + temp_fv0) << 5));
                        return;
                    }
                }
                break;
            case 8:                                 /* switch 1 */
                var_v0_4 = 0;
                temp_a1_8 = arg2 & 3;
                temp_fv0_2 = var_fv0 * ((1.0f - var_fv1) * 15.0f);
                if (arg2 > 0) {
                    if (temp_a1_8 != 0) {
                        var_a0_3 = arg3;
                        var_a1_4 = (u8) *var_a0_3;
                        var_v0_4 = 1;
                        var_fs2_3 = var_fv1 * (f32) ((s32) (var_a1_4 & 0xF0) >> 4);
                        if (temp_a1_8 != 1) {
                            do {
                                temp_t4_2 = var_a1_4 & 0xF;
                                __repair_result_var_a1_4 = M2C_FIELD(var_a0_3, u8 *, 1);
                                var_v0_4 += 1;
                                var_a0_3 += 1;
                                M2C_FIELD(var_a0_3, s8 *, -1) = (s8) (temp_t4_2 | ((s32) (var_fs2_3 + temp_fv0_2) * 0x10));
                                var_fs2_3 = var_fv1 * (f32) ((s32) (__repair_result_var_a1_4 & 0xF0) >> 4);
                            } while (temp_a1_8 != var_v0_4);
                        }
                        M2C_FIELD((var_a0_3 + 1), s8 *, -1) = (s8) ((__repair_result_var_a1_4 & 0xF) | ((s32) (var_fs2_3 + temp_fv0_2) * 0x10));
                        if (var_v0_4 != arg2) {
                            goto block_34;
                        }
                    } else {
block_34:
                        var_a0_4 = arg3 + var_v0_4;
                        __repair_result_var_a1_5 = M2C_FIELD(var_a0_4, u8 *, 0);
                        var_v1 = M2C_FIELD(var_a0_4, u8 *, 1);
                        var_t0 = M2C_FIELD(var_a0_4, u8 *, 2);
                        var_fs2_4 = var_fv1 * (f32) ((s32) (__repair_result_var_a1_5 & 0xF0) >> 4);
                        var_t5 = (s32) (var_t0 & 0xF0) >> 4;
                        var_fs1 = (f32) ((s32) (var_v1 & 0xF0) >> 4);
                        var_v0_5 = var_v0_4 + 4;
                        if (var_v0_5 != arg2) {
                            do {
                                temp_t1_5 = M2C_FIELD(var_a0_4, u8 *, 3);
                                temp_t7 = __repair_result_var_a1_5 & 0xF;
                                var_a1_5 = M2C_FIELD(var_a0_4, u8 *, 4);
                                temp_t6 = var_v1 & 0xF;
                                var_v1 = M2C_FIELD(var_a0_4, u8 *, 5);
                                temp_t3 = var_t0 & 0xF;
                                var_t0 = M2C_FIELD(var_a0_4, u8 *, 6);
                                M2C_FIELD(var_a0_4, s8 *, 0) = (s8) (temp_t7 | ((s32) (var_fs2_4 + temp_fv0_2) * 0x10));
                                temp_t4_3 = temp_t1_5 & 0xF;
                                M2C_FIELD(var_a0_4, s8 *, 1) = (s8) (temp_t6 | ((s32) ((var_fv1 * var_fs1) + temp_fv0_2) * 0x10));
                                var_fs2_4 = var_fv1 * (f32) ((s32) (var_a1_5 & 0xF0) >> 4);
                                M2C_FIELD(var_a0_4, s8 *, 2) = (s8) (temp_t3 | ((s32) ((var_fv1 * (f32) var_t5) + temp_fv0_2) * 0x10));
                                temp_fa1 = (s32) ((var_fv1 * (f32) ((s32) (temp_t1_5 & 0xF0) >> 4)) + temp_fv0_2);
                                var_v0_5 += 4;
                                var_a0_4 = (unsigned char *) var_a0_4 + 4;
                                var_fs1 = (f32) ((s32) (var_v1 & 0xF0) >> 4);
                                var_t5 = (s32) (var_t0 & 0xF0) >> 4;
                                M2C_FIELD(var_a0_4, s8 *, -1) = (s8) (temp_t4_3 | (temp_fa1 * 0x10));
                            } while (var_v0_5 != arg2);
                        }
                        temp_t1_6 = M2C_FIELD(var_a0_4, u8 *, 3);
                        temp_a0_4 = (unsigned char *) var_a0_4 + 4;
                        M2C_FIELD(temp_a0_4, s8 *, -4) = (s8) ((var_a1_5 & 0xF) | ((s32) (var_fs2_4 + temp_fv0_2) * 0x10));
                        M2C_FIELD(temp_a0_4, s8 *, -3) = (s8) ((var_v1 & 0xF) | ((s32) ((var_fv1 * var_fs1) + temp_fv0_2) * 0x10));
                        M2C_FIELD(temp_a0_4, s8 *, -2) = (s8) ((var_t0 & 0xF) | ((s32) ((var_fv1 * (f32) var_t5) + temp_fv0_2) * 0x10));
                        M2C_FIELD(temp_a0_4, s8 *, -1) = (s8) ((temp_t1_6 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t1_6 & 0xF0) >> 4)) + temp_fv0_2) * 0x10));
                        return;
                    }
                }
                break;
            case 16:                                /* switch 1 */
                var_v0_6 = 0;
                temp_fv0_3 = var_fv0 * ((1.0f - var_fv1) * 255.0f);
                temp_v1_6 = arg2 / 2;
                temp_a2 = temp_v1_6 & 3;
                if (temp_v1_6 > 0) {
                    if (temp_a2 != 0) {
                        var_a1_6 = arg3 + (0 * 2);
                        var_a2_2 = *var_a1_6;
                        var_v0_6 = 1;
                        var_fs2_5 = var_fv1 * (f32) ((s32) (var_a2_2 & 0xFF00) >> 8);
                        if (temp_a2 != 1) {
                            do {
                                temp_t6_2 = var_a2_2 & 0xFF;
                                __repair_result_var_a2_2 = M2C_FIELD(var_a1_6, u16 *, 2);
                                var_v0_6 += 1;
                                var_a1_6 += 2;
                                M2C_FIELD(var_a1_6, s16 *, -2) = (s16) (temp_t6_2 | ((s32) (var_fs2_5 + temp_fv0_3) << 8));
                                var_fs2_5 = var_fv1 * (f32) ((s32) (__repair_result_var_a2_2 & 0xFF00) >> 8);
                            } while (temp_a2 != var_v0_6);
                        }
                        M2C_FIELD((var_a1_6 + 2), s16 *, -2) = (s16) ((__repair_result_var_a2_2 & 0xFF) | ((s32) (var_fs2_5 + temp_fv0_3) << 8));
                        if (var_v0_6 != temp_v1_6) {
                            goto block_42;
                        }
                    } else {
block_42:
                        temp_a1_9 = arg3 + (var_v0_6 * 2);
                        temp_a0_5 = (temp_v1_6 * 2) + arg3;
                        __repair_result_var_a2_3 = M2C_FIELD(temp_a1_9, u16 *, 0);
                        __repair_result_var_v0_7 = M2C_FIELD(temp_a1_9, u16 *, 2);
                        __repair_result_var_v1_2 = M2C_FIELD(temp_a1_9, u16 *, 4);
                        var_t4 = (s32) (__repair_result_var_v1_2 & 0xFF00) >> 8;
                        var_a1_7 = (unsigned char *) temp_a1_9 + 8;
                        var_fs1_2 = (f32) ((s32) (__repair_result_var_v0_7 & 0xFF00) >> 8);
                        var_fs2_6 = var_fv1 * (f32) ((s32) (__repair_result_var_a2_3 & 0xFF00) >> 8);
                        if (var_a1_7 != temp_a0_5) {
                            do {
                                temp_t0_5 = M2C_FIELD(var_a1_7, u16 *, -2);
                                temp_t2_2 = __repair_result_var_a2_3 & 0xFF;
                                var_a2_3 = M2C_FIELD(var_a1_7, u16 *, 0);
                                temp_t6_3 = __repair_result_var_v0_7 & 0xFF;
                                var_v0_7 = M2C_FIELD(var_a1_7, u16 *, 2);
                                temp_t9 = __repair_result_var_v1_2 & 0xFF;
                                var_v1_2 = M2C_FIELD(var_a1_7, u16 *, 4);
                                M2C_FIELD(var_a1_7, s16 *, -8) = (s16) (temp_t2_2 | ((s32) (var_fs2_6 + temp_fv0_3) << 8));
                                temp_t8 = temp_t0_5 & 0xFF;
                                M2C_FIELD(var_a1_7, s16 *, -6) = (s16) (temp_t6_3 | ((s32) ((var_fv1 * var_fs1_2) + temp_fv0_3) << 8));
                                var_fs2_6 = var_fv1 * (f32) ((s32) (var_a2_3 & 0xFF00) >> 8);
                                M2C_FIELD(var_a1_7, s16 *, -4) = (s16) (temp_t9 | ((s32) ((var_fv1 * (f32) var_t4) + temp_fv0_3) << 8));
                                temp_fa1_2 = (s32) ((var_fv1 * (f32) ((s32) (temp_t0_5 & 0xFF00) >> 8)) + temp_fv0_3);
                                var_a1_7 = (unsigned char *) var_a1_7 + 8;
                                var_t4 = (s32) (var_v1_2 & 0xFF00) >> 8;
                                var_fs1_2 = (f32) ((s32) (var_v0_7 & 0xFF00) >> 8);
                                M2C_FIELD(var_a1_7, s16 *, -0xA) = (s16) (temp_t8 | (temp_fa1_2 << 8));
                            } while (var_a1_7 != temp_a0_5);
                        }
                        temp_t0_6 = M2C_FIELD(var_a1_7, u16 *, -2);
                        M2C_FIELD(var_a1_7, s16 *, -8) = (s16) ((var_a2_3 & 0xFF) | ((s32) (var_fs2_6 + temp_fv0_3) << 8));
                        M2C_FIELD(var_a1_7, s16 *, -6) = (s16) ((var_v0_7 & 0xFF) | ((s32) ((var_fv1 * var_fs1_2) + temp_fv0_3) << 8));
                        M2C_FIELD(var_a1_7, s16 *, -4) = (s16) ((var_v1_2 & 0xFF) | ((s32) ((var_fv1 * (f32) var_t4) + temp_fv0_3) << 8));
                        M2C_FIELD(var_a1_7, u16 *, -2) = (u16) ((temp_t0_6 & 0xFF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t0_6 & 0xFF00) >> 8)) + temp_fv0_3) << 8));
                        return;
                    }
                }
                break;
            }
        }
    } else {
        switch (arg1) {                             /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            var_v0_8 = 0;
            temp_a1_10 = arg2 & 3;
            temp_fv0_4 = var_fv0 * ((1.0f - var_fv1) * 15.0f);
            if (arg2 > 0) {
                if (temp_a1_10 != 0) {
                    var_a0_5 = arg3;
                    var_a1_8 = (u8) *var_a0_5;
                    var_v0_8 = 1;
                    var_fs2_7 = var_fv1 * (f32) (var_a1_8 & 0xF);
                    if (temp_a1_10 != 1) {
                        do {
                            var_v0_8 += 1;
                            var_a0_5 += 1;
                            temp_a1_11 = (var_a1_8 & 0xF0) | ((s32) (var_fs2_7 + temp_fv0_4) & 0xF);
                            M2C_FIELD(var_a0_5, s8 *, -1) = temp_a1_11;
                            var_a1_8 = M2C_FIELD(var_a0_5, u8 *, 0);
                            M2C_FIELD(var_a0_5, s8 *, -1) = (s8) ((temp_a1_11 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_a1_11 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                            var_fs2_7 = var_fv1 * (f32) (var_a1_8 & 0xF);
                        } while (temp_a1_10 != var_v0_8);
                    }
                    temp_a0_6 = var_a0_5 + 1;
                    temp_a1_12 = (var_a1_8 & 0xF0) | ((s32) (var_fs2_7 + temp_fv0_4) & 0xF);
                    M2C_FIELD(temp_a0_6, s8 *, -1) = temp_a1_12;
                    M2C_FIELD(temp_a0_6, s8 *, -1) = (s8) ((temp_a1_12 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_a1_12 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                    if (var_v0_8 != arg2) {
                        goto block_54;
                    }
                } else {
block_54:
                    var_a0_6 = arg3 + var_v0_8;
                    var_a1_9 = *var_a0_6;
                    var_v0_9 = var_v0_8 + 4;
                    var_fs2_8 = (var_fv1 * (f32) (var_a1_9 & 0xF)) + temp_fv0_4;
                    if (var_v0_9 != arg2) {
                        do {
                            temp_v1_7 = M2C_FIELD(var_a0_6, u8 *, 1);
                            temp_t0_7 = M2C_FIELD(var_a0_6, u8 *, 2);
                            temp_t1_7 = M2C_FIELD(var_a0_6, u8 *, 3);
                            var_v0_9 += 4;
                            temp_a1_13 = (var_a1_9 & 0xF0) | ((s32) var_fs2_8 & 0xF);
                            M2C_FIELD(var_a0_6, u8 *, 0) = temp_a1_13;
                            temp_t8_2 = temp_v1_7 & 0xF0;
                            var_a1_9 = M2C_FIELD(var_a0_6, u8 *, 4);
                            temp_fs0_3 = (f32) (temp_v1_7 & 0xF);
                            var_a0_6 += 4;
                            M2C_FIELD(var_a0_6, s8 *, -4) = (s8) ((temp_a1_13 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_a1_13 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                            temp_v1_8 = temp_t8_2 | ((s32) ((var_fv1 * temp_fs0_3) + temp_fv0_4) & 0xF);
                            M2C_FIELD(var_a0_6, s8 *, -3) = temp_v1_8;
                            M2C_FIELD(var_a0_6, s8 *, -3) = (s8) ((temp_v1_8 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_v1_8 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                            temp_t0_8 = (temp_t0_7 & 0xF0) | ((s32) ((var_fv1 * (f32) (temp_t0_7 & 0xF)) + temp_fv0_4) & 0xF);
                            M2C_FIELD(var_a0_6, s8 *, -2) = temp_t0_8;
                            M2C_FIELD(var_a0_6, s8 *, -2) = (s8) ((temp_t0_8 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t0_8 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                            temp_t1_8 = (temp_t1_7 & 0xF0) | ((s32) ((var_fv1 * (f32) (temp_t1_7 & 0xF)) + temp_fv0_4) & 0xF);
                            M2C_FIELD(var_a0_6, s8 *, -1) = temp_t1_8;
                            M2C_FIELD(var_a0_6, s8 *, -1) = (s8) ((temp_t1_8 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t1_8 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                            var_fs2_8 = (var_fv1 * (f32) (var_a1_9 & 0xF)) + temp_fv0_4;
                        } while (var_v0_9 != arg2);
                    }
                    temp_v1_9 = M2C_FIELD(var_a0_6, u8 *, 1);
                    temp_t0_9 = M2C_FIELD(var_a0_6, u8 *, 2);
                    temp_t1_9 = M2C_FIELD(var_a0_6, u8 *, 3);
                    temp_a0_7 = var_a0_6 + 4;
                    temp_a1_14 = (var_a1_9 & 0xF0) | ((s32) var_fs2_8 & 0xF);
                    M2C_FIELD(temp_a0_7, s8 *, -4) = temp_a1_14;
                    M2C_FIELD(temp_a0_7, s8 *, -4) = (s8) ((temp_a1_14 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_a1_14 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                    temp_v1_10 = (temp_v1_9 & 0xF0) | ((s32) ((var_fv1 * (f32) (temp_v1_9 & 0xF)) + temp_fv0_4) & 0xF);
                    M2C_FIELD(temp_a0_7, s8 *, -3) = temp_v1_10;
                    M2C_FIELD(temp_a0_7, s8 *, -3) = (s8) ((temp_v1_10 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_v1_10 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                    temp_t0_10 = (temp_t0_9 & 0xF0) | ((s32) ((var_fv1 * (f32) (temp_t0_9 & 0xF)) + temp_fv0_4) & 0xF);
                    M2C_FIELD(temp_a0_7, s8 *, -2) = temp_t0_10;
                    M2C_FIELD(temp_a0_7, s8 *, -2) = (s8) ((temp_t0_10 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t0_10 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                    temp_t1_10 = (temp_t1_9 & 0xF0) | ((s32) ((var_fv1 * (f32) (temp_t1_9 & 0xF)) + temp_fv0_4) & 0xF);
                    M2C_FIELD(temp_a0_7, s8 *, -1) = temp_t1_10;
                    M2C_FIELD(temp_a0_7, s8 *, -1) = (s8) ((temp_t1_10 & 0xF) | ((s32) ((var_fv1 * (f32) ((s32) (temp_t1_10 & 0xF0) >> 4)) + temp_fv0_4) * 0x10));
                    return;
                }
            } else {
                return;
            }
            break;
        case 8:                                     /* switch 2 */
            temp_a1_15 = arg2 & 3;
            var_v0_10 = 0;
            temp_fv0_5 = var_fv0 * ((1.0f - var_fv1) * 255.0f);
            if (arg2 > 0) {
                if (temp_a1_15 != 0) {
                    var_a0_7 = arg3;
                    do {
                        temp_t8_3 = *var_a0_7;
                        var_v0_10 += 1;
                        var_fa0 = (f32) temp_t8_3;
                        if ((s32) temp_t8_3 < 0) {
                            var_fa0 += 4294967296.0f;
                        }
                        *var_a0_7 = (u8) (u32) ((var_fv1 * var_fa0) + temp_fv0_5);
                        var_a0_7 += 1;
                    } while (temp_a1_15 != var_v0_10);
                    if (var_v0_10 != arg2) {
                        goto block_64;
                    }
                } else {
block_64:
                    var_a0_8 = arg3 + var_v0_10;
                    do {
                        temp_t6_4 = M2C_FIELD(var_a0_8, u8 *, 0);
                        var_v0_10 += 4;
                        var_fa0_2 = (f32) temp_t6_4;
                        if ((s32) temp_t6_4 < 0) {
                            var_fa0_2 += 4294967296.0f;
                        }
                        temp_t3_2 = M2C_FIELD(var_a0_8, u8 *, 1);
                        M2C_FIELD(var_a0_8, u8 *, 0) = (u8) (u32) ((var_fv1 * var_fa0_2) + temp_fv0_5);
                        var_fa0_3 = (f32) temp_t3_2;
                        if ((s32) temp_t3_2 < 0) {
                            var_fa0_3 += 4294967296.0f;
                        }
                        temp_t9_2 = M2C_FIELD(var_a0_8, u8 *, 2);
                        M2C_FIELD(var_a0_8, u8 *, 1) = (u8) (u32) ((var_fv1 * var_fa0_3) + temp_fv0_5);
                        var_fa0_4 = (f32) temp_t9_2;
                        if ((s32) temp_t9_2 < 0) {
                            var_fa0_4 += 4294967296.0f;
                        }
                        temp_t5 = M2C_FIELD(var_a0_8, u8 *, 3);
                        M2C_FIELD(var_a0_8, u8 *, 2) = (u8) (u32) ((var_fv1 * var_fa0_4) + temp_fv0_5);
                        var_fa0_5 = (f32) temp_t5;
                        if ((s32) temp_t5 < 0) {
                            var_fa0_5 += 4294967296.0f;
                        }
                        M2C_FIELD(var_a0_8, u8 *, 3) = (u8) (u32) ((var_fv1 * var_fa0_5) + temp_fv0_5);
                        var_a0_8 = (unsigned char *) var_a0_8 + 4;
                    } while (var_v0_10 != arg2);
                    return;
                }
            }
            break;
        case 16:                                    /* switch 2 */
            var_v0_11 = 0;
            temp_fv0_6 = var_fv0 * ((1.0f - var_fv1) * D_802530BC);
            temp_v1_11 = arg2 / 2;
            temp_a2_2 = temp_v1_11 & 3;
            if (temp_v1_11 > 0) {
                if (temp_a2_2 != 0) {
                    var_a1_10 = arg3 + (0 * 2);
                    do {
                        temp_t8_4 = *var_a1_10;
                        var_v0_11 += 1;
                        var_fa0_6 = (f32) temp_t8_4;
                        if ((s32) temp_t8_4 < 0) {
                            var_fa0_6 += 4294967296.0f;
                        }
                        *var_a1_10 = (u16) (u32) ((var_fv1 * var_fa0_6) + temp_fv0_6);
                        var_a1_10 += 2;
                    } while (temp_a2_2 != var_v0_11);
                    if (var_v0_11 != temp_v1_11) {
                        goto block_82;
                    }
                } else {
block_82:
                    var_a1_11 = arg3 + (var_v0_11 * 2);
                    do {
                        temp_t7_2 = M2C_FIELD(var_a1_11, u16 *, 0);
                        var_fa0_7 = (f32) temp_t7_2;
                        if ((s32) temp_t7_2 < 0) {
                            var_fa0_7 += 4294967296.0f;
                        }
                        temp_t8_5 = M2C_FIELD(var_a1_11, u16 *, 2);
                        M2C_FIELD(var_a1_11, u16 *, 0) = (u16) (u32) ((var_fv1 * var_fa0_7) + temp_fv0_6);
                        var_fa0_8 = (f32) temp_t8_5;
                        if ((s32) temp_t8_5 < 0) {
                            var_fa0_8 += 4294967296.0f;
                        }
                        temp_t6_5 = M2C_FIELD(var_a1_11, u16 *, 4);
                        M2C_FIELD(var_a1_11, u16 *, 2) = (u16) (u32) ((var_fv1 * var_fa0_8) + temp_fv0_6);
                        var_fa0_9 = (f32) temp_t6_5;
                        if ((s32) temp_t6_5 < 0) {
                            var_fa0_9 += 4294967296.0f;
                        }
                        temp_t3_3 = M2C_FIELD(var_a1_11, u16 *, 6);
                        M2C_FIELD(var_a1_11, u16 *, 4) = (u16) (u32) ((var_fv1 * var_fa0_9) + temp_fv0_6);
                        var_fa0_10 = (f32) temp_t3_3;
                        if ((s32) temp_t3_3 < 0) {
                            var_fa0_10 += 4294967296.0f;
                        }
                        var_a1_11 = (unsigned char *) var_a1_11 + 8;
                        M2C_FIELD(var_a1_11, s16 *, -2) = (s16) (u32) ((var_fv1 * var_fa0_10) + temp_fv0_6);
                    } while (var_a1_11 != ((temp_v1_11 * 2) + arg3));
                }
            }
            break;
        }
    }
}
