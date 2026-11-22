typedef struct UnkVT {
    u8 pad0[0x38];
    s16 unk38;
    u8 pad3A[2];
    f32 (*unk3C)(u8 *);
    s16 unk40;
    u8 pad42[2];
    f32 (*unk44)(u8 *);
    s16 unk48;
    u8 pad4A[2];
    f32 (*unk4C)(u8 *);
} UnkVT;

typedef struct Unk1A0 {
    u8 pad0[0x60];
    s16 unk60;
    u8 pad62[2];
    void (*unk64)(u8 *, void *);
} Unk1A0;

extern u8 D_803233E4;
extern f32 D_803233E8;
extern s32 D_8032B734;
extern f32 D_8033EA40;
extern f32 D_8033EA44;
extern f32 D_8033EA48;
extern void func_802886B4(void *, s32);
extern void func_80288740(void *, s32);
extern void func_802887CC(void *, void *);
extern void func_80200B20(s32, s32, f32);
extern void func_80302900(s32);
extern void func_80302908(void *, s32, f32, f32);
extern void func_803029FC(s32);

void func_80288208(u8 *arg0, f32 arg1, f32 arg2) {
    u8 sp30[0x40];
    Unk1A0 *v2;
    s32 flag;

    *(f32 *)(arg0 + 0xAC) = (*(UnkVT **)(arg0 + 0x27C))->unk3C(arg0 + (*(UnkVT **)(arg0 + 0x27C))->unk38 + 0x1A4);
    *(f32 *)(arg0 + 0xB4) = (*(UnkVT **)(arg0 + 0x27C))->unk4C(arg0 + (*(UnkVT **)(arg0 + 0x27C))->unk48 + 0x1A4);
    *(f32 *)(arg0 + 0xB0) = (*(UnkVT **)(arg0 + 0x27C))->unk44(arg0 + (*(UnkVT **)(arg0 + 0x27C))->unk40 + 0x1A4);

    if (2.0f == *(f32 *)(arg0 + 0x4C)) {
        D_803233E8 = 0.0f;
        *(f32 *)(arg0 + 0x4C) = D_8033EA40;
    } else if (*(f32 *)(arg0 + 0x4C) < 2.0f) {
        D_803233E8 += arg2;
        if (D_803233E8 > 7.0f) {
            *(f32 *)(arg0 + 0x4C) = 1.0f;
        }
    }

    flag = (*(u8 *)(arg0 + 0x366) != 0) == 0;
    if (flag && D_8033EA44 < arg1 && *(s16 *)(arg0 + 0x364) != 1 && D_803233E4 == 0) {
        func_80302900(D_8032B734 + 0x8F4);
        func_80302908(D_8032B734 + 0x8F4, 0x85, 0.05f, 1.0f);
        func_80302908(D_8032B734 + 0x8F4, 0x84, 0.05f, 1.0f);
        func_803029FC(D_8032B734 + 0x8F4);
        D_803233E4 = 1;
        flag = (*(u8 *)(arg0 + 0x366) != 0) == 0;
    }
    if (flag && arg1 > 600.0f && *(s16 *)(arg0 + 0x364) != 1) {
        *(s16 *)(arg0 + 0x364) = 1;
        *(f32 *)(arg0 + 0x368) = 0.0f;
    }

    if (*(s16 *)(arg0 + 0x364) == 1) {
        *(f32 *)(arg0 + 0x368) += D_8033EA48 * arg2;
        if (*(f32 *)(arg0 + 0x368) >= 1.0f) {
            *(s16 *)(arg0 + 0x364) = 0;
            *(u8 *)(arg0 + 0x366) = 1;
            func_80288740(arg0, 0);
            func_802886B4(arg0, 0);
        } else {
            func_80200B20(*(s32 *)(arg0 + 4), 0x4A, *(f32 *)(arg0 + 0x368));
            func_802886B4(arg0, 1);
        }
    }

    v2 = *(Unk1A0 **)(arg0 + 0x1A0);
    v2->unk64(arg0 + v2->unk60, sp30);
    func_802887CC(arg0, sp30);
}
