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

M2C_UNK func_8021F35C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8021F4E4();                            /* extern */
M2C_UNK func_8021FCD0();                            /* extern */
M2C_UNK func_8022149C(M2C_UNK *);                   /* extern */
M2C_UNK func_80221B2C(M2C_UNK *);                   /* extern */
M2C_UNK func_802230E4();                            /* extern */
M2C_UNK func_8022331C();                            /* extern */
M2C_UNK func_8022337C();                            /* extern */
M2C_UNK func_802233EC(M2C_UNK);                     /* extern */
M2C_UNK math_mtx4Identity(M2C_UNK *);                   /* extern */
M2C_UNK func_8022A848(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */

void func_802EDFD0(s32 arg0) {
int *__repair_home0 = &arg0;

    M2C_UNK sp30;

    func_8022331C();
    math_mtx4Identity(&sp30);
    func_8022A848(&sp30, 0x41800000, 0x43980000, 0x41800000, 224.0f);
    func_80221B2C(&sp30);
    math_mtx4Identity(&sp30);
    func_8022149C(&sp30);
    func_802233EC(0x20000);
    func_8021F4E4();
    func_8021F35C(0x19, 0x24, 0, 0, 0, 0xFF, 0xCA, 7, 0xFF);
    func_8021F35C(0x127, 0x24, 0, 0x20, 0, 0xFF, 0xCA, 7, 0xFF);
    func_8021F35C(0x127, 0x33, 0, 0x20, 0x1E0, 0xFF, 0xCA, 7, 0xFF);
    func_8021F35C(0x19, 0x33, 0, 0, 0x1E0, 0xFF, 0xCA, 7, 0xFF);
    func_8021FCD0();
    func_802230E4();
    func_8022337C();
    func_802233EC(0x800000);
}
