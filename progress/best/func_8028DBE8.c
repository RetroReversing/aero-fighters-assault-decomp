/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_8021178C();
s32 func_8021ACB0();
s32 func_8028D0DC();
s32 func_8028D160();
extern char D_803235C4[];
extern char D_803235CC[];
extern char D_803235D4[];
extern void *D_8032AA74;
extern f32 D_8033EE04;
extern f32 D_8033EE08;
extern f32 D_8033EE0C;

void func_8028DBE8(void *arg0, s32 arg1, s32 arg2, u8 arg3) {
    struct {
        f32 f34;
    } __repair_frame;
int *__repair_home1 = &arg1;

    register f32 *__base_D_8033EE0C;

    __base_D_8033EE0C = &D_8033EE0C;

    func_8021178C((*__repair_home1), 1, &__repair_frame, 0);
    func_8021ACB0((*(s32 *)((char *)(arg0) + 0x1B0)), 0xFFFF);
    func_8021ACB0((*(s32 *)((char *)(arg0) + 0x1B0)), (*__repair_home1));
    (*(s32 *)((char *)(arg0) + 0x1BC)) = arg2;
    (*(f32 *)((char *)(arg0) + 0x1C4)) = -2.0f;
    (*(f32 *)((char *)(arg0) + 0x1C8)) = 20.0f;
    (*(f32 *)((char *)(arg0) + 0x1CC)) = -0.5f;
    (*(f32 *)((char *)(arg0) + 0x1D0)) = (f32) D_8033EE04;
    switch (arg3) {                                 /* irregular */
    case 1:
        (*(s32 **)((char *)(arg0) + 0x1C0)) = D_803235C4;
        func_8028D0DC(arg0);
        (*(f32 *)((char *)(arg0) + 0x1C4)) = -5.0f;
        (*(f32 *)((char *)(arg0) + 0x1CC)) = -5.0f;
        (*(f32 *)((char *)(arg0) + 0x1C8)) = 50.0f;
        (*(f32 *)((char *)(arg0) + 0x1D0)) = (f32) D_8033EE08;
        break;
    case 2:
        (*(s32 **)((char *)(arg0) + 0x1C0)) = D_803235CC;
        break;
    case 3:
        (*(s32 **)((char *)(arg0) + 0x1C0)) = D_803235D4;
        break;
    }
    (*(f32 *)((char *)(arg0) + 0x1B8)) = (f32) ((10.0f / __repair_frame.f34) * 0.5f);
    if ((*(f32 *)((char *)(arg0) + 0x1B8)) < (*__base_D_8033EE0C)) {
        (*(f32 *)((char *)(arg0) + 0x1B8)) = (f32) (*__base_D_8033EE0C);
    }
    func_8028D160(arg0, (*(f32 *)((char *)(D_8032AA74) + 0x32A8)));
}
