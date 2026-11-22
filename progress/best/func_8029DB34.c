#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#endif

void func_8029DB34(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xB0);
    M2C_FIELD(temp_v0, M2C_UNK (**)(s8 *, M2C_UNK, void *), 0x1C)((s8 *)arg0 + M2C_FIELD(temp_v0, s16 *, 0x18), 0, arg0);
    M2C_FIELD(arg0, s16 *, 0x86) = 1;
}
