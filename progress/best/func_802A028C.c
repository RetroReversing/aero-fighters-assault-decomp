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

M2C_UNK math_mtx4Identity(M2C_UNK *);                   /* extern */
M2C_UNK func_8022A0D0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802C49A0(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_802C578C(s32, M2C_UNK);                /* extern */
M2C_UNK func_802C5798(s32, M2C_UNK);                /* extern */
M2C_UNK func_802C57A4(s32, M2C_UNK);                /* extern */
M2C_UNK func_802C57B0(s32, M2C_UNK);                /* extern */
M2C_UNK func_802C57CC(s32, M2C_UNK);                /* extern */
M2C_UNK func_802D0154(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */

void func_802A028C(s32 arg0) {
int *__repair_home0 = &arg0;

    M2C_UNK sp28;
    s32 temp_s0;
    s32 temp_s0_2;

    math_mtx4Identity(&sp28);
    func_8022A0D0(&sp28, 0, 0x42480000, 0x41200000);
    temp_s0 = (*__repair_home0) + 0x2F0;
    func_802C49A0(temp_s0, 0x29, &sp28, 5);
    func_802C57B0(temp_s0, 0x44160000);
    func_802C578C(temp_s0, 0x432A0000);
    func_802C5798(temp_s0, 0x42A00000);
    func_802C57A4(temp_s0, 0x40A00000);
    math_mtx4Identity(&sp28);
    func_8022A0D0(&sp28, 0, 0xC2700000, 0x41700000);
    func_802D0154(&sp28, 0x40490FE0, 0x7A);
    temp_s0_2 = (*__repair_home0) + 0x484;
    func_802C49A0(temp_s0_2, 0x30, &sp28, 5);
    func_802C57CC(temp_s0_2, 0x42200000);
}
