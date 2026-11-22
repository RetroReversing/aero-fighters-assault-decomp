s32 func_80208650(s32 arg0, s32 *arg1)
{
  char *var_a1;
  s32 var_v1;
  u32 temp_a3;
  u32 temp_t6;
  u32 temp_t9;
  u32 temp_v0;
  u32 var_v0;
  var_a1 = arg1;
  var_v1 = *((s32 *) var_a1);
  temp_t6 = ((u32) (var_v1 & 0xFF000000)) >> 0x18;
  var_v0 = temp_t6;
  if (0xB8 != temp_t6)
  {
    loop_2:
    temp_a3 = (*((u32 *) (((char *) var_a1) + 4))) & 0xFFFFFFFFFFFFFFFF;

    var_a1 += 8;
    if (var_v0 == 4)
    {
      temp_v0 = arg0 & 0x7FFFFFFF;
      if ((temp_v0 >= temp_a3) && (temp_v0 < ((u32) ((var_v1 & 0xFFFF) + temp_a3))))
      {
        return 1;
      }
    }
    var_v1 = *((s32 *) var_a1);
    temp_t9 = ((u32) (var_v1 & 0xFF000000)) >> 0x18;
    var_v0 = temp_t9;
    if (temp_t9 == 0xB8)
    {
      goto __shared_return_0;
    }
    goto loop_2;
  }
  __shared_return_0:
  return 0;

}

