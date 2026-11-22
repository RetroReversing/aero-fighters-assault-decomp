void *func_8022BE54(s32);
void func_80231C9C(void *, void *, s32);
void *func_802C676C(s32);
void func_803085E8(void *, void *);
void func_8028D20C(void *);
extern u8 D_80325190[];
extern u8 D_80325198[];
extern u8 D_80346B30[];
extern s32 D_803481C0;

void func_802A3DF0(void **arg0_in) {
    void *sp1C;
    void *obj;
  void ** arg0 = arg0_in;

    *arg0 = NULL;
    *arg0 = func_8022BE54(0x2AC);
    if (*arg0 == NULL) {
        func_80231C9C(D_80325190, D_80325198, 0x2E);
    }
    obj = *arg0;
    if (obj != NULL && (obj != NULL || (obj = func_802C676C(0x2AC)) != NULL)) {
        sp1C = obj;
        func_803085E8(obj, obj);
        obj = sp1C;
        *(void **)((char *)obj + 0x6C) = D_80346B30;
        func_8028D20C((char *)obj + 0x70);
    }
    D_803481C0 += 0x2AC;
}
