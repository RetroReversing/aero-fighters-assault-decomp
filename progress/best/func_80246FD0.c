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

s32 func_80247060();                                /* extern */
s32 osVirtualToPhysical(s32);                       /* extern */
extern s32 D_A4040000;
extern s32 D_A4040004;
extern s32 D_A4040008;
extern s32 D_A404000C;

s32 func_80246FD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_80247060() != 0) {
        return -1;
    }
    *(volatile s32 *)0xA4040000 = arg1;
    *(volatile s32 *)0xA4040004 = osVirtualToPhysical(arg2);
    if (arg0 == 0) {
        *(volatile s32 *)0xA404000C = arg3 - 1;
    } else {
        D_A4040008 = arg3 - 1;
    }
    return 0;
}
