s32 func_8022FF90(u8 *arg0)
{
  s32 var_v1;
  u8 *var_a0;
  u8 temp_v0;
  var_v1 = (*arg0) * 0;
  var_a0 = arg0 + 1;
  if (((*arg0) != 0) != ((*arg0) * 0))
  {
    do
    {
      temp_v0 = *var_a0;
      var_v1 += 1;
      var_a0 += 1;
    }
    while ((temp_v0 != 0) != 0);
  }
  return var_v1;
}

