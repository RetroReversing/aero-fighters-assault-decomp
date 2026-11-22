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

void func_8031CBD0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = 8;
    M2C_FIELD(arg0, s16 *, 0xA6) = 1;
    M2C_FIELD(arg0, s16 *, 0x9C) = 0x1E9;
    M2C_FIELD(arg0, s16 *, 0x98) = 0x40;
    M2C_FIELD(arg0, s16 *, 0x9A) = 0x40;
    M2C_FIELD(arg0, s16 *, 0xA4) = 0;
    M2C_FIELD(arg0, f32 *, 0x44) = 3.0f;
    M2C_FIELD(arg0, f32 *, 0x48) = 3.0f;
    M2C_FIELD(arg0, f32 *, 0x4C) = 3.0f;
    M2C_FIELD(arg0, f32 *, 0xA0) = 0.0f;
}
