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

s32 func_80231A24();
extern char D_8032A8D0[];
extern char D_803482A0[];

void func_80304A98(s32 arg0) {
    void *temp_v0;

    temp_v0 = (arg0 * 0x354) + D_803482A0;
    if (M2C_FIELD(temp_v0, u8 *, 0x34C) == 0) {
        func_80231A24(D_8032A8D0, arg0);
        return;
    }
    M2C_FIELD(temp_v0, u8 *, 0x34C) = 0U;
}
