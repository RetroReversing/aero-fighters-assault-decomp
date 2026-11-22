extern u8 D_80329360;
extern f32 D_80344E34;
extern f32 D_80344E38;
extern f32 D_80344E3C;
extern s16 D_80348240;
extern f32 D_80348244;
extern f32 D_80348248;
extern f32 D_8034824C;
extern char D_80348250[];
f32 func_803003A4(f32 arg0)
{
  f32 var_fa0;
  void *temp_v1;
  f32 *__base_D_80344E38;
  __base_D_80344E38 = &D_80344E38;
  var_fa0 = arg0;
  if (var_fa0 == D_80344E34)
  {
    return 1.0f;
  }
  if (var_fa0 == 0.0f)
  {
    return 0.0f;
  }
  D_80329360 = 0;
  if ((*__base_D_80344E38) <= var_fa0)
  {
    do
    {
      var_fa0 -= *__base_D_80344E38;
      D_80329360 = ~D_80329360;
    }
    while ((*__base_D_80344E38) <= var_fa0);
  }
  if (var_fa0 < 0.0f)
  {
    do
    {
      var_fa0 += *__base_D_80344E38;
      D_80329360 = ~D_80329360;
    }
    while (var_fa0 < 0.0f);
  }
  if (D_80344E34 <= var_fa0)
  {
    var_fa0 = (*__base_D_80344E38) - var_fa0;
  }
  D_80348244 = var_fa0 * D_80344E3C;
 if (0) { }
  D_80348240 = (s16) ((s32) D_80348244);
  temp_v1 = (D_80348240 * 4) + D_80348250;
  D_80348248 = *((f32 *) (((char *) temp_v1) + 0));
  D_8034824C = *((f32 *) (((char *) temp_v1) + 4));
  if (1)
  {
  }
  if (1)
  {
  }
  D_80348244 -= (f32) D_80348240;
  if (D_80329360 != 0)
  {
    return ((D_80348248 - D_8034824C) * D_80348244) - D_80348248;
  }
  return D_80348248 + (D_80348244 * (D_8034824C - D_80348248));
}
