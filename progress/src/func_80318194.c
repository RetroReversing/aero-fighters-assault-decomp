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

s32 func_80231A24();
s32 func_802D2574();
extern char D_8032B92C[];
extern char D_8032B940[];

void func_80318194(void *arg0) {
    s32 var_a1;

    var_a1 = M2C_FIELD(arg0, s32 *, 0xC);
    if (var_a1 == 0) {
        func_80231A24(D_8032B92C, D_8032B940, arg0);
        *(s32 *)NULL = 0x29A;
        var_a1 = M2C_FIELD(arg0, s32 *, 0xC);
    }
    func_802D2574(var_a1);
}
