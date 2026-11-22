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

s32 func_80231A24();
extern char D_80252AD0[];
extern char D_8025C2C8[];
extern char D_8025C2E0[];

void *func_80207040(s32 arg0) {
    if (arg0 >= 0x64) {
        return (arg0 * 8) - 0x320 + D_8025C2E0;
    }
    if (arg0 >= 3) {
        func_80231A24(D_80252AD0, arg0);
        return NULL;
    }
    return (arg0 * 8) + D_8025C2C8;
}
