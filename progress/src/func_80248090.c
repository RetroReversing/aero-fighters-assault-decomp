/* Partial candidate from function #47244642723 in project #11; rechecked locally. */
/* identical to __osSpRawWriteIo in 1080-decomp (matched), with its names changed by decompdecomp */
s32 func_80248090(s32 devAddr, s32 val) {
    extern s32 func_8024A710(void);
    if (func_8024A710() != 0) {
        return -1;
    }
    *(volatile s32*)(0xA0000000 | devAddr) = val;
    return 0;
}
