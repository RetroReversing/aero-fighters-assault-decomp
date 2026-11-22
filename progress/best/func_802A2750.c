s32 func_80231A24();
s32 func_802A5178();
extern char D_80324C88[];
extern char D_80324CA8[];
s32 func_802A2750(s32 arg0, u8 *arg1, s32 arg2, u8 *arg3, s32 arg4)
{
  s32 sp30;
  u8 sp2F;
  register s32 *sp24;
  s32 *temp_a0;
  s32 temp_t6;
  unsigned long var_t2;
  s32 temp_t1;
  u8 var_t0;
  void *temp_v1;
  do
  {
    temp_t1 = *arg1;
  }
  while (temp_t1 * 0);
  temp_t6 = arg2 & 0xFF;
  var_t2 = 0;
  var_t0 = 0;
  if (((s32) (*arg1)) > 0)
  {
    loop_1:
    temp_v1 = *((s32 *) (arg0 + (((unsigned) var_t0) * 4)));

    if ((temp_v1 != NULL) && ((*((u8 *) (((char *) temp_v1) + 0x30D))) == 0))
    {
      sp2F = var_t0;
      var_t2 = 1;
    }
    else
    {
      sp30 = (var_t0 + 1) & 0xFF;
      var_t0 = (u8) sp30;
      if (sp30 < ((s32) (*arg1)))
      {
        goto loop_1;
      }
    }
  }
  if (var_t2 != 0)
  {
    var_t2 = *((s32 *) (arg0 + (sp2F * 4)));
  }
  else
    if (((s32) var_t0) >= temp_t6)
  {
    __repair_rows:
    {
      func_80231A24((sp30 = 0, D_80324C88), arg4, temp_t1 + 1);
    }

    if (0)
    {
      goto __repair_rows;
    }
    var_t2 = 0;
    *arg3 += 1;
  }
  else
  {
    temp_a0 = arg0 + (var_t0 * 4);
    sp24 = temp_a0;
    func_802A5178(temp_a0);
    var_t2 = temp_t6;
    temp_t6 = *temp_a0;
    if (!temp_t6)
    {
      sp30 = temp_t6; temp_t6 = 0;
      func_80231A24(D_80324CA8, 4);
      var_t2 = sp30;
    }
    else
    {
      *arg1 += 1;
    }
  }
  return var_t2;
}

