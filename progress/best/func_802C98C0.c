/* adapted from similar verified C in func_80388BBC_packed_program_02 in Banjo-Kazooie (matched), with its names changed by decompdecomp */
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

M2C_UNK func_802AEDD4(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK D_8032AA60;

void func_802C98C0(s32 arg0, s32 arg1) {
    func_802AEDD4(M2C_FIELD(&D_8032AA60, s32 *, 0x14), 9, arg0);
    func_802AEDD4(M2C_FIELD(&D_8032AA60, s32 *, 0x14), 0xA, arg1);
}
