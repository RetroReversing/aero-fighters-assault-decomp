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

void func_80302AB0(void *arg0) {
    s32 var_v0;
    void *var_v1;

    var_v0 = 0;
    var_v1 = arg0;
    __repair_rows: {
        var_v0 += 4;
        M2C_FIELD(var_v1, s32 *, 0x202C) = 0;
        M2C_FIELD(var_v1, f32 *, 0x2030) = 1.0f;
        M2C_FIELD(var_v1, f32 *, 0x2034) = 1.0f;
        M2C_FIELD(var_v1, u8 *, 0x2028) = 0xFF;
        M2C_FIELD(var_v1, f32 *, 0x2024) = -1.0f;
        M2C_FIELD(var_v1, s8 *, 0x2038) = 0;
        M2C_FIELD(var_v1, s32 *, 0x2050) = 0;
        M2C_FIELD(var_v1, f32 *, 0x2054) = 1.0f;
        M2C_FIELD(var_v1, f32 *, 0x2058) = 1.0f;
        M2C_FIELD(var_v1, u8 *, 0x204C) = 0xFF;
        M2C_FIELD(var_v1, f32 *, 0x2048) = -1.0f;
        M2C_FIELD(var_v1, s8 *, 0x205C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x2074) = 0;
        M2C_FIELD(var_v1, f32 *, 0x2078) = 1.0f;
        M2C_FIELD(var_v1, f32 *, 0x207C) = 1.0f;
        M2C_FIELD(var_v1, u8 *, 0x2070) = 0xFF;
        M2C_FIELD(var_v1, f32 *, 0x206C) = -1.0f;
        M2C_FIELD(var_v1, s8 *, 0x2080) = 0;
        M2C_FIELD(var_v1, s32 *, 0x2098) = 0;
        M2C_FIELD(var_v1, f32 *, 0x209C) = 1.0f;
        M2C_FIELD(var_v1, f32 *, 0x20A0) = 1.0f;
        M2C_FIELD(var_v1, u8 *, 0x2094) = 0xFF;
        M2C_FIELD(var_v1, f32 *, 0x2090) = -1.0f;
        M2C_FIELD(var_v1, s8 *, 0x20A4) = 0;
        var_v1 = (unsigned char *) var_v1 + 0x90;
    }
if (var_v0 != 0x40) goto __repair_rows;
    M2C_FIELD(arg0, s32 *, 0x2924) = (s32) M2C_FIELD(arg0, s32 *, 0x2928);
}
