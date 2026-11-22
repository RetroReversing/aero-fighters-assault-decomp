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

s32 func_802F91C4();

s32 func_802FA208(s32 *arg0) {
short __repair_constant = 4;

    char *var_s1;
    s32 temp_a0;
    s32 var_s0;
    s32 var_s3;

    var_s3 = 0;
    var_s0 = 0;
    var_s1 = arg0;
loop_1:
    temp_a0 = *(s32 *)var_s1;
    if (temp_a0 != 0) {/*__repair_loop_weight*/do {
        var_s0 += __repair_constant;} while (0);
        if (func_802F91C4(temp_a0) != 0) {
            var_s3 = 1;
        }
        var_s1 += __repair_constant;
        if (var_s0 != 8) {
            goto loop_1;
        }
    }
    return var_s3;
}
