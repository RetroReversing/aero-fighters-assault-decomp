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

s32 func_80232EE0();
extern char D_80283530[];
extern s32 D_80283930;

void func_80232004(s32 arg0, s32 arg1, f32 arg2) {
    s32 *__base_D_80283930;
    char *var_s0;
    s32 temp_v1;
    void *var_v0;

    __base_D_80283930 = &D_80283930;
    temp_v1 = (*__base_D_80283930);
    if (temp_v1 > 0) {
        var_s0 = D_80283530;
        do {
            if (arg2 <= M2C_FIELD(var_s0, f32 *, 8)) {
                var_v0 = (temp_v1 * 0x10) + D_80283530;
            } else {
                func_80232EE0(arg0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, u16 *, 6), M2C_FIELD(var_s0, u8 *, 4), 0);
                var_v0 = ((*__base_D_80283930) * 0x10) + D_80283530;
            }
            var_s0 += 0x10;
        } while ((u32) var_s0 < (u32) var_v0);
    }
}
