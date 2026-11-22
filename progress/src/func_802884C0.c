void func_8021B6D4(s32, s32, void *);
void func_802297A8(void *, void *, void *);
void func_8022A0D0(void *, f32, f32, f32);
void func_802C5364(void *, f32, f32, void *, f32);
void func_802C53E8(void *, f32, f32);
void func_803142F8(void *, f32, f32);

void func_802884C0(void *arg0, f32 arg1, f32 arg2) {
    u8 spC8[0x40];
    u8 sp88[0x40];
    u8 sp48[0x40];
    void *v0;

    v0 = *(void **)((char *)arg0 + 0x1A0);
    (*(void (**)(char *, u8 *))((char *)v0 + 0x64))((char *)arg0 + *(s16 *)((char *)v0 + 0x60), spC8);
    func_8021B6D4(*(s32 *)((char *)arg0 + 4), 1, sp88);
    func_802297A8(sp88, spC8, sp88);

    if (0.0f < *(f32 *)((char *)arg0 + 0xB88)) {
        func_802C5364((char *)arg0 + 0x380, arg1, arg2, sp88, 0.0f);
        func_803142F8((char *)arg0 + 0x380, arg1, arg2);
    }
    if (0.0f < *(f32 *)((char *)arg0 + 0xB8C)) {
        func_802C5364((char *)arg0 + 0x520, arg1, arg2, sp88, 0.0f);
        func_803142F8((char *)arg0 + 0x520, arg1, arg2);
    }
    if (*(u8 *)((char *)arg0 + 0x366) != 0) {
        func_802C5364((char *)arg0 + 0x6C0, arg1, arg2, spC8, 0.0f);
        func_803142F8((char *)arg0 + 0x6C0, arg1, arg2);

        func_8021B6D4(*(s32 *)((char *)arg0 + 4), 2, sp48);
        func_8022A0D0(sp48, 3.0f, 0.0f, 0.5f);
        func_802297A8(sp48, sp88, sp48);
        func_802C5364((char *)arg0 + 0x860, arg1, arg2, sp48, 0.0f);
        func_802C53E8((char *)arg0 + 0x860, arg1, arg2);

        func_8021B6D4(*(s32 *)((char *)arg0 + 4), 4, sp48);
        func_8022A0D0(sp48, -3.0f, 0.0f, 0.5f);
        func_802297A8(sp48, sp88, sp48);
        func_802C5364((char *)arg0 + 0x9F4, arg1, arg2, sp48, 0.0f);
        func_802C53E8((char *)arg0 + 0x9F4, arg1, arg2);
    }
}
