void *func_8022BE54(s32);
void func_80231C9C(void *, void *, s32);
void *func_802C676C(s32);
void func_803085E8(void *, void *);
void func_8028D20C(void *);
extern u8 D_803251B0[];
extern u8 D_803251B8[];
extern u8 D_803435E0[];
extern s32 D_803481C0;

void func_802A3F0C(void **arg0) {
    void *obj;

    *arg0 = NULL;
    *arg0 = func_8022BE54(0x2A8);
    if (*arg0 == NULL) {
        func_80231C9C(D_803251B0, D_803251B8, 0x2E);
    }
    obj = *arg0;
    if (obj != NULL && (obj != NULL || (obj = func_802C676C(0x2A8)) != NULL)) {
        func_803085E8(obj, obj);
        *(void **)((char *)obj + 0x6C) = D_803435E0;
        func_8028D20C((char *)obj + 0x70);
    }
    D_803481C0 += 0x2A8;
}
