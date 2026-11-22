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
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80223F08();
s32 func_80231A24();
extern char D_802539A0[];
extern char D_802539D8[];
extern char D_80275130[];
extern s32 D_80283524;

s32 func_80223E48(void) {
    char *var_s1;
    s32 var_s0;

    if (D_80283524 == 0) {
        func_80231A24(D_802539A0);
        return 1;
    }
    var_s1 = D_80275130;
    var_s0 = 0;
    for (;;) {
        if (M2C_FIELD(var_s1, u8 *, 0x18) != 0) {
            if (M2C_FIELD(var_s1, u8 *, 0) == 1) {
                if (func_80223F08(var_s0) == 0) {
                    return 0;
                }
                goto block_8;
            }
            func_80231A24(D_802539D8, var_s0);
            return 0;
        }
block_8:
        var_s0 += 1;
        var_s1 += 0x1C;
        if (var_s0 == 6) {
            return 1;
        }
        continue;
        break;
    }
}
