extern f32 D_8033E910;

void func_80228DE0(s8 *arg0, s32 arg1);
void func_80287D58(s8 *arg0, u8 arg1);
void func_80287D64(s8 *arg0, u8 arg1);
void func_80287D70(s8 *arg0, u16 arg1);
void func_80287DF8(s8 *arg0, f32 arg1);
void func_80287E54(f32 arg0, s32 arg1);

typedef void (*UnkFunc24)(s8 *arg0, s32 arg1, f32 arg2);
typedef void (*UnkFunc1C)(s8 *arg0, s32 arg1);

void func_80287824(s8 *arg0, s32 arg1, f32 arg2, s32 arg3, f32 arg4) {
    f32 temp_fv0;
    f32 var_fv1;
    f32 var_fone;
    s32 temp_ft0;
    s8 *temp_v0;
    s8 *temp_v0_2;
    s8 *volatile temp_v1;

    var_fone = 1.0f;
    *(f32 *)(arg0 + 0x5C) = arg2;
    *(f32 *)(arg0 + 0x60) = arg4;
    arg0[7] = 0;
    *(f32 *)(arg0 + 0xC) = var_fone;
    *(f32 *)(arg0 + 0x15C) = var_fone;
    *(f32 *)(arg0 + 0x160) = var_fone;
    *(f32 *)(arg0 + 0x164) = var_fone;
    *(f32 *)(arg0 + 0x68) = 0.0f;
    func_80287E54(arg2, arg3);
    temp_fv0 = *(f32 *)(arg0 + 0x60);
    if (temp_fv0 == 0.0f) {
        var_fv1 = D_8033E910;
    } else {
        var_fv1 = var_fone / arg4;
    }
    temp_v0 = *(s8 **)(arg0 + 0x11C);
    *(f32 *)(arg0 + 0x64) = var_fv1;
    ((*(UnkFunc24 *)(temp_v0 + 0x24)))(*(s16 *)(temp_v0 + 0x20) + arg0 + 0x6C, 3, temp_fv0);
    temp_v1 = arg0 + 0x6C;
    func_80228DE0(arg0 + 0x70, arg1);
    *(s8 *)(temp_v1 + 0xAC) = 1;
    temp_v0_2 = *(s8 **)(arg0 + 0x11C);
    ((*(UnkFunc1C *)(temp_v0_2 + 0x1C)))(*(s16 *)(temp_v0_2 + 0x18) + arg0 + 0x6C, 0);
    *(s16 *)(arg0 + 0xF6) = 1;
    *(f32 *)(arg0 + 0x10) = 7.0f;
    temp_ft0 = (s32)(var_fone * 255.0f);
    *(s16 *)(arg0 + 0xE2) = (s16)temp_ft0;
    *(s16 *)(arg0 + 0xE4) = (s16)temp_ft0;
    *(s16 *)(arg0 + 0xE6) = (s16)temp_ft0;
    *(s16 *)(arg0 + 0xE8) = (s16)temp_ft0;
    func_80287DF8(arg0, 7.0f);
    func_80287D64(arg0, 0);
    func_80287D58(arg0, 0);
    func_80287D70(arg0, 0);
    arg0[8] = 0;
}
