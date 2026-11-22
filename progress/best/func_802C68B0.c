u32 func_802C676C(s32);
u32 func_802C68B0(u32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(u32, s32, s32, s32, s32, s32, s32, s32, s32))
{
  u32 temp_s1;
  u32 var_s0;
  u32 var_s4;
  var_s4 = (((arg0 & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu;
  if (!arg0)
  {
    var_s4 = func_802C676C(arg1 * arg2);
  }
  if ((var_s4 != 0) && (arg3 != NULL))
  {
    var_s0 = var_s4;
    temp_s1 = var_s4; temp_s1 += arg1 * arg2;
    if (var_s4 < temp_s1)
    {
      do
      {
        arg3(var_s0, 0, 0, 0, 0, 0, 0, 0, 0);
        var_s0 += (((((((arg2 & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF;
      }
      while (var_s0 < temp_s1);
    }
  }
  return var_s4;
}

