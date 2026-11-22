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

M2C_UNK func_80205AA0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_80205E0C(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8021B838(s32, M2C_UNK);                /* extern */
M2C_UNK func_8021BAE0(s32);                         /* extern */

void func_8028E0E0(void *arg0, M2C_UNK arg1, s32 arg2) {
char *__repair_addr;

int *__repair_home2 = &arg2;

    s32 temp_a0;

    if ((*__repair_home2) & 0xFF) {
        M2C_FIELD(arg0, s8 *, 0xC4) = 1;
        func_80205AA0(0, 1);
__repair_addr = (char *)(M2C_FIELD(arg0, void **, 0));

        M2C_FIELD(__repair_addr, s32 *, 0x7168) = 9;
        func_80205E0C(0, 9);
        func_8021B838(M2C_FIELD(arg0, s32 *, 0xC8), 2);
        M2C_FIELD(arg0, s8 *, 0x129) = 0;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xC4) = 0;
    func_8021B838(M2C_FIELD(arg0, s32 *, 0xC8), 0);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_a0 != 0xFFFF) {
        func_8021BAE0(temp_a0);
    }
    M2C_FIELD(arg0, s8 *, 0x129) = 1;
}
