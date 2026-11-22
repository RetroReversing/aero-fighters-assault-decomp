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

void *func_8022BE54();
s32 func_80231A24();
extern char D_80328C88[];
extern char D_80328CB0[];

void *func_802F9538(s32 arg0, s32 arg1) {
    void *sp1C;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_8022BE54(0x64);
    sp1C = temp_v0;
    if (temp_v0 == NULL) {
        func_80231A24(D_80328C88);
    }
    temp_v0_2 = func_8022BE54(arg1 * 0x24);
    M2C_FIELD(sp1C, void **, 0x54) = temp_v0_2;
    if (temp_v0_2 == NULL) {
        func_80231A24(D_80328CB0, arg1);
    }
    return sp1C;
}
