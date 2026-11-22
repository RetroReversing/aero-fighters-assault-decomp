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

s32 func_8022B460();
s32 func_8022B780();
s32 func_80231CC4();
s32 func_802C9B90();
extern char D_118690[];
extern char D_57D20[];
extern s8 D_80280C0A;
extern char D_803233C0[];
extern char D_80349530[];
extern s32 func_80287430;

void func_80231630(s32 arg0) {
    func_8022B780(D_803233C0, 0, D_80349530 - D_803233C0);
    func_8022B460(&func_80287430, D_57D20, D_118690 - D_57D20);
    D_80280C0A = 0;
    func_80231CC4();
    func_802C9B90(arg0);
}
