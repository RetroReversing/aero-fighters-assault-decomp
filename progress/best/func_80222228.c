s32 osVirtualToPhysical(s32);
extern s32 D_8024E858;
extern s32 *D_80273B90;
extern s16 D_8027439C;
extern s16 D_8027439E;
extern s16 D_802743A0;
extern s16 D_802743A2;
void func_80222228(u8 arg0, u8 arg1, u8 arg2)
{
  s32 *sp1C;
  s32 *temp_v1;
  s32 *temp_v1_3;
  s32 *temp_v1_2;
  s32 *temp_v1_4;
  register s32 *temp_v1_5;
  s32 *temp_v1_6;
  s32 *temp_v1_7;
  s32 *temp_v1_8;
  unsigned long temp_t9;
  temp_v1 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1) + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xE7000000;
  *((s32 *) (((char *) temp_v1) + 4)) = 0;
  temp_v1_2 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1_2) + 8;
  do
  {
    *((s32 *) (((char *) temp_v1_2) + 0)) = 0xBA001402;
    *((s32 *) (((char *) temp_v1_2) + 4)) = 0x300000; temp_v1_3 = D_80273B90; D_80273B90 = ((s8 *) temp_v1_3) + 8;
    *((s32 *) (((char *) temp_v1_3) + 0)) = 0xFF10013F; sp1C = temp_v1_3;
    *((s32 *) (((char *) sp1C) + 4)) = osVirtualToPhysical(D_8024E858); temp_v1_4 = D_80273B90; D_80273B90 = ((s8 *) temp_v1_4) + 8;
    *((s32 *) (((char *) temp_v1_4) + 0)) = 0xF7000000; temp_t9 = ((((arg0 << 8) & 0xF800) | (((arg1 & 0xFF) * 8) & 0x7C0)) | ((((s32) (arg2 & 0xFF)) >> 2) & 0x3E)) | 1;
    *((s32 *) (((char *) temp_v1_4) + 4)) = (s32) ((temp_t9 << 0x10) | temp_t9); temp_v1_5 = D_80273B90; D_80273B90 = temp_v1_5 + 8;
    *((s32 *) (((char *) temp_v1_5) + 0)) = (((((D_8027439E - 1) & 0x3FF) << 5) << 9) | 0xF6000000) | (((0xEF - D_802743A0) & 0x3FF) * 4);
    *((s32 *) (((char *) temp_v1_5) + 4)) = (s32) ((((((D_8027439C & 0x3FF) << 12) << 1) << 1) & 0xFFFFFFFFFFFFFFFF) | (((0xF0 - D_802743A2) & 0x3FF) * 4)); temp_v1_6 = D_80273B90; D_80273B90 = ((s8 *) temp_v1_6) + 8;
    *((s32 *) (((char *) temp_v1_6) + 4)) = 0;
    *((s32 *) (((char *) temp_v1_6) + 0)) = 0xE7000000; temp_v1_7 = D_80273B90; D_80273B90 = ((s8 *) temp_v1_7) + 8;
    *((s32 *) (((char *) temp_v1_7) + 0)) = 0xBA001402;
    *((s32 *) (((char *) temp_v1_7) + 4)) = 0x100000; temp_v1_8 = D_80273B90;
  }
  while (0);
  D_80273B90 = ((s8 *) temp_v1_8) + 8;
  *((s32 *) (((char *) temp_v1_8) + 4)) = 0x10001;
  *((s32 *) (((char *) temp_v1_8) + 0)) = 0xF7000000;
}

