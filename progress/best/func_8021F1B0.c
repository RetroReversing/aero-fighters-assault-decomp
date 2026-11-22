s32 func_8022B780(s32, s32, s32);
s32 func_8022BA58(volatile unsigned short);
extern u16 D_8024E874;
extern s32 D_80271B50;
extern s32 D_80271B58;
extern u16 D_80271B5C;
extern s16 D_80271B5E;
extern s16 D_80271B66;
extern s16 D_80271B68;
extern f32 D_80271B6C;
extern f32 D_80271B70;
extern s8 D_80271B78;
extern s32 D_80280BC0;
void func_8021F1B0(void)
{
  s32 __repair_operand;
  int __repair_constant = 0xFF;
  s32 temp_t6;
  short temp_t8;
  s32 var_a0;
  void *temp_v0;
  void *temp_v0_2;
  *((s32 *) (((char *) (&D_80271B50)) + 0)) = func_8022BA58((*((u16 *) (((char *) (&D_80280BC0)) + 0x24))) * 0x10);
  *((s32 *) (((char *) (&D_80271B50)) + 4)) = func_8022BA58((*((u16 *) (((char *) (&D_80280BC0)) + 0x24))) * 0x10);
  func_8022B780(*((s32 *) (((char *) (&D_80271B50)) + 0)), 0, (*((u16 *) (((char *) (&D_80280BC0)) + 0x24))) * 0x10);
  func_8022B780(*((s32 *) (((char *) (&D_80271B50)) + 4)), 0, (*((u16 *) (((char *) (&D_80280BC0)) + 0x24))) * 0x10);
  D_80271B5C = D_8024E874;
  var_a0 = 0;
  D_80271B58 = *((&D_80271B50) + ((s16) D_80271B5C));
  if (((s32) ((unsigned long long) (*((u16 *) (((char *) (&D_80280BC0)) + 0x24))))) > 0)
  {
    do
    {
      temp_t6 = var_a0 * 0x10;
      do
      {
        var_a0 += 1;
      }
      while (0);
      temp_v0 = (*((s32 *) (((char *) (&D_80271B50)) + 0))) + temp_t6;
      *((s16 *) (((char *) temp_v0) + 0)) = 0;
      *((s16 *) (((char *) temp_v0) + 2)) = 0;
      *((s16 *) (((char *) temp_v0) + 4)) = 0;
      *((s16 *) (((char *) temp_v0) + 6)) = __repair_constant;
      *((s16 *) (((char *) temp_v0) + 8)) = 0;
      *((s16 *) (((char *) temp_v0) + 0xA)) = 0;
      *((s8 *) (((char *) temp_v0) + 0xC)) = __repair_constant;
      *((s8 *) (((char *) temp_v0) + 0xD)) = __repair_constant;
      *((s8 *) (((char *) temp_v0) + 0xE)) = __repair_constant;
      *((s8 *) (((char *) temp_v0) + 0xF)) = __repair_constant;
    }
    while (var_a0 < ((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x24)))));
    var_a0 = 0;
  }
  if (((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x24)))) > 0)
  {
    do
    {
      temp_t8 = var_a0 * 0x10;
      var_a0 += 1;
      __repair_operand = *((s32 *) (((char *) (&D_80271B50)) + 4));
      temp_v0_2 = __repair_operand + temp_t8;
      *((s16 *) (((char *) temp_v0_2) + 0)) = 0;
      *((s16 *) (((char *) temp_v0_2) + 2)) = 0;
      *((s16 *) (((char *) temp_v0_2) + 4)) = 0;
      *((s16 *) (((char *) temp_v0_2) + 6)) = __repair_constant;
      *((s16 *) (((char *) temp_v0_2) + 8)) = 0;
      *((s16 *) (((char *) temp_v0_2) + 0xA)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 0xC)) = __repair_constant;
      *((s8 *) (((char *) temp_v0_2) + 0xD)) = __repair_constant;
      *((s8 *) (((char *) temp_v0_2) + 0xE)) = 0xFF;
      *((s8 *) (((char *) temp_v0_2) + 0xF)) = 0xFF;
    }
    while (var_a0 < ((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x24)))));
  }
  D_80271B5E = 0;
  D_80271B68 = -1;
  D_80271B66 = D_80271B68;
  D_80271B6C = 1.0f;
  D_80271B70 = 1.0f;
  D_80271B78 = 0;
}

