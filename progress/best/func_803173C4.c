void func_80231A24(s32 a0, ...);
s32 func_80318350(void *arg0);
f32 func_802CF734(s32 *arg0, s32 *arg1);

extern s32 D_8032B738;
extern s32 D_8032B74C;

typedef struct {
    s32 data[16];
} UnkBuf;

void func_803173C4(void *arg0, s32 arg1) {
    s32 var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    UnkBuf sp68;
    UnkBuf sp28;

    var_v1 = *(s32 *)((u8 *)arg0 + 0xC);
    if (var_v1 == 0) {
        func_80231A24((s32)&D_8032B738, (s32)&D_8032B74C, (s32)arg0);
        *((s32 *)NULL) = 0x29A;
        var_v1 = *(s32 *)((u8 *)arg0 + 0xC);
    }
    temp_v0 = *(s32 *)((u8 *)var_v1 + 0xD8);
    {
        s32 call_arg = (s32)*(s16 *)((u8 *)temp_v0 + 0x10) + var_v1;
        (*(void (**)(void *, void *, void *))((u8 *)temp_v0 + 0x14))((void *)call_arg, &sp68, arg0);
    }
    temp_v0_2 = func_80318350(arg1);
    temp_v1 = *(s32 *)((u8 *)temp_v0_2 + 0xD8);
    {
        s32 call_arg = (s32)*(s16 *)((u8 *)temp_v1 + 0x10) + temp_v0_2;
        (*(void (**)(void *, void *))((u8 *)temp_v1 + 0x14))((void *)call_arg, &sp28);
    }
    func_802CF734(&sp68.data[0], &sp28.data[0]);
}
