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
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_8021BAE0();
s32 func_80318BFC();

void func_802D9B9C(void *arg0, u8 arg1) {
    func_80318BFC(arg0, arg0);
    if (arg1 == 0) {
        func_8021BAE0(M2C_FIELD(arg0, s32 *, 4));
        func_8021BAE0(M2C_FIELD(arg0, s32 *, 0x280));
        M2C_FIELD(arg0, s32 *, 4) = 0xFFFF;
        M2C_FIELD(arg0, s32 *, 0x280) = 0xFFFF;
    }
}
