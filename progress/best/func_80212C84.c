/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24();
s32 func_80234C78(f32,  s32);
s32 func_80234D30();
extern char D_80252EA8[];
extern char D_80252ED0[];
extern char D_80252EE4[];
extern char D_80252EF8[];
extern char D_80252F0C[];

s32 func_80212C84(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp44[3];
    f32 sp38[3];
    void *sp28;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = (unsigned)arg0 + (arg1 * 0x10);
    temp_fv0 = (f32) (*(s16 *)((char *)(temp_v1) + 0));
    temp_s1 = arg0 + ((u32)arg3 * 0x10);
    temp_fv1 = (f32) (*(s16 *)((char *)(temp_v1) + 2));
    temp_fa0 = (f32) (*(s16 *)((char *)(temp_v1) + 4));
    temp_s0 = (void *)(arg0); temp_s0 = (void *)((char *)temp_s0 + (s32)((arg2 * 0x10)));
    sp44[0] = (f32) (*(s16 *)((char *)(temp_s0) + 0)) - temp_fv0;
    sp44[1] = (f32) (*(s16 *)((char *)(temp_s0) + 2)) - temp_fv1;
    sp44[2] = (f32) (*(s16 *)((char *)(temp_s0) + 4)) - temp_fa0;
    sp38[0] = (f32) (*(s16 *)((char *)(temp_s1) + 0)) - temp_fv0;
    sp38[1] = (f32) (*(s16 *)((char *)(temp_s1) + 2)) - temp_fv1;
    sp28 = temp_v1;
    sp38[2] = (f32) (*(s16 *)((char *)(temp_s1) + 4)) - temp_fa0;
    do { func_80234C78(temp_fa0,  arg4); } while (0);
    if (func_80234D30(arg4, arg4) == 0) {
        func_80231A24(D_80252EA8);
        func_80231A24(D_80252ED0, arg1, arg2, arg3);
        func_80231A24(D_80252EE4, (s32) (*(s16 *)((char *)(sp28) + 0)), (s32) (*(s16 *)((char *)(sp28) + 2)), (s32) (*(s16 *)((char *)(sp28) + 4)));
        func_80231A24(D_80252EF8, (s32) (*(s16 *)((char *)(temp_s0) + 0)), (s32) (*(s16 *)((char *)(temp_s0) + 2)), (s32) (*(s16 *)((char *)(temp_s0) + 4)));
        func_80231A24(D_80252F0C, (s32) (*(s16 *)((char *)(temp_s1) + 0)), (s32) (*(s16 *)((char *)(temp_s1) + 2)), (s32) (*(s16 *)((char *)(temp_s1) + 4)));
        return 0;
    }
    return 1;
}
