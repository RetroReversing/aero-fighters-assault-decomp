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

extern char D_80275130[];

s32 func_80223FC4(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = (arg0 * 0x1C) + D_80275130;
    if ((M2C_FIELD(temp_v0, s32 *, 0x10) & arg1) && !(M2C_FIELD(temp_v0, s32 *, 0x14) & arg1)) {
        return 1;
    }
    return 0;
}
