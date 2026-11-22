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

void *func_802C676C(M2C_UNK);                       /* extern */
extern M2C_UNK D_80347920;

void *func_80320BB8(void *arg0) {
    void *temp_v0;
    void *var_a0;

    var_a0 = arg0;
    if ((var_a0 != NULL) || (temp_v0 = func_802C676C(0x80), var_a0 = temp_v0, (temp_v0 != NULL))) {
        M2C_FIELD(var_a0, M2C_UNK **, 0x7C) = &D_80347920;
        M2C_FIELD(var_a0, s8 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s32 *, 0x60) = -1;
    }
    return var_a0;
}
