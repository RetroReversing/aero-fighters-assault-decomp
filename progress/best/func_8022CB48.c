/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_802070D4();
s32 func_8022C620();
s32 func_8022C6A4();
s32 func_8022C7C8();
s32 func_8022D3F0();
s32 func_8022D4EC();
s32 func_8022D560();
s32 func_80231A24();
s32 osRecvMesg();
s32 osSendMesg();
s32 osSpTaskYield();
extern char D_802544AC[];
extern char D_802544D4[];
extern char D_80254500[];
extern char D_80254528[];
extern char D_8025454C[];
extern char D_80254578[];
extern char D_80254598[];
extern void *D_80278718;
extern char D_80278720[];
extern u8 D_80278728;
extern u8 D_80278729;
extern u8 D_8027872A;
extern u8 D_8027872B;
extern u8 D_8027872C;
extern u8 D_8027872D;
extern u8 D_8027872E;
extern u8 D_8027872F;
extern u8 D_80278730;
extern s32 D_80278740;
extern s32 D_80278744;
extern char D_80281218[];
extern char D_80281258[];
extern char D_80281290[];

void func_8022CB48(void) {
    void *var_s0;
    char *__base_D_80278720;
    void *sp34;
    s32 temp_v0;

    __base_D_80278720 = D_80278720;

    sp34 = NULL;
    func_802070D4();
    if (D_80278740 == 0) {
        D_80278744 = 1;
        if (D_80278729 != 0) {
            D_80278730 += 1;
        } else {
            D_80278730 = 0;
        }
        if (D_8027872A != 0) {
            D_8027872F += 1;
        } else {
            D_8027872F = 0;
        }
        if ((s32) D_80278730 >= 0x33) {
            func_80231A24(D_802544AC, D_80278729, D_80278729);
            func_8022C7C8();
            return;
        }
        if ((D_80278730 + 0x32) < (s32) D_8027872F) {
            D_8027872F = 0;
            func_80231A24(D_802544D4, D_8027872A, D_8027872A);
            func_8022D3F0();
            osSendMesg(D_80281258, (s32 *)0x29C, 0);
            return;
        }
        if (D_80278729 == 0x61) {
            func_80231A24(D_80254500, D_80278729);
            return;
        }
        if (D_80278728 != 0) {
            D_80278728 = 0;
            func_8022D4EC();
            D_8027872E ^= 1;
        }
        if (osRecvMesg(D_80281290, &sp34, 0) != -1) {
loop_17:
            if (sp34 == NULL) {
                func_80231A24(D_80254528);
            } else {
                temp_v0 = (*(s32 *)((char *)(sp34) + 0x10));
                if (temp_v0 == 1) {
                    *(s32 *)(__base_D_80278720 + (D_8027872D * 4)) = sp34;
                    D_8027872D ^= 1;
                } else if (temp_v0 == 2) {
                    D_80278718 = sp34;
                } else {
                    func_80231A24(D_8025454C, (u8) sp34);
                }
                if (osRecvMesg(D_80281290, &sp34, 0) != -1) {
                    goto loop_17;
                }
            }
        }
        if (D_80278718 != NULL) {
            if (D_80278729 == 0x67) {
                if (D_8027872C != 0) {
                    func_80231A24(D_80254578);
                }
                if (D_8027872B != 0) {
                    func_80231A24(D_80254598);
                    func_8022C7C8();
                    return;
                }
                D_8027872B = 1;
                func_8022D560(1, 0x31);
                osSpTaskYield();
                goto block_35;
            }
            func_8022C620();
            goto block_35;
        }
        if (*(s32 *)(__base_D_80278720 + (D_8027872E * 4)) != 0) {
            func_8022C6A4();
        }
block_35:
        var_s0 = (*(void **)((char *)(D_80281218) + 0x260));
        if (var_s0 != NULL) {
            do {
                osSendMesg((*(s32 **)((char *)(var_s0) + 4)), D_80281218, 0);
                var_s0 = (*(void **)((char *)(var_s0) + 0));
            } while (var_s0 != NULL);
        }
    }
}
