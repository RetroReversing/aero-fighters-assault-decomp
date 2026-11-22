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

s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E83C();
s32 func_8021E87C();
s32 func_8021EC9C();
s32 func_8022FF90();
s32 func_8023413C();
s32 func_802344F4();
s32 func_802CE2E0();
extern s32 D_803240E0;
extern f64 D_8033FD78;

void func_8029678C(void *arg0) {
    u8 spBC[2];
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    f64 temp_fs1;
    f64 var_fs0;
    s32 temp_s0;
    
    s32 var_s2;
    u32 temp_a0;
u32 __repair_phase_temp_a0;
    
    u32 var_s0;

    func_8021E66C(1);
    func_8022FF90(D_803240E0);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x5B44);
    var_s2 = func_802CE2E0(D_803240E0, 0, 0x140);
    if ((temp_s0 >= 0)) {
        if ((M2C_FIELD(arg0, u8 *, 0) != 0)) {
            var_fv1 = 0.0f;
            var_fv0 = 255.0f - M2C_FIELD(arg0, f32 *, 8);
            if (var_fv0 < 0.0f) {
                var_fv0 = var_fv1;
            } else {
                var_fv1 = 100.0f;
                if (var_fv0 > 100.0f) {
                    var_fv0 = var_fv1;
                }
            }
            { func_802344F4(temp_s0, 7, 0xFF, 0xFF, 0xFF, (s32) var_fv0, 0); }
        }
    }
    func_8023413C(M2C_FIELD(arg0, s32 *, 0x5B44));
    temp_fv0 = (f32) 0x12 * 2.0f;
    var_s0 = 0;
    M2C_FIELD(arg0, f32 *, 0x5B4C) += 0.5f;
    if (temp_fv0 < M2C_FIELD(arg0, f32 *, 0x5B4C)) {
        M2C_FIELD(arg0, f32 *, 0x5B4C) = (f32) -((f32) 0x12 * 2.0f);
    }
    temp_fs1 = D_8033FD78;
    do { {
        temp_fa0 = (f32) var_s0;
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0x5B4C);
        if (temp_fa0 < temp_fv1) {
            var_fv0_2 = temp_fv1 - temp_fa0;
        } else {
            var_fv0_2 = -(temp_fv1 - temp_fa0);
        }
        spBC[1] = 0;
        spBC[0] = *(u8 *)(D_803240E0 + var_s0);
        if (var_fv0_2 <= 4.0f) {
            var_fs0 = temp_fs1 / (f64) (var_fv0_2 + 1.0f);
        } else {
            var_fs0 = 0.0;
        }
        do { func_8021E708(temp_fa0, 0, 0U, 0); } while (0);
        func_8021E87C(var_s2 + 1, (s32) (25.0f - 1.0f));
        if (M2C_FIELD(arg0, u8 *, 0) != 0) {
            temp_a0 = (u32) (f32) var_fs0;
            func_8021E708(M2C_BITWISE(f32, temp_a0), 0xFF, temp_a0, (s32) (255.0f - M2C_FIELD(arg0, f32 *, 8)) & 0xFF);
        } else {
            __repair_phase_temp_a0 = (u32) (f32) var_fs0;
            func_8021E708(M2C_BITWISE(f32, __repair_phase_temp_a0), 0xFF, __repair_phase_temp_a0);
        }
        func_8021E87C(var_s2, (s32) 25.0f, spBC);
        var_s2 += func_8021E83C(spBC);
        func_8021EC9C();
        temp_s0 = (var_s0 + 1) & 0xFF;
        var_s0 = (u32) temp_s0;
    }
} while (temp_s0 < 0x12);
}
