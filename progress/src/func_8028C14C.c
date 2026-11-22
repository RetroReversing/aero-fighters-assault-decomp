/* identical to func_8028BCC0 (matched), with its names changed by decompdecomp */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#endif

void func_8028C14C(void *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    func_80318F00();
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xD8);
    M2C_FIELD(temp_v0, M2C_UNK (**)(void *, s32), 0xB4)((s8 *)M2C_FIELD(arg0, void **, 0xC) + M2C_FIELD(temp_v0, s16 *, 0xB0), arg1);
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x1A0);
    M2C_FIELD(temp_v0_2, M2C_UNK (**)(void *), 0x10C)((s8 *)arg0 + M2C_FIELD(temp_v0_2, s16 *, 0x108));
}
