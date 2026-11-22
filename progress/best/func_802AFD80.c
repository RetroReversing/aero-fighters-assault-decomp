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

M2C_UNK func_8028C218(s32);                         /* extern */
s32 func_8028C238(s32);                             /* extern */
M2C_UNK func_8028C378(s32, M2C_UNK);                /* extern */

u8 func_802AFD80(void *arg0, s32 arg1, s32 arg2) {
    u8 sp2F;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    void *var_s1;
    void *var_s1_2;

    sp2F = 0;
    if (arg2 == 1) {
        var_s0 = 0;
        var_s1 = arg0;
        if ((s32) M2C_FIELD(arg0, u8 *, 0x704C) > 0) {
loop_2:
            temp_a0 = M2C_FIELD(var_s1, s32 *, 0x6FC0);
            if ((temp_a0 != 0) && (arg1 == temp_a0) && (func_8028C238(temp_a0) != 0)) {
                func_8028C378(M2C_FIELD(var_s1, s32 *, 0x6FC0), 0);
                func_8028C218(M2C_FIELD(var_s1, s32 *, 0x6FC0));
                M2C_FIELD(var_s1, s32 *, 0x6FC0) = 0;
                sp2F = 1;
            } else {
                var_s0 += 1;
                var_s1 = (unsigned char *) var_s1 + 4;
                if (var_s0 < (s32) M2C_FIELD(arg0, u8 *, 0x704C)) {
                    goto loop_2;
                }
            }
        }
    }
    if (arg2 == 2) {
        var_s0_2 = 0;
        var_s1_2 = arg0;
        if ((s32) M2C_FIELD(arg0, u8 *, 0x6F90) > 0) {
loop_9:
            temp_a0_2 = M2C_FIELD(var_s1_2, s32 *, 0x6F04);
            if ((temp_a0_2 != 0) && (arg1 == temp_a0_2) && (func_8028C238(temp_a0_2) != 0)) {
                sp2F = 1;
                func_8028C378(M2C_FIELD(var_s1_2, s32 *, 0x6F04), 0);
                func_8028C218(M2C_FIELD(var_s1_2, s32 *, 0x6F04));
                M2C_FIELD(var_s1_2, s32 *, 0x6F04) = 0;
            } else {
                var_s0_2 += 1;
                var_s1_2 = (unsigned char *) var_s1_2 + 4;
                if (var_s0_2 < (s32) M2C_FIELD(arg0, u8 *, 0x6F90)) {
                    goto loop_9;
                }
            }
        }
    }
    return sp2F;
}
