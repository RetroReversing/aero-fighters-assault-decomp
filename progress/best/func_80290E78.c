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

M2C_UNK func_80231A24(M2C_UNK *);                   /* extern */
M2C_UNK func_803021B8(s32, void *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_803025AC(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_803025E4(s32, void *, f32);            /* extern */
s32 func_80305E10(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK D_80323770;
extern s32 D_8032AA74;
extern f32 D_8033F0EC;

void func_80290E78(void *arg0) {
    void *temp_a1;
    void *sp28;
    s32 temp_s0;
    s32 temp_v0;
    s32 sp34;
    void *temp_a1_2;

    sp34 = D_8032AA74;
    func_80231A24(&D_80323770);
    temp_s0 = sp34 + 0x8F4;
    temp_a1 = (unsigned char *) arg0 + 0x314;
    sp28 = temp_a1;
    func_803025AC(temp_s0, temp_a1, 0x3F666666);
    func_803025E4(temp_s0, temp_a1, M2C_FIELD(arg0, f32 *, 0x34C) * D_8033F0EC);
    M2C_FIELD(arg0, s8 *, 0x354) = 0;
    temp_v0 = func_80305E10(0x1388, 0);
    temp_a1_2 = (unsigned char *) arg0 + 0x31C;
    sp28 = temp_a1_2;
    func_803021B8(temp_s0, temp_a1_2, 1, temp_v0, 0x30);
    func_803025AC(temp_s0, temp_a1_2, 0x3F333333);
    func_803025E4(temp_s0, temp_a1_2, 0.95f);
}
