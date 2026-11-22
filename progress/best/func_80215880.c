s32 func_80215880(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14)
{
  f32 __repair_fzero = 0.0f;
  f32 sp14;
  f32 spC;
  f32 sp0;
  f32 temp_fa0;
  f32 temp_fa0_2;
  register f32 temp_fv0;
  f32 temp_fa1_2;
  register f32 temp_ft0;
  f32 temp_ft3;
  f32 temp_ft4;
  register f32 temp_ft4_2;
  f32 temp_ft4_3;
  register f32 temp_ft5;
  f32 temp_ft5_2;
  f32 temp_ft5_3;
  f32 temp_fa1;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  temp_ft0 = arg11 - arg8;
  sp14 = temp_ft0;
  temp_ft3 = arg10 - arg7;
  spC = temp_ft3;
  sp0 = __repair_fzero;
  temp_ft5 = arg9 - arg6;
  temp_fv1 = arg1 - arg7;
  temp_ft4 = arg2 - arg8;
  temp_fv0 = arg0 - arg6;
  if (sp0 < (((((temp_fv1 * temp_ft0) - (temp_ft4 * temp_ft3)) * arg3) - (((temp_fv0 * temp_ft0) - (temp_ft4 * temp_ft5)) * arg4)) + (((temp_fv0 * temp_ft3) - (temp_fv1 * temp_ft5)) * arg5)))
  {
    return 0;
  }
  temp_ft5_2 = arg14 - arg11;
  temp_fv1_2 = arg1 - arg10;
  temp_fa0 = arg2 - arg11;
  temp_fv0_2 = arg0 - arg9;
  temp_ft4_2 = arg13 - arg10;
  temp_fa1 = arg12 - arg9;
  if ((((((temp_fv1_2 * temp_ft5_2) - (temp_fa0 * temp_ft4_2)) * arg3) - (((temp_fv0_2 * temp_ft5_2) - (temp_fa0 * temp_fa1)) * arg4)) + (((temp_fv0_2 * temp_ft4_2) - (temp_fv1_2 * temp_fa1)) * arg5)) > 0.0f)
  {
    return 0;
  }
  temp_ft5_3 = arg8 - arg14;
  temp_fv1_3 = arg1 - arg13;
  temp_fa0_2 = arg2 - arg14;
  temp_fv0_3 = arg0 - arg12;
  temp_ft4_3 = arg7 - arg13;
  temp_fa1_2 = arg6 - arg12;
  if ((((((temp_fv1_3 * temp_ft5_3) - (temp_fa0_2 * temp_ft4_3)) * arg3) - (arg4 * ((temp_fv0_3 * temp_ft5_3) - (temp_fa0_2 * temp_fa1_2)))) + (((temp_fv0_3 * temp_ft4_3) - (temp_fv1_3 * temp_fa1_2)) * arg5)) > 0.0f)
  {
    return 0;
  }
  return 1;
}

