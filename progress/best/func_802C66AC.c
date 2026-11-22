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
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

void func_802C66AC(s32 arg0, void *arg1) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_t4;
    void *temp_v0;

    temp_v0 = (unsigned char *) arg1 - 0x10;
    if ((M2C_FIELD(arg1, s16 *, -0x10) == 0x7373) && (M2C_FIELD(temp_v0, s16 *, 2) == 0)) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 8);
        M2C_FIELD(temp_v0, s16 *, 2) = 1;
        if ((temp_a0 != NULL) && (M2C_FIELD(temp_a0, s16 *, 2) != 0)) {
            M2C_FIELD(temp_v0, s32 *, 4) += M2C_FIELD(temp_a0, s32 *, 4) + 0x10;
            temp_t4 = M2C_FIELD(temp_a0, void **, 8);
            M2C_FIELD(temp_v0, void **, 8) = temp_t4;
            if (temp_t4 != NULL) {
                M2C_FIELD(temp_t4, void **, 0xC) = temp_v0;
            }
        }
        temp_a1 = M2C_FIELD(temp_v0, void **, 0xC);
        if ((temp_a1 != NULL) && (M2C_FIELD(temp_a1, s16 *, 2) != 0)) {
            M2C_FIELD(temp_a1, s32 *, 4) += M2C_FIELD(temp_v0, s32 *, 4) + 0x10;
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 0xC), void **, 8) = (void *) M2C_FIELD(temp_v0, void **, 8);
            temp_a0_2 = M2C_FIELD(temp_v0, void **, 8);
            if (temp_a0_2 != NULL) {
                M2C_FIELD(temp_a0_2, void **, 0xC) = (void *) M2C_FIELD(temp_v0, void **, 0xC);
            }
        }
    }
}
