extern void *D_80273B90;
extern s32 D_80274348;
void func_8021FB54(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  unsigned int var_a0;
  s32 var_a1;
  s32 var_a2;
  s32 var_a3;
  void *temp_v1;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  s32 *__base_D_80274348;
  __base_D_80274348 = &D_80274348;
  var_a0 = (((((arg0 & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF;
  var_a2 = arg1;
  arg0 = arg2;
  arg1 = arg3;
  if (var_a0 < 0)
  {
    var_a0 = 0;
  }
  else
    if (var_a0 >= 0x140)
  {
    var_a0 = 0x13F;
  }
  if (arg0 < 0)
  {
    arg0 = 0;
  }
  else
    if (arg0 >= 0x140)
  {
    arg0 = 0x13F;
  }
  if (var_a2 < 0)
  {
    var_a2 = 0;
  }
  else
    if (var_a2 >= 0xF0)
  {
    var_a2 = 0xEF;
  }
  if (arg1 < 0)
  {
    arg1 = 0;
  }
  else
    if (arg1 >= 0xF0)
  {
    arg1 = 0xEF;
  }
  temp_v1 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1) + 8;
  *((s32 *) (((char *) temp_v1) + 4)) = 0;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xE7000000;
  temp_v1 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1) + 8;
  *((s32 *) (((char *) temp_v1) + 4)) = 0x300000;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xBA001402;
  temp_v1_3 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1_3) + 8;
  *((s32 *) (((char *) temp_v1_3) + 4)) = 0x0C080000;
  *((s32 *) (((char *) temp_v1_3) + 0)) = 0xB900031D;
  temp_v1_4 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1_4) + 8;
  *((s32 *) (((char *) temp_v1_4) + 0)) = (s32) ((((arg0 & 0x3FF) << 0xE) | 0xF6000000) | (((0xF0 - var_a2) & 0x3FF) * 4));
  *((s32 *) (((char *) temp_v1_4) + 4)) = (s32) (((var_a0 & 0x3FF) << 0xE) | (((0xF0 - arg1) & 0x3FF) * 4));
  temp_v1_5 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1_5) + 8;
  *((s32 *) (((char *) temp_v1_5) + 4)) = 0;
  *((s32 *) (((char *) temp_v1_5) + 0)) = 0xE7000000;
  temp_v1_6 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1_6) + 8;
  *((s32 *) (((char *) temp_v1_6) + 4)) = 0x100000;
  *((s32 *) (((char *) temp_v1_6) + 0)) = 0xBA001402;
  *__base_D_80274348 = ((*__base_D_80274348) & (~0xFFF)) | 0xFFE;
}

