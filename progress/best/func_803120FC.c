s32 func_803120FC(void *arg0, s32 arg1)
{
  s32 temp_a3;
  s32 temp_a3_2;
  s32 var_a2;
  s32 var_a2_2;
  s32 var_v1;
  void *var_t0;
  temp_a3 = *((s32 *) (((char *) arg0) + 0x300));
  var_v1 = 0;
  var_a2 = 0;
  if (temp_a3 > 0)
  {
    var_t0 = arg0;
    for (;;)
    {
      var_a2 = var_a2 + 1;
      if (((arg1 & 0xFFFFFF) & 0xFF) == (*((s32 *) (((char *) var_t0) + 0x290))))
      {
        var_v1 = 1;
        *((s32 *) (((char *) arg0) + 0x374)) = arg1;
      }
      else
      {
        var_t0 = ((unsigned char *) var_t0) + 4;
        if (var_a2 < temp_a3)
        {
          continue;
        }
      }
      break;
    }

  }
  if ((var_v1 == 0) && ((arg1 & 0xFFFFFF) == (*((s32 *) (((char *) arg0) + 0x280)))))
  {
    *((s32 *) (((char *) arg0) + 0x374)) = arg1;
    var_v1 = 1;
  }
  if (var_v1 == 0)
  {
    var_a2_2 = 0;
    temp_a3_2 = *((s32 *) (((char *) arg0) + 0x370));
    if (temp_a3_2 > ((arg1 & 0xFFFFFF) * 0))
    {
      var_t0 = arg0;
      for (;;)
      {
        var_a2_2 += 1;
        if ((arg1 & 0xFFFFFF) == (*((s32 *) (((char *) var_t0) + 0x304))))
        {
          *((s32 *) (((char *) arg0) + 0x374)) = arg1;
          return 1 & 0xFF;
        }
        var_t0 = ((unsigned char *) var_t0) + 4;
        if (var_a2_2 >= temp_a3_2)
        {
          return var_v1 & 0xFF;
        }
        continue;
        break;
      }

    }
  }
  return var_v1 & 0xFF;
}

