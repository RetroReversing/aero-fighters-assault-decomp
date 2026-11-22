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

f32 func_8023499C();
extern f32 D_8033EAE0;
extern f32 D_8033EAE4;

void func_80289BDC(s8 *arg0, f32 arg1) {
    f32 *temp_s0_3;
    f32 *temp_s0_4;
    f32 *var_s4;
    f32 *var_s4_2;
    f32 *var_s5;
    f32 *var_s5_2;
    f32 *var_s6;
    f32 *var_s6_2;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 var_s3;
    s32 var_s3_2;
    s8 *temp_s0;
    s8 *temp_s0_2;
    s8 *var_s1;
    s8 *var_s1_2;

    M2C_FIELD(arg0, f32 *, 0x188C) = arg1;
    temp_fs1 = arg1 * D_8033EAE0;
    var_s1 = arg0;
    var_s3 = 0;
    var_s4 = (f32 *)(arg0 + 0x17D4);
    var_s5 = (f32 *)(arg0 + 0x17D8);
    var_s6 = (f32 *)(arg0 + 0x17DC);
    do {
        temp_s0 = M2C_FIELD(var_s1, void **, 0xE48);
        M2C_FIELD(temp_s0, M2C_UNK (**)(void *, f32), 0x54)(M2C_FIELD(temp_s0, s16 *, 0x50) + var_s1 + 0xD98, arg1);
        temp_s0_2 = M2C_FIELD(var_s1, void **, 0xE48);
        M2C_FIELD(temp_s0_2, M2C_UNK (**)(void *, f32), 0x6C)(M2C_FIELD(temp_s0_2, s16 *, 0x68) + var_s1 + 0xD98, temp_fs1);
        *var_s4 = (func_8023499C() - 0.5f) * M2C_FIELD(arg0, f32 *, 0x188C) * 0.5f;
        temp_s0_3 = var_s6;
        *var_s5 = (func_8023499C() - 0.5f) * M2C_FIELD(arg0, f32 *, 0x188C) * 0.5f;
        var_s3 += 0xC;
        var_s1 += 0x1DC;
        var_s4 += 0xC;
        var_s5 += 0xC;
        var_s6 += 0xC;
        *temp_s0_3 = (func_8023499C() + 0.5f) * M2C_FIELD(arg0, f32 *, 0x188C) * 0.5f;
    } while (var_s3 < 0x3C);
    var_s3_2 = 0;
    var_s1_2 = arg0;
    var_s4_2 = (f32 *)(arg0 + 0x184C);
    var_s5_2 = (f32 *)(arg0 + 0x1850);
    var_s6_2 = (f32 *)(arg0 + 0x1854);
    do {
        temp_fv1 = (func_8023499C() * 15.0f) + 15.0f;
        M2C_FIELD(var_s1_2, f32 *, 0x134) = temp_fv1;
        M2C_FIELD(var_s1_2, f32 *, 0x138) = temp_fv1;
        M2C_FIELD(var_s1_2, f32 *, 0x13C) = temp_fv1;
        *var_s4_2 = (func_8023499C() - 0.5f) * M2C_FIELD(arg0, f32 *, 0x188C);
        temp_s0_4 = var_s6_2;
        *var_s5_2 = (func_8023499C() - 0.5f) * M2C_FIELD(arg0, f32 *, 0x188C);
        var_s3_2 += 0x258;
        var_s1_2 += 0x258;
        var_s4_2 += 0xC;
        var_s5_2 += 0xC;
        var_s6_2 += 0xC;
        *temp_s0_4 = func_8023499C() * M2C_FIELD(arg0, f32 *, 0x188C);
    } while (var_s3_2 != 0xBB8);
    M2C_FIELD(arg0, f32 *, 0xCEC) = arg1;
    M2C_FIELD(arg0, f32 *, 0xCF0) = arg1;
    M2C_FIELD(arg0, f32 *, 0xCF4) = arg1;
    temp_fv0 = arg1 * D_8033EAE4;
    temp_fv1_2 = arg1 * 5.0f;
    M2C_FIELD(arg0, f32 *, 0x1728) = temp_fv0;
    M2C_FIELD(arg0, f32 *, 0x172C) = temp_fv0;
    M2C_FIELD(arg0, f32 *, 0x1730) = temp_fv0;
    M2C_FIELD(arg0, f32 *, 0x44) = temp_fv1_2;
    M2C_FIELD(arg0, f32 *, 0x48) = temp_fv1_2;
    M2C_FIELD(arg0, f32 *, 0x4C) = temp_fv1_2;
}
