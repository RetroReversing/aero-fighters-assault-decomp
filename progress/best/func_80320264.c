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

void func_80320264(void *arg0, void *arg1, void *arg2) {
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fv0 = M2C_FIELD(arg1, f32 *, 0);
    temp_fv1 = M2C_FIELD(arg1, f32 *, 4);
    temp_fa0 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_fv0 * M2C_FIELD(arg2, f32 *, 0)) + (temp_fv1 * M2C_FIELD(arg2, f32 *, 0x10)) + (temp_fa0 * M2C_FIELD(arg2, f32 *, 0x20)));
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_fv0 * M2C_FIELD(arg2, f32 *, 4)) + (temp_fv1 * M2C_FIELD(arg2, f32 *, 0x14)) + (temp_fa0 * M2C_FIELD(arg2, f32 *, 0x24)));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_fv0 * M2C_FIELD(arg2, f32 *, 8)) + (temp_fv1 * M2C_FIELD(arg2, f32 *, 0x18)) + (temp_fa0 * M2C_FIELD(arg2, f32 *, 0x28)));
}
