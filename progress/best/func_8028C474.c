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

s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E87C();
s32 func_8021F35C();
s32 func_8021F4E4();
s32 func_8021FCD0();
s32 func_802233EC();
s32 func_8022342C();
s32 func_8023413C();
s32 func_8028C9D0();
extern char D_80323584[];
extern char D_8032358C[];
extern char D_80323590[];

void func_8028C474(void *arg0) {
    s32 var_s1;
    
    s32 var_s1_3;
    s32 var_s2;
    void *var_s0;
    
    

    func_8028C9D0(arg0, D_80323584, M2C_FIELD(arg0, s32 *, 0x10));
    func_8022342C(0x400000);
    func_8021F4E4();
    func_8021F35C(0x19, 0x15, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0xD7, 0x15, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0xD7, 0xC0, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0x19, 0xC0, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021FCD0();
    func_8021F4E4();
    func_8021F35C(0xE3, 0x64, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0x124, 0x64, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0x124, 0x7D, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021F35C(0xE3, 0x7D, 0, 0, 0, 0, 0x30, 0, 0xFF);
    func_8021FCD0();
    func_802233EC(0x400000);
    func_8021E708(0, 0xFF, 0, (s32) (M2C_FIELD(arg0, f32 *, 0x12C) * 255.0f) & 0xFF);
    func_8021E66C(1);
    var_s2 = 0xB1;
    if (M2C_FIELD(arg0, s16 *, 0x12A) == 0) {
        var_s1 = 0;
        var_s0 = arg0;
        if (M2C_FIELD(arg0, s16 *, 0x124) > 0) {
            do {
                func_8021E87C(0x1E, var_s2, M2C_FIELD(var_s0, s32 **, 0x70));
                var_s1 += 1;
                var_s2 -= 0xA;
                var_s0 = (unsigned char *) var_s0 + 4;
            } while (var_s1 < M2C_FIELD(arg0, s16 *, 0x124));
        }
    }
    if (M2C_FIELD(arg0, s16 *, 0x12A) == 1) {
        var_s1 = 0;
        var_s0 = arg0;
        if (M2C_FIELD(arg0, s16 *, 0x126) > 0) {
            do {
                func_8021E87C(0x1E, var_s2, M2C_FIELD(var_s0, s32 **, 0xAC));
                var_s1 += 1;
                var_s2 -= 0xA;
                var_s0 = (unsigned char *) var_s0 + 4;
            } while (var_s1 < M2C_FIELD(arg0, s16 *, 0x126));
        }
    }
    if (M2C_FIELD(arg0, s16 *, 0x12A) == 2) {
        var_s1_3 = 0;
        var_s0 = arg0;
        if (M2C_FIELD(arg0, s16 *, 0x128) > 0) {
            do {
                func_8021E87C(0x1E, var_s2, M2C_FIELD(var_s0, s32 **, 0xE8));
                var_s1_3 += 1;
                var_s2 -= 0xA;
                var_s0 = (unsigned char *) var_s0 + 4;
            } while (var_s1_3 < M2C_FIELD(arg0, s16 *, 0x128));
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0x230) != 0) {
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x234));
    }
    func_8021E66C(0);
    func_8021E708(0, 0xFF, 0, 0xFF);
    func_8021E87C(0x1E, 0x18, D_8032358C);
    func_8021E87C(0xBE, 0x18, D_80323590);
}
