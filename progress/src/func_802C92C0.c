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

M2C_UNK func_80224CA8(M2C_UNK);                     /* extern */
M2C_UNK func_8028D268(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK *, s32); /* extern */
M2C_UNK func_8028DB0C(void *, M2C_UNK *);           /* extern */
M2C_UNK func_8028DD58(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_8028DE50(void *, M2C_UNK, M2C_UNK *);  /* extern */
extern M2C_UNK D_80326DF4;
extern M2C_UNK D_80326E08;
extern M2C_UNK D_80326E28;
extern M2C_UNK D_80326E5C;
extern M2C_UNK D_80326EAC;
extern M2C_UNK D_80326EC4;

s32 func_802C92C0(void *arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    func_80224CA8(0x4C);
    func_80224CA8(0x2F);
    func_80224CA8(0x4E);
    func_80224CA8(0x20);
    func_80224CA8(0x4D);
    temp_s0 = (unsigned char *) arg0 + 0x70;
    func_8028D268(temp_s0, 0xE, 5, arg0, &D_80326EC4, 4);
    func_8028DD58(temp_s0, 1, 5, &D_80326DF4);
    func_8028DD58(temp_s0, 2, 8, &D_80326E08);
    func_8028DD58(temp_s0, 3, 0xD, &D_80326E28);
    func_8028DB0C(temp_s0, &D_80326E5C);
    func_8028DE50(temp_s0, 2, &D_80326EAC);
    return 1;
}
