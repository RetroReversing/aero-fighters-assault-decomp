s32 func_802A9928(void *arg0, s32 arg1, u32 *arg2, s32 arg3, volatile unsigned char arg4, s32 arg5)
{
  s32 var_v1;
  volatile int sp20;
  s32 temp_v0_2;
  u32 temp_v0;
  var_v1 = 0;
  if (arg1 != 0)
  {
    if ((*((s16 *) (((char *) arg0) + 0x6C38))) > 0)
    {
      if (arg1 > 0)
      {
        do
        {
          temp_v0 = *arg2;
        }
        while (0);
        sp20 = 0;
        temp_v0_2 = func_802AF1D4((s32) arg0, temp_v0 & 0xFFFFFF, (s32) (temp_v0 >> 0x18), arg4, (s32) arg5, (s32) arg5);
        var_v1 = sp20;
        if (temp_v0_2 == 1)
        {
          var_v1 = 1;
        }
        else
          if (temp_v0_2 != 8)
        {
          var_v1 = 5;
        }
      }
    }
    else
    {
      var_v1 = 5;
    }
  }
  return var_v1;
}

