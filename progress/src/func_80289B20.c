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

void func_8031F780(void *, f32);

void func_80289B20(s8 *arg0) {
    s32 var_s0;
    void *temp_s0;
    s8 *var_s1;

    M2C_FIELD(arg0, s16 *, 0x1890) = 0;
    var_s0 = 0;
    var_s1 = arg0 + 0xD98;
    do {
        func_8031F780(var_s1, 0.0f);
        var_s0 += 0x1DC;
        var_s1 += 0x1DC;
    } while (var_s0 != 0x94C);
    temp_s0 = M2C_FIELD(arg0, void **, 0xD58);
    M2C_FIELD(temp_s0, M2C_UNK (**)(void *, f32), 0x54)(M2C_FIELD(temp_s0, s16 *, 0x50) + arg0 + 0xCA8, 0.0f);
    temp_s0 = M2C_FIELD(arg0, void **, 0xB0);
    M2C_FIELD(temp_s0, M2C_UNK (**)(void *, f32), 0x54)(M2C_FIELD(temp_s0, s16 *, 0x50) + arg0, 0.0f);
    temp_s0 = M2C_FIELD(arg0, void **, 0x1794);
    M2C_FIELD(temp_s0, M2C_UNK (**)(void *, f32), 0x54)(M2C_FIELD(temp_s0, s16 *, 0x50) + arg0 + 0x16E4, 0.0f);
}
