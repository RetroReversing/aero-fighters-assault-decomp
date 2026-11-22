unsigned char func_80216464(f32, f32, f32);
f32 func_8022AA40(f32, f32);
s32 func_80219210(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 *arg10)
{
  f32 __repair_fzero = 0.0f;
  f32 sp6C;
  f32 sp64;
  
  f32 temp_fv1_3;
  f32 sp2C;
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 temp_fa0_3;
  f32 temp_fa1;
  f32 temp_fa1_2;
  f32 temp_fa1_3;
  f32 temp_ft4;
  f32 temp_ft4_2;
  f32 temp_ft5;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv0_5;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 sp30;
  register f32 temp_fv1_4;
  f32 temp_fv1_5;
  f32 sp68;
  s32 temp_v0;
  s32 var_v0_2;
  s32 __repair_phase_var_v0_2;
s32 __repair_phase___repair_phase_var_v0_2;
 if (1) { }
  temp_ft5 = arg4 - arg1;
  temp_fv1 = arg5 - arg2;
  temp_ft4 = arg3 - arg0;
  sp30 = temp_fv1;
  temp_fv0 = ((temp_ft4 * temp_ft4) + (temp_ft5 * temp_ft5)) + (temp_fv1 * temp_fv1);
  sp6C = temp_fv0;
  if (temp_fv0 == 0.0f)
  {
    __repair_phase_var_v0_2 = func_80216464(arg0, arg2, arg6);
    if (__repair_phase_var_v0_2 != 0)
    {
      *arg10 = __repair_fzero;
    }
    return __repair_phase_var_v0_2 & 0xFF;
  }
  temp_fv1_2 = arg1 - arg7;
  temp_fv0_2 = arg0 - arg6;
  __repair_phase___repair_phase_var_v0_2 = 0;
  temp_fa0 = arg2 - arg8;
  temp_fa1 = (sp30 * temp_fa0) + ((temp_ft4 * temp_fv0_2) + (temp_ft5 * temp_fv1_2));
  sp68 = 2.0f * temp_fa1;
  temp_fa0_2 = (temp_fa0 * temp_fa0) + ((temp_fv0_2 * temp_fv0_2) + (temp_fv1_2 * temp_fv1_2));
  sp2C = temp_fa0_2;
  sp64 = temp_fa0_2 - (arg9 * arg9);
  var_v0_2 = __repair_phase___repair_phase_var_v0_2;
  temp_fv0_3 = arg3 - arg6;
  if (func_8022AA40(temp_fa0_2, temp_fa1) < arg9)
  {
    var_v0_2 = 1;
  }
  temp_fv1_3 = arg4 - arg7;
  __repair_phase_var_v0_2 = var_v0_2;
  temp_fa1_2 = arg5 - arg8;
  if ((func_8022AA40(((temp_fv0_3 * temp_fv0_3) + (temp_fv1_3 * temp_fv1_3)) + (temp_fa1_2 * temp_fa1_2), temp_fa1_2) < arg9) && (var_v0_2 != 0))
  {
    *arg10 = __repair_fzero;
    return 1;
  }
  temp_fv0_4 = sp68 * sp68;
  temp_fv1_4 = (4.0f * temp_fv0) * sp64;
  if (temp_fv0_4 < temp_fv1_4)
  {
    return 0;
  }
  __repair_phase___repair_phase_var_v0_2 = 0;
  temp_fv0_5 = func_8022AA40(temp_fv0_4 - temp_fv1_4, sp68);
  temp_fv1_5 = -sp68;
  temp_fa0_3 = 2.0f * sp6C;
  var_v0_2 = __repair_phase___repair_phase_var_v0_2;
  __repair_phase___repair_phase_var_v0_2 = 0;
  temp_fa1_3 = (temp_fv1_5 - temp_fv0_5) / temp_fa0_3;
  temp_ft4_2 = (temp_fv1_5 + temp_fv0_5) / temp_fa0_3;
  if ((temp_fa1_3 >= 0.0f) && (temp_fa1_3 <= 1.0f))
  {
    var_v0_2 = 1;
  }
  if ((temp_ft4_2 >= 0.0f) && (temp_ft4_2 <= 1.0f))
  {
    __repair_phase___repair_phase_var_v0_2 = 1;
  }
  if ((var_v0_2 != 0) && (__repair_phase___repair_phase_var_v0_2 != 0))
  {
    if (temp_fa1_3 < temp_ft4_2)
    {
      *arg10 = temp_fa1_3;
      return 1;
    }
    *arg10 = temp_ft4_2;
    return 1;
  }
  if (var_v0_2 != 0)
  {
    *arg10 = temp_fa1_3;
    return 1;
  }
  if (__repair_phase___repair_phase_var_v0_2 != 0)
  {
    *arg10 = temp_ft4_2;
    return 1;
  }
  return 0;
}
