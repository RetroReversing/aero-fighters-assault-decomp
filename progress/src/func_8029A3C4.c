/* identical to func_802995D0 (matched), with its names changed by decompdecomp */
f32 func_80302D48(s32, s32);
void func_802903F4(s32, s32, f32);
void func_80302900(s32);
void func_80302908(s32, s32, f32, f32);
void func_803029FC(s32);

void func_8029A3C4(void *arg0, s32 arg1, s32 arg2) {
    f32 t;
    f32 u;

    t = func_80302D48(*(s32 *)((char *)arg0 + 0x14) + 0x8F4, 0x3B);
    u = func_80302D48(*(s32 *)((char *)arg0 + 0x14) + 0x8F4, 0x79);
    func_802903F4(*(s32 *)((char *)arg0 + 0x14) + 0x78, arg1, t + u);
    func_80302900(*(s32 *)((char *)arg0 + 0x14) + 0x8F4);
    func_80302908(*(s32 *)((char *)arg0 + 0x14) + 0x8F4, 0x3B, 0.05f, 1.0f);
    func_80302908(*(s32 *)((char *)arg0 + 0x14) + 0x8F4, 0x79, 0.05f, 1.0f);
    func_803029FC(*(s32 *)((char *)arg0 + 0x14) + 0x8F4);
}
