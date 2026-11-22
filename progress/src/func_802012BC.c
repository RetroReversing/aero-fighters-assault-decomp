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

s32 func_80228DE0();
s32 math_mtx4Identity();

void func_802012BC(void *arg0) {
    char sp18[0x40];

    math_mtx4Identity(sp18);
    M2C_FIELD(arg0, s8 *, 0xAD) = 0x11;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0x7FFF;
    M2C_FIELD(arg0, s8 *, 0xAE) = 0x40;
    M2C_FIELD(arg0, s8 *, 0xAF) = 0;
    M2C_FIELD(arg0, s8 *, 0xB0) = 0;
    M2C_FIELD(arg0, s8 *, 0xAC) = 0;
    M2C_FIELD(arg0, f32 *, 0x9C) = 1.0f;
    func_80228DE0(arg0, sp18);
    M2C_FIELD(arg0, u8 *, 0x8C) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, f32 *, 0x40) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x44) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x48) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x4C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x78) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x7C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x80) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x84) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x90) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x70) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x74) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x94) = 1000.0f;
}
