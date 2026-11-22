/* decompdecomp donor translation unit v1 */












typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef float f32;
typedef double f64;








extern s32 func_80009000(void);

 
 
s32 __osSpRawReadIo(s32 devAddr, s32* data) {
    if (func_80009000() != 0) {
        return -1;
    }
    *data = *(volatile s32*)(0xA0000000 | devAddr);
    return 0;
}

 
