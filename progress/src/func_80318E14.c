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
s32 func_802D2730();
extern char D_8032BC74[];
extern char D_8032BC88[];

typedef struct { unsigned char pad[12]; int value; } __repair_field_C;
void func_80318E14(void *arg0, u16 arg1) {
    s32 var_a3;
s32 __repair_result_var_a3;

    __repair_result_var_a3 = ((__repair_field_C *)arg0)->value;
    M2C_FIELD(arg0, u16 *, 0x10) = (arg1 & 0xFFFF);
    if (__repair_result_var_a3 == 0) {
        func_80231A24(D_8032BC74, D_8032BC88, arg0, __repair_result_var_a3);
        *(s32 *)NULL = 0x29A;
        __repair_result_var_a3 = ((__repair_field_C *)arg0)->value;
    }
    func_802D2730(__repair_result_var_a3, M2C_FIELD(arg0, u16 *, 0x10), arg0);
}
