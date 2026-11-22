s32 func_8022F378(void *arg0, f32 arg1)
{
  s32 temp_a3;
  s32 temp_v0;
  s32 temp_v1;
  s32 var_a0;
  void *var_a1;
  temp_v0 = *((s32 *) (((char *) arg0) + 0xC));
  temp_v1 = *((u8 *) (((char *) arg0) + 0x10));
  if ((*((f32 *) (((char *) (((*((s32 *) (((char *) arg0) + 0xC))) & 0xFFFFFFFFFFFFFFFF) + ((*((u8 *) (((char *) arg0) + 0x10))) * 4))) + (-4)))) <= arg1)
  {
    return 0xFF;
  }
  var_a0 = (((((((((((temp_v1 & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu;
  if (((s32) temp_v1) <= 0)
  {
    goto __shared_return_0;
  }
  else
  {
    temp_a3 = -(temp_v1 & 3);
    if (temp_a3 != ((temp_v1 & 3) * 0))
    {
      var_a1 = (*((s32 *) (((char *) arg0) + 0xC))) + (temp_v1 * 4);
      loop_5:
      if ((*((f32 *) (((char *) var_a1) + (-4)))) < arg1)
      {
        return var_a0 & 0xFF;
      }

      var_a0 -= 1;
      var_a1 = ((unsigned char *) var_a1) - 4;
      if ((temp_a3 + temp_v1) == var_a0)
      {
        if (var_a0 != 0)
        {
          goto block_9;
        }
        goto __shared_return_0;
      }
      goto loop_5;
    }
    block_9:
    var_a1 = (*((s32 *) (((char *) arg0) + 0xC))) + (var_a0 * 4);

    loop_10:
    if ((*((f32 *) (((char *) var_a1) + (-4)))) < arg1)
    {
      return var_a0 & 0xFF;
    }

    if ((*((f32 *) (((char *) var_a1) + (-8)))) < arg1)
    {
      return (var_a0 - 1) & 0xFF;
    }
    if ((*((f32 *) (((char *) var_a1) + (-0xC)))) < arg1)
    {
      return (var_a0 - 2) & 0xFF;
    }
    if ((*((f32 *) (((char *) var_a1) + (-0x10)))) < arg1)
    {
      return (var_a0 - 3) & 0xFF;
    }
    var_a0 -= 4;
    var_a1 = ((unsigned char *) var_a1) - 0x10;
    if (var_a0 == 0)
    {
      __shared_return_0:
      return 0;

    }
    goto loop_10;
  }
}

