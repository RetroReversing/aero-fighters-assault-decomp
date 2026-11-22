void func_80218884(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9)
{
  f32 __repair_temp_fv0_2_arg6;
  f32 __repair_temp_fv0_2_arg7;
  f32 temp_fv0;
  f32 sp2C;
  f32 sp30;
  f32 temp_fa0;
  f32 temp_ft4_2;
  f32 sp44;
  f32 sp3C;
  f32 sp40;
  f32 sp38;
  f32 temp_ft4;
  f32 temp_fv1;
  f32 sp48;
  f32 sp34;
  f32 var_fs0;
  f32 temp_fv0_2;
  f32 temp_fa1;
  f32 sp4C;
  f32 __repair_var_fs0_2;
  f32 __repair_var_fs0_1;
  f32 var_fs1;
  f32 __repair_var_fs1_2;
  f32 var_fs2;
  f32 var_fs3;
  temp_ft4 = *arg0;
  sp30 = *arg3;
  var_fs3 = *arg3;
  var_fs1 = *arg4;
  sp2C = var_fs1;
  temp_fv1 = *arg5;
  temp_fv0 = *arg2;
  sp4C = *arg2;
  var_fs2 = *arg1;
  temp_fa1 = var_fs1 - var_fs2;
  sp34 = var_fs2;
  var_fs0 = temp_ft4;
  temp_fa0 = var_fs3 - temp_ft4;
  sp40 = temp_fa1;
  sp38 = temp_ft4;
  sp44 = temp_fa0;
  sp48 = temp_fv1;
  sp3C = temp_fv1 - (*arg2);
  if (var_fs3 == temp_ft4)
  {
    if (temp_ft4 < arg6)
    {
      var_fs3 = arg6;
      __repair_var_fs0_1 = arg6;
    }
    else
      if (arg7 < __repair_var_fs0_1)
    {
      var_fs3 = arg7;
      var_fs0 = arg7;
    }
    if (var_fs2 < arg8)
    {
      var_fs2 = arg8;
    }
    else
      if (arg9 < var_fs2)
    {
      var_fs2 = arg9;
    }
    if (var_fs1 < arg8)
    {
      var_fs1 = arg8;
    }
    else
      if (arg9 < var_fs1)
    {
      __repair_var_fs1_2 = arg9;
    }
    *arg0 = var_fs0;
    *arg1 = var_fs2;
    *arg3 = var_fs3;
    *arg4 = __repair_var_fs1_2;
    return;
  }
  temp_fv0_2 = temp_fa1 / temp_fa0;
  temp_ft4_2 = __repair_var_fs1_2 - (temp_fv0_2 * var_fs3);
  if (var_fs0 < arg6)
  {
    __repair_var_fs0_2 = arg6;
    __repair_temp_fv0_2_arg6 = temp_fv0_2 * arg6;
    var_fs2 = __repair_temp_fv0_2_arg6 + temp_ft4_2;
    __repair_temp_fv0_2_arg7 = temp_fv0_2 * arg7;
  }
  else
    if (arg7 < __repair_var_fs0_2)
  {
    var_fs0 = arg7;
    var_fs2 = temp_ft4_2 + __repair_temp_fv0_2_arg7;
  }
  if (var_fs2 < arg8)
  {
    var_fs2 = arg8;
    if (temp_fv0_2 != 0.0f)
    {
      var_fs0 = (arg8 - temp_ft4_2) / temp_fv0_2;
    }
  }
  else
    if (arg9 < var_fs2)
  {
    var_fs2 = arg9;
    if (temp_fv0_2 != 0.0f)
    {
      var_fs0 = (arg9 - temp_ft4_2) / temp_fv0_2;
    }
  }
  if (var_fs3 < arg6)
  {
    var_fs3 = arg6;
    var_fs1 = __repair_temp_fv0_2_arg6 + temp_ft4_2;
  }
  else
    if (arg7 < var_fs3)
  {
    var_fs3 = arg7;
    var_fs1 = __repair_temp_fv0_2_arg7 + temp_ft4_2;
  }
  if (var_fs1 < arg8)
  {
    var_fs1 = arg8;
    if (temp_fv0_2 != 0.0f)
    {
      var_fs3 = (arg8 - temp_ft4_2) / temp_fv0_2;
    }
  }
  else
    if (arg9 < var_fs1)
  {
    var_fs1 = arg9;
    if (temp_fv0_2 != 0.0f)
    {
      var_fs3 = (arg9 - temp_ft4_2) / temp_fv0_2;
    }
  }
  if ((var_fs0 != sp38) && (sp44 != 0.0f))
  {
    sp4C = sp4C + (sp3C * ((var_fs0 - sp38) / sp44));
  }
  else
    if ((var_fs2 != sp34) && (temp_fa1 != 0.0f))
  {
    sp4C = sp4C + ((temp_fv1 - (*arg2)) * ((var_fs2 - sp34) / temp_fa1));
  }
  if ((var_fs3 != (*arg3)) && (sp44 != 0.0f))
  {
    sp48 += sp3C * ((var_fs3 - (*arg3)) / sp44);
  }
  else
    if ((var_fs1 != sp2C) && (temp_fa1 != 0.0f))
  {
    sp48 = sp48 + (sp3C * ((var_fs1 - sp2C) / temp_fa1));
  }
  do
  {
    *arg1 = var_fs2;
    *arg0 = var_fs0;
    *arg2 = sp4C;
    *arg3 = var_fs3;
    *arg4 = var_fs1;
    *arg5 = sp48;
  }
  while (0);
}

