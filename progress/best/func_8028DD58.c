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

void func_8028DD58(void *arg0, s16 arg1, s16 arg2, s32 *arg3) {
    char *var_t0;
    char *var_t0_2;
    
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *var_v1;
    void *var_v1_2;
    void *var_v1_3;

    if (arg1 == 1) {
        M2C_FIELD(arg0, s16 *, 0x124) = arg2;
        var_v0 = 0;
        var_t0 = arg3;
        var_v1 = arg0;
        if (M2C_FIELD(arg0, s16 *, 0x124) > 0) {
            do {
                var_v0 += 1;
                var_v1 = (unsigned char *) var_v1 + 4;
                M2C_FIELD(var_v1, s32 *, 0x6C) = (s32) *(s32 *)var_t0;
                var_t0 += 4;
            } while (var_v0 < M2C_FIELD(arg0, s16 *, 0x124));
        }
    }
    if (arg1 == 2) {
        M2C_FIELD(arg0, s16 *, 0x126) = arg2;
        var_v0_2 = 0;
        var_v1_2 = arg0;
        var_t0_2 = arg3;
        if (M2C_FIELD(arg0, s16 *, 0x126) > 0) {
            do {
                var_v0_2 += 1;
                var_v1_2 = (unsigned char *) var_v1_2 + 4;
                M2C_FIELD(var_v1_2, s32 *, 0xA8) = (s32) *(s32 *)var_t0_2;
                var_t0_2 += 4;
            } while (var_v0_2 < M2C_FIELD(arg0, s16 *, 0x126));
        }
    }
    if (arg1 == 3) {
        M2C_FIELD(arg0, s16 *, 0x128) = arg2;
        var_v0_3 = 0;
        var_v1_3 = arg0;
        var_t0_2 = arg3;
        if (M2C_FIELD(arg0, s16 *, 0x128) > 0) {
            do {
                var_v0_3 += 1;
                var_v1_3 = (unsigned char *) var_v1_3 + 4;
                M2C_FIELD(var_v1_3, s32 *, 0xE4) = (s32) *(s32 *)var_t0_2;
                var_t0_2 += 4;
            } while (var_v0_3 < M2C_FIELD(arg0, s16 *, 0x128));
        }
    }
}
