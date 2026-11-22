extern u8 D_8032AA80;
extern u8 D_80348BB1;
extern u8 D_80348BB2;
extern u8 D_80348BB3;
extern u8 D_80348BB4;
extern s32 func_8030CEA8(u8);

void func_8030C934(u8 arg0) {
    s32 v;
    v = func_8030CEA8(D_8032AA80);
    if (v < 0x21) {
        switch (arg0) {
        case 1:
            D_80348BB1 &= v;
            break;
        case 2:
            D_80348BB2 &= v;
            break;
        case 3:
            D_80348BB3 &= v;
            break;
        case 4:
            D_80348BB4 &= v;
            break;
        }
    }
}
