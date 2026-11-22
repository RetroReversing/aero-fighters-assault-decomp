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

s32 func_8021BAE0();

void func_802926C0(void *arg0) {
    s32 var_s0;
    
    void *var_s1;
    void *var_s1_2;

    func_8021BAE0(M2C_FIELD(arg0, s32 *, 4));
    var_s0 = 0;
    var_s1 = arg0;
    do {
        func_8021BAE0(M2C_FIELD(var_s1, s32 *, 0x28C));
        var_s0 += 4;
        var_s1 = (unsigned char *) var_s1 + 4;
    } while (var_s0 < 0xC);
    var_s0 = 0;
    var_s1_2 = arg0;
    do {
        func_8021BAE0(M2C_FIELD(var_s1_2, s32 *, 0x2A4));
        var_s0 += 4;
        var_s1_2 = (unsigned char *) var_s1_2 + 4;
    } while (var_s0 != 0x14);
    func_8021BAE0(M2C_FIELD(arg0, s32 *, 0x284));
}
