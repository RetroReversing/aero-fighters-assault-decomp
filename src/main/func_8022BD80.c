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

s32 func_802235C8();
s32 func_802245B8();
s32 func_8022B088();
s32 func_8022BC40();
s32 func_80231A24();
s32 func_80233D90();
s32 func_80234870();
extern s32 D_80000318;
extern s32 D_8024E86C;
extern char D_802541AC[];
extern char D_802541E8[];
extern s32 D_802744B4;
extern s32 D_802751E0;
extern u16 D_802751E8;
extern s32 D_80275A2C;
extern s32 D_80275E74;
extern s32 D_80275E78;
extern s32 D_80275F7C;
extern s32 D_80275F80;
extern s32 D_80275F84;
extern s32 D_80275F88;

void func_8022BD80(void) {
    if (D_8024E86C != 0) {
        func_80231A24(D_802541AC);
    }
    func_802235C8();
    func_80233D90();
    D_80275F7C = D_80275F84;
    D_80275F80 = D_80000318 + 0x80000000;
    D_80275E74 = 0;
    D_80275E78 = 0;
    D_802751E0 = 0;
    D_80275F88 = 0;
    D_80275A2C = 0;
    D_802744B4 = 0;
    func_8022B088();
    func_8022BC40();
    func_80234870();
    func_802245B8();
    if (D_802751E8 != 0x14) {
        func_80231A24(D_802541E8, D_802751E8, 0x14);
    }
}
