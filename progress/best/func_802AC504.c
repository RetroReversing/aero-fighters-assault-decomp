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

M2C_UNK func_8021EC9C();                            /* extern */
M2C_UNK func_8022149C(M2C_UNK *);                   /* extern */
M2C_UNK func_80221B2C(M2C_UNK *);                   /* extern */
M2C_UNK func_802230E4();                            /* extern */
M2C_UNK math_mtx4Identity(M2C_UNK *);                   /* extern */
M2C_UNK func_8022A848(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK func_802AC678(s32, M2C_UNK);                /* extern */
M2C_UNK func_802CEB1C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_802CEC3C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_803264E8;
extern M2C_UNK D_80326500;

void func_802AC504(s32 arg0) {
int *__repair_home0 = &arg0;

    M2C_UNK sp20;

    func_8022A848(&sp20, 0x41800000, 0x43980000, 0x41800000, 224.0f);
    func_80221B2C(&sp20);
    math_mtx4Identity(&sp20);
    func_8022149C(&sp20);
    func_802CEC3C(&D_803264E8, 0xFF, 0xFF, 0xFF, 0xFF);
    func_802CEB1C(&D_80326500, 0xFF, 0xFF, 0xFF, 0xFF);
    func_8021EC9C();
    func_802AC678((*__repair_home0), 0);
    func_802230E4();
}
