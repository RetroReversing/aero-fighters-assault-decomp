/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_80225424();
u16 *func_8022B948();
s32 func_80231A24();
extern char D_80253BE4[];
extern char D_80253C20[];
extern void *D_802751E0;
extern s32 D_8027524C;

u16 *func_80226790(s32 arg0) {
int __repair_constant = 2;

    void **__base_D_802751E0;
    s32 sp6C;
    u16 *sp68;
    s32 sp60;
    u16 sp54;
    u16 sp52;
    u16 *sp4C;
    u16 *sp48;
    s32 sp44;
    s32 sp40;
    s32 temp_t0;
    
    
    s32 var_a3_2;
    
    u16 *temp_v0;
    u16 *temp_v0_2;
    u16 *temp_v0_3;
    u16 *temp_v0_4;
    char *var_v0;
    u16 temp_a0;
    u16 temp_t2;
    u16 var_a1;
    void *temp_v1;
    void *temp_v1_2;

    func_80225424(&sp52, &arg0, 2);
    if ((s32) sp52 >= 0x1001) {
        func_80231A24(D_80253BE4, sp52);
        sp52 = 0x1000;
    }
    func_80225424(&sp54, &arg0, 2);
    func_80225424(&sp44, &arg0, 4);
    func_80225424(&sp40, &arg0, 4);
    if ((M2C_BITWISE(f32, sp44) != 0.0f) || (M2C_BITWISE(f32, sp40) != 0.0f)) {
        temp_v0_2 = func_8022B948(0x1C, 4);
        sp4C = temp_v0_2;
        M2C_FIELD(temp_v0_2, f32 *, 0) = 1.0f;
        M2C_FIELD(temp_v0_2, f32 *, 4) = 1.0f;
        M2C_FIELD(temp_v0_2, f32 *, 8) = (f32) sp44;
        M2C_FIELD(temp_v0_2, s8 *, 0x1A) = 1;
        M2C_FIELD(temp_v0_2, f32 *, 0x10) = 0.0f;
        M2C_FIELD(temp_v0_2, f32 *, 0x14) = 0.0f;
        M2C_FIELD(temp_v0_2, f32 *, 0xC) = (f32) sp40;
    } else {
        sp4C = NULL;
    }
    func_80225424(&sp44, &arg0, 4);
    func_80225424(&sp40, &arg0, 4);
    if ((M2C_BITWISE(f32, sp44) != 0.0f) || (M2C_BITWISE(f32, sp40) != 0.0f)) {
        temp_v0_3 = func_8022B948(0x1C, 4);
        sp48 = temp_v0_3;
        M2C_FIELD(temp_v0_3, f32 *, 0) = 1.0f;
        M2C_FIELD(temp_v0_3, f32 *, 4) = 1.0f;
        M2C_FIELD(temp_v0_3, f32 *, 8) = (f32) sp44;
        M2C_FIELD(temp_v0_3, s8 *, 0x1A) = 1;
        M2C_FIELD(temp_v0_3, f32 *, 0x10) = 0.0f;
        M2C_FIELD(temp_v0_3, f32 *, 0x14) = 0.0f;
        M2C_FIELD(temp_v0_3, f32 *, 0xC) = (f32) sp40;
    } else {
        sp48 = NULL;
    }
    arg0 += sp52;
    temp_v0_4 = func_8022B948(sp54 * 8, 8);
    sp68 = temp_v0_4;
    func_80225424(temp_v0_4, &arg0, sp54 * 8);
    temp_v0 = func_8022B948(0x2C, 4);
    func_80225424(temp_v0 + 0xA, &arg0, 2);
    func_80225424((s8 *) temp_v0 + 0xC, &arg0, 2);
    func_80225424(temp_v0 + 0xE, &arg0, 1);
    func_80225424((s8 *) temp_v0 + 0xF, &arg0, 1);
    func_80225424(temp_v0 + 0x10, &arg0, 1);
    func_80225424(temp_v0 + 0x12, &arg0, 2);
    func_80225424(temp_v0 + 0x14, &arg0, 2);
    func_80225424(temp_v0 + 0x20, &arg0, 2);
    func_80225424(temp_v0 + 0x22, &arg0, 1);
    func_80225424((s8 *) temp_v0 + 0x23, &arg0, 1);
    func_80225424(temp_v0 + 0x24, &arg0, 1);
    func_80225424(temp_v0 + 0x25, &arg0, 1);
    func_80225424(temp_v0 + 0x26, &arg0, 1);
    func_80225424(temp_v0 + 0x28, &arg0, 4);
    func_80225424(temp_v0 + 0x27, &arg0, 1);
    M2C_FIELD(temp_v0, u16 *, 8) = sp52;
    temp_t2 = M2C_FIELD(temp_v0, u16 *, 0x12);
    var_a1 = temp_t2 & 0xFFF;
    __base_D_802751E0 = &D_802751E0;
    if ((*__base_D_802751E0) != NULL) {
        temp_a0 = M2C_FIELD(D_802751E0, u16 *, 0);
        temp_t0 = 0;
        sp6C = 0;
        if ((s32) temp_a0 > 0) {
            var_v0 = M2C_FIELD(D_802751E0, u16 **, 8);
            for (;;) {/*__repair_loop_weight*/__repair_rows: {
                sp6C += 1;}
if (0) goto __repair_rows;
                var_v0 += __repair_constant;
                if (var_a1 == *(u16 *)var_v0) {
                    var_a1 = *(u16 *)(M2C_FIELD(D_802751E0, s32 *, 4) + temp_t0);
                } else {
                    temp_t0 += __repair_constant;
                    if (sp6C < (s32) temp_a0) {
                        continue;
                    }
                }
                break;
            }
        }
    }
    temp_t0 = *(s32 *)(D_8027524C + (var_a1 * 4));
    var_a3_2 = 0;
    if (temp_t0 == 0) {
        
        sp6C = temp_t0;
        func_80231A24((sp60 = 0, D_80253C20), var_a1, temp_t2, 0);
        var_a3_2 = sp60;
    }
    M2C_FIELD(temp_v0, u16 **, 4) = temp_v0_4;
    M2C_FIELD(temp_v0, s32 *, 0) = temp_t0;
    sp6C = 0;
    M2C_FIELD(temp_v0, u16 **, 0x18) = sp4C;
    M2C_FIELD(temp_v0, u16 **, 0x1C) = sp48;
    if ((s32) sp54 > 0) {
        if (sp54 & 1) {
            var_a3_2 = 1;
            if (M2C_FIELD(sp68, u8 *, 0) == 0xFD) {
                M2C_FIELD(temp_v0_4, s32 *, 4) |= (temp_t0 + 0x80000000);
                sp6C = 1;
            }
            if (sp54 != 1) {
                goto block_23;
            }
        } else {
block_23:
            do {
                temp_v1 = (void *) (((var_a3_2 * 8)) + (s32) sp68);
                if (M2C_FIELD(temp_v1, u8 *, 0) == 0xFD) {
                    switch (sp6C){default:{
                        M2C_FIELD(temp_v1, s32 *, 4) |= (*(s32 *)(D_8027524C + (M2C_FIELD(temp_v0, u16 *, 0x14) * 4)) + 0x80000000);
                    }break;case 0:{
                        M2C_FIELD(temp_v1, s32 *, 4) |= (temp_t0 + 0x80000000);
                    }break;}
                    sp6C += 1;
                }
                temp_v1_2 = (void *) ((((var_a3_2 + 1) * 8)) + (s32) sp68);
                if (M2C_FIELD(temp_v1_2, u8 *, 0) == 0xFD) {
                    switch (sp6C){case 0:{
                        M2C_FIELD(temp_v1_2, s32 *, 4) |= (temp_t0 + 0x80000000);
                    }break;default:{
                        M2C_FIELD(temp_v1_2, s32 *, 4) |= (*(s32 *)(D_8027524C + (M2C_FIELD(temp_v0, u16 *, 0x14) * 4)) + 0x80000000);
                    }break;}
                    sp6C += 1;
                }
                var_a3_2 += __repair_constant;
            } while (var_a3_2 != sp54);
        }
    }
    return temp_v0;
}
