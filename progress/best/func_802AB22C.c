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

void func_802AB22C(void *arg0, s32 arg1) {
    s32 var_v1;
    void *var_a2;

    var_a2 = arg0;
    var_v1 = 0;
loop_1:
    var_v1 += 4;
    if (M2C_FIELD(var_a2, s32 *, 0x7050) == 0) {
        M2C_FIELD(var_a2, s32 *, 0x7050) = arg1;
        M2C_FIELD(arg0, u8 *, 0x70F0) = (u8) (M2C_FIELD(arg0, u8 *, 0x70F0) + 1);
        return;
    }
    var_a2 = (unsigned char *) var_a2 + 4;
    if (var_v1 == 0xA0) {
        return;
    }
    goto loop_1;
}
