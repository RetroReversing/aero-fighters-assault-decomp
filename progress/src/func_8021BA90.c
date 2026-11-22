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

extern void *D_8025C3E0;
extern u16 D_80280BE6;

s32 func_8021BA90(void) {
    s32 var_v1;
    void *var_a0;

    var_v1 = 0;
    if ((s32) D_80280BE6 > 0) {
        var_a0 = D_8025C3E0;
loop_2:
        if (M2C_FIELD(var_a0, u8 *, 9) == 0) {
            M2C_FIELD(var_a0, u8 *, 9) = 1U;
            return var_v1;
        }
        var_v1 += 1;
        var_a0 = (unsigned char *) var_a0 + 0x24;
        if (var_v1 >= (s32) D_80280BE6) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            goto __shared_return_65535;
        }
        goto loop_2;
    }
    __shared_return_65535:
    return 0xFFFF;
}
