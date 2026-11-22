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

M2C_UNK func_8021B4B0(s32, M2C_UNK, void *);        /* extern */
f32 func_80234B48(f32);                             /* extern */
M2C_UNK func_802D0154(void *, f32, M2C_UNK); /* extern */
M2C_UNK func_802DA378();                            /* extern */

void func_802D9EB8(void *arg0) {
    void *sp20;
    f32 temp_ft3;
    f32 temp_fv0;
    void *temp_a3;

    if (M2C_FIELD(arg0, f32 *, 0x18) <= 0.0f) {
        func_802DA378();
        M2C_FIELD(arg0, s8 *, 0x24) = 2;
        return;
    }
    temp_a3 = (unsigned char *) arg0 + 0x2C;
    temp_ft3 = func_80234B48(M2C_FIELD(arg0, f32 *, 0xC)) * M2C_FIELD(arg0, f32 *, 0x7C);
    sp20 = temp_a3;
    func_802D0154(temp_a3, temp_ft3, 0x7A);
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 0x28), 0, sp20);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x7C);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) + temp_fv0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) - temp_fv0);
}
