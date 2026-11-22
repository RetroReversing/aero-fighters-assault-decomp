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

s32 func_80231A24();
f32 func_80302D48();
s32 func_80302D78();
s32 func_80302D90();
extern char D_8032A320[];
extern char D_8032A348[];
extern u8 D_8032AA80;

void func_80302908(void *arg0, s32 arg1, f32 arg2, f32 arg3) {
    if (arg1 == 0xFF) {
        func_80231A24(D_8032A320);
        return;
    }
    if ((D_8032AA80 != 0x1E) && (M2C_FIELD(arg0, s32 *, 0x2924) != M2C_FIELD(M2C_FIELD(arg0, void **, 0x2928), s32 *, 0x1C))) {
        if (func_80302D78() != 0) {
            func_80231A24(D_8032A348, func_80302D90(arg0, arg1));
            return;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2928), s32 *, 8) = arg1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2928), f32 *, 0xC) = (f32) (func_80302D48(arg0, arg1) + arg2);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2928), f32 *, 0x10) = arg3;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2928), u8 *, 4) = 0xFF;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2928), f32 *, 0) = -1.0f;
        M2C_FIELD(arg0, void **, 0x2928) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2928), void **, 0x1C);
    }
}
