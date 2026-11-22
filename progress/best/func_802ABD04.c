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

M2C_UNK func_8021E708(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8021E87C(s32, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_8021EC9C();                            /* extern */
M2C_UNK func_8021F35C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8021F4E4();                            /* extern */
M2C_UNK func_8021FCD0();                            /* extern */
M2C_UNK func_8022149C(M2C_UNK *);                   /* extern */
M2C_UNK func_80221B2C(M2C_UNK *);                   /* extern */
M2C_UNK func_802230E4();                            /* extern */
M2C_UNK func_802233EC(M2C_UNK);                     /* extern */
M2C_UNK math_mtx4Identity(M2C_UNK *);                   /* extern */
M2C_UNK func_8022A848(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */
s32 func_802CE2E0(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_802CEB1C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_802CEC3C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_80326394;
extern M2C_UNK D_8032639C;
extern M2C_UNK D_803263B4;
extern M2C_UNK D_803263C4;
extern M2C_UNK D_803263C8;
extern M2C_UNK D_803263D4;
extern M2C_UNK D_803263E4;

void func_802ABD04(s32 arg0) {
int *__repair_home0 = &arg0;

    M2C_UNK sp38;

    func_8022A848(&sp38, 0x41800000, 0x43980000, 0x41800000, 224.0f);
    func_80221B2C(&sp38);
    math_mtx4Identity(&sp38);
    func_8022149C(&sp38);
    func_802233EC(0x04C20000);
    func_802CEC3C(&D_80326394, 0xFF, 0xFF, 0xFF, 0xFF);
    func_8021F4E4();
    func_8021F35C(0x19, 0x3E, 0, 0, 0, 0, 0, 0, 0xAA);
    func_8021F35C(0x126, 0x3E, 0, 0, 0, 0, 0, 0, 0xAA);
    func_8021F35C(0x126, 0xB2, 0, 0, 0, 0, 0, 0, 0xAA);
    func_8021F35C(0x19, 0xB2, 0, 0, 0, 0, 0, 0, 0xAA);
    func_8021FCD0();
    func_802CEB1C(&D_8032639C, 0xFF, 0xFF, 0xFF, 0xFF);
    func_8021E708(0xFF, 0xFF, 0, 0xFF);
    func_8021E87C(func_802CE2E0(&D_803263B4, 0, 0x140), 0x9E, &D_803263B4);
    func_8021E87C(func_802CE2E0(&D_803263C4, 0, 0x140), 0x8A, &D_803263C4);
    func_8021E87C(func_802CE2E0(&D_803263C8, 0, 0x140), 0x76, &D_803263C8);
    func_8021E87C(func_802CE2E0(&D_803263D4, 0, 0x140), 0x62, &D_803263D4);
    func_8021E87C(func_802CE2E0(&D_803263E4, 0, 0x140), 0x4E, &D_803263E4);
    func_8021EC9C();
    func_802230E4();
}
