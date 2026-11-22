void func_802C67D0(u32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(u32))
{
  u32 temp_s1;
  u32 var_s0;
  var_s0 = arg0;
  temp_s1 = arg0; temp_s1 += arg1 * arg2;
  if (arg0 < temp_s1)
  {
    do
    {
      arg3(var_s0);
      var_s0 += arg2 ^ 0;
    }
    while (var_s0 < temp_s1);
  }
}

