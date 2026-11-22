/* identical to func_8031D8D0 (matched), with its names changed by decompdecomp */
void *func_802C676C(s32);
s32 func_8031C3FC(void *);
s32 func_8031DACC(void *);
extern s32 D_8033481C;
extern f32 D_803477F4;

void *func_8031D9FC(void *arg0) {
    if ((arg0 != NULL) || ((arg0 = func_802C676C(0xF0), arg0 != NULL))) {
        func_8031C3FC(arg0);
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
        *(s16 *)((s8 *)arg0 + 0xBC) = 8;
        *(s32 **)((s8 *)arg0 + 0xB8) = &D_8033481C;
        *(s16 *)((s8 *)arg0 + 0xE4) = 1;
        *(s16 *)((s8 *)arg0 + 0xE6) = 0x32;
        *(f32 *)((s8 *)arg0 + 0xD4) = 15.0f;
        *(f32 *)((s8 *)arg0 + 0x64) = 15.0f;
        *(f32 *)((s8 *)arg0 + 0xE0) = D_803477F4;
        func_8031DACC(arg0);
    }
    return arg0;
}
