extern f32 D_80253F5C;
extern f32 D_80253F60;
extern f32 D_80253F64;
extern f32 D_80253F68;
extern f32 D_80253F6C;
f32 func_8022AE1C(f32 arg0, f32 arg1)
{
  f32 sp8;
  f32 sp4;
  f32 temp_ft5;
  f32 var_ft4;
  f32 var_ft4_2;
  f32 var_fv0;
  s32 var_v0;
  f32 __repair_sp8_1;
  if ((arg1 == 0.0f) && (arg0 == 0.0f))
  {
    return 0.0f;
  }
  if (arg1 > 0.0f)
  {
    var_fv0 = arg1;
  }
  else
  {
    var_fv0 = -arg1;
  }
  if (arg0 > 0.0f)
  {
    var_ft4_2 = arg0;
  }
  else
  {
    var_ft4_2 = -arg0;
  }
  var_v0 = 0;
  if (var_fv0 < var_ft4_2)
  {
    temp_ft5 = var_fv0;
    var_fv0 = var_ft4_2;
    var_ft4_2 = temp_ft5;
    var_v0 = 1;
  }
  sp4 = var_ft4_2 / var_fv0;
  if (var_fv0 >= var_ft4_2)
  {
    __repair_sp8_1 = -(var_ft4_2 - var_fv0);
  }
  else
  {
    sp8 = var_ft4_2 - var_fv0;
  }
  var_ft4 = (sp4 * D_80253F5C) + ((D_80253F60 * __repair_sp8_1) * sp4);
  if (arg1 >= 0.0f)
  {
    if (var_v0 != 0)
    {
      var_ft4 = D_80253F64 - var_ft4;
    }
  }
  else
    if (var_v0 != 0)
  {
    var_ft4 += D_80253F68;
  }
  else
  {
    var_ft4 = D_80253F6C - var_ft4;
  }
  if (arg0 >= 0.0f)
  {
    return var_ft4;
  }
  return -var_ft4;
}

