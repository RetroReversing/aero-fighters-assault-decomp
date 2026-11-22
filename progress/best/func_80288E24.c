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

extern void func_8021B240(s32, s32, s32, s32);
extern f32 func_80316B10(s8 *, s32, f32, f32);
extern s32 func_802AA9B0(s32, s32 *);
extern void func_80289BDC(s32, s32);
extern void func_80289DF8(s32, f32, s32, s32, f32, f32, f32);
extern s32 D_8032B734;
extern void *jtbl_8033EA50[10];

s32 func_80288E24(s8 *arg0, f32 fA, f32 fB, s32 arg3) {
    f32 v;
    s32 sp78;
    s32 h;
    s32 sp34[16];

    v = 0.0f;
    sp78 = 0;
    switch (arg3) {
    case 0:
        v = func_80316B10(arg0, M2C_FIELD(arg0, s32 *, 0x44), fB, fA);
        break;
    case 1:
        if (0.0f < M2C_FIELD(arg0, f32 *, 0xB88)) {
            v = func_80316B10(arg0, M2C_FIELD(arg0, s32 *, 0x44), fB, fA);
            M2C_FIELD(arg0, f32 *, 0xB88) = M2C_FIELD(arg0, f32 *, 0xB88) - v;
            if (M2C_FIELD(arg0, f32 *, 0xB88) <= 0.0f) {
                func_8021B240(M2C_FIELD(arg0, s32 *, 4), 2, 10, 0);
                func_8021B240(M2C_FIELD(arg0, s32 *, 4), 3, 6, 0);
            }
        }
        break;
    case 2:
        if (0.0f < M2C_FIELD(arg0, f32 *, 0xB8C)) {
            v = func_80316B10(arg0, M2C_FIELD(arg0, s32 *, 0x44), fB, fA);
            M2C_FIELD(arg0, f32 *, 0xB8C) = M2C_FIELD(arg0, f32 *, 0xB8C) - v;
            if (M2C_FIELD(arg0, f32 *, 0xB8C) <= 0.0f) {
                func_8021B240(M2C_FIELD(arg0, s32 *, 4), 2, 12, 0);
                func_8021B240(M2C_FIELD(arg0, s32 *, 4), 3, 8, 0);
            }
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        break;
    }
    M2C_FIELD(arg0, f32 *, 0x4C) = M2C_FIELD(arg0, f32 *, 0x4C) - v;
    if (M2C_FIELD(arg0, f32 *, 0x4C) <= 2.0f) {
        sp78 = M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x4C) = 2.0f;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        h = M2C_FIELD(arg0, s32 *, 0xB94);
        if (h == 0) {
            void *p = M2C_FIELD(arg0, void **, 0x1A0);
            M2C_FIELD(p, M2C_UNK (**)(s8 *, s32 *), 0x64)(M2C_FIELD(p, s16 *, 0x60) + arg0, sp34);
            h = func_802AA9B0(D_8032B734, sp34);
            M2C_FIELD(arg0, s32 *, 0xB94) = h;
        }
        if (h != 0) {
            func_80289BDC(h, 0x42480000);
            func_80289DF8(h, 1.0f, 0x3E800000, 0, 1.0f, 1.0f, 0.75f);
        }
        M2C_FIELD(arg0, s8 *, 0xB98) = 1;
    }
    return sp78;
}
