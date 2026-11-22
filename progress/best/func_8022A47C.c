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

void func_8022A47C(s32 *arg0, void *arg1) {
    s32 *var_v0;
    s32 sp18;

    var_v0 = arg0;
    if (arg1 == arg0) {
        var_v0 = &sp18;
    }
    M2C_FIELD(var_v0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(var_v0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(var_v0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(var_v0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(var_v0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(var_v0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(var_v0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(var_v0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(var_v0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    if (arg1 == var_v0) {
        func_80228DE0(arg0, &sp18);
    }
}
