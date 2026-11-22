extern s8 D_8024E85C;
extern void *D_80273B90;
extern s32 D_80274348;
void func_80222818(s32 arg0)
{
  void *temp_v1;
  void *temp_v1_4;
  s8 *__base_D_8024E85C;
  __base_D_8024E85C = &D_8024E85C;
  if (arg0 != 0)
  {
    temp_v1 = D_80273B90;
    D_80273B90 = ((unsigned char *) temp_v1) + 8;
    do
    {
 do { *((s32 *) (((char *) temp_v1) + 0)) = 0xB900031D; *((s32 *) (((char *) temp_v1) + 4)) = 0x0C182078; } while (0);
    }
    while (0);
    if (1)
    {
      temp_v1 = D_80273B90;
      D_80273B90 = ((unsigned char *) temp_v1) + 8;
      *((s32 *) (((char *) temp_v1) + 4)) = 1;
      *((s32 *) (((char *) temp_v1) + 0)) = 0xB7000000;
      *(&D_8024E85C) = (float) 1;
      D_80274348 |= 0x200000;
    }
    return;
  }
  temp_v1 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1) + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xB900031D;
  goto dummy_label_133526;
  dummy_label_133526:
  ;

  ;
  ;
  ;
  ;
  ;
  *((s32 *) (((char *) temp_v1) + 4)) = 0x0C182048;
  temp_v1_4 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1_4) + 8;
  *((s32 *) (((char *) temp_v1_4) + 4)) = 1;
  *((s32 *) (((char *) temp_v1_4) + (((arg0 & 0xFFFF) != 0) * 0))) = 0xB6000000;
  *__base_D_8024E85C = 0;
  D_80274348 &= 0xFFDFFFFF;
}
