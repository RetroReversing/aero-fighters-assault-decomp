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

M2C_UNK func_802E455C(void *, f32, s32);            /* extern */
s32 func_802E557C(void *, f32, s32);                /* extern */
M2C_UNK func_802E6E88(void *, f32, s32);            /* extern */
M2C_UNK func_802E756C(void *, M2C_UNK);             /* extern */
s32 func_80317D90(void *);                          /* extern */
s32 func_80318C8C(void *);                          /* extern */
s32 func_80319210(void *);                          /* extern */
extern u8 D_80324968;
extern u8 D_8032496C;

void func_802A772C(void *arg0) {
    void *sp20;
    f32 temp_fv0;
    s32 var_v1;
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = (unsigned char *) arg0 + 0x365C;
    sp20 = temp_a0;
    if ((func_80317D90(temp_a0) != 0) && (M2C_FIELD(arg0, s32 *, 0x4E18) != 0xD)) {
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x32A8);
        if (M2C_FIELD(arg0, f32 *, 0x32B4) < temp_fv0) {
            func_802E455C(sp20, temp_fv0, M2C_FIELD(arg0, s32 *, 0x32B0));
        }
        func_802E6E88(sp20, M2C_FIELD(arg0, f32 *, 0x32A8), M2C_FIELD(arg0, s32 *, 0x32B0));
        if (func_80318C8C(sp20) == 1) {
            D_80324968 = 1;
        }
        if ((D_80324968 != 0) && (func_80319210(sp20) == 1)) {
            D_8032496C = 1;
        }
        if ((D_80324968 != 0) && (D_8032496C != 0)) {
            D_80324968 = 0;
            D_8032496C = 0;
        }
        if (!(func_802E557C(sp20, M2C_FIELD(arg0, f32 *, 0x32A8), M2C_FIELD(arg0, s32 *, 0x32B0)) & 0xFF)) {
            func_802E756C(sp20, 0);
        }
    }
    temp_a0_2 = (unsigned char *) arg0 + 0x4E3C;
    sp20 = temp_a0_2;
    if (func_80317D90(temp_a0_2) != 0) {
        var_v1 = 1;
        if (M2C_FIELD(arg0, s32 *, 0x65B4) != 0xD) {
            func_802E455C(sp20, M2C_FIELD(arg0, f32 *, 0x32A8), M2C_FIELD(arg0, s32 *, 0x32B0));
            var_v1 = func_802E557C(sp20, M2C_FIELD(arg0, f32 *, 0x32A8), M2C_FIELD(arg0, s32 *, 0x32B0)) & 0xFF;
        }
        if (var_v1 == 0) {
            func_802E756C(sp20, 0);
        }
    }
}
