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

extern int D_802839AC;
extern s8 D_80283970;
extern char D_802839B0[];
extern s8 D_80285EB0;
extern u8 D_80285EB1;

void func_8023D604(s32 arg0) {
    s8 sp13;
    s8 sp12;
    s8 sp11;
    s8 sp10;
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    s32 var_v0;
    char *var_v1;
    char *var_v1_2;
    s8 temp_t6;

    temp_t6 = arg0 & 0xFF;
    D_80285EB0 = temp_t6;
    var_v1 = &D_80283970;
    do {
        var_v1 += 4;
        M2C_FIELD(var_v1, s32 *, -4) = 0;
    } while ((u32) var_v1 < (u32) &D_802839B0);
    var_v1_2 = &D_80283970;
    D_802839AC = 1;
    spC = 0xFF;
    spD = 1;
    spE = 3;
    spF = temp_t6;
    sp10 = 0xFF;
    sp11 = 0xFF;
    sp12 = 0xFF;
    sp13 = 0xFF;
    var_v0 = 0;
    if ((s32) D_80285EB1 > 0) {
        do {
            var_v0 += 1;
            *(s8 *)var_v1_2 = M2C_UNALIGNED32(M2C_FIELD(&spC, s32 *, 0));
            var_v1_2 += 8;
            M2C_FIELD(var_v1_2, s32 *, -4) = M2C_UNALIGNED32(M2C_FIELD(&spC, s32 *, 4));
        } while (var_v0 < (s32) D_80285EB1);
    }
    *(s8 *)var_v1_2 = 0xFE;
}
