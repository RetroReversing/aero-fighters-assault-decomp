#include "common.h"

/* Partial candidate from function #47244642447 in project #11; rechecked locally. */
/* identical to __osSiDeviceBusy in 1080-decomp (matched), with its names changed by decompdecomp */
s32 func_8024A710(void) {
    register u32 status = *(volatile u32*)0xA4800018;
    if (status & 3) {
        return 1;
    }
    return 0;
}
