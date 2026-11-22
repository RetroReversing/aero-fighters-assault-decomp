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

extern void *D_8024E710;

u16 func_802331E0(s32 arg0) {
    void *temp_v1;

    if (arg0 == 0xFFF) {
        return 0xFFFU;
    }
    temp_v1 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x2C) + (arg0 * 4));
    if (temp_v1 != NULL) {
        return M2C_FIELD(temp_v1, u16 *, 0x20);
    }
    return 0xFFFU;
}
