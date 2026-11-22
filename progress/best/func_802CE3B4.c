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

M2C_UNK func_8021F35C(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8021F4E4();                            /* extern */
M2C_UNK func_8021FCD0();                            /* extern */
M2C_UNK func_8022331C();                            /* extern */
M2C_UNK func_8022337C();                            /* extern */
M2C_UNK func_8022342C(M2C_UNK);                     /* extern */

void func_802CE3B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12) {
int *__repair_home0 = &arg0;

    s32 sp34;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;

    func_8022331C();
    func_8022342C(0x400000);
    func_8021F4E4();
    temp_a1 = arg3 - arg12;
    sp34 = temp_a1;
    func_8021F35C((*__repair_home0), temp_a1, 0, 0, 0, arg4, arg5, arg6, arg7);
    func_8021F35C(arg2, temp_a1, 0, 0, 0, arg4, arg5, arg6, arg7);
    func_8021F35C(arg2, arg3, 0, 0, 0, arg4, arg5, arg6, arg7);
    func_8021F35C((*__repair_home0), arg3, 0, 0, 0, arg4, arg5, arg6, arg7);
    func_8021FCD0();
    func_8021F4E4();
    temp_a0 = arg2 - arg12;
    sp34 = temp_a0;
    func_8021F35C(temp_a0, arg1, 0, 0, 0, arg8, arg9, arg10, arg11);
    func_8021F35C(arg2, arg1, 0, 0, 0, arg8, arg9, arg10, arg11);
    func_8021F35C(arg2, arg3, 0, 0, 0, arg8, arg9, arg10, arg11);
    func_8021F35C(temp_a0, arg3, 0, 0, 0, arg8, arg9, arg10, arg11);
    func_8021FCD0();
    func_8021F4E4();
    func_8021F35C((*__repair_home0), arg1, 0, 0, 0, arg8, arg9, arg10, arg11);
    func_8021F35C(arg2, arg1, 0, 0, 0, arg8, arg9, arg10, arg11);
    temp_a1_2 = arg1 + arg12;
    sp34 = temp_a1_2;
    func_8021F35C(arg2, temp_a1_2, 0, 0, 0, arg8, arg9, arg10, arg11);
    func_8021F35C((*__repair_home0), temp_a1_2, 0, 0, 0, arg8, arg9, arg10, arg11);
    func_8021FCD0();
    func_8021F4E4();
    func_8021F35C((*__repair_home0), arg1, 0, 0, 0, arg4, arg5, arg6, arg7);
    temp_a0_2 = (*__repair_home0) + arg12;
    sp34 = temp_a0_2;
    func_8021F35C(temp_a0_2, arg1, 0, 0, 0, arg4, arg5, arg6, arg7);
    func_8021F35C(temp_a0_2, arg3, 0, 0, 0, arg4, arg5, arg6, arg7);
    func_8021F35C((*__repair_home0), arg3, 0, 0, 0, arg4, arg5, arg6, arg7);
    func_8021FCD0();
    func_8022337C();
}
