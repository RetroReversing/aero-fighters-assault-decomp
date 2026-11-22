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

s32 func_803021B8(s32, void *, s32, s32, s32);      /* extern */
M2C_UNK func_803025AC(s32, void *, s32);            /* extern */
M2C_UNK func_803025E4(s32, void *, s32);            /* extern */

s32 func_80303130(void *arg0) {
    void *sp2C;
    void *temp_a1;

    temp_a1 = (unsigned char *) arg0 + 0x18;
    sp2C = temp_a1;
    if (func_803021B8(M2C_FIELD(arg0, s32 *, 0x14), temp_a1, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10)) != 0) {
        func_803025AC(M2C_FIELD(arg0, s32 *, 0x14), temp_a1, M2C_FIELD(arg0, s32 *, 8));
        func_803025E4(M2C_FIELD(arg0, s32 *, 0x14), sp2C, M2C_FIELD(arg0, s32 *, 4));
        return 1;
    }
    return 0;
}
