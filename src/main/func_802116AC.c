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

s32 func_80228DE0();
s32 func_80231A24();
extern void *D_8024E710;
extern char D_80252CAC[];
extern char D_80252CDC[];

void func_802116AC(s32 arg0, s32 arg1, void *arg2) {
    void *temp_v0;
    void *sp1C;

    temp_v0 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (arg0 * 4));
    if (temp_v0 == NULL) {
        func_80231A24(D_80252CAC, arg0);
        return;
    }
    if (arg1 >= (s32) M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), u8 *, 4)) {
        func_80231A24(D_80252CDC, arg1, arg0);
        return;
    }
    sp1C = temp_v0;
    func_80228DE0(arg2, M2C_FIELD(temp_v0, s32 *, 0x14) + (arg1 << 6));
    M2C_FIELD(arg2, f32 *, 0x30) = (f32) (M2C_FIELD(arg2, f32 *, 0x30) / M2C_FIELD(temp_v0, f32 *, 0x20));
    M2C_FIELD(arg2, f32 *, 0x34) = (f32) (M2C_FIELD(arg2, f32 *, 0x34) / M2C_FIELD(temp_v0, f32 *, 0x20));
    M2C_FIELD(arg2, f32 *, 0x38) = (f32) (M2C_FIELD(arg2, f32 *, 0x38) / M2C_FIELD(temp_v0, f32 *, 0x20));
}
