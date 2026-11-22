void *func_802C676C(s32);
volatile unsigned long func_8031C3FC(void *);
s32 func_8031C844(void *);
extern s32 D_8032C120;

void *func_8031C778(void *arg0) {
    if ((arg0 != NULL) || ((arg0 = func_802C676C(0xF0), arg0 != NULL))) {
        func_8031C3FC(arg0);
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
        *(s16 *)((s8 *)arg0 + 0xBC) = 8;
        *(s32 **)((s8 *)arg0 + 0xB8) = &D_8032C120;
        *(s16 *)((s8 *)arg0 + 0xE4) = 0;
        *(s16 *)((s8 *)arg0 + 0xE6) = 0xF;
        *(f32 *)((s8 *)arg0 + 0xD4) = 2.0f;
        *(f32 *)((s8 *)arg0 + 0x64) = 2.0f;
        *(f32 *)((s8 *)arg0 + 0xE0) = 2.5f;
        func_8031C844(arg0);
    }
    return arg0;
}
