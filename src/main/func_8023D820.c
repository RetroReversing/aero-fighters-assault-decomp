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

s32 func_80246C70();
s32 osVirtualToPhysical();
extern char D_802839B0[];
extern s32 D_802839C0;
extern s32 D_802839C8;
extern s32 D_802839D0;
extern s32 D_802839D8;
extern s32 D_802839DC;
extern s32 D_802839E0;
extern s32 D_802839E8;

s32 *func_8023D820(s32 arg0) {
    func_80246C70(arg0, D_802839B0, 0x40);
    if (D_802839C0 != 0) {
        D_802839C0 = osVirtualToPhysical(D_802839C0);
    }
    if (D_802839C8 != 0) {
        D_802839C8 = osVirtualToPhysical(D_802839C8);
    }
    if (D_802839D0 != 0) {
        D_802839D0 = osVirtualToPhysical(D_802839D0);
    }
    if (D_802839D8 != 0) {
        D_802839D8 = osVirtualToPhysical(D_802839D8);
    }
    if (D_802839DC != 0) {
        D_802839DC = osVirtualToPhysical(D_802839DC);
    }
    if (D_802839E0 != 0) {
        D_802839E0 = osVirtualToPhysical(D_802839E0);
    }
    if (D_802839E8 != 0) {
        D_802839E8 = osVirtualToPhysical(D_802839E8);
    }
    return D_802839B0;
}
