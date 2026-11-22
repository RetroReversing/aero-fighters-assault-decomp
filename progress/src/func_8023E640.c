s32 func_8023E640(u32 arg0, u32* arg1) {
    char pad[4];
    register u32 s;
    s = (*(volatile u32*)0xA4600010) ;
    if (s & 3) {
        do { s = (*(volatile u32*)0xA4600010) ; } while (s & 3);
    }
    *arg1 = *(u32*)((D_80000308 | arg0) | 0xA0000000);
    return 0;
}

 
