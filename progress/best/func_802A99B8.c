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

M2C_UNK func_80224CA8(M2C_UNK, void *);             /* extern */
extern s32 D_80348B54;

void func_802A99B8(void *arg0) {
    s32 var_v1;
    
    void *var_v0;
    

    M2C_FIELD(arg0, s8 *, 0x32B8) = 0;
    M2C_FIELD(arg0, f32 *, 0x32A8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x32AC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x32B0) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x65F8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4E1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x65FC) = 0;
    M2C_FIELD(arg0, s8 *, 0x6769) = 0;
    M2C_FIELD(arg0, s8 *, 0x6768) = 0;
    M2C_FIELD(arg0, s8 *, 0x680D) = 0;
    M2C_FIELD(arg0, s8 *, 0x680C) = 0;
    M2C_FIELD(arg0, s16 *, 0x6C38) = 0;
    M2C_FIELD(arg0, s8 *, 0x6825) = 0;
    M2C_FIELD(arg0, s8 *, 0x6824) = 0;
    M2C_FIELD(arg0, s8 *, 0x6831) = 0;
    M2C_FIELD(arg0, s8 *, 0x6830) = 0;
    M2C_FIELD(arg0, s8 *, 0x6791) = 0;
    M2C_FIELD(arg0, s8 *, 0x6790) = 0;
    M2C_FIELD(arg0, s8 *, 0x6899) = 0;
    M2C_FIELD(arg0, s8 *, 0x6898) = 0;
    M2C_FIELD(arg0, s8 *, 0x67A9) = 0;
    M2C_FIELD(arg0, s8 *, 0x67A8) = 0;
    M2C_FIELD(arg0, s8 *, 0x6675) = 0;
    M2C_FIELD(arg0, s8 *, 0x6674) = 0;
    M2C_FIELD(arg0, s8 *, 0x67BD) = 0;
    M2C_FIELD(arg0, s8 *, 0x67BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x67FD) = 0;
    M2C_FIELD(arg0, s8 *, 0x67FC) = 0;
    M2C_FIELD(arg0, s8 *, 0x6649) = 0;
    M2C_FIELD(arg0, s8 *, 0x6648) = 0;
    M2C_FIELD(arg0, s8 *, 0x6851) = 0;
    M2C_FIELD(arg0, s8 *, 0x6850) = 0;
    M2C_FIELD(arg0, s8 *, 0x68A9) = 0;
    M2C_FIELD(arg0, s8 *, 0x68A8) = 0;
    M2C_FIELD(arg0, s8 *, 0x68A1) = 0;
    M2C_FIELD(arg0, s8 *, 0x68A0) = 0;
    M2C_FIELD(arg0, s8 *, 0x68B1) = 0;
    M2C_FIELD(arg0, s8 *, 0x68B0) = 0;
    M2C_FIELD(arg0, s8 *, 0x71E5) = 0;
    M2C_FIELD(arg0, s8 *, 0x71E4) = 0;
    M2C_FIELD(arg0, s8 *, 0x6D45) = 0;
    M2C_FIELD(arg0, s8 *, 0x6D44) = 0;
    M2C_FIELD(arg0, s8 *, 0x6DA9) = 0;
    M2C_FIELD(arg0, s8 *, 0x6DA8) = 0;
    M2C_FIELD(arg0, s8 *, 0x6CDD) = 0;
    M2C_FIELD(arg0, s8 *, 0x6CDC) = 0;
    M2C_FIELD(arg0, s8 *, 0x6E25) = 0;
    M2C_FIELD(arg0, s8 *, 0x6E24) = 0;
    M2C_FIELD(arg0, s8 *, 0x6E3D) = 0;
    M2C_FIELD(arg0, s8 *, 0x6E3C) = 0;
    M2C_FIELD(arg0, s8 *, 0x6E61) = 0;
    M2C_FIELD(arg0, s8 *, 0x6E60) = 0;
    M2C_FIELD(arg0, s8 *, 0x6EDD) = 0;
    M2C_FIELD(arg0, s8 *, 0x6EDC) = 0;
    M2C_FIELD(arg0, s8 *, 0x6EE9) = 0;
    M2C_FIELD(arg0, s8 *, 0x6EE8) = 0;
    M2C_FIELD(arg0, s8 *, 0x6EFD) = 0;
    M2C_FIELD(arg0, s8 *, 0x6EFC) = 0;
    M2C_FIELD(arg0, s8 *, 0x6FB9) = 0;
    M2C_FIELD(arg0, s8 *, 0x6FB8) = 0;
    M2C_FIELD(arg0, s32 *, 0x6FBC) = 0;
    M2C_FIELD(arg0, s32 *, 0x6F00) = 0;
    M2C_FIELD(arg0, s8 *, 0x704D) = 0;
    M2C_FIELD(arg0, s8 *, 0x704C) = 0;
    M2C_FIELD(arg0, s8 *, 0x6F91) = 0;
    M2C_FIELD(arg0, s8 *, 0x6F90) = 0;
    var_v1 = 0;
    var_v0 = arg0;
    M2C_FIELD(arg0, s32 *, 0x4E14) = (s32) D_80348B54;
    do {/*__repair_loop_weight*/do {
        var_v1 += 1;} while (0);
        M2C_FIELD(var_v0, s32 *, 0x7050) = 0;
        var_v0 = (unsigned char *) var_v0 + 4;
    } while (var_v1 < 0x28);
    M2C_FIELD(arg0, s8 *, 0x70F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x70F4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, void **, 0x1C) = arg0;
    M2C_FIELD(arg0, s32 *, 0) = 0x3B;
    M2C_FIELD(arg0, s32 *, 4) = 0x3B;
    M2C_FIELD(arg0, s32 *, 0x7168) = -1;
    M2C_FIELD(arg0, s8 *, 0x716C) = 0;
    func_80224CA8(0x14, arg0);
    var_v1 = 2;
    M2C_FIELD(arg0, s32 *, 0x8B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x8B8) = 0;
    var_v0 = (unsigned char *) arg0 + 8;
    do {
        var_v1 += 4;
        M2C_FIELD(var_v0, s32 *, 0x8B4) = 0;
        M2C_FIELD(var_v0, s32 *, 0x8B8) = 0;
        M2C_FIELD(var_v0, s32 *, 0x8BC) = 0;
        M2C_FIELD(var_v0, s32 *, 0x8C0) = 0;
        var_v0 = (unsigned char *) var_v0 + 0x10;
    } while (var_v1 != 0xA);
    M2C_FIELD(arg0, f32 *, 0x7160) = 8.0f;
}
