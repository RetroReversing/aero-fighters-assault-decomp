extern f32 D_80342A34;
f32 func_802CF544(f32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  f32 temp_ft5;
  f32 temp_fv1;
  f32 var_fa1;
  f32 var_fv1;
  register f32 var_ft4_2;
  f32 var_ft4;
  temp_fv1 = arg0 - arg1;
  if (arg1 < arg0)
  {
    var_ft4 = temp_fv1;
  }
  else
  {
    var_ft4 = -temp_fv1;
  }
  if (var_ft4 < D_80342A34)
  {
    return arg0;
  }
  temp_ft5 = (arg2 * temp_fv1) * arg3;
  if (temp_fv1 > 0.0f)
  {
    var_ft4_2 = temp_fv1;
  }
  else
  {
    var_ft4_2 = -temp_fv1;
  }
  if (temp_ft5 > 0.f)
  {
    var_fv1 = temp_ft5;
  }
  else
  {
    var_fv1 = -temp_ft5;
  }
  if (var_ft4_2 < var_fv1)
  {
    var_fa1 = arg0;
  }
  else
  {
    var_fa1 = arg1 + ((((s32) ((double) arg2)) * temp_fv1) * arg3);
  }
  return var_fa1;
}

