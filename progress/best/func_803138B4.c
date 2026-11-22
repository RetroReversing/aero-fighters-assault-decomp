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

s32 func_803138B4(void *arg0, s32 arg1) {
    s32 var_v1;
    void *var_a2;

    if (arg1 == M2C_FIELD(arg0, s16 *, 0x402)) {
        return 1;
    }
    var_a2 = (unsigned char *) arg0 + 4;
    var_v1 = 4;
    if (arg1 == M2C_FIELD(arg0, s16 *, 0x404)) {
        return 1;
    }
loop_4:
    var_v1 += 8;
    if (arg1 == M2C_FIELD(var_a2, s16 *, 0x402)) {
        return 1;
    }
    if (arg1 == M2C_FIELD(var_a2, s16 *, 0x404)) {
        return 1;
    }
    if (arg1 == M2C_FIELD(var_a2, s16 *, 0x406)) {
        return 1;
    }
    if (arg1 == M2C_FIELD(var_a2, s16 *, 0x408)) {
        return 1;
    }
    var_a2 = (unsigned char *) var_a2 + 8;
    if (var_v1 == 0x64) {
        return 0;
    }
    goto loop_4;
}
