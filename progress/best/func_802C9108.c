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

M2C_UNK func_8021ACB0(s32, s32);                    /* extern */
M2C_UNK func_8021B4B0(s32, M2C_UNK, void *);        /* extern */
M2C_UNK func_8021B838(s32, M2C_UNK);                /* extern */
M2C_UNK func_802D0154(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_80304978();                                /* extern */
M2C_UNK func_803049E4(s32, M2C_UNK *);              /* extern */
M2C_UNK math_mtx4Identity(void *);                  /* extern */
extern M2C_UNK D_80326D78;
extern f32 D_80341FCC;
extern f32 D_80341FD0;
extern f32 D_80341FD4;
extern f32 D_80341FD8;

void func_802C9108(void *arg0) {
    M2C_UNK spAC;
    M2C_UNK sp34;
    M2C_UNK *var_s0;
    void *temp_s3;

    M2C_MEMCPY_ALIGNED(&sp34, &D_80326D78, 0x78);
    M2C_FIELD(arg0, s8 *, 0x951A) = 1;
    M2C_FIELD(arg0, f32 *, 0x951C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x9520) = (f32) D_80341FCC;
    func_8021ACB0(M2C_FIELD(arg0, s32 *, 0x94CC), M2C_FIELD(arg0, s32 *, 0x94D0));
    func_8021B838(M2C_FIELD(arg0, s32 *, 0x94CC), 2);
    temp_s3 = (unsigned char *) arg0 + 0x94D4;
    math_mtx4Identity(temp_s3);
    func_802D0154(temp_s3, 0xBF32B8C7, 0x7A);
    func_802D0154(temp_s3, 0xC1197C58, 0x78);
    M2C_FIELD(arg0, f32 *, 0x9504) = (f32) D_80341FD0;
    M2C_FIELD(arg0, f32 *, 0x9508) = (f32) D_80341FD4;
    M2C_FIELD(arg0, f32 *, 0x950C) = (f32) D_80341FD8;
    M2C_FIELD(arg0, s32 *, 0x9524) = func_80304978();
    var_s0 = &sp34;
    do {
        func_803049E4(M2C_FIELD(arg0, s32 *, 0x9524), var_s0);
        var_s0 += 0x18;
    } while (var_s0 != &spAC);
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 0x94CC), 0, temp_s3);
}
