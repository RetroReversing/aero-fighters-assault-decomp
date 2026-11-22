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

M2C_UNK func_802096F4(f32, f32, f32, f32 *, f32 *, f32 *); /* extern */
M2C_UNK func_80209914(f32, f32, s32, f32, f32 *, f32 *, f32 *); /* extern */

void func_8020F3BC(s32 arg0, s32 arg1, s32 arg2, u16 *arg3, f32 arg4, f32 arg5, f32 arg6) {
    s32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s32 sp40;
    f32 temp_ft0;
    f32 temp_ft2;
    f32 temp_ft4;
    f32 temp_ft4_3;
    f32 var_fs1;
    f32 var_fs1_2;
    f32 var_fs1_3;
    f32 var_fs1_4;
    f32 var_fs1_5;
    f32 var_fs1_6;
    f32 var_ft5;
    f32 var_ft5_2;
    f32 var_fv0;
    f32 var_fv0_10;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    f32 var_fv0_5;
    f32 var_fv0_6;
    f32 var_fv0_7;
    f32 var_fv0_8;
    f32 var_fv0_9;
    s32 temp_a0;
    s32 temp_a0_8;
    s32 temp_a1;
    s32 temp_a1_12;
    s32 temp_a1_13;
    s32 temp_a1_14;
    s32 temp_a1_4;
    s32 temp_a1_7;
    s32 temp_ft4_2;
    s32 temp_ft5;
    s32 temp_ft5_2;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 var_a0;
    s32 var_fs1_7;
    s32 var_fs1_8;
    s32 var_t0;
    s32 var_t0_10;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t0_4;
    s32 var_t0_5;
    s32 var_t0_6;
    s32 var_t0_7;
    s32 var_t0_8;
    s32 var_t0_9;
    s8 temp_a0_10;
    s8 temp_a0_12;
    s8 temp_a0_5;
    s8 temp_a0_7;
    s8 temp_a1_11;
    s8 temp_a1_16;
    s8 temp_a1_18;
    s8 temp_a1_9;
    s8 temp_a2_11;
    s8 temp_a2_5;
    s8 temp_a2_7;
    s8 temp_a2_9;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_4;
    s8 temp_v1_5;
    s8 temp_v1_6;
    u16 *var_s0;
    u16 *var_s0_2;
    u16 *var_s0_4;
    u16 *var_v0_3;
    u16 *var_v0_5;
    u16 *var_v0_7;
    u16 *var_v0_9;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a1_2;
    u16 temp_a1_3;
    u16 temp_t1;
    u16 temp_t2_2;
    u16 temp_t7_2;
    u16 temp_t7_3;
    u16 temp_t8_2;
    u16 temp_v0;
    u16 var_v0;
u16 __repair_result_var_v0;
    u16 var_v0_2;
    u16 var_v1;
u16 __repair_result_var_v1;
    u8 *var_v0_10;
    u8 *var_v0_6;
    u8 temp_a0_11;
    u8 temp_a0_4;
    u8 temp_a0_6;
    u8 temp_a0_9;
    u8 temp_a1_10;
    u8 temp_a1_15;
    u8 temp_a1_17;
    u8 temp_a1_5;
    u8 temp_a1_6;
    u8 temp_a1_8;
    u8 temp_a2_10;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_a2_4;
    u8 temp_a2_6;
    u8 temp_a2_8;
    u8 temp_t1_2;
    u8 temp_t1_3;
    u8 temp_t7_4;
    u8 temp_t7_5;
    u8 temp_t8_3;
    u8 temp_v1_3;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 var_a0_2;
u8 __repair_result_var_a0_2;
    u8 var_v1_2;
u8 __repair_result_var_v1_2;
    u8 var_v1_3;
u8 __repair_result_var_v1_3;
    u8 var_v1_4;
u8 __repair_result_var_v1_4;
    u8 var_v1_5;
u8 __repair_result_var_v1_5;
    u8 var_v1_6;
u8 __repair_result_var_v1_6;
    u8 var_v1_7;
    void *temp_a2;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *var_s0_3;
    void *var_s0_5;
    void *var_v0_4;
    void *var_v0_8;

    if (arg0 != 1) {
        if (arg0 != 2) {
            var_t0 = 0;
            if (arg0 == 4) {
                var_s0 = arg3;
                var_a0 = arg2 / 2;
                if (var_a0 > 0) {
                    do {
                        temp_v0 = *var_s0;
sp40 = var_a0; sp94 = var_t0;
                        func_80209914((f32) ((s32) (temp_v0 & 0xF800) >> 0xB) / 31.0f, (f32) ((s32) (temp_v0 & 0x7C0) >> 6) / 31.0f, var_a0, (f32) ((s32) (temp_v0 & 0x3E) >> 1) / 31.0f, &sp90, &sp8C, &sp88);
                        func_802096F4(arg4 * sp90, arg5 * sp8C, arg6 * sp88, &sp70, &sp6C, &sp68);
                        var_a0 = sp40;
                        temp_ft4 = sp6C * 31.0f;
                        temp_ft2 = sp70 * 31.0f;
                        var_t0 = sp94 + 1;
                        var_s0 += 2;
                        temp_ft0 = sp68 * 31.0f;
                        sp70 = temp_ft2;
                        sp6C = temp_ft4;
                        sp68 = temp_ft0;
                        M2C_FIELD(var_s0, u16 *, -2) = (u16) ((M2C_FIELD(var_s0, u16 *, -2) & 1) | ((s32) temp_ft2 << 0xB) | ((s32) temp_ft4 << 6) | ((s32) temp_ft0 * 2));
                    } while (var_t0 != var_a0);
                }
            }
        } else if (arg1 != 4) {
            if (arg1 != 8) {
                var_t0_2 = 0;
                if (arg1 != 0x10) {
                    return;
                }
                temp_a0 = arg2 / 2;
                temp_a1 = temp_a0 & 3;
                if (temp_a0 > 0) {
                    if (temp_a1 != 0) {
                        var_s0_2 = arg3 + (0 * 2);
                        var_v0 = *var_s0_2;
                        var_t0_2 = 1;
                        var_fs1 = (f32) ((s32) (var_v0 & 0xFF00) >> 8);
                        if (temp_a1 != 1) {
                            do {
                                temp_t5 = var_v0 & 0xFF;
                                __repair_result_var_v0 = M2C_FIELD(var_s0_2, u16 *, 2);
                                var_t0_2 += 1;
                                var_s0_2 += 2;
                                temp_ft5 = (s32) (arg6 * var_fs1);
                                var_fs1 = (f32) ((s32) (__repair_result_var_v0 & 0xFF00) >> 8);
                                M2C_FIELD(var_s0_2, s16 *, -2) = (s16) (temp_t5 | (temp_ft5 << 8));
                            } while (temp_a1 != var_t0_2);
                        }
                        M2C_FIELD((var_s0_2 + 2), s16 *, -2) = (s16) ((__repair_result_var_v0 & 0xFF) | ((s32) (arg6 * var_fs1) << 8));
                        if (var_t0_2 != temp_a0) {
                            goto block_32;
                        }
                    } else {
block_32:
                        temp_s0 = arg3 + (var_t0_2 * 2);
                        temp_a2 = (temp_a0 * 2) + arg3;
                        var_v0_2 = M2C_FIELD(temp_s0, u16 *, 0);
                        __repair_result_var_v1 = M2C_FIELD(temp_s0, u16 *, 2);
                        var_s0_3 = (unsigned char *) temp_s0 + 8;
                        var_fs1_2 = (f32) ((s32) (__repair_result_var_v1 & 0xFF00) >> 8);
                        var_ft5 = arg6 * (f32) ((s32) (var_v0_2 & 0xFF00) >> 8);
                        if (var_s0_3 != temp_a2) {
                            do {
                                temp_a0_2 = M2C_FIELD(var_s0_3, u16 *, -4);
                                temp_a1_2 = M2C_FIELD(var_s0_3, u16 *, -2);
                                temp_t9 = var_v0_2 & 0xFF;
                                temp_t6 = __repair_result_var_v1 & 0xFF;
                                var_v0 = M2C_FIELD(var_s0_3, u16 *, 0);
                                var_v1 = M2C_FIELD(var_s0_3, u16 *, 2);
                                temp_t3 = temp_a0_2 & 0xFF;
                                var_s0_3 = (unsigned char *) var_s0_3 + 8;
                                M2C_FIELD(var_s0_3, s16 *, -0x10) = (s16) (temp_t9 | ((s32) var_ft5 << 8));
                                M2C_FIELD(var_s0_3, s16 *, -0xE) = (s16) (temp_t6 | ((s32) (arg6 * var_fs1_2) << 8));
                                M2C_FIELD(var_s0_3, s16 *, -0xC) = (s16) (temp_t3 | ((s32) (arg6 * (f32) ((s32) (temp_a0_2 & 0xFF00) >> 8)) << 8));
                                M2C_FIELD(var_s0_3, s16 *, -0xA) = (s16) ((temp_a1_2 & 0xFF) | ((s32) (arg6 * (f32) ((s32) (temp_a1_2 & 0xFF00) >> 8)) << 8));
                                var_fs1_2 = (f32) ((s32) (var_v1 & 0xFF00) >> 8);
                                var_ft5 = arg6 * (f32) ((s32) (var_v0 & 0xFF00) >> 8);
                            } while (var_s0_3 != temp_a2);
                        }
                        temp_a0_3 = M2C_FIELD(var_s0_3, u16 *, -4);
                        temp_a1_3 = M2C_FIELD(var_s0_3, u16 *, -2);
                        M2C_FIELD(var_s0_3, s16 *, -8) = (s16) ((var_v0 & 0xFF) | ((s32) var_ft5 << 8));
                        M2C_FIELD(var_s0_3, s16 *, -6) = (s16) ((var_v1 & 0xFF) | ((s32) (arg6 * var_fs1_2) << 8));
                        M2C_FIELD(var_s0_3, u16 *, -4) = (u16) ((temp_a0_3 & 0xFF) | ((s32) (arg6 * (f32) ((s32) (temp_a0_3 & 0xFF00) >> 8)) << 8));
                        M2C_FIELD(var_s0_3, u16 *, -2) = (u16) ((temp_a1_3 & 0xFF) | ((s32) (arg6 * (f32) ((s32) (temp_a1_3 & 0xFF00) >> 8)) << 8));
                    }
                }
            } else {
                var_t0_3 = 0;
                if (arg2 > 0) {
                    temp_a1_4 = arg2 & 3;
                    if (temp_a1_4 != 0) {
                        var_v0_3 = arg3;
                        var_v1_2 = *var_v0_3;
                        var_t0_3 = 1;
                        var_fs1_3 = (f32) ((s32) (var_v1_2 & 0xF0) >> 4);
                        if (temp_a1_4 != 1) {
                            do {
                                temp_t4 = var_v1_2 & 0xF;
                                __repair_result_var_v1_2 = M2C_FIELD(var_v0_3, u8 *, 1);
                                var_t0_3 += 1;
                                var_v0_3 += 1;
                                temp_ft5_2 = (s32) (arg6 * var_fs1_3);
                                var_fs1_3 = (f32) ((s32) (__repair_result_var_v1_2 & 0xF0) >> 4);
                                M2C_FIELD(var_v0_3, s8 *, -1) = (s8) (temp_t4 | (temp_ft5_2 * 0x10));
                            } while (temp_a1_4 != var_t0_3);
                        }
                        M2C_FIELD((var_v0_3 + 1), s8 *, -1) = (s8) ((__repair_result_var_v1_2 & 0xF) | ((s32) (arg6 * var_fs1_3) * 0x10));
                        if (var_t0_3 != arg2) {
                            goto block_24;
                        }
                    } else {
block_24:
                        var_v0_4 = arg3 + var_t0_3;
                        __repair_result_var_v1_3 = M2C_FIELD(var_v0_4, u8 *, 0);
                        __repair_result_var_a0_2 = M2C_FIELD(var_v0_4, u8 *, 1);
                        var_t0_4 = var_t0_3 + 4;
                        var_fs1_4 = (f32) ((s32) (__repair_result_var_a0_2 & 0xF0) >> 4);
                        var_ft5_2 = arg6 * (f32) ((s32) (__repair_result_var_v1_3 & 0xF0) >> 4);
                        if (var_t0_4 != arg2) {
                            do {
                                temp_a1_5 = M2C_FIELD(var_v0_4, u8 *, 2);
                                temp_a2_2 = M2C_FIELD(var_v0_4, u8 *, 3);
                                temp_t2 = __repair_result_var_v1_3 & 0xF;
                                temp_t8 = __repair_result_var_a0_2 & 0xF;
                                var_v1_3 = M2C_FIELD(var_v0_4, u8 *, 4);
                                temp_t7 = temp_a1_5 & 0xF;
                                var_a0_2 = M2C_FIELD(var_v0_4, u8 *, 5);
                                var_t0_4 += 4;
                                var_v0_4 = (unsigned char *) var_v0_4 + 4;
                                M2C_FIELD(var_v0_4, s8 *, -4) = (s8) (temp_t2 | ((s32) var_ft5_2 * 0x10));
                                M2C_FIELD(var_v0_4, s8 *, -3) = (s8) (temp_t8 | ((s32) (arg6 * var_fs1_4) * 0x10));
                                M2C_FIELD(var_v0_4, s8 *, -2) = (s8) (temp_t7 | ((s32) (arg6 * (f32) ((s32) (temp_a1_5 & 0xF0) >> 4)) * 0x10));
                                M2C_FIELD(var_v0_4, s8 *, -1) = (s8) ((temp_a2_2 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a2_2 & 0xF0) >> 4)) * 0x10));
                                var_fs1_4 = (f32) ((s32) (var_a0_2 & 0xF0) >> 4);
                                var_ft5_2 = arg6 * (f32) ((s32) (var_v1_3 & 0xF0) >> 4);
                            } while (var_t0_4 != arg2);
                        }
                        temp_a1_6 = M2C_FIELD(var_v0_4, u8 *, 2);
                        temp_a2_3 = M2C_FIELD(var_v0_4, u8 *, 3);
                        temp_v0_2 = (unsigned char *) var_v0_4 + 4;
                        M2C_FIELD(temp_v0_2, s8 *, -4) = (s8) ((var_v1_3 & 0xF) | ((s32) var_ft5_2 * 0x10));
                        M2C_FIELD(temp_v0_2, s8 *, -3) = (s8) ((var_a0_2 & 0xF) | ((s32) (arg6 * var_fs1_4) * 0x10));
                        M2C_FIELD(temp_v0_2, s8 *, -2) = (s8) ((temp_a1_6 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a1_6 & 0xF0) >> 4)) * 0x10));
                        M2C_FIELD(temp_v0_2, s8 *, -1) = (s8) ((temp_a2_3 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a2_3 & 0xF0) >> 4)) * 0x10));
                    }
                }
            }
        } else {
            var_t0_5 = 0;
            if (arg2 > 0) {
                temp_a1_7 = arg2 & 3;
                if (temp_a1_7 != 0) {
                    var_v0_5 = arg3;
                    var_v1_4 = *var_v0_5;
                    var_t0_5 = 1;
                    var_fs1_5 = arg6 * (f32) ((s32) (var_v1_4 & 0xE) >> 1);
                    if (temp_a1_7 != 1) {
                        do {
                            var_t0_5 += 1;
                            var_v0_5 += 1;
                            temp_v1 = (var_v1_4 & 0xF1) | ((s32) var_fs1_5 * 2);
                            M2C_FIELD(var_v0_5, s8 *, -1) = temp_v1;
                            __repair_result_var_v1_4 = M2C_FIELD(var_v0_5, u8 *, 0);
                            M2C_FIELD(var_v0_5, s8 *, -1) = (s8) ((temp_v1 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_v1 & 0xE0) >> 5)) << 5));
                            var_fs1_5 = arg6 * (f32) ((s32) (__repair_result_var_v1_4 & 0xE) >> 1);
                        } while (temp_a1_7 != var_t0_5);
                    }
                    temp_v0_3 = var_v0_5 + 1;
                    temp_v1_2 = (__repair_result_var_v1_4 & 0xF1) | ((s32) var_fs1_5 * 2);
                    M2C_FIELD(temp_v0_3, s8 *, -1) = temp_v1_2;
                    M2C_FIELD(temp_v0_3, s8 *, -1) = (s8) ((temp_v1_2 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_v1_2 & 0xE0) >> 5)) << 5));
                    if (var_t0_5 != arg2) {
                        goto block_16;
                    }
                } else {
block_16:
                    var_v0_6 = arg3 + var_t0_5;
                    var_v1_5 = *var_v0_6;
                    var_t0_6 = var_t0_5 + 4;
                    var_fs1_6 = arg6 * (f32) ((s32) (var_v1_5 & 0xE) >> 1);
                    if (var_t0_6 != arg2) {
                        do {
                            temp_a0_4 = M2C_FIELD(var_v0_6, u8 *, 1);
                            temp_a1_8 = M2C_FIELD(var_v0_6, u8 *, 2);
                            temp_a2_4 = M2C_FIELD(var_v0_6, u8 *, 3);
                            var_t0_6 += 4;
                            temp_v1_3 = (var_v1_5 & 0xF1) | ((s32) var_fs1_6 * 2);
                            M2C_FIELD(var_v0_6, u8 *, 0) = temp_v1_3;
                            temp_ft4_2 = (s32) (temp_a0_4 & 0xE) >> 1;
                            temp_t9_2 = temp_a0_4 & 0xF1;
                            __repair_result_var_v1_5 = M2C_FIELD(var_v0_6, u8 *, 4);
                            var_v0_6 += 4;
                            M2C_FIELD(var_v0_6, s8 *, -4) = (s8) ((temp_v1_3 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_v1_3 & 0xE0) >> 5)) << 5));
                            temp_a0_5 = temp_t9_2 | ((s32) (arg6 * (f32) temp_ft4_2) * 2);
                            M2C_FIELD(var_v0_6, s8 *, -3) = temp_a0_5;
                            M2C_FIELD(var_v0_6, s8 *, -3) = (s8) ((temp_a0_5 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_a0_5 & 0xE0) >> 5)) << 5));
                            temp_a1_9 = (temp_a1_8 & 0xF1) | ((s32) (arg6 * (f32) ((s32) (temp_a1_8 & 0xE) >> 1)) * 2);
                            M2C_FIELD(var_v0_6, s8 *, -2) = temp_a1_9;
                            M2C_FIELD(var_v0_6, s8 *, -2) = (s8) ((temp_a1_9 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_a1_9 & 0xE0) >> 5)) << 5));
                            temp_a2_5 = (temp_a2_4 & 0xF1) | ((s32) (arg6 * (f32) ((s32) (temp_a2_4 & 0xE) >> 1)) * 2);
                            M2C_FIELD(var_v0_6, s8 *, -1) = temp_a2_5;
                            M2C_FIELD(var_v0_6, s8 *, -1) = (s8) ((temp_a2_5 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_a2_5 & 0xE0) >> 5)) << 5));
                            var_fs1_6 = arg6 * (f32) ((s32) (__repair_result_var_v1_5 & 0xE) >> 1);
                        } while (var_t0_6 != arg2);
                    }
                    temp_a0_6 = M2C_FIELD(var_v0_6, u8 *, 1);
                    temp_a1_10 = M2C_FIELD(var_v0_6, u8 *, 2);
                    temp_a2_6 = M2C_FIELD(var_v0_6, u8 *, 3);
                    temp_v0_4 = var_v0_6 + 4;
                    temp_v1_4 = (__repair_result_var_v1_5 & 0xF1) | ((s32) var_fs1_6 * 2);
                    M2C_FIELD(temp_v0_4, s8 *, -4) = temp_v1_4;
                    temp_a0_7 = (temp_a0_6 & 0xF1) | ((s32) (arg6 * (f32) ((s32) (temp_a0_6 & 0xE) >> 1)) * 2);
                    M2C_FIELD(temp_v0_4, s8 *, -4) = (s8) ((temp_v1_4 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_v1_4 & 0xE0) >> 5)) << 5));
                    M2C_FIELD(temp_v0_4, s8 *, -3) = temp_a0_7;
                    temp_a1_11 = (temp_a1_10 & 0xF1) | ((s32) (arg6 * (f32) ((s32) (temp_a1_10 & 0xE) >> 1)) * 2);
                    M2C_FIELD(temp_v0_4, s8 *, -3) = (s8) ((temp_a0_7 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_a0_7 & 0xE0) >> 5)) << 5));
                    M2C_FIELD(temp_v0_4, s8 *, -2) = temp_a1_11;
                    temp_a2_7 = (temp_a2_6 & 0xF1) | ((s32) (arg6 * (f32) ((s32) (temp_a2_6 & 0xE) >> 1)) * 2);
                    M2C_FIELD(temp_v0_4, s8 *, -2) = (s8) ((temp_a1_11 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_a1_11 & 0xE0) >> 5)) << 5));
                    M2C_FIELD(temp_v0_4, s8 *, -1) = temp_a2_7;
                    M2C_FIELD(temp_v0_4, s8 *, -1) = (s8) ((temp_a2_7 & 0x1F) | ((s32) (arg6 * (f32) ((s32) (temp_a2_7 & 0xE0) >> 5)) << 5));
                }
            }
        }
    } else if (arg1 != 4) {
        if (arg1 != 8) {
            var_t0_7 = 0;
            if (arg1 != 0x10) {
                return;
            }
            temp_a0_8 = arg2 / 2;
            temp_a1_12 = temp_a0_8 & 3;
            if (temp_a0_8 > 0) {
                if (temp_a1_12 != 0) {
                    var_s0_4 = arg3 + (0 * 2);
                    do {
                        temp_t2_2 = *var_s0_4;
                        var_t0_7 += 1;
                        var_fv0 = (f32) temp_t2_2;
                        if ((s32) temp_t2_2 < 0) {
                            var_fv0 += 4294967296.0f;
                        }
                        *var_s0_4 = (u16) (u32) (arg6 * var_fv0);
                        var_s0_4 += 2;
                    } while (temp_a1_12 != var_t0_7);
                    if (var_t0_7 != temp_a0_8) {
                        goto block_72;
                    }
                } else {
block_72:
                    var_s0_5 = arg3 + (var_t0_7 * 2);
                    do {
                        temp_t7_2 = M2C_FIELD(var_s0_5, u16 *, 0);
                        var_fv0_2 = (f32) temp_t7_2;
                        if ((s32) temp_t7_2 < 0) {
                            var_fv0_2 += 4294967296.0f;
                        }
                        temp_t8_2 = M2C_FIELD(var_s0_5, u16 *, 2);
                        M2C_FIELD(var_s0_5, u16 *, 0) = (u16) (u32) (arg6 * var_fv0_2);
                        var_fv0_3 = (f32) temp_t8_2;
                        if ((s32) temp_t8_2 < 0) {
                            var_fv0_3 += 4294967296.0f;
                        }
                        temp_t1 = M2C_FIELD(var_s0_5, u16 *, 4);
                        M2C_FIELD(var_s0_5, u16 *, 2) = (u16) (u32) (arg6 * var_fv0_3);
                        var_fv0_4 = (f32) temp_t1;
                        if ((s32) temp_t1 < 0) {
                            var_fv0_4 += 4294967296.0f;
                        }
                        temp_t7_3 = M2C_FIELD(var_s0_5, u16 *, 6);
                        M2C_FIELD(var_s0_5, u16 *, 4) = (u16) (u32) (arg6 * var_fv0_4);
                        var_fv0_5 = (f32) temp_t7_3;
                        if ((s32) temp_t7_3 < 0) {
                            var_fv0_5 += 4294967296.0f;
                        }
                        var_s0_5 = (unsigned char *) var_s0_5 + 8;
                        M2C_FIELD(var_s0_5, s16 *, -2) = (s16) (u32) (arg6 * var_fv0_5);
                    } while (var_s0_5 != ((temp_a0_8 * 2) + arg3));
                }
            }
        } else {
            var_t0_8 = 0;
            if (arg2 > 0) {
                temp_a1_13 = arg2 & 3;
                if (temp_a1_13 != 0) {
                    var_v0_7 = arg3;
                    do {
                        temp_t1_2 = *var_v0_7;
                        var_t0_8 += 1;
                        var_fv0_6 = (f32) temp_t1_2;
                        if ((s32) temp_t1_2 < 0) {
                            var_fv0_6 += 4294967296.0f;
                        }
                        *var_v0_7 = (u8) (u32) (arg6 * var_fv0_6);
                        var_v0_7 += 1;
                    } while (temp_a1_13 != var_t0_8);
                    if (var_t0_8 != arg2) {
                        goto block_54;
                    }
                } else {
block_54:
                    var_v0_8 = arg3 + var_t0_8;
                    do {
                        temp_t7_4 = M2C_FIELD(var_v0_8, u8 *, 0);
                        var_t0_8 += 4;
                        var_fv0_7 = (f32) temp_t7_4;
                        if ((s32) temp_t7_4 < 0) {
                            var_fv0_7 += 4294967296.0f;
                        }
                        temp_t8_3 = M2C_FIELD(var_v0_8, u8 *, 1);
                        M2C_FIELD(var_v0_8, u8 *, 0) = (u8) (u32) (arg6 * var_fv0_7);
                        var_fv0_8 = (f32) temp_t8_3;
                        if ((s32) temp_t8_3 < 0) {
                            var_fv0_8 += 4294967296.0f;
                        }
                        temp_t1_3 = M2C_FIELD(var_v0_8, u8 *, 2);
                        M2C_FIELD(var_v0_8, u8 *, 1) = (u8) (u32) (arg6 * var_fv0_8);
                        var_fv0_9 = (f32) temp_t1_3;
                        if ((s32) temp_t1_3 < 0) {
                            var_fv0_9 += 4294967296.0f;
                        }
                        temp_t7_5 = M2C_FIELD(var_v0_8, u8 *, 3);
                        M2C_FIELD(var_v0_8, u8 *, 2) = (u8) (u32) (arg6 * var_fv0_9);
                        var_fv0_10 = (f32) temp_t7_5;
                        if ((s32) temp_t7_5 < 0) {
                            var_fv0_10 += 4294967296.0f;
                        }
                        M2C_FIELD(var_v0_8, u8 *, 3) = (u8) (u32) (arg6 * var_fv0_10);
                        var_v0_8 = (unsigned char *) var_v0_8 + 4;
                    } while (var_t0_8 != arg2);
                }
            }
        }
    } else {
        var_t0_9 = 0;
        if (arg2 > 0) {
            temp_a1_14 = arg2 & 3;
            if (temp_a1_14 != 0) {
                var_v0_9 = arg3;
                var_v1_6 = *var_v0_9;
                var_t0_9 = 1;
                var_fs1_7 = (s32) (arg6 * (f32) (var_v1_6 & 0xF));
                if (temp_a1_14 != 1) {
                    do {
                        var_t0_9 += 1;
                        temp_v1_5 = (var_v1_6 & 0xF0) | (var_fs1_7 & 0xF);
                        M2C_FIELD(var_v0_9, s8 *, 0) = temp_v1_5;
                        __repair_result_var_v1_6 = M2C_FIELD(var_v0_9, u8 *, 1);
                        var_v0_9 += 1;
                        var_fs1_7 = (s32) (arg6 * (f32) (__repair_result_var_v1_6 & 0xF));
                        M2C_FIELD(var_v0_9, s8 *, -1) = (s8) ((temp_v1_5 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_v1_5 & 0xF0) >> 4)) * 0x10));
                    } while (temp_a1_14 != var_t0_9);
                }
                temp_v0_5 = var_v0_9 + 1;
                temp_v1_6 = (__repair_result_var_v1_6 & 0xF0) | (var_fs1_7 & 0xF);
                M2C_FIELD(temp_v0_5, s8 *, -1) = temp_v1_6;
                M2C_FIELD(temp_v0_5, s8 *, -1) = (s8) ((temp_v1_6 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_v1_6 & 0xF0) >> 4)) * 0x10));
                if (var_t0_9 != arg2) {
                    goto block_44;
                }
            } else {
block_44:
                var_v0_10 = arg3 + var_t0_9;
                var_v1_7 = *var_v0_10;
                var_t0_10 = var_t0_9 + 4;
                var_fs1_8 = (s32) (arg6 * (f32) (var_v1_7 & 0xF));
                if (var_t0_10 != arg2) {
                    do {
                        temp_a0_9 = M2C_FIELD(var_v0_10, u8 *, 1);
                        temp_a1_15 = M2C_FIELD(var_v0_10, u8 *, 2);
                        temp_v1_7 = (var_v1_7 & 0xF0) | (var_fs1_8 & 0xF);
                        M2C_FIELD(var_v0_10, u8 *, 0) = temp_v1_7;
                        temp_t6_2 = temp_a0_9 & 0xF0;
                        temp_a2_8 = M2C_FIELD(var_v0_10, u8 *, 3);
                        temp_ft4_3 = (f32) (temp_a0_9 & 0xF);
                        var_v1_7 = M2C_FIELD(var_v0_10, u8 *, 4);
                        var_t0_10 += 4;
                        var_v0_10 += 4;
                        temp_a0_10 = temp_t6_2 | ((s32) (arg6 * temp_ft4_3) & 0xF);
                        M2C_FIELD(var_v0_10, s8 *, -4) = (s8) ((temp_v1_7 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_v1_7 & 0xF0) >> 4)) * 0x10));
                        M2C_FIELD(var_v0_10, s8 *, -3) = temp_a0_10;
                        M2C_FIELD(var_v0_10, s8 *, -3) = (s8) ((temp_a0_10 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a0_10 & 0xF0) >> 4)) * 0x10));
                        temp_a1_16 = (temp_a1_15 & 0xF0) | ((s32) (arg6 * (f32) (temp_a1_15 & 0xF)) & 0xF);
                        M2C_FIELD(var_v0_10, s8 *, -2) = temp_a1_16;
                        M2C_FIELD(var_v0_10, s8 *, -2) = (s8) ((temp_a1_16 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a1_16 & 0xF0) >> 4)) * 0x10));
                        temp_a2_9 = (temp_a2_8 & 0xF0) | ((s32) (arg6 * (f32) (temp_a2_8 & 0xF)) & 0xF);
                        M2C_FIELD(var_v0_10, s8 *, -1) = temp_a2_9;
                        var_fs1_8 = (s32) (arg6 * (f32) (var_v1_7 & 0xF));
                        M2C_FIELD(var_v0_10, s8 *, -1) = (s8) ((temp_a2_9 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a2_9 & 0xF0) >> 4)) * 0x10));
                    } while (var_t0_10 != arg2);
                }
                temp_a0_11 = M2C_FIELD(var_v0_10, u8 *, 1);
                temp_v1_8 = (var_v1_7 & 0xF0) | (var_fs1_8 & 0xF);
                temp_a1_17 = M2C_FIELD(var_v0_10, u8 *, 2);
                M2C_FIELD(var_v0_10, u8 *, 0) = temp_v1_8;
                temp_a2_10 = M2C_FIELD(var_v0_10, u8 *, 3);
                temp_v0_6 = var_v0_10 + 4;
                temp_a0_12 = (temp_a0_11 & 0xF0) | ((s32) (arg6 * (f32) (temp_a0_11 & 0xF)) & 0xF);
                M2C_FIELD(temp_v0_6, s8 *, -4) = (s8) ((temp_v1_8 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_v1_8 & 0xF0) >> 4)) * 0x10));
                M2C_FIELD(temp_v0_6, s8 *, -3) = temp_a0_12;
                temp_a1_18 = (temp_a1_17 & 0xF0) | ((s32) (arg6 * (f32) (temp_a1_17 & 0xF)) & 0xF);
                M2C_FIELD(temp_v0_6, s8 *, -3) = (s8) ((temp_a0_12 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a0_12 & 0xF0) >> 4)) * 0x10));
                M2C_FIELD(temp_v0_6, s8 *, -2) = temp_a1_18;
                temp_a2_11 = (temp_a2_10 & 0xF0) | ((s32) (arg6 * (f32) (temp_a2_10 & 0xF)) & 0xF);
                M2C_FIELD(temp_v0_6, s8 *, -2) = (s8) ((temp_a1_18 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a1_18 & 0xF0) >> 4)) * 0x10));
                M2C_FIELD(temp_v0_6, s8 *, -1) = temp_a2_11;
                M2C_FIELD(temp_v0_6, s8 *, -1) = (s8) ((temp_a2_11 & 0xF) | ((s32) (arg6 * (f32) ((s32) (temp_a2_11 & 0xF0) >> 4)) * 0x10));
            }
        }
    }
}
