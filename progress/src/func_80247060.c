s32 func_80247060(s32 status) {
    char pad[4];
    status = *(volatile s32*)0xA4040010;
    if (status & 0x1C) {
        return 1;
    }
    return 0;
}
