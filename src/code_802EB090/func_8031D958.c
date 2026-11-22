#include "common.h"

/* identical to func_8031426C (matched), with its names changed by decompdecomp */
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

s32 func_8031C494();
s32 func_802C679C();

void func_8031D958(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        func_8031C494(arg0, 0);
        if (arg1 & 1) {
            func_802C679C(arg0);
        }
    }
}
