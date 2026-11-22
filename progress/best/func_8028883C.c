extern s32 D_8033E920;

void *func_802C676C(s32);
void func_803172C4(void *);
void func_802D4780(void *);
void func_80314230(void *);
s32 func_802C490C(s32);

void *func_8028883C(void *arg0) {
    void *s0 = arg0;
    if (arg0 != NULL || (s0 = func_802C676C(0xB9C)) != NULL) {
        func_803172C4(s0);
        *(s32 *)((s8 *)s0 + 0x1A0) = (s32)&D_8033E920;
        func_802D4780((s8 *)s0 + 0x1A4);
        func_80314230((s8 *)s0 + 0x380);
        func_80314230((s8 *)s0 + 0x520);
        func_80314230((s8 *)s0 + 0x6C0);
        func_802C490C((s32)((s8 *)s0 + 0x860));
        func_802C490C((s32)((s8 *)s0 + 0x9F4));
        *(s8 *)((s8 *)s0 + 0x36C) = 0x37;
        *(s8 *)((s8 *)s0 + 0x36D) = 0x37;
        *(s8 *)((s8 *)s0 + 0xB90) = 0;
    }
    return s0;
}
