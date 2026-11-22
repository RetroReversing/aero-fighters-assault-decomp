/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 alClose();
s32 func_80204E0C();
s32 func_80205010();
s32 func_8022CA14();
s32 func_8022D560();
s32 osRecvMesg();
extern char D_80257628[];
extern char D_802577F0[];
extern char D_80257828[];
extern char D_80257860[];
extern u32 D_8025B8C0;
extern char D_8025B8F8[];
extern char D_80281218[];

void func_80204C90(s32 arg0) {
    s32 var_s0;
    s32 sp48;
    void *sp54;
    register s16 temp_v0;
s32 __repair_result_var_s0;
    register s32 var_s1;

    sp54 = NULL;
    var_s1 = 0;
    var_s0 = 0;
    osRecvMesg(D_8025B8F8, &sp54, 1);
    func_8022CA14(D_80281218, &sp48);
    do {
        osRecvMesg(D_802577F0, &sp54);
        do { func_8022D560(0, 0x29); } while (0);
        temp_v0 = (*(s16 *)((char *)(sp54) + 0));
        switch (temp_v0) {                          /* irregular */
        case 4:
            break;
        case 1:
            if (func_80204E0C((*(s32 *)((char *)((D_80257628 + (((u32) D_8025B8C0 % 3U) * 4))) + 8)), var_s0) != 0) {
                osRecvMesg(D_80257828, &sp54, 1);
                func_80205010((*(s32 *)((char *)(sp54) + 4)));
                __repair_result_var_s0 = (*(s32 *)((char *)(sp54) + 4));
            }
            break;
        case 10:
            var_s1 = 1;
            break;
        }
    } while ((u32)var_s1 == 0);
    alClose(D_80257860);
}
