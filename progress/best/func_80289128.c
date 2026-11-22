extern s32 D_80323434;
extern s32 D_80323448;
extern s32 D_80323468;
extern f32 D_8033EAC8;
extern f32 D_8033EACC;
extern f32 D_8033EAD0;
extern f32 D_8033EAD4;

s32 func_8021BA90(void);
void func_80231A24(s32, ...);
void func_8021ACB0(s32, s32);
void func_8021B838(s32, s32);
void math_mtx4Identity(f32 *);

typedef struct {
    u8 pad00[4];
    s32 f04;
    u8 pad08[4];
    f32 mtx[16];
    s32 f4C;
    f32 f50;
    f32 f54;
    f32 f58;
    f32 f5C;
    s32 f60;
    u8 pad64[0x18];
    s32 f7C;
    u8 f80;
    u8 f81;
    u8 pad82[2];
    s32 f84;
    u8 pad88[0x40];
    f32 fC8;
    u8 fCC;
    s8 fCD;
    u8 padCE[2];
    f32 fD0;
    f32 fD4;
    u8 padD8[4];
    f32 fDC;
} Obj;

void func_80289128(Obj *arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Obj *s0 = arg0;
    s32 v0;

    if (s0->f04 == 0xFFFF) {
        v0 = func_8021BA90();
        s0->f04 = v0;
        if (v0 == 0xFFFF) {
            func_80231A24((s32)&D_80323434, (s32)&D_80323448, (s32)&D_80323468, 0x4A);
        }
    }
    s0->f84 = arg1;
    s0->f60 = arg5;
    s0->f4C = arg4;
    s0->fC8 = arg2;
    if (arg4 == 2 || arg4 == 4) {
        func_8021ACB0(s0->f04, 0x62);
    } else {
        func_8021ACB0(s0->f04, 0x61);
    }
    func_8021B838(s0->f04, 2);

    s0->f81 = arg3;
    switch (arg3) {
    case 1:
        s0->fCC = 1;
        s0->fCD = 1;
        s0->f50 = D_8033EAC8;
        s0->f54 = 3.0f;
        s0->fD0 = 1.0f;
        s0->fD4 = 0.0f;
        s0->fDC = 10.0f;
        break;
    case 2:
        s0->fCC = 1;
        s0->fCD = 2;
        s0->f50 = D_8033EACC;
        s0->f54 = 6.0f;
        s0->fD0 = 2.0f;
        s0->fD4 = 0.5f;
        s0->fDC = 20.0f;
        break;
    case 3:
        s0->fCC = 1;
        s0->fCD = 3;
        s0->f50 = D_8033EAD0;
        s0->f54 = 9.0f;
        s0->fD0 = 4.0f;
        s0->fD4 = 0.75f;
        s0->fDC = 40.0f;
        break;
    case 4:
        s0->fCC = 1;
        s0->fCD = 3;
        s0->f50 = D_8033EAD4;
        s0->f54 = 9.0f;
        s0->fD0 = 5.0f;
        s0->fD4 = 1.0f;
        s0->fDC = 60.0f;
        break;
    }
    s0->f80 = 1;
    s0->f58 = (f32)(u32)s0->fCC;
    s0->f5C = 0.0f;
    math_mtx4Identity(&s0->mtx[0]);
}
