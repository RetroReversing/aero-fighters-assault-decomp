/* identical to func_80317458 (matched), with its names changed by decompdecomp */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#endif

M2C_UNK func_80231A24(M2C_UNK *, M2C_UNK *, void *);
M2C_UNK func_8028C240(s32, f32 *, f32 *, f32 *);
M2C_UNK func_802CF808(f32 *, f32 *);
M2C_UNK math_mtx4Identity(f32 *);
extern M2C_UNK D_8032B8A8;
extern M2C_UNK D_8032B8BC;

void func_80317F74(void *arg0, s32 arg1) {
    f32 sp70[16];
    f32 sp30[16];
    f32 sp2C, sp28, sp24;
    void *temp_v0;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 0xC);
    if (var_v1 == NULL) {
        func_80231A24(&D_8032B8A8, &D_8032B8BC, arg0);
        *((s32 *)NULL) = 0x29A;
        var_v1 = M2C_FIELD(arg0, void **, 0xC);
    }
    temp_v0 = M2C_FIELD(var_v1, void **, 0xD8);
    M2C_FIELD(temp_v0, M2C_UNK (**)(s8 *, f32 *, void *), 0x14)((s8 *)var_v1 + M2C_FIELD(temp_v0, s16 *, 0x10), sp70, arg0);
    func_8028C240(arg1, &sp2C, &sp28, &sp24);
    math_mtx4Identity(sp30);
    sp30[12] = sp2C;
    sp30[13] = sp28;
    sp30[14] = sp24;
    func_802CF808(sp70, sp30);
}
