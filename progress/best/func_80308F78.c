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
M2C_UNK func_8021B838(s32, M2C_UNK);                /* extern */
s32 func_8021BA90();                                /* extern */
M2C_UNK func_8022A210(void *, f32, f32, f32);       /* extern */
M2C_UNK func_80231A24(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK math_mtx4Identity(void *);                  /* extern */
extern M2C_UNK D_8032AA34;
extern M2C_UNK D_8032AA48;
extern M2C_UNK D_8032AA68;
extern s32 D_8032AA74;
extern f32 D_80346590;
extern f32 D_80346594;

void func_80308F78(void *arg0, f32 arg1, f32 arg2) {
    M2C_UNK *__base_D_8032AA34;
    void *sp24;
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = (unsigned char *) arg0 + 4;
    M2C_FIELD(temp_a0, s32 *, -4) = (s32) D_8032AA74;
    sp24 = temp_a0;
    math_mtx4Identity(temp_a0);
    temp_v0 = func_8021BA90();
    M2C_FIELD(arg0, s32 *, 0x64) = temp_v0;
    if (temp_v0 == 0xFFFF) {
        __base_D_8032AA34 = &D_8032AA34;
        func_80231A24(__base_D_8032AA34, &D_8032AA48, &D_8032AA68, 0x43);
    }
    func_8021ACB0(M2C_FIELD(arg0, s32 *, 0x64), 0xA0);
    func_8021B838(M2C_FIELD(arg0, s32 *, 0x64), 2);
    M2C_FIELD(arg0, f32 *, 0x44) = arg1;
    M2C_FIELD(arg0, f32 *, 0x48) = arg2;
    M2C_FIELD(arg0, s8 *, 0x60) = 1;
    M2C_FIELD(arg0, f32 *, 0x5C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) D_80346594;
    func_8022A210(sp24, D_80346590, D_80346590, D_80346590);
}
