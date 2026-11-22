/* Partial candidate from function #176093660061 in project #41; rechecked locally. */
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

void func_802481C0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    if (var_a1 >= 0xC) {
        temp_v1 = -var_a0 & 3;
        temp_a1 = var_a1 - temp_v1;
        if (temp_v1 != 0) {
            *(s32 *)var_a0 = M2C_UNALIGNED32(0);
            var_a0 += temp_v1;
        }
        temp_a3 = temp_a1 & ~0x1F;
        temp_a1_2 = temp_a1 - temp_a3;
        if (temp_a3 != 0) {
            temp_a3_2 = temp_a3 + var_a0;
            __repair_rows: {
                var_a0 += 0x20;
                M2C_FIELD(var_a0, s32 *, -0x20) = 0;
                M2C_FIELD(var_a0, s32 *, -0x1C) = 0;
                M2C_FIELD(var_a0, s32 *, -0x18) = 0;
                M2C_FIELD(var_a0, s32 *, -0x14) = 0;
                M2C_FIELD(var_a0, s32 *, -0x10) = 0;
                M2C_FIELD(var_a0, s32 *, -0xC) = 0;
                M2C_FIELD(var_a0, s32 *, -8) = 0;
                M2C_FIELD(var_a0, s32 *, -4) = 0;
            }
if (var_a0 != temp_a3_2) goto __repair_rows;
        }
        temp_a3_3 = temp_a1_2 & ~3;
        var_a1 = temp_a1_2 - temp_a3_3;
        if (temp_a3_3 != 0) {
            temp_a3_4 = temp_a3_3 + var_a0;
            do {
                var_a0 += 4;
                M2C_FIELD(var_a0, s32 *, -4) = 0;
            } while (var_a0 != temp_a3_4);
        }
    }
    if (var_a1 > 0) {
        temp_a1_3 = var_a1 + var_a0;
        do {
            var_a0 += 1;
            M2C_FIELD(var_a0, s8 *, -1) = 0;
        } while (var_a0 != temp_a1_3);
    }
}
