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

M2C_UNK func_802D0154(void *, f32, M2C_UNK);        /* extern */
extern f32 D_80342F20;

void func_802D3D4C(void *arg0, f32 arg1) {
    f32 temp_fv0;
    void *temp_s1;

    temp_s1 = (unsigned char *) arg0 + 0x2C;
    func_802D0154(temp_s1, -M2C_FIELD(arg0, f32 *, 0x28), 0x79);
    func_802D0154(temp_s1, -M2C_FIELD(arg0, f32 *, 0x24), 0x78);
    func_802D0154(temp_s1, -M2C_FIELD(arg0, f32 *, 0x20), 0x7A);
    temp_fv0 = D_80342F20 * arg1;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_fv0;
    func_802D0154(temp_s1, temp_fv0, 0x7A);
    func_802D0154(temp_s1, M2C_FIELD(arg0, f32 *, 0x24), 0x78);
    func_802D0154(temp_s1, M2C_FIELD(arg0, f32 *, 0x28), 0x79);
}
