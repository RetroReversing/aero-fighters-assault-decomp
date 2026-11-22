/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_802156FC(f32 arg0, f32 arg1, s32 arg2, s32 arg3, u16 arg4, u16 arg5, f32 arg6) {
int *__repair_home3 = &arg3;

    register f32 var_fs0;
    f32 temp_fa0;
    f32 var_fs1;
    f32 var_ft4;
    f32 var_ft5;
    f32 var_fv0;
    f32 var_fv1;
    void *temp_v0;
    void *temp_a0;
    

    temp_a0 = (void *)(arg2); temp_a0 = (void *)((char *)temp_a0 + (s32)((arg4 * 0x10)));
    temp_v0 = arg2 + (((*__repair_home3) & 0xFFFF) * 0x10);
    var_fv0 = (f32) (*(s16 *)((char *)(temp_v0) + 0));
    var_fv1 = (f32) (*(s16 *)((char *)(temp_v0) + 2));
    var_ft4 = (f32) (*(s16 *)((char *)(temp_a0) + 0));
    var_ft5 = (f32) (*(s16 *)((char *)(temp_a0) + 2));
    temp_a0 = (void *)(arg2); temp_a0 = (void *)((char *)temp_a0 + (s32)((arg5 * 0x10)));
    var_fs0 = (f32) (*(s16 *)((char *)(temp_a0) + 0));
    var_fs1 = (f32) (*(s16 *)((char *)(temp_a0) + 2));
    if (arg6 != 1.0f) {
        temp_fa0 = 1.0f / arg6;
        var_ft4 *= temp_fa0;
        var_fv1 *= temp_fa0;
        var_fv0 *= temp_fa0;
        var_ft5 *= temp_fa0;
        var_fs0 *= temp_fa0;
        var_fs1 *= temp_fa0;
    }
    if (((arg0 - var_fv0) * (var_ft5 - var_fv1)) < ((arg1 - var_fv1) * (var_ft4 - var_fv0))) {
        return 0;
    }
    if (((arg0 - var_ft4) * (var_fs1 - var_ft5)) < ((arg1 - var_ft5) * (var_fs0 - var_ft4))) {
        return 0;
    }
    if (((arg0 - var_fs0) * (var_fv1 - var_fs1)) < ((arg1 - var_fs1) * (var_fv0 - var_fs0))) {
        return 0;
    }
    return 1;
}
