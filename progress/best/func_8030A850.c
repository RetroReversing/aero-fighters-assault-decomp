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

extern M2C_UNK D_8032AAFC;

s32 func_8030A850(s32 arg0, s32 arg1) {
int *__repair_home1 = &arg1;

    u8 sp20;
    s32 temp_t1;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;
    u8 *var_a3;
    u8 *var_a3_2;
    u8 temp_t6_2;
    u8 temp_t7_2;

    M2C_FIELD(&sp20, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_8032AAFC, M2C_UNK *, 0));
    temp_t6 = arg0 & 0xFF;
    temp_t7 = (*__repair_home1) & 0xFF;
    var_v1 = 0;
    var_v0 = 0;
    M2C_FIELD(&sp20, u8 *, 5) = (u8) M2C_FIELD(&D_8032AAFC, u8 *, 5);
    M2C_FIELD(&sp20, u8 *, 4) = (u8) M2C_FIELD(&D_8032AAFC, u8 *, 4);
    if (temp_t6 > 0) {
        temp_t1 = temp_t6 & 3;
        if (temp_t1 != 0) {
            var_a3 = &sp20;
            do {
                temp_t6_2 = *var_a3;
                var_v0 += 1;
                var_a3 += 1;
                var_v1 += temp_t7 & temp_t6_2;
            } while (temp_t1 != var_v0);
            if (var_v0 != temp_t6) {
                goto block_5;
            }
        } else {
block_5:
            var_a3_2 = &(&sp20)[var_v0];
            do {
                temp_t7_2 = M2C_FIELD(var_a3_2, u8 *, 3);
                temp_v1 = var_v1 + (temp_t7 & M2C_FIELD(var_a3_2, u8 *, 0)) + (temp_t7 & M2C_FIELD(var_a3_2, u8 *, 1)) + (temp_t7 & M2C_FIELD(var_a3_2, u8 *, 2));
                var_a3_2 += 4;
                var_v1 = temp_v1 + (temp_t7 & temp_t7_2);
            } while (var_a3_2 != &(&sp20)[temp_t6]);
        }
    }
    return var_v1 & 0xFF;
}
