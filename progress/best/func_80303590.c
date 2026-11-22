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

void *func_802C676C();

void *func_80303590(void *arg0) {
    void *temp_v0;
    void *var_a0;

    var_a0 = arg0;
    if ((var_a0 != NULL) || (temp_v0 = func_802C676C(0x18), var_a0 = temp_v0, (temp_v0 != NULL))) {
        M2C_FIELD(var_a0, s32 *, 0) = 0x1E;
        M2C_FIELD(var_a0, u8 *, 4) = 0xFF;
        M2C_FIELD(var_a0, s8 *, 0x10) = 0;
        M2C_FIELD(var_a0, s32 *, 0x14) = 0;
        M2C_FIELD(var_a0, f32 *, 0xC) = 0.0f;
    }
    return var_a0;
}
