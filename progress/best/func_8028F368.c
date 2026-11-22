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

s32 func_8021F35C();
s32 func_8021F4E4();
s32 func_8021FCD0();
s32 func_80223468();
f32 func_802AED5C();

void func_8028F368(void *arg0) {
    f32 __repair_fzero = 0.0f;

    s32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp5C;                                       /* compiler-managed */
    f32 sp58;                                       /* compiler-managed */
    s32 sp54;
    f32 sp50;
f32 __repair_phase_sp50;                                       /* compiler-managed */
    f32 sp4C;                                       /* compiler-managed */
    f32 sp48;                                       /* compiler-managed */
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    f32 temp_fa0;
    f32 temp_ft3_2;
    f32 temp_ft4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_ft0;
    
    s32 temp_ft1;
    s32 temp_ft1_2;
    s32 temp_ft2;
    s32 temp_ft2_2;
    s32 temp_ft2_3;
    s32 temp_ft3;
    s32 temp_ft5;
    s32 temp_ft5_2;
    s32 temp_ft5_3;
    s32 temp_s0;
    s32 var_s0;
    s32 var_v0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x310);
    var_s0 = (s32) (temp_fv0 * 255.0f);
    if (var_s0 >= 0x100) {
        var_s0 = 0xFF;
    }
    var_v0 = (s32) (temp_fv0 * 64.0f);
    if (var_v0 >= 0x41) {
        var_v0 = 0x40;
    }
    sp78 = var_v0;
    func_80223468(0xFFF);
    func_8021F4E4();
    temp_fa0 = (f32) 0x58;
    temp_fv0_2 = (f32) 0x82;
    __repair_phase_sp50 = temp_fa0;
    temp_ft4 = temp_fa0 - 24.0f;
    sp5C = temp_fv0_2;
    temp_fv1 = temp_fv0_2 - 24.0f;
    sp4C = temp_ft4;
    temp_ft5 = (s32) temp_ft4;
    sp58 = temp_fv1;
    temp_ft2 = (s32) temp_fv1;
    sp40 = temp_ft5;
    sp54 = temp_ft2;
    do { func_8021F35C(temp_fa0, 0x41C00000, temp_ft2, temp_ft5, 0, 0, 0); } while (0);
    temp_fv0_2 = temp_fv0_2 + 24.0f;
    temp_ft1 = (s32) temp_fv0_2;
    sp48 = temp_fv0_2;
    sp44 = temp_ft1;
    func_8021F35C(M2C_BITWISE(f32, temp_ft1), temp_ft5, 0, 0, 0, 0xFF, 0, 0, sp78);
    temp_fv0_3 = __repair_phase_sp50 + 24.0f;
    temp_ft5_2 = (s32) temp_fv0_3;
    sp5C = temp_fv0_3;
    sp3C = temp_ft5_2;
    func_8021F35C(M2C_BITWISE(f32, temp_ft1), temp_ft5_2, 0, 0, 0, 0xFF, 0, 0, sp78);
    func_8021F35C(M2C_BITWISE(f32, temp_ft2), temp_ft5_2, 0, 0, 0, 0xFF, 0, 0, sp78);
    func_8021FCD0();
    func_8021F4E4();
    func_8021F35C(M2C_BITWISE(f32, temp_ft2), temp_ft5, 0, 0, 0, 0xFF, 0, 0, var_s0);
    temp_ft3 = (s32) (sp58 + 2.0f);
    sp50 = temp_ft3;
    func_8021F35C(M2C_BITWISE(f32, temp_ft3), temp_ft5, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft3), temp_ft5_2, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft2), temp_ft5_2, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021FCD0();
    func_8021F4E4();
    temp_ft2_2 = (s32) (sp48 - 2.0f);
    sp58 = temp_ft2_2;
    func_8021F35C(M2C_BITWISE(f32, temp_ft2_2), temp_ft5, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft1), temp_ft5, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft1), temp_ft5_2, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft2_2), temp_ft5_2, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021FCD0();
    func_8021F4E4();
    temp_ft1_2 = (s32) (sp5C - 2.0f);
    sp58 = temp_ft1_2;
    func_8021F35C(M2C_BITWISE(f32, temp_ft2), temp_ft1_2, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft1), temp_ft1_2, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft1), temp_ft5_2, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft2), temp_ft5_2, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021FCD0();
    func_8021F4E4();
    func_8021F35C(M2C_BITWISE(f32, temp_ft2), temp_ft5, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft1), temp_ft5, 0, 0, 0, 0xFF, 0, 0, var_s0);
    temp_ft0 = (s32) (sp4C + 2.0f);
    sp5C = temp_ft0;
    func_8021F35C(M2C_BITWISE(f32, temp_ft1), temp_ft0, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021F35C(M2C_BITWISE(f32, temp_ft2), temp_ft0, 0, 0, 0, 0xFF, 0, 0, var_s0);
    func_8021FCD0();
    temp_fv0_4 = M2C_FIELD(arg0, f32 *, 0x30C);
    temp_fv1_3 = 16.0f * temp_fv0_4;
    temp_fv0_4 = 255.0f * temp_fv0_4;
    sp74 = temp_fv1_3;
    sp70 = temp_fv1_3;
    sp6C = temp_fv0_4;
    func_80223468(0x5B);
    func_8021F4E4();
    temp_ft0 = (s32) sp74;
    temp_ft2_3 = (s32) sp70;
    temp_ft5_3 = (s32) temp_fv0_4;
    temp_a0 = 0x82 - temp_ft0;
    temp_a1 = 0x58 - temp_ft2_3;
    sp48 = temp_a1;
    sp50 = temp_a0;
    sp58 = temp_ft2_3;
    sp54 = temp_ft5_3;
    func_8021F35C(M2C_BITWISE(f32, temp_a0), temp_a1, 0, -0x400, -0x400, 0xFF, 0, 0, temp_ft5_3);
    temp_ft0 = temp_ft0 + 0x82;
    sp4C = temp_ft0;
    func_8021F35C(M2C_BITWISE(f32, temp_ft0), temp_a1, 0, 0x400, -0x400, 0xFF, 0, 0, sp54);
    temp_s0 = (0x58) + (sp58);
    func_8021F35C(M2C_BITWISE(f32, temp_ft0), temp_s0, 0, 0x400, 0x400, 0xFF, 0, 0, sp54);
    func_8021F35C(M2C_BITWISE(f32, temp_a0), temp_s0, 0, -0x400, 0x400, 0xFF, 0, 0, sp54);
    func_8021FCD0();
    func_80223468(0xFFF);
    temp_fv0_5 = func_802AED5C(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x30C) += temp_fv0_5;
    if (M2C_FIELD(arg0, f32 *, 0x30C) > 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x30C) = __repair_fzero;
    }
    M2C_FIELD(arg0, f32 *, 0x310) += temp_fv0_5;
}
