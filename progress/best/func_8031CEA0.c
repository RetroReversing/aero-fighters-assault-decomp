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

void *func_802C676C(M2C_UNK);                       /* extern */
M2C_UNK func_802C68B0(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_8031C3FC(void *);                      /* extern */
M2C_UNK func_8031CF94(void *);                      /* extern */
extern M2C_UNK D_8032FA4C;
extern f32 D_803477C0;
extern M2C_UNK func_8028A440;

void *func_8031CEA0(void *arg0) {
    void *sp24;
    void *temp_a0;
    void *temp_v0;
    void *var_s0;

    var_s0 = arg0;
    if ((arg0 != NULL) || (temp_v0 = func_802C676C(0x21C), var_s0 = temp_v0, (temp_v0 != NULL))) {
        func_8031C3FC(var_s0);
        temp_a0 = (unsigned char *) var_s0 + 0xF0;
        sp24 = temp_a0;
        func_802C68B0(temp_a0, 0x19, 0xC, &func_8028A440);
        M2C_FIELD(var_s0, s16 *, 0xBC) = 9;
        M2C_FIELD(var_s0, M2C_UNK **, 0xB8) = &D_8032FA4C;
        M2C_FIELD(var_s0, s16 *, 0xE4) = 1;
        M2C_FIELD(var_s0, s16 *, 0xE6) = 0x19;
        M2C_FIELD(var_s0, void **, 0xB4) = sp24;
        M2C_FIELD(var_s0, f32 *, 0xD4) = 3.0f;
        M2C_FIELD(var_s0, f32 *, 0x64) = 3.0f;
        M2C_FIELD(var_s0, f32 *, 0xE0) = (f32) D_803477C0;
        do { func_8031CF94(var_s0); } while (0);
    }
    return var_s0;
}
