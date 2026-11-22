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

f64 func_80207130(M2C_UNK);                         /* extern */
M2C_UNK func_8022C0A8();                            /* extern */
M2C_UNK func_8022C2A8(s32);                         /* extern */

void func_802E9B5C(void *arg0) {
    s32 var_s1;
    void *var_s0;

    var_s0 = arg0;
    var_s1 = 0;
    do {
        if ((M2C_FIELD(var_s0, u8 *, 0) != 0) && ((f64) M2C_FIELD(var_s0, f32 *, 8) < (func_80207130(0) - (f64) M2C_FIELD(var_s0, f32 *, 4)))) {
            M2C_FIELD(var_s0, u8 *, 0) = 0U;
            M2C_FIELD(var_s0, f32 *, 8) = 0.0f;
            func_8022C2A8(var_s1);
        }
        var_s1 += 1;
        var_s0 = (unsigned char *) var_s0 + 0xC;
    } while (var_s1 != 4);
    func_8022C0A8();
}
