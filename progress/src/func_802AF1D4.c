s32 func_802A86F0(void *, s32, s32, s32);
s32 func_802AF1D4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, volatile char arg5)
{
  s16 temp_a0;
  s32 temp_a2;
  s32 var_v1;
  void *var_v0;
  if (arg2 == (1 & 0xFFu))
  {
    if (1)
    {
    }
    return 8;
  }
  temp_a0 = *((s16 *) (((char *) arg0) + 0x6C38));
  var_v1 = 0;
  var_v0 = arg0;
  if (temp_a0 > 0)
  {
    for (;;)
    {
      temp_a2 = *((s32 *) (((char *) var_v0) + 0x68B4));
      var_v1 += 1;
      if ((arg1 == temp_a2) && ((*((s32 *) (((char *) var_v0) + 0x6B0C))) == 0))
      {
        if (arg5 != 0)
        {
          *((s32 *) (((char *) var_v0) + 0x6B0C)) = 1;
          func_802A86F0(arg0, arg3, temp_a2, *((s32 *) (((char *) var_v0) + 0x69E0)));
          *((s8 *) (((char *) arg0) + 0x8A8)) = 1;
          if (arg4 == 4)
          {
            *((s32 *) (((char *) arg0) + 0x8CC)) = (s32) ((*((s32 *) (((char *) arg0) + 0x8CC))) + 1);
          }
        }
        return 1;
      }
      var_v0 = ((unsigned char *) var_v0) + 4;
      if (var_v1 >= temp_a0)
      {
        goto block_10;
      }
      continue;
      break;
    }

  }
  block_10:
  return 0;

}

