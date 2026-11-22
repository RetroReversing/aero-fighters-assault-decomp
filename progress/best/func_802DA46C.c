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

f32 func_8022ADA8(f32, f32, u8 *);                  /* extern */

s32 func_802DA46C(void *arg0, f32 arg1, f32 arg2) {
int __repair_literal;

    f32 sp54[2];
    f32 temp_fs0;
    f32 temp_fs1;
    s32 temp_t8;
    s32 var_s0;
    u8 *temp_v0;
    u8 *var_a0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, u8 **, 0x70);
    if (temp_v0 == NULL) {
        __shared_return_0:
    return 0;
    }
    var_s0 = 0;
    temp_fs1 = M2C_FIELD(arg0, f32 *, 0) * 0.5f;
    var_a0 = temp_v0;
__repair_literal = 0;

    if ((s32) *temp_v0 > __repair_literal) {
loop_4:
        temp_v0_2 = var_a0 + (var_s0 * 0x90);
        temp_v0_3 = (unsigned char *) temp_v0_2 + 0x14;
        if (arg0 != temp_v0_3) {
            sp54[1] = M2C_FIELD(temp_v0_3, f32 *, 0x5C);
            sp54[0] = M2C_FIELD(temp_v0_3, f32 *, 0x60);
            temp_fs0 = M2C_FIELD(temp_v0_2, f32 *, 0x14) * 0.5f;
            if (func_8022ADA8(sp54[1] - arg1, sp54[0] - arg2, var_a0) < (temp_fs1 + temp_fs0)) {
                return 1;
            }
        }
        var_a0 = M2C_FIELD(arg0, u8 **, 0x70);
        temp_t8 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t8;
        if (temp_t8 >= (s32) *var_a0) {
            goto __shared_return_0;
        }
        goto loop_4;
    }
    goto __shared_return_0;
}
