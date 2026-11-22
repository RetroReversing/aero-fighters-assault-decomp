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

s32 func_80223C3C();
u64 func_8022B5E0();
s32 func_80231A24();
extern s32 D_80275110;

s32 func_80223840(s32 arg0) {
    s32 *sp1C;
    s32 sp18;
    char *var_a2;
    s32 var_a3;

    var_a2 = &D_80275110;
    var_a3 = 0;
loop_1:
    if (*(s32 *)var_a2 != 0) {
        var_a3 += 1;
        var_a2 += 0x10;
        if (var_a3 != 2) {
            goto loop_1;
        }
    }
    if (var_a3 == 2) {
        func_80231A24("Ran out of IFF file ids.  (IFF_NIFFS==%d)", 2, var_a2);
        return -1;
    }
    M2C_FIELD(var_a2, s32 *, 0) = arg0;
    sp18 = var_a3;
    sp1C = var_a2;
    M2C_FIELD(var_a2, s32 *, 8) = (s32) ((u32) func_8022B5E0(arg0 + 4, 4, var_a2) + 8);
    M2C_FIELD(var_a2, u32 *, 4) = (u32) func_8022B5E0(arg0 + 8, 4, var_a2);
    func_80223C3C(sp18);
    return sp18;
}
