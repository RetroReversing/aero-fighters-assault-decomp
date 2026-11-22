s32 func_80305E10(s32 arg0, s8 arg1, s32 arg2, s32 arg3)
{
  int *__repair_home0 = &arg0;
  unsigned long var_v1;
  s32 var_a1;
  s32 var_v0;
  var_v1 = var_v1 * 0;
  var_v0 = *__repair_home0;
  var_a1 = ((s32) (&arg1)) & (~3);
  if ((*__repair_home0) != 0)
  {
    do
    {
      if (var_v0 != 1)
      {
        var_v1 += *__repair_home0;
        var_a1 = (var_a1 + 7) & (~3);
        var_v0 = *((s32 *) (((char *) var_a1) + (-4)));
      }
    }
    while (var_v0 != 0);
  }
  return var_v1;
}

