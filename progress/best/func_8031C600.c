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

void func_8031C600(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = 4;
    M2C_FIELD(arg0, u16 *, 0xA4) = 1;
    M2C_FIELD(arg0, s16 *, 0xA6) = 0xC;
    M2C_FIELD(arg0, s16 *, 0x9C) = 0x18D;
    M2C_FIELD(arg0, s16 *, 0x98) = 0x20;
    M2C_FIELD(arg0, s16 *, 0x9A) = 0x20;
    M2C_FIELD(arg0, s8 *, 0x74) = 1;
    M2C_FIELD(arg0, f32 *, 0x44) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x48) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x4C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0xA0) = 30.0f;
}
