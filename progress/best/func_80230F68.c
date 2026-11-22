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

M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK);    /* extern */
extern s32 D_8024E868;
extern M2C_UNK D_80280C30;
extern M2C_UNK D_802814C0;
extern M2C_UNK D_80281500;

void func_80230F68(s32 arg0) {
int *__repair_home0 = &arg0;

    s32 temp_t6;

    temp_t6 = (*__repair_home0) & 0xFF;
    switch (temp_t6) {                              /* irregular */
    case 0:
        osRecvMesg(&D_80280C30, 0, 1);
        return;
    case 2:
        osRecvMesg(&D_802814C0, 0, 1);
        return;
    case 4:
        osRecvMesg(&D_80281500, 0, 1);
        D_8024E868 = 0;
        return;
    }
}
