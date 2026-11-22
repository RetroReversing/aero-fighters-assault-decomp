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

s32 func_8021B240();

void func_8029C4F4(s32 arg0, s32 arg1) {
    if (arg1 == 0x28) {
        func_8021B240(arg0, 3, 9, 0);
        func_8021B240(arg0, 3, 0xA, 0);
        func_8021B240(arg0, 3, 0xB, 0);
        func_8021B240(arg0, 3, 0xC, 0);
        func_8021B240(arg0, 3, 0xD, 0);
        func_8021B240(arg0, 3, 0xE, 0);
        func_8021B240(arg0, 3, 0xF, 0);
        func_8021B240(arg0, 3, 0x10, 0);
        func_8021B240(arg0, 3, 1, 0);
        func_8021B240(arg0, 3, 2, 0);
        func_8021B240(arg0, 3, 3, 0);
        func_8021B240(arg0, 3, 4, 0);
        func_8021B240(arg0, 3, 5, 0);
        func_8021B240(arg0, 3, 6, 0);
        func_8021B240(arg0, 3, 7, 0);
        func_8021B240(arg0, 3, 8, 0);
        func_8021B240(arg0, 3, 0x13, 0);
        func_8021B240(arg0, 3, 0x16, 0);
        func_8021B240(arg0, 3, 0x1A, 0);
        func_8021B240(arg0, 3, 0x1E, 0);
        func_8021B240(arg0, 3, 0x17, 0);
        func_8021B240(arg0, 3, 0x1B, 0);
        func_8021B240(arg0, 3, 0x1F, 0);
        return;
    }
    if (arg1 == 0x29) {
        func_8021B240(arg0, 3, 9, 0);
        func_8021B240(arg0, 3, 0xA, 0);
        func_8021B240(arg0, 3, 0xB, 0);
        func_8021B240(arg0, 3, 0xC, 0);
        func_8021B240(arg0, 3, 0xD, 0);
        func_8021B240(arg0, 3, 0xE, 0);
        func_8021B240(arg0, 3, 0xF, 0);
        func_8021B240(arg0, 3, 0x10, 0);
        func_8021B240(arg0, 3, 1, 0);
        func_8021B240(arg0, 3, 2, 0);
        func_8021B240(arg0, 3, 3, 0);
        func_8021B240(arg0, 3, 4, 0);
        func_8021B240(arg0, 3, 5, 0);
        func_8021B240(arg0, 3, 6, 0);
        func_8021B240(arg0, 3, 7, 0);
        func_8021B240(arg0, 3, 8, 0);
        func_8021B240(arg0, 3, 0x15, 0);
        func_8021B240(arg0, 3, 0x18, 0);
        func_8021B240(arg0, 3, 0x1C, 0);
        func_8021B240(arg0, 3, 0x19, 0);
        func_8021B240(arg0, 3, 0x1D, 0);
    }
}
