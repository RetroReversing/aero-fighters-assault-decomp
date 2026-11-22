/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24(s32 arg0, f32);
extern void *D_8024E710;
extern char D_80252D7C[];

typedef struct { float field_0; float field_4; unsigned char pad_8[16]; unsigned char field_18; unsigned char field_19; unsigned char pad_1A[2]; float field_1C; float field_20; unsigned char pad_24[4]; int field_28; } __repair_record_temp_v1;
s32 func_80211984(s32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4) {
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    u8 temp_t0;
    void *temp_v1;

    *arg3 = arg1;
    *arg4 = arg2;
    temp_v1 = *(s32 *)((*(s32 *)((char *)(D_8024E710) + 4)) + (arg0 * 4));
    if (temp_v1 == NULL) {
        func_80231A24(arg0, arg1);
        return 0;
    }
    temp_t0 = (((__repair_record_temp_v1*)temp_v1)->field_18);
    temp_lo_2 = (s32) (arg1 - (((__repair_record_temp_v1*)temp_v1)->field_0)) / (s32) (((__repair_record_temp_v1*)temp_v1)->field_1C);
    /*__repair_loop_weight*/
    arg0 = (s32) (arg2 - (((__repair_record_temp_v1*)temp_v1)->field_4)) / (s32) (((__repair_record_temp_v1*)temp_v1)->field_20);
    
    if ((temp_lo_2 >= (s32) ((((__repair_record_temp_v1*)temp_v1)->field_18))) || (temp_lo_2 < 0) || (arg0 >= (s32) (((__repair_record_temp_v1*)temp_v1)->field_19)) || (arg0 < 0)) {
        return 0;
    }
    temp_lo = (((unsigned)((((__repair_record_temp_v1*)temp_v1)->field_18)) * arg0) + temp_lo_2) * 0x4C;
    *arg3 = (*(f32 *)((char *)(((((__repair_record_temp_v1*)temp_v1)->field_28) + ((((unsigned)((((__repair_record_temp_v1*)temp_v1)->field_18)) * arg0) + temp_lo_2) * 0x4C))) + 0x30));
    *arg4 = (*(f32 *)((char *)(((((__repair_record_temp_v1*)temp_v1)->field_28) + temp_lo)) + 0x34));
    return 1;
}
