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

extern s32 D_8025C600;

typedef struct { unsigned char pad_0[2]; unsigned char field_2; unsigned char pad_3[9]; int field_C; } __repair_record_temp_v1;
u16 func_8021E3D0(s32 arg0) {
    void *temp_v1;

    temp_v1 = (arg0 * 0x18) + D_8025C600;
    return *(s32 *)(((__repair_record_temp_v1*)temp_v1)->field_C + (((__repair_record_temp_v1*)temp_v1)->field_2 * 8));
}
