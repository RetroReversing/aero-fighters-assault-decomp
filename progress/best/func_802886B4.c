extern void *D_8032B734;

s32 func_803021B8(s32, void *, s32, s32, s32);
void func_80302394(s32, void *);
s32 func_80305E10(s32, s32, s32);

void func_802886B4(void *arg0, s32 arg1) {
    if (*(u8 *)((s8 *)arg0 + 0x36C) != 0xFF) {
        if (arg1 & 0xFF) {
            func_803021B8((s32)((s8 *)D_8032B734 + 0x8F4),
                          (s8 *)arg0 + 0x370,
                          *(u8 *)((s8 *)arg0 + 0x36C),
                          func_80305E10(0x1F4, 0xFA, 0), 8);
            return;
        }
        func_80302394((s32)((s8 *)D_8032B734 + 0x8F4), (s8 *)arg0 + 0x370);
    }
}
