extern void *D_8032B734;

void func_80302558(s32, void *, s32);

void func_802887CC(void *arg0, s32 arg1) {
    if (*(u8 *)((s8 *)arg0 + 0x36C) != 0xFF) {
        func_80302558((s32)((s8 *)D_8032B734 + 0x8F4), (s8 *)arg0 + 0x370, arg1);
    }
    if (*(u8 *)((s8 *)arg0 + 0x36D) != 0xFF) {
        func_80302558((s32)((s8 *)D_8032B734 + 0x8F4), (s8 *)arg0 + 0x378, arg1);
    }
}
