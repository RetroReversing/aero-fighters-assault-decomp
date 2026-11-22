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

M2C_UNK func_802C68B0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_80349440;
extern M2C_UNK func_8028A440;

void func_8031E6B0(void) {
    func_802C68B0(&D_80349440, 0x14, 0xC, &func_8028A440);
}
