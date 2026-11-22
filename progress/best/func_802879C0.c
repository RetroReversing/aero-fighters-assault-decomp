extern f32 D_8033E914;
extern f32 D_8033E918;
extern f32 D_8033E91C;

void func_80287DF8(s8 *arg0, f32 arg1);

s32 func_802879C0(s8 *arg0, s32 arg1, f32 arg2) {
    s32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_ft5;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_ft1;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 temp_ft1;
    s32 var_v1;

    sp1C = 1.0f;
    sp20 = 1.0f;
    var_v1 = 1;
    temp_ft5 = *(f32 *)(arg0 + 0x64) * *(f32 *)(arg0 + 0x68);
    if (*(u8 *)(arg0 + 4) != 0) {
        if (temp_ft5 < 0.5f) {
            var_fv1 = 1.0f;
        } else {
            var_fv1 = 2.0f * (1.0f - temp_ft5);
        }
        sp1C = var_fv1;
    }
    if (*(u8 *)(arg0 + 5) != 0) {
        if (temp_ft5 < 0.25f) {
            var_fv1_2 = temp_ft5 * 4.0f;
        } else {
            var_fv1_2 = 1.0f;
        }
        sp20 = var_fv1_2;
    }
    if (*(u8 *)(arg0 + 6) != 0) {
        *(s16 *)(arg0 + 0xF6) = 3;
        *(f32 *)(arg0 + 0xF8) = 0.5f;
        temp_ft1 = (s32)((1.0f - temp_ft5) * 255.0f);
        *(s16 *)(arg0 + 0xE2) = (s16)temp_ft1;
        *(s16 *)(arg0 + 0xE4) = (s16)temp_ft1;
        *(s16 *)(arg0 + 0xE6) = (s16)temp_ft1;
    } else {
        var_fa0 = *(f32 *)(arg0 + 0x164);
        var_fa1 = *(f32 *)(arg0 + 0xC);
        *(s16 *)(arg0 + 0xF6) = 1;
        *(s16 *)(arg0 + 0xE2) = (s16)(s32)(*(f32 *)(arg0 + 0x15C) * 255.0f);
        *(s16 *)(arg0 + 0xE4) = (s16)(s32)(*(f32 *)(arg0 + 0x160) * 255.0f);
        *(s16 *)(arg0 + 0xE6) = (s16)(s32)(var_fa0 * 255.0f);
        *(s16 *)(arg0 + 0xE8) = (s16)(s32)(var_fa1 * 255.0f);
    }
    if (*(u8 *)(arg0 + 7) != 0) {
        *(s16 *)(arg0 + 0xE8) = (s16)(s32)(*(f32 *)(arg0 + 0xC) * 255.0f);
    } else {
        var_fv0 = sp1C;
        if (sp20 < sp1C) {
            var_fv0 = sp20;
        }
        *(s16 *)(arg0 + 0xE8) = (s16)(s32)(var_fv0 * 255.0f);
    }
    if (*(u8 *)(arg0 + 8) != 0) {
        *(f32 *)(arg0 + 0x10) = (f32)(*(f32 *)(arg0 + 0x10) + (*(f32 *)(arg0 + 0x14) * arg2));
        sp18 = temp_ft5;
        sp24 = 1;
        func_80287DF8(arg0, *(f32 *)(arg0 + 0x10));
        var_v1 = 1;
        if (*(f32 *)(arg0 + 0x68) <= (*(f32 *)(arg0 + 0x60) * D_8033E914)) {
            var_ft1 = 6.0f * temp_ft5;
        } else {
            var_ft1 = D_8033E918 * (D_8033E91C - temp_ft5);
        }
        *(f32 *)(arg0 + 0xC) = var_ft1;
    }
    *(f32 *)(arg0 + 0x68) = (f32)(*(f32 *)(arg0 + 0x68) + arg2);
    if (*(f32 *)(arg0 + 0x60) <= *(f32 *)(arg0 + 0x68)) {
        var_v1 = 0;
    }
    return var_v1;
}
