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

s32 func_8021B4B0();
s32 func_80228DE0();
s32 func_8022A0D0();

void func_802979B0(void *arg0, s32 arg1) {
    s32 spD8;
    s32 sp98;
    s32 sp58;
    s32 sp18;

    func_80228DE0(&spD8);
    func_80228DE0(&sp98, arg1);
    func_80228DE0(&sp58, arg1);
    func_80228DE0(&sp18, arg1);
    func_8022A0D0(&spD8, 0xC0A00000, 0, 0xC0A00000);
    func_8022A0D0(&sp98, 0x40A00000, 0, 0xC0A00000);
    func_8022A0D0(&sp58, 0xC0A00000, 0, 0x40A00000);
    func_8022A0D0(&sp18, 0x40A00000, 0);
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 0), 0, &spD8);
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 4), 0, &sp98);
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 8), 0, &sp58);
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 0xC), 0, &sp18);
}
