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
s32 func_8022FFC8();
extern char D_80327678[];

void func_802CB730(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (func_8022FFC8(arg1, D_80327678) != 0) {
        if (arg5 == *(s32 *)(M2C_FIELD(arg0, s32 *, 0x28) + arg4)) {
            func_8021E708(0, 0xFF, 0, 0xFF);
        } else {
            func_8021E708(0, 0x80, 0, 0xFF);
        }
        func_8021E87C(arg2, arg3, arg1);
    }
}
