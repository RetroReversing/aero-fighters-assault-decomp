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

M2C_UNK func_8021ACB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_8021B4B0(s32, M2C_UNK, void *);        /* extern */
s32 func_8021BA90();                                /* extern */
s32 func_80223E1C(M2C_UNK);                         /* extern */
M2C_UNK func_80224CA8(M2C_UNK);                     /* extern */
M2C_UNK math_mtx4Identity(void *);                  /* extern */

void func_8030D710(void *arg0) {
    void *sp20;
    s32 temp_v0;
    void *temp_a2;

    func_80224CA8(5);
    temp_v0 = func_8021BA90();
    M2C_FIELD(arg0, s32 *, 0x70) = temp_v0;
    func_8021ACB0(temp_v0, 0x52);
    temp_a2 = (unsigned char *) arg0 + 0x74;
    sp20 = temp_a2;
    math_mtx4Identity(temp_a2);
    M2C_FIELD(arg0, f32 *, 0xA4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xA8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xAC) = 500.0f;
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 0x70), 0, temp_a2);
    if (func_80223E1C(0) == 0) {
        func_80224CA8(9);
    }
}
