long long func_80218D34(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  f32 sp20;
  f32 sp24;
  register f32 temp_fa0;
  f32 temp_fs1;
  register f32 temp_ft4;
  f32 temp_ft5;
  f32 var_fv0;
  s32 var_v0;
  s32 var_a0;
  f32 var_fv1;
  s32 var_v0_2;
  s32 var_v1;
  temp_ft4 = (arg4 - arg3) * 0.25f;
  var_a0 = 0;
  var_v1 = 0;
  var_v0 = 0;
  temp_fs1 = 2.0f * temp_ft4;
  sp24 = -temp_ft4;
  var_fv0 = sp24;
  temp_ft5 = (arg6 - arg5) * 0.25f;
  sp20 = -temp_ft5;
  var_fv1 = sp20;
  if (temp_fs1 >= var_fv0)
  {
    loop_2:
    if (((arg0 - arg2) <= var_fv0) && ((var_fv0 - temp_ft4) <= (arg0 + arg2)))
    {
      var_a0 = (((int) var_a0) | (0x8888 >> var_v0)) & 0xFFFF;
    }

    var_fv0 += temp_ft4;
    var_v0 += 1;
    if ((var_fv0 <= temp_fs1) && (var_v0 != 4))
    {
      goto loop_2;
    }
  }
  temp_fa0 = 2.0f * temp_ft5;
  var_v0_2 = 0;
  if (sp20 <= temp_fa0)
  {
    loop_9:
    if (((arg1 - arg2) <= var_fv1) && ((var_fv1 - temp_ft5) <= (arg1 + arg2)))
    {
      var_v1 = (var_v1 | (0xF000 >> (var_v0_2 * 4))) & 0xFFFF;
    }

    var_fv1 += temp_ft5;
    var_v0_2 += 1;
    if ((var_fv1 <= temp_fa0) && (var_v0_2 != 4))
    {
      goto loop_9;
    }
  }
  return ((((((((var_v1 & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & var_a0) & 0xFFFF;
}

