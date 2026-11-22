extern f32 D_8033E670;
f32 func_8032072C(s32 arg0, s32 arg1)
{
  f32 var_fv1;
  s32 var_a1;
  var_a1 = arg1 & 0xFFFF;
  var_fv1 = 1.0f;
  if (var_a1 >= 0xC)
  {
    do
    {
      var_a1 -= 0xC;
      var_fv1 *= 2.0f * 1.0f;
    }
    while (var_a1 >= 0xC);
  }
  if (var_a1 < (-0xB))
  {
    do
    {
      var_a1 += 0xC;
      var_fv1 *= 0.5f;
    }
    while (var_a1 < (-0xB));
  }
  return var_fv1 * (*((&D_8033E670) + var_a1));
}

