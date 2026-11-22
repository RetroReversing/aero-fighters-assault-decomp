/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E87C();
s32 func_8022FF90();
s32 func_802CB730();
s32 func_802CB7C8();
s32 func_802CB8A0();
s32 func_802CB914();
extern s32 D_803272DC;
extern char D_80327318[];
extern s32 D_80327354;
extern char D_803273B8[];

void func_802CAA44(void *arg0) {
    char *var_s7;
    char *var_fp;
    char *var_s1;
    
    char *var_s7_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    
    s32 var_s3;
    

    func_802CB914(arg0, D_803273B8);
    func_802CB8A0(arg0, 0x7D, 0x46);
    func_8021E66C(0);
    var_s3 = 0x7E;
    var_s7 = D_80327318;
    var_s2 = 2;
    do {
        var_s0 = 2;
        var_s1 = var_s7 + 8;
loop_2:
        if (func_8022FF90(*(s32 *)var_s1) != 0) {
            func_802CB7C8(arg0, *(s32 *)var_s1, (var_s0 * 0x28) + 0x8B, var_s3, var_s2, var_s0 - 2);
        }
        var_s0 += 1;
        var_s1 += 4;
        if (var_s0 != 4) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s3 -= 0x12;
        var_s7 += 0x14;
    } while (var_s2 < 4);
    var_s7_2 = &D_803272DC;
    var_fp = &D_80327354;
    var_s3 = 0xA2;
    var_s2 = 0;
    do {
        if (var_s2 == (*(u8 *)((char *)(arg0) + 0x1C))) {
            if (var_s2 == (*(u8 *)((char *)(arg0) + 0x1B))) {
                func_8021E708(0xFF, 0xFF, 0x80, 0xFF);
            } else {
                func_8021E708(0xFF, 0xFF, 0, 0xFF);
            }
        } else if (var_s2 == (*(u8 *)((char *)(arg0) + 0x1B))) {
            func_8021E708(0xFF, 0xFF, 0xFF, 0xFF);
        } else {
            func_8021E708(0x80, 0x80, 0x80, 0xFF);
        }
        func_8021E87C(0x28, var_s3, *(s32 *)var_s7_2);
        var_s0_2 = 0;
        var_s7 = var_fp;
loop_15:
        if (func_8022FF90(*(s32 *)var_s7) != 0) {
            func_802CB730(arg0,  *(s32 *)var_s7,  (var_s0_2 * 0x28) + 0x8B,  var_s3);
        }
        var_s0_2 += 1;
        var_s7 += 4;
        if (var_s0_2 != 4) {
            goto loop_15;
        }
        var_s2 += 1;
        var_s3 -= 0x12;
        var_s7_2 += 4;
        var_fp += 0x14;
    } while (var_s2 != 5);
}
