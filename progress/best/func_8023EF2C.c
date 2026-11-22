/* Partial candidate from function #176093660019 in project #41; rechecked locally. */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

extern M2C_UNK D_8010AC60;
extern s32 D_8010AC9C;
extern u8 D_8010ACA1;

void func_8023EF2C(void) {
    s32 sp0;
    s8 sp4;
    s8 sp5;
    s8 sp6;
    s8 sp7;
    s16 sp8;
    s8 spA;
    s8 spB;
    M2C_UNK *spC;
    s32 temp_t0;
    s32 temp_t7;

    spC = &D_8010AC60;
    sp0 = 0;
    __repair_rows: {
        *(&D_8010AC60 + (sp0 * 4)) = 0;
        temp_t0 = sp0 + 1;
        sp0 = temp_t0;
    }
if (temp_t0 < 0x10) goto __repair_rows;
    D_8010AC9C = 1;
    sp4 = 0xFF;
    sp5 = 1;
    sp6 = 4;
    sp7 = 1;
    sp8 = 0xFFFF;
    spA = -1;
    spB = -1;
    sp0 = 0;
    if ((s32) D_8010ACA1 > 0) {
        do {
            M2C_FIELD(spC, s8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(&sp4, s32 *, 0));
            M2C_FIELD(spC, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(&sp4, s32 *, 4));
            temp_t7 = sp0 + 1;
            sp0 = temp_t7;
            spC += 8;
        } while (temp_t7 < (s32) D_8010ACA1);
    }
    M2C_FIELD(spC, s8 *, 0) = 0xFE;
}
