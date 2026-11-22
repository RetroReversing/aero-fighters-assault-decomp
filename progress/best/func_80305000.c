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

M2C_UNK func_8022A0D0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802C49A0(void *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_802C578C(void *, M2C_UNK);             /* extern */
M2C_UNK func_802C5798(void *, M2C_UNK);             /* extern */
M2C_UNK func_802C57A4(void *, M2C_UNK);             /* extern */
M2C_UNK func_802C57B0(void *, M2C_UNK);             /* extern */
f32 func_803096D8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK math_mtx4Identity(M2C_UNK *);               /* extern */

void func_80305000(void *arg0) {
    char sp28[0x40];
    void *sp24;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;

    math_mtx4Identity(sp28);
    func_8022A0D0(sp28, 0x41B5999A, 0x41873333, 0x4134CCCD);
    temp_a0 = (unsigned char *) arg0 + 0x448;
    sp24 = temp_a0;
    func_802C49A0(temp_a0, 0x2E, sp28, 1);
    func_802C57B0(sp24, 0x44960000);
    func_802C578C(sp24, 0x43340000);
    func_802C5798(sp24, 0x42B40000);
    func_802C57A4(sp24, 0);
    M2C_FIELD(arg0, f32 *, 0xC2C) = func_803096D8(0x42700000, 1, 1);
    math_mtx4Identity(sp28);
    func_8022A0D0(sp28, 0xC1B5999A, 0x41873333, 0x4134CCCD);
    temp_a0_2 = (unsigned char *) arg0 + 0x5DC;
    sp24 = temp_a0_2;
    func_802C49A0(temp_a0_2, 0x2E, sp28, 1);
    func_802C57B0(sp24, 0x44960000);
    func_802C578C(sp24, 0x43340000);
    func_802C5798(sp24, 0x42B40000);
    func_802C57A4(sp24, 0);
    M2C_FIELD(arg0, f32 *, 0xC30) = func_803096D8(0x42700000, 1, 1);
    math_mtx4Identity(sp28);
    func_8022A0D0(sp28, 0x435B4CCD, 0xC26E0000, 0x40733333);
    temp_a0_3 = (unsigned char *) arg0 + 0x770;
    sp24 = temp_a0_3;
    func_802C49A0(temp_a0_3, 0x33, sp28, 1);
    func_802C57B0(sp24, 0x44160000);
    func_802C578C(sp24, 0x43340000);
    func_802C5798(sp24, 0x42B40000);
    func_802C57A4(sp24, 0);
    M2C_FIELD(arg0, f32 *, 0xC34) = func_803096D8(0x42800000, 1, 1);
    math_mtx4Identity(sp28);
    func_8022A0D0(sp28, 0xC35B4CCD, 0xC26E0000, 0x40733333);
    temp_a0_4 = (unsigned char *) arg0 + 0x904;
    sp24 = temp_a0_4;
    func_802C49A0(temp_a0_4, 0x33, sp28, 1);
    func_802C57B0(sp24, 0x44160000);
    func_802C578C(sp24, 0x43340000);
    func_802C5798(sp24, 0x42B40000);
    func_802C57A4(sp24, 0);
    M2C_FIELD(arg0, f32 *, 0xC38) = func_803096D8(0x42800000, 1, 1);
    math_mtx4Identity(sp28);
    func_8022A0D0(sp28, 0, 0, 0xC1400000);
    temp_a0_5 = (unsigned char *) arg0 + 0xA98;
    sp24 = temp_a0_5;
    func_802C49A0(temp_a0_5, 0x30, sp28, 1);
    func_802C57B0(sp24, 0x447A0000);
    func_802C578C(sp24, 0x43340000);
    func_802C5798(sp24, 0);
    func_802C57A4(sp24, 0xC2B40000);
}
