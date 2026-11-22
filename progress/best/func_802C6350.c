/* adapted from similar verified C in func_8006A6F0 in 1080 SNOWBOARDING (matched), with its names changed by decompdecomp */
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

s32 func_80000000();
extern char D_218C0[];
extern char D_218CC[];

void func_802C6350(s32 *arg0, s32 *arg1) {
    char sp18[0x40];

    func_80000000(sp18, arg0);
    func_80000000(sp18, D_218C0);
    func_80000000(sp18, arg1);
    func_80000000(sp18, D_218CC);
    func_80000000(sp18);
}
