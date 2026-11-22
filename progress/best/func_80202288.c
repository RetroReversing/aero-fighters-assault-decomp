volatile char func_802011D0(s32 *, s32);
s32 func_80201F14(s32);
s32 func_80201FB8(volatile unsigned char);
s32 func_80202424(s32, u16);
s32 func_8020292C(s32);
extern s32 D_8025204C;
extern s32 D_80256DE4;
extern u16 D_80280BFA;
typedef struct 
{
  unsigned char pad_0[136];
  int field_88;
  unsigned char pad_8C[20];
  int field_A0;
  int field_A4;
  unsigned char pad_A8[8];
  unsigned char field_B0;
} __repair_record_temp_v0_3;
void func_80202288(u16 arg0)
{
  s32 temp_s0;
  s32 temp_v1;
  s32 var_s1;
  s32 var_s2;
  s32 var_a1;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v0_3;
  var_a1 = D_80280BFA;
 do { var_s2 = 0; if (((s32) var_a1) > 0) { do { do { var_s1 = 0; do { temp_v0 = (void *) var_s1; temp_v0 = (void *) (((char *) temp_v0) + ((s32) D_80256DE4)); if (((*((u8 *) (((char *) temp_v0) + 0xAC))) == 1) && (((((temp_v1 = *((s32 *) (((char *) temp_v0) + 0xA0)), temp_s0 = var_s2 & 0xFF, temp_v1 == 1)) || (temp_v1 == 2)) || (temp_v1 == 8)) || ((*((s32 *) (((char *) temp_v0) + 0xA8))) == 0x10))) { temp_v0_2 = D_80256DE4 + var_s1; if (temp_v1 == 2) { *((u8 *) (((char *) temp_v0_2) + 0xB0)) = (u8) ((*((u8 *) (((char *) temp_v0_2) + 0xB0))) + 1); } func_80202424(temp_s0 & 0xFF, arg0); temp_v0_3 = D_80256DE4 + var_s1; if (((((__repair_record_temp_v0_3 *) temp_v0_3)->field_88 + ((__repair_record_temp_v0_3 *) temp_v0_3)->field_A4) == 0) || ((((__repair_record_temp_v0_3 *) temp_v0_3)->field_A0 == 2) && (((s32) ((__repair_record_temp_v0_3 *) temp_v0_3)->field_B0) >= 5))) { func_802011D0(&D_8025204C, var_s2); if ((*((s32 *) (((char *) (D_80256DE4 + var_s1)) + 0x98))) & 0x10) { func_80201FB8(temp_s0 & 0xFF); } else { func_80201FB8(temp_s0 & 0xFF); func_80201F14(temp_s0 & 0xFF); } } else { func_8020292C(temp_s0 & 0xFF); } var_a1 = D_80280BFA; } var_s2 += 1; var_s1 += 0xB4; } while (var_s2 < ((s32) var_a1)); } while (0); } while (0); } } while (0);
}
