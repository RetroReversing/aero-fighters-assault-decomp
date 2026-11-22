s32 func_802190E8(f32, f32, u16, u16, s32, f32, f32);
extern f32 D_80253110;
s32 func_80218EAC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, s32 arg12)
{
  u16 sp5A;
  u16 sp58;
  f32 sp50;
  f32 sp4C;
  f32 sp40;
  f32 sp38;
  f32 temp_fa0;
  f32 temp_fa1;
  f32 temp_ft0;
  f32 temp_ft2;
  f32 temp_ft4;
  f32 temp_fv0;
  f32 var_fs0;
  f32 var_fs1;
  f32 var_fs2;
  f32 var_ft4;
  f32 var_ft5;
  f32 var_fv0;
  f32 var_fv1;
  f32 var_fv1_2;
  s32 var_v0;
  s32 var_v0_2;
  u16 var_a0;
  u16 var_a1;
  var_a0 = 0;
  var_a1 = 0;
  if (arg4 < arg6)
  {
    var_ft5 = arg4;
    var_fs0 = arg6;
  }
  else
  {
    var_ft5 = arg6;
    var_fs0 = arg4;
  }
  temp_ft2 = arg9 - arg8;
  temp_fa0 = 0.25f * temp_ft2;
  if (arg5 < arg7)
  {
    var_fs1 = arg5;
    var_fs2 = arg7;
  }
  else
  {
    var_fs1 = arg7;
    var_fs2 = arg5;
  }
  sp50 = temp_ft2;
  temp_ft4 = 2.0f * temp_fa0;
  sp38 = -temp_fa0;
  var_fv0 = sp38;
  temp_ft0 = arg10 - arg11;
  var_v0 = 0;
  temp_fa1 = 0.25f * temp_ft0;
  sp4C = temp_ft0;
  sp40 = -temp_fa1;
  var_fv1_2 = sp40;
  if (var_fv0 <= temp_ft4)
  {
    loop_7:
    if ((var_ft5 <= var_fv0) && ((var_fv0 - temp_fa0) <= var_fs0))
    {
      var_a1 = (var_a1 | ((0x8888 >> var_v0) & 0xFFFF)) & 0xFFFF;
    }

    var_fv0 += temp_fa0;
    var_v0 += 1;
    if ((var_fv0 <= temp_ft4) && (var_v0 != 4))
    {
      goto loop_7;
    }
  }
  temp_fv0 = 2.0f * temp_fa1;
  var_v0_2 = 0;
  if (sp40 <= temp_fv0)
  {
    loop_13:
    if ((var_fs1 <= var_fv1_2) && ((var_fv1_2 - temp_fa1) <= var_fs2))
    {
      var_a0 = (var_a0 | (0xF000 >> (var_v0_2 * 4))) & 0xFFFF;
    }

    var_fv1_2 += temp_fa1;
    var_v0_2 += 1;
    if ((var_fv1_2 <= temp_fv0) && (var_v0_2 != 4))
    {
      goto loop_13;
    }
  }
  if (arg2 != arg0)
  {
    var_fv1 = (arg3 - arg1) / (arg2 - arg0);
    var_ft4 = arg3 - (var_fv1 * arg2);
  }
  else
  {
    var_fv1 = D_80253110;
    var_ft4 = arg2;
  }
  sp5A = var_a0;
  sp58 = var_a1;
  return (((var_a0 & var_a1) & 0xFFFFFFFFFFFFFFFF) & func_802190E8(sp50, sp4C, var_a0, var_a1, arg12, var_fv1, var_ft4)) & 0xFFFF;
}

