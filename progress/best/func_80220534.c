extern f32 D_8024E870;
extern f32 D_80253938;
extern void *D_80273B90;
void func_80220534(f32 arg0)
{
  f32 var_fa0;
  s32 temp_a2;
  s32 temp_ft3;
  void *temp_v1;
  void *temp_v1_2;
  var_fa0 = arg0;
  if (var_fa0 < 0.0f)
  {
    var_fa0 = 0.0f;
  }
  else
    if (D_80253938 < var_fa0)
  {
    var_fa0 = D_80253938;
  }
  D_8024E870 = var_fa0;
  if (var_fa0 > 0.0f)
  {
    temp_v1 = D_80273B90;
    D_80273B90 = ((unsigned char *) temp_v1) + 8;
    *((s32 *) (((char *) temp_v1) + 0)) = 0xB7000000;
    *((s32 *) (((char *) temp_v1) + 4)) = 0x10000;
    temp_v1_2 = D_80273B90;
    D_80273B90 = ((unsigned char *) temp_v1_2) + 8;
    *((s32 *) (((char *) temp_v1_2) + 0)) = 0xBC000008;
    temp_ft3 = (s32) (D_8024E870 * 1000.0f);
    temp_a2 = 0x3E8 - temp_ft3;
    *((s32 *) (((char *) temp_v1_2) + 4)) = (s32) (((((0x1F400 / temp_a2) & 0xFFFF) << 14) << 2) | ((0, (((s32) ((temp_ft3 * (-0x100)) + 0x1F400)) / temp_a2) & 0xFFFF)));
    return;
  }
  temp_v1_2 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_v1_2) + 8;
  *((s32 *) (((char *) temp_v1_2) + 4)) = 0x10000;
  *((s32 *) (((char *) temp_v1_2) + 0)) = 0xB6000000;
}

