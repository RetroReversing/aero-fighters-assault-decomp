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

extern s32 D_80283948;
extern s32 D_8028394C;

void func_80234800(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_v0 != 0) {
        *(s32 *)(D_8028394C + (D_80283948 * 4)) = temp_v0;
        D_80283948 += 1;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0_2 != 0) {
        *(s32 *)(D_8028394C + (D_80283948 * 4)) = temp_v0_2;
        D_80283948 += 1;
    }
}
