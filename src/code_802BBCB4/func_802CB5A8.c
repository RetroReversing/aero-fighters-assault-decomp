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

s32 func_8021E708();
s32 func_8021E87C();
s32 func_802CB860();
s32 func_802CB914();
extern s32 D_80327640;
extern char D_8032764C[];

void func_802CB5A8(void *arg0) {
    char *var_s2;
    s32 var_s0;
    s32 var_s1;

    func_802CB914(arg0, D_8032764C);
    func_802CB860(arg0, 0x62);
    var_s1 = 0x9D;
    var_s2 = &D_80327640;
    var_s0 = 0;
    do {
        if (var_s0 == M2C_FIELD(arg0, u8 *, 0x1B)) {
            func_8021E708(0, 0xFF, 0, 0xFF);
        } else {
            func_8021E708(0, 0x80, 0, 0xFF);
        }
        func_8021E87C(0x52, var_s1, *(s32 *)var_s2);
        var_s0 += 1;
        var_s1 -= 0x12;
        var_s2 += 4;
    } while (var_s0 != 3);
}
