/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_802915B0();
s32 *func_802C676C();

s32 *func_802F95A8(s32 *arg0) {
    s32 *temp_v0;
    char *var_a0;
    s32 var_v1;
    s32 *var_a3;
    char *var_a1;

    var_a3 = arg0;
    if ((arg0 != NULL) || (temp_v0 = func_802C676C(0x68), var_a3 = temp_v0, (temp_v0 != NULL))) {
        arg0 = var_a3;
        var_a3 = arg0;
        func_802915B0((s8 *) var_a3 + 0x10);
        var_v1 = 0;
        var_a0 = var_a3;
        var_a1 = var_a3;
        do {
            *(s32 *)var_a0 = 0;
            var_v1 += 1;
            (*(s16 *)((char *)(var_a1) + 8)) = -1;
            var_a0 += 4;
            var_a1 += 2;
        } while (var_v1 != 2);
    }
    return var_a3;
}
