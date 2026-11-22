extern u8 D_80348BB1[];
extern u8 D_80348BB2[];
extern u8 D_80348BB3[];
extern u8 D_80348BB4[];
extern s32 func_8030CEA8(u8 arg0);

u8 func_80309F58(u8 arg0, u8 arg1) {
    s32 val = func_8030CEA8(arg0);
    u8 ret = 0;
    switch (arg1) {
        case 1: ret = D_80348BB1[0] & val; break;
        case 2: ret = D_80348BB2[0] & val; break;
        case 3: ret = D_80348BB3[0] & val; break;
        case 4: ret = D_80348BB4[0] & val; break;
        default: break;
    }
    return ret;
}
