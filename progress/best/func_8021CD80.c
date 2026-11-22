extern s16 D_8025C400;
void func_8021CD80(f32 arg0)
{
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 var_fv0;
  f32 var_fv1;
  f32 var_fv1_2;
  f32 var_fv1_3;
  f32 var_fv1_4;
  char *var_a2;
  s32 temp_a3;
  s32 temp_ft0;
  s32 temp_ft3;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_v0;
  s32 var_v1;
  var_v0 = (s32) (arg0 * 255.0f);
  var_a2 = &D_8025C400;
  var_v1 = 0;
  do
  {
    var_a0 = var_v1;
    if (var_v0 >= 0xF9)
    {
      var_v0 = 0xF8;
    }
    var_fv0 = ((f32) var_v0) / 248.0f;
    if (var_v1 >= 0xF9)
    {
      var_a0 = 0xF8;
    }
    temp_fa0 = ((f32) var_a0) / 248.0f;
    var_fv1 = temp_fa0 - var_fv0;
    if (temp_fa0 < var_fv0)
    {
      var_fv1 = 0.0f;
    }
    if (var_fv0 == 1.0f)
    {
      var_fv1_2 = 0.0f;
    }
    else
    {
      var_fv1_2 = var_fv1 / (1.0f - var_fv0);
    }
    temp_ft0 = (s32) (var_fv1_2 * 255.0f);
    temp_a3 = var_v1 + 1;
    var_a0_2 = temp_a3;
    *((s16 *) var_a2) = (temp_ft0 << 8) | temp_ft0;
    if ((var_v0 - 1) >= (0xF9 - 1))
    {
      var_v0 = 0xF8;
      var_fv0 = ((f32) 0xF8) / 248.0f;
    }
    if (temp_a3 >= 0xF9)
    {
      var_a0_2 = 0xF8;
    }
    temp_fa0_2 = ((f32) var_a0_2) / 248.0f;
    var_fv1_3 = temp_fa0_2 - var_fv0;
    if (temp_fa0_2 < var_fv0)
    {
      var_fv1_3 = 0.0f;
    }
    if (var_fv0 == 1.0f)
    {
      var_fv1_4 = 0.0f;
    }
    else
    {
      var_fv1_4 = var_fv1_3 / (1 - var_fv0);
    }
    var_v1 += 2;
    var_a2 += 4;
    temp_ft3 = (s32) (var_fv1_4 * 255.0f);
    *((s16 *) (((char *) var_a2) + (-2))) = (s16) ((temp_ft3 << 8) | temp_ft3);
  }
  while (var_v1 != 0x100);
}

