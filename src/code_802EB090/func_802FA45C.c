#include "common.h"

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
s32 func_802F9470();

void func_802FA45C(s32 *arg0) {
    char *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s0 = arg0;
    var_s1 = 0;
    do {
        temp_a0 = *(s32 *)var_s0;
        if ((temp_a0 != 0) && (func_802F91C4(temp_a0) != 0)) {
            func_802F9470(*(s32 *)var_s0);
        }
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s1 != 8);
}
