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

M2C_UNK func_8021B6D4(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK math_mtx4Identity(M2C_UNK *);                   /* extern */
M2C_UNK func_802297A8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */

void func_80314640(void *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3) {
int *__repair_home2 = &arg2;

    M2C_UNK sp38;
    s32 var_s0;
    s32 var_s1;

    math_mtx4Identity(arg1);
    math_mtx4Identity(&sp38);
    var_s0 = 0;
    if (arg3 > 0) {
        var_s1 = (*__repair_home2);
        do {
            func_8021B6D4(M2C_FIELD(arg0, s32 *, 4), var_s1, &sp38);
            func_802297A8(arg1, arg1, &sp38);
            var_s0 += 1;
            var_s1 += 1;
        } while (var_s0 != arg3);
    }
}
