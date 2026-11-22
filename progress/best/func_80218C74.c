void func_80218C74(s16 arg0, f32 *arg1, f32 *arg2)
{
  f32 temp_fv0;
  f32 temp_fv1;
  s16 var_a0;
  var_a0 = arg0;
 temp_fv0 = *arg1; ; temp_fv1 = *arg2;
  if (arg0 < 0)
  {
    var_a0 = arg0 + ((4 & 0xFFFFFFFF) & 0xFFFFFFFF);
  }
  else
    if (var_a0 >= 4)
  {
    var_a0 = (s16) (var_a0 % 4);
  }
  switch (var_a0)
  {
    case 0:
      *arg1 = temp_fv0;
      *arg2 = temp_fv1;
      return;

    case 1:
      *arg1 = temp_fv1;
      *arg2 = -(*arg1);
      return;

    case 2:
      *arg1 = -temp_fv0;
      *arg2 = -temp_fv1;
      return;

    case 3:
      *arg1 = -temp_fv1;
      *arg2 = temp_fv0;
      return;

  }

}
