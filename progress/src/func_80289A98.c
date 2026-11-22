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

void func_80228DE0(void *, void *);
void math_mtx4Identity(f32 *);

void func_80289A98(s8 *arg0, void *arg1) {
    M2C_UNK sp28[16];
    M2C_UNK sp20, sp24;

    math_mtx4Identity((f32 *)sp28);
    *(f32 *)&sp28[12] = M2C_FIELD(arg1, f32 *, 0x30);
    *(f32 *)&sp28[13] = M2C_FIELD(arg1, f32 *, 0x34);
    *(f32 *)&sp28[14] = M2C_FIELD(arg1, f32 *, 0x38);
    func_80228DE0(arg0 + 0xCAC, arg1);
    M2C_FIELD(arg0, s8 *, 0xD54) = 1;
    func_80228DE0(arg0 + 4, arg1);
    M2C_FIELD(arg0, s8 *, 0xAC) = 1;
    func_80228DE0(arg0 + 0x16E8, arg1);
    M2C_FIELD(arg0, s8 *, 0x1790) = 1;
}
