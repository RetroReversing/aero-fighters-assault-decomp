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

M2C_UNK func_80228DE0(void *, M2C_UNK *);
M2C_UNK func_80289BDC(void *, M2C_UNK);
M2C_UNK func_8031C4E8(void *, M2C_UNK);
void math_mtx4Identity(f32 *);
extern s32 D_8032AA74;

void func_8028987C(s8 *arg0, void *arg1) {
    M2C_UNK sp54[17];
    s32 var_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    s8 *var_s1;
    s8 *var_s2;

    M2C_FIELD(arg0, s32 *, 0x1894) = (s32) D_8032AA74;
    M2C_FIELD(arg0, f32 *, 0x1888) = 0.0f;
    math_mtx4Identity((f32 *)sp54);
    *(f32 *)&sp54[12] = M2C_FIELD(arg1, f32 *, 0x30);
    *(f32 *)&sp54[13] = M2C_FIELD(arg1, f32 *, 0x34);
    *(f32 *)&sp54[14] = M2C_FIELD(arg1, f32 *, 0x38);
    temp_v0 = M2C_FIELD(arg0, void **, 0xB0);
    M2C_FIELD(temp_v0, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(M2C_FIELD(temp_v0, s16 *, 0x18) + arg0, 0);
    func_80228DE0(arg0 + 4, sp54);
    M2C_FIELD(arg0, s8 *, 0xAC) = 1;
    var_s0 = 0;
    var_s2 = arg0;
    var_s1 = arg0;
    do {
        temp_v0_2 = M2C_FIELD(var_s2, void **, 0xE48);
        M2C_FIELD(temp_v0_2, M2C_UNK (**)(void *, f32), 0x1C)(M2C_FIELD(temp_v0_2, s16 *, 0x18) + var_s2 + 0xD98, 0.25f + ((f32) var_s0 * 0.125f));
        var_s0 += 1;
        var_s2 += 0x1DC;
        var_s1 += 0xC;
        M2C_FIELD(var_s1, f32 *, 0x1808) = *(f32 *)&sp54[13];
        M2C_FIELD(var_s1, f32 *, 0x180C) = *(f32 *)&sp54[14];
        M2C_FIELD(var_s1, f32 *, 0x1804) = *(f32 *)&sp54[12];
    } while (var_s0 < 5);
    temp_v0 = M2C_FIELD(arg0, void **, 0xD58);
    M2C_FIELD(temp_v0, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(M2C_FIELD(temp_v0, s16 *, 0x18) + arg0 + 0xCA8, 0);
    func_80228DE0(arg0 + 0xCAC, sp54);
    M2C_FIELD(arg0, s8 *, 0xD54) = 1;
    var_s0 = 0;
    var_s1 = arg0;
    do {
        temp_v0_4 = M2C_FIELD(var_s1, void **, 0x1A0);
        M2C_FIELD(temp_v0_4, M2C_UNK (**)(void *, f32), 0x1C)(M2C_FIELD(temp_v0_4, s16 *, 0x18) + var_s1 + 0xF0, (f32) var_s0 * (f32)2);
        var_s0 += 1;
        var_s1 += 0x258;
    } while (var_s0 != 5);
    temp_v0_5 = M2C_FIELD(arg0, void **, 0x1794);
    M2C_FIELD(temp_v0_5, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(M2C_FIELD(temp_v0_5, s16 *, 0x18) + arg0 + 0x16E4, 0);
    func_8031C4E8(arg0 + 0x16E4, 0x40500000);
    temp_v0 = M2C_FIELD(arg0, void **, 0x1794);
    M2C_FIELD(temp_v0, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK), 0x24)(M2C_FIELD(temp_v0, s16 *, 0x20) + arg0 + 0x16E4, 3, 0x40400000);
    func_80289BDC(arg0, 0x41F00000);
}
