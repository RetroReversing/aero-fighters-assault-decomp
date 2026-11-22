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
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_802C676C();
s32 func_8031CC18();
s32 func_8031CEA0();

s32 func_803202F0(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = arg0;
    if ((arg0 != 0) || (temp_v0 = func_802C676C(0x310), var_a1 = temp_v0, (temp_v0 != 0))) {
        arg0 = var_a1;
        func_8031CC18(var_a1);
        func_8031CEA0(arg0 + 0xF0, arg0);
        var_a1 = arg0;
    }
    return var_a1;
}
