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

s32 func_802465B0(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK osRecvMesg(s32, M2C_UNK, M2C_UNK);          /* extern */
extern s8 D_80285EB0;
extern M2C_UNK D_80285F80;
extern s32 D_80285FBC;

s32 func_80247AEC(s32 arg0, void *arg1) {
int *__repair_home0 = &arg0;

    s32 sp2C;
    s32 sp28;
    M2C_UNK *sp24;
    s8 sp23;
    u8 sp22;
    u8 sp21;
    u8 sp20;
    s8 sp1F;
    u8 sp1E;
    s8 sp1D;
    s8 sp1C;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t7;
    u8 temp_t5;

    sp2C = 0;
    sp24 = &D_80285F80;
    sp28 = 0;
    do {
        *(&D_80285F80 + (sp28 * 4)) = 0;
        temp_t0 = sp28 + 1;
        sp28 = temp_t0;
    } while (temp_t0 < 0x10);
    D_80285FBC = 1;
    sp24 = &D_80285F80;
    sp28 = 0;
    do {
        M2C_FIELD(sp24, s8 *, 0) = 0;
        temp_t7 = sp28 + 1;
        sp28 = temp_t7;
        sp24 += 1;
    } while (temp_t7 < 4);
    sp1C = 0xFF;
    sp1D = 1;
    sp1E = 3;
    sp1F = 0;
    sp20 = 0xFF;
    sp21 = 0xFF;
    sp22 = 0xFF;
    sp23 = 0xFF;
    M2C_FIELD(sp24, s8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(&sp1C, s32 *, 0));
    M2C_FIELD(sp24, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(&sp1C, s32 *, 4));
    sp24 += 8;
    M2C_FIELD(sp24, s8 *, 8) = 0xFE;
    sp2C = func_802465B0(1, &D_80285F80);
    osRecvMesg((*__repair_home0), 0, 1);
    D_80285EB0 = 5;
    sp2C = func_802465B0(0, &D_80285F80);
    osRecvMesg((*__repair_home0), 0, 1);
    if (sp2C != 0) {
        return sp2C;
    }
    sp24 = &D_80285F80;
    sp28 = 0;
    do {
        M2C_FIELD(sp24, s8 *, 0) = 0;
        temp_t0_2 = sp28 + 1;
        sp28 = temp_t0_2;
        sp24 += 1;
    } while (temp_t0_2 < 4);
    M2C_FIELD(&sp1C, s32 *, 0) = (s32) M2C_UNALIGNED32(M2C_FIELD(sp24, s8 *, 0));
    M2C_FIELD(&sp1C, s32 *, 4) = (s32) M2C_UNALIGNED32(M2C_FIELD(sp24, M2C_UNK *, 4));
    M2C_FIELD(arg1, u8 *, 3) = (u8) ((s32) (sp1E & 0xC0) >> 4);
    M2C_FIELD(arg1, s16 *, 0) = (s16) ((sp21 << 8) | sp20);
    M2C_FIELD(arg1, u8 *, 2) = sp22;
    temp_t5 = M2C_FIELD(arg1, u8 *, 3);
    if (temp_t5 != 0) {
        return (s32) temp_t5;
    }
    return 0;
}
