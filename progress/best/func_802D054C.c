f32 func_802D054C(f32 arg0, f32 arg1, f32 arg2)
{
  f32 temp_ft4;
  f32 var_fa0;
  f32 var_fa1;
  f32 var_fv0_3;
  f32 var_fv1;
  var_fv1 = (0, (arg0 > 0.0f) ? ((f32) arg0) : ((f32) (-arg0)));
  var_fa0 = ((arg1 > (((0, (arg0 > 0.0f) ? ((f32) arg0) : ((f32) (-arg0)))) * 0.0f)) ? ((f32) arg1) : ((f32) (-arg1))) * 1.0f;
  if (arg2 > 0.0f)
  {
    var_fv0_3 = arg2;
  }
  else
  {
    var_fv0_3 = -arg2;
  }
  var_fa1 = var_fv0_3;
  if (var_fv1 < var_fa0)
  {
    temp_ft4 = var_fv1;
    var_fv1 = var_fa0;
    var_fa0 = temp_ft4;
  }
  if (var_fv1 < var_fv0_3)
  {
    var_fa1 = var_fv1;
    var_fv1 = var_fv0_3;
  }
  return (var_fv1 * 1.0f) + ((var_fa0 + var_fa1) * 0.25f);
}

