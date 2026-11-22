s32 func_802C679C(unsigned long);
void func_802C6980(u32 arg0, s32 arg1, unsigned short arg2, s32 (*arg3)(u32, s32), s32 arg4)
{
  u32 var_s0;
  if (arg0 != (var_s0 * 0))
  {
    if (arg3 != NULL)
    {
      var_s0 = arg0; var_s0 += arg1 * arg2;
      if (arg0 < var_s0)
      {
        do
        {
          var_s0 -= arg2;
          {
            arg3(var_s0, 2);
          }
        }
        while (((((((((((arg0 & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) < var_s0);
      }
    }
    if (arg4 != 0)
    {
      func_802C679C(arg0);
    }
  }
}

