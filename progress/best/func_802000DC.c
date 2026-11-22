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
s32 math_mtx4Identity();
extern char D_80256D70[];

void func_802000DC(u16 arg0) {
    void *sp18;
    s32 sp20;
    void *temp_a0;

    math_mtx4Identity(&sp20);
    temp_a0 = (arg0 * 0x50) + D_80256D70;
    sp18 = temp_a0;
    func_80228DE0(temp_a0, &sp20);
    M2C_FIELD(sp18, s32 *, 0x4C) = 2;
    M2C_FIELD(sp18, f32 *, 0x40) = 1.0f;
    M2C_FIELD(sp18, f32 *, 0x44) = 1.0f;
}
