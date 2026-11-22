#include "common.h"

/* Partial candidate from function #47244642619 in project #11; rechecked locally. */
/* identical to __osSiRawReadIo in 1080-decomp (matched), with its names changed by decompdecomp */
s32 func_80248040(s32 devAddr, s32* data) {
    if (func_8024A710() != 0) {
        return -1;
    }
    *data = *(volatile s32*)(0xA0000000 | devAddr);
    return 0;
}
