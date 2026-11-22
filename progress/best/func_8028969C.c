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

s32 func_8021BAE0();
s32 func_803207A4();
s32 func_80320CFC();

void func_8028969C(void *arg0, s32 arg1) {
int *__repair_home1 = &arg1;

    s32 temp_a0;

    func_80320CFC(arg0, (*__repair_home1) & 0xFF);
    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_a0 != 0xFFFF) {
            func_8021BAE0(temp_a0);
            M2C_FIELD(arg0, s32 *, 4) = 0xFFFF;
        }
        func_803207A4(arg0, 0);
    }
}
