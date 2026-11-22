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

M2C_UNK func_802AA418(s32, M2C_UNK, void *);        /* extern */
void *func_802AED6C(s32, M2C_UNK);                  /* extern */
M2C_UNK func_802BCEA0(void *);                      /* extern */
M2C_UNK func_802BCEAC(void *, M2C_UNK);             /* extern */
M2C_UNK func_80311B70(void *, s32);         /* extern */

void func_80312410(void *arg0) {
    void *sp2C;
    
    void *temp_a2;
    

    temp_a2 = func_802AED6C(M2C_FIELD(arg0, s32 *, 0x14), 1);
    sp2C = temp_a2;
    func_802BCEAC(temp_a2, -1);
    M2C_FIELD(sp2C, s32 *, 0x78) = (s32) (M2C_FIELD(sp2C, s32 *, 0x78) & 0xFFFF7FE7);
    func_802BCEA0(sp2C);
    temp_a2 = (unsigned char *) arg0 + 0x70;
    sp2C = temp_a2;
    func_80311B70(temp_a2, M2C_FIELD(arg0, s32 *, 0x3F8));
    func_802AA418(M2C_FIELD(arg0, s32 *, 0x14), 0, temp_a2);
    M2C_FIELD(arg0, s16 *, 0x400) = 0;
}
