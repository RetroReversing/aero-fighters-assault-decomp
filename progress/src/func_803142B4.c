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

s32 func_802C49A0();

void func_803142B4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7) {
    func_802C49A0(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x194) = arg4;
    M2C_FIELD(arg0, s16 *, 0x198) = arg5;
    M2C_FIELD(arg0, s16 *, 0x19A) = arg6;
    M2C_FIELD(arg0, s16 *, 0x19C) = arg7;
}
