s32 func_80248B70(s32 direction, u32 devAddr, s32 dramAddr, u32 size) {
    register u32 status;

    while ((status = *(volatile u32*)0xA4600010) & 3) ;

    *(volatile u32*)0xA4600000 = osVirtualToPhysical(dramAddr);
    *(volatile u32*)0xA4600004 = (D_80000308 | devAddr) & 0x1FFFFFFF;

    switch (direction) {
        case 0:
            *(volatile u32*)0xA460000C = size - 1;
            break;
        case 1:
            *(volatile u32*)0xA4600008 = size - 1;
            break;
        default:
            return -1;
    }

    return 0;
}
