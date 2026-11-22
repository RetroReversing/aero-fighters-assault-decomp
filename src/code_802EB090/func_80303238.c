#include "common.h"

/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

void func_80303238(void *arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    (*(s32 *)((char *)(arg0) + 0)) = arg1;
    (*(f32 *)((char *)(arg0) + 4)) = arg3;
    (*(f32 *)((char *)(arg0) + 8)) = arg4;
    (*(s32 *)((char *)(arg0) + 0xC)) = arg5;
    (*(s32 *)((char *)(arg0) + 0x10)) = arg2;
}
