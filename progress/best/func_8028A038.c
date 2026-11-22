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

M2C_UNK func_80228DE0(M2C_UNK *, M2C_UNK *);
f32 func_8023499C();
M2C_UNK func_80289BDC(void *, f32);
void *func_802AEE00(s32);
M2C_UNK func_803021B8(s32, void *, M2C_UNK, s32, s32);
M2C_UNK func_80302558(s32, void *, M2C_UNK *);
s32 func_80305E10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_8028A038(s8 *arg0, M2C_UNK arg1, f32 arg2) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    M2C_UNK sp9C;
    M2C_UNK *temp_s7;
    M2C_UNK *var_fp;
    M2C_UNK *var_s4;
    f32 temp_fv0;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s6;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;
    s8 *var_s2_3;
    void *var_s3;
    s8 *var_s3_2;
    s8 *var_s7;

    temp_s7 = (M2C_UNK *)(arg0 + 0xCAC);
    func_80228DE0(&sp9C, temp_s7);
    var_s0 = arg0;
    var_s2 = 0;
    var_s3 = (void *)((s8 *)var_s0 + 0xD98);
    var_s4 = (M2C_UNK *)((s8 *)var_s0 + 0xD9C);
    M2C_FIELD(var_s0, f32 *, 0x1888) = (f32) (M2C_FIELD(var_s0, f32 *, 0x1888) + arg2);
    do {
        M2C_FIELD(var_s0, f32 *, 0x1810) = (f32) (M2C_FIELD(var_s0, f32 *, 0x17D4) + M2C_FIELD(var_s0, f32 *, 0x1810));
        M2C_FIELD(var_s0, f32 *, 0x1814) = (f32) (M2C_FIELD(var_s0, f32 *, 0x17D8) + M2C_FIELD(var_s0, f32 *, 0x1814));
        M2C_FIELD(var_s0, f32 *, 0x1818) = (f32) (M2C_FIELD(var_s0, f32 *, 0x17DC) + M2C_FIELD(var_s0, f32 *, 0x1818));
        spCC = M2C_FIELD(var_s0, f32 *, 0x1810);
        spD0 = M2C_FIELD(var_s0, f32 *, 0x1814);
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x1888);
        spD4 = M2C_FIELD(var_s0, f32 *, 0x1818) - (M2C_FIELD(arg0, f32 *, 0x188C) * temp_fv0 * temp_fv0);
        func_80228DE0(var_s4, &sp9C);
        var_s2 += 0x1DC;
        M2C_FIELD(var_s3, s8 *, 0xAC) = 1;
        var_s0 = (void *)((s8 *)var_s0 + 0xC);
        var_s3 = (void *)((s8 *)var_s3 + 0x1DC);
        var_s4 = (M2C_UNK *)((s8 *)var_s4 + 0x1DC);
    } while (var_s2 != 0x94C);
    func_80228DE0(&sp9C, temp_s7);
    if ((func_802AEE00(M2C_FIELD(arg0, s32 *, 0x1894)) != NULL) && (M2C_FIELD(func_802AEE00(M2C_FIELD(arg0, s32 *, 0x1894)), u8 *, 0x19B) != 1)) {
        temp_v0 = func_80305E10(0x1388, 0x2EE, 0x3E8, 0);
        temp_s0 = arg0 + 0x1898;
        temp_a3 = temp_v0;
        if (M2C_FIELD(arg0, s16 *, 0xD10) == 1) {
            func_803021B8(M2C_FIELD(arg0, s32 *, 0x1894) + 0x8F4, temp_s0, 0x25, temp_a3, 0x38);
            func_80302558(M2C_FIELD(arg0, s32 *, 0x1894) + 0x8F4, temp_s0, &sp9C);
        }
        temp_s0_2 = arg0 + 0x18A0;
        if (M2C_FIELD(arg0, s16 *, 0x68) == 1) {
            func_803021B8(M2C_FIELD(arg0, s32 *, 0x1894) + 0x8F4, temp_s0_2, 0x26, temp_v0, 0x38);
            func_80302558(M2C_FIELD(arg0, s32 *, 0x1894) + 0x8F4, temp_s0_2, &sp9C);
        }
    }
    if (M2C_FIELD(arg0, s16 *, 0xD10) < 0) {
        func_80289BDC(arg0, M2C_FIELD(arg0, f32 *, 0x188C));
        temp_s1 = M2C_FIELD(arg0, void **, 0xD58);
        M2C_FIELD(temp_s1, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(M2C_FIELD(temp_s1, s16 *, 0x18) + arg0 + 0xCA8, 0);
        var_s0_2 = arg0;
        var_s2_2 = 0;
        var_s3_2 = (s8 *)var_s0_2;
        do {
            M2C_FIELD(arg0, f32 *, 0x1888) = 0.0f;
            temp_s1_2 = M2C_FIELD(var_s3_2, void **, 0xE48);
            M2C_FIELD(temp_s1_2, M2C_UNK (**)(void *, f32), 0x1C)(M2C_FIELD(temp_s1_2, s16 *, 0x18) + var_s3_2 + 0xD98, 0.25f + ((f32) var_s2_2 * 0.125f));
            var_s2_2 += 1;
            var_s3_2 += 0x1DC;
            var_s0_2 = (void *)((s8 *)var_s0_2 + 0xC);
            M2C_FIELD(var_s0_2, f32 *, 0x1808) = spD0;
            M2C_FIELD(var_s0_2, f32 *, 0x180C) = spD4;
            M2C_FIELD(var_s0_2, f32 *, 0x1804) = spCC;
        } while (var_s2_2 != 5);
    }
    var_s2_3 = arg0;
    var_s6 = 0;
    var_s0_3 = var_s2_3;
    var_s7 = var_s2_3 + 0xF0;
    var_fp = (M2C_UNK *)(var_s2_3 + 0xF4);
    do {
        if (M2C_FIELD(var_s2_3, s16 *, 0x158) == -1) {
            temp_s1_3 = M2C_FIELD(var_s2_3, void **, 0x1A0);
            M2C_FIELD(temp_s1_3, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(M2C_FIELD(temp_s1_3, s16 *, 0x18) + var_s2_3 + 0xF0, 0);
            M2C_FIELD(var_s0_3, f32 *, 0x1850) = spD0;
            M2C_FIELD(var_s0_3, f32 *, 0x1854) = spD4;
            M2C_FIELD(var_s0_3, f32 *, 0x184C) = spCC;
            M2C_FIELD(var_s0_3, f32 *, 0x184C) = (f32) (M2C_FIELD(var_s0_3, f32 *, 0x184C) + ((func_8023499C() - 0.5f) * M2C_FIELD(arg0, f32 *, 0x188C)));
            M2C_FIELD(var_s0_3, f32 *, 0x1850) = (f32) (M2C_FIELD(var_s0_3, f32 *, 0x1850) + ((func_8023499C() - 0.5f) * M2C_FIELD(arg0, f32 *, 0x188C)));
            M2C_FIELD(var_s0_3, f32 *, 0x1854) = (f32) (M2C_FIELD(var_s0_3, f32 *, 0x1854) + (func_8023499C() * M2C_FIELD(arg0, f32 *, 0x188C)));
        }
        spCC = M2C_FIELD(var_s0_3, f32 *, 0x184C);
        spD0 = M2C_FIELD(var_s0_3, f32 *, 0x1850);
        spD4 = M2C_FIELD(var_s0_3, f32 *, 0x1854);
        func_80228DE0(var_fp, &sp9C);
        var_s6 += 0x258;
        M2C_FIELD(var_s7, s8 *, 0xAC) = 1;
        var_s0_3 = (void *)((s8 *)var_s0_3 + 0xC);
        var_s2_3 += 0x258;
        var_s7 += 0x258;
        var_fp = (M2C_UNK *)((s8 *)var_fp + 0x258);
    } while (var_s6 != 0xBB8);
    if (M2C_FIELD(arg0, s16 *, 0x68) < 0) {
        return 0;
    }
    return 1;
}
