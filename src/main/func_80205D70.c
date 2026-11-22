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

s32 func_80222AA8();
s32 func_80231C58();
extern s32 D_8025BEA0;
extern char D_80280BEE[];

void func_80205D70(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v1;
    void *sp24;

    temp_v1 = (arg0 * 0x2D8) + D_8025BEA0;
    sp24 = temp_v1;
    if (func_80231C58(arg0, "CHAN_NCHANS", D_80280BEE) == 0) {
        M2C_FIELD(temp_v1, s16 *, 0x2C6) = (s16) arg2;
        M2C_FIELD(temp_v1, s16 *, 0x2C4) = (s16) arg1;
        M2C_FIELD(temp_v1, s16 *, 0x2C8) = (s16) arg3;
        M2C_FIELD(temp_v1, s16 *, 0x2CA) = (s16) arg4;
        func_80222AA8(arg0, arg1, arg2, arg3, arg4);
    }
}
