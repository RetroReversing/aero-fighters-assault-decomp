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

s32 func_80223FC4();
s32 func_802B183C();
s32 func_802CA0CC();
s32 func_802CA300();
s32 func_802CB998();
u8 func_802CD1F4();
s32 func_8030BF18();
s32 func_8030BFA0();
extern s8 D_8032AA80;
extern u8 D_8032AA90;

u8 func_802CC430(void *arg0) {
    u8 sp27;
    s32 var_v0;

    sp27 = 1;
    func_802CB998(arg0, 1);
    if ((func_80223FC4(0, 0x1000) != 0) || (func_80223FC4(0, 0x8000) != 0)) {
        var_v0 = *M2C_FIELD(arg0, u8 **, 0x28);
        if (var_v0 == 0) {
            func_8030BF18(0);
            func_8030BFA0(0);
            if (D_8032AA90 != 0) {
                func_802CA300(arg0);
            } else {
                D_8032AA80 = 0x10;
                func_802B183C(M2C_FIELD(arg0, s32 *, 8));
                sp27 = func_802CD1F4(arg0, 8);
            }
            var_v0 = *M2C_FIELD(arg0, u8 **, 0x28);
        }
        if (var_v0 == 1) {
            func_802CA0CC(arg0);
        }
        func_802B183C(M2C_FIELD(arg0, s32 *, 8));
    } else if (func_80223FC4(0, 0x4000) != 0) {
        func_802B183C(M2C_FIELD(arg0, s32 *, 8));
        func_802CA0CC(arg0);
    }
    return sp27;
}
