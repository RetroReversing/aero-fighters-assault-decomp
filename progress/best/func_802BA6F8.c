/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_8028C240(s32, f32 *, f32 *, f32 *); /* extern */

s32 func_802BA6F8(s32 arg0, void *arg1, s32 arg2, s32 *arg3, s32 *arg4) {
int *__repair_home0 = &arg0;

    f32 sp38;
    f32 sp34;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fa0;
    f32 sp3C;

    func_8028C240(arg2, &sp3C, &sp38, &sp34);
    temp_fv1 = ((sp3C * (*(f32 *)((char *)(arg1) + 0))) + (sp38 * (*(f32 *)((char *)(arg1) + 0x10))) + (sp34 * (*(f32 *)((char *)(arg1) + 0x20))) + (*(f32 *)((char *)(arg1) + 0x30))) / (temp_fv0 = (sp3C * (*(f32 *)((char *)(arg1) + 0xC))) + (sp38 * (*(f32 *)((char *)(arg1) + 0x1C))) + (sp34 * (*(f32 *)((char *)(arg1) + 0x2C))) + (*(f32 *)((char *)(arg1) + 0x3C)));
    temp_fa0 = ((sp3C * (*(f32 *)((char *)(arg1) + 4))) + (sp38 * (*(f32 *)((char *)(arg1) + 0x14))) + (sp34 * (*(f32 *)((char *)(arg1) + 0x24))) + (*(f32 *)((char *)(arg1) + 0x34))) / temp_fv0;
    if ((temp_fv1 < -1.0f) || (temp_fv1 > 1.0f) || (temp_fa0 < -1.0f) || (temp_fa0 > 1.0f) || ((((sp3C * (*(f32 *)((char *)(arg1) + 8))) + (sp38 * (*(f32 *)((char *)(arg1) + 0x18))) + (sp34 * (*(f32 *)((char *)(arg1) + 0x28))) + (*(f32 *)((char *)(arg1) + 0x38))) / temp_fv0) > 1.0f)) {
        return 0;
    }
    *arg3 = (s32) ((temp_fv1 * 160.0f) + 160.0f);
    *arg4 = (s32) ((temp_fa0 * 120.0f) + 120.0f);
    return 1;
}
