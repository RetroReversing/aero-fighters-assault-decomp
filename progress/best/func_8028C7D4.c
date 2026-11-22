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

s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E87C();
s32 func_8021F35C();
s32 func_8021F4E4();
s32 func_8021FCD0();
s32 func_802233EC();
s32 func_8022342C();
s32 func_8028C9D0();
s32 func_802CE2E0();
extern char D_80323594[];
extern char D_803235A0[];
extern char D_803235A4[];

void func_8028C7D4(void *arg0) {
    f32 temp_fv0;

    func_8028C9D0(arg0, D_80323594, M2C_FIELD(arg0, s32 *, 0x10));
    func_8022342C(0x400000);
    func_8021F4E4();
    func_8021F35C(0xE3, 0x1B, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0x124, 0x1B, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0x124, 0xBA, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0xE3, 0xBA, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021FCD0();
    func_802233EC(0x400000);
    func_8021E66C(2);
    func_8021E708(0, 0xFF, 0, (s32) (M2C_FIELD(arg0, f32 *, 0x12C) * 255.0f) & 0xFF);
    func_8021E87C(func_802CE2E0(M2C_FIELD(arg0, s32 **, 0x1C0), 0xE3, 0x124), 0xAA, M2C_FIELD(arg0, s32 **, 0x1C0));
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x12C);
    func_8021E708(0, 0xFF, 0, (s32) (temp_fv0 * temp_fv0 * 255.0f) & 0xFF);
    func_8021E87C(func_802CE2E0(M2C_FIELD(arg0, s32 **, 0x1BC), 0xE3, 0x124), 0x9B, M2C_FIELD(arg0, s32 **, 0x1BC));
    func_8021E66C(0);
    func_8021E708(0, 0xFF, 0, 0xFF);
    func_8021E87C(0x1E, 0x18, D_803235A0);
    func_8021E87C(0xBE, 0x18, D_803235A4);
}
