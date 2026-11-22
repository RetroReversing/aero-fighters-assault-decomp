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

M2C_UNK func_8021ACB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_8021B4B0(s32, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_8021B838(s32, M2C_UNK);                /* extern */
s32 func_8021BA90();                                /* extern */
M2C_UNK func_8022A0D0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80287580(void *, s32, s32);            /* extern */
M2C_UNK func_802AB22C(s32, void *);                 /* extern */
M2C_UNK func_802D9870(void *);                      /* extern */
M2C_UNK func_802D9BF4(void *, s32, s32, s32);       /* extern */
M2C_UNK func_80318D84(void *, s32, s32, s32);       /* extern */
M2C_UNK math_mtx4Identity(M2C_UNK *);               /* extern */
extern M2C_UNK D_80324728;
extern M2C_UNK D_80324758;
extern M2C_UNK D_803247D0;
extern M2C_UNK D_803247F8;

s32 func_802A05EC(void *arg0) {
    M2C_UNK sp184;
    M2C_UNK sp154;
    M2C_UNK spDC;
    s32 spB4;
    s32 sp8C;
    M2C_UNK sp4C;
    M2C_UNK *var_s0;
    M2C_UNK *var_s0_2;
    s32 *var_s2_2;
    s32 *var_s3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *var_s1;
    void *var_s1_2;
    void *var_s2;
    void *var_s3;

    M2C_MEMCPY_ALIGNED(&sp154, &D_80324728, 0x30);
    var_s1 = (unsigned char *) arg0 + 0xE94;
    var_s0 = &sp154;
    var_s2 = arg0;
    var_s3 = arg0;
    do {
        func_802D9870(var_s1);
        func_802D9BF4(var_s1, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s32 *, 8));
        func_802AB22C(M2C_FIELD(arg0, s32 *, 0x14), var_s1);
        var_s0 += 0xC;
        M2C_FIELD(var_s2, s8 *, 0x5AAC) = 1;
        M2C_FIELD(var_s3, s32 *, 0x5AB8) = 0xFFFF;
        var_s1 = (unsigned char *) var_s1 + 0x8D4;
        var_s2 = (unsigned char *) var_s2 + 1;
        var_s3 = (unsigned char *) var_s3 + 4;
    } while ((u32) var_s0 < (u32) &sp184);
    M2C_MEMCPY_ALIGNED(&spDC, &D_80324758, 0x78);
    M2C_MEMCPY_ALIGNED(&spB4, &D_803247D0, 0x24);
    M2C_FIELD(&spB4, s32 *, 0x24) = (s32) M2C_FIELD(&D_803247D0, s32 *, 0x24);
    M2C_MEMCPY_ALIGNED(&sp8C, &D_803247F8, 0x24);
    var_s1_2 = (unsigned char *) arg0 + 0x31E4;
    var_s2_2 = &spB4;
    var_s3_2 = &sp8C;
    var_s0_2 = &spDC;
    M2C_FIELD(&sp8C, s32 *, 0x24) = (s32) M2C_FIELD(&D_803247F8, s32 *, 0x24);
    do {
        func_80287580(var_s1_2, *var_s2_2, *var_s3_2);
        func_80318D84(var_s1_2, M2C_FIELD(var_s0_2, s32 *, 0), M2C_FIELD(var_s0_2, s32 *, 4), M2C_FIELD(var_s0_2, s32 *, 8));
        func_802AB22C(M2C_FIELD(arg0, s32 *, 0x14), var_s1_2);
        var_s0_2 += 0xC;
        var_s1_2 = (unsigned char *) var_s1_2 + 0x414;
        var_s2_2 += 4;
        var_s3_2 += 4;
    } while (var_s0_2 != &sp154);
    temp_v0 = func_8021BA90();
    M2C_FIELD(arg0, s32 *, 0x5AB0) = temp_v0;
    func_8021ACB0(temp_v0, 0x121);
    func_8021B838(M2C_FIELD(arg0, s32 *, 0x5AB0), 3);
    math_mtx4Identity(&sp4C);
    func_8022A0D0(&sp4C, 0xC4008000, 0x443B8000, 0x43420000);
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 0x5AB0), 0, &sp4C);
    temp_v0_2 = func_8021BA90();
    M2C_FIELD(arg0, s32 *, 0x5AB4) = temp_v0_2;
    func_8021ACB0(temp_v0_2, 0x120);
    func_8021B838(M2C_FIELD(arg0, s32 *, 0x5AB4), 3);
    math_mtx4Identity(&sp4C);
    func_8022A0D0(&sp4C, 0x44DADCCD, 0x4449ECCD, 0x434D4CCD);
    func_8021B4B0(M2C_FIELD(arg0, s32 *, 0x5AB4), 0, &sp4C);
    return 1;
}
