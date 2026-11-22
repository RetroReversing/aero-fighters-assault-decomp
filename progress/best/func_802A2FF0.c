s32 func_80231A24();
s32 func_802A54A4();
extern char D_80324E80[];
extern char D_80324EA0[];
s32 func_802A2FF0(s32 arg0, u8 *arg1, volatile unsigned long arg2, u8 *arg3, s32 arg4)
{
  int __repair_literal;
  register s32 *temp_a0;
  u8 sp2F;
  s32 sp30;
  s32 *sp24;
  s32 temp_t6;
  unsigned int temp_v1_2;
  s32 var_t2;
  register u8 temp_t1;
  u8 var_t0;
  void *temp_v1;
  temp_v1_2 = (u8) (*arg1);
  temp_t6 = (arg2 & 0xFF) ^ 0;
  var_t0 = 0;
  var_t2 = 0;
  __repair_literal = 0;
  if (((s32) (*arg1)) > __repair_literal)
  {
    loop_1:
    temp_v1 = *((s32 *) ((arg0 + (((unsigned) var_t0) * 4)) & 0xFFFFFFFFFFFFFFFF));

    if ((temp_v1 != NULL) && ((*((u8 *) (((char *) temp_v1) + 0x1E1))) == 0))
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
    sp30 = 0;
    do
    {
      if (1)
      {
      }
      func_80231A24(D_80324E80, arg4, temp_v1_2 + 1);
    }
    while (0);
    var_t2 = 0;
    *arg3 += 1;
  }
  else
  {
    temp_a0 = arg0 + (var_t0 * 4);
    sp24 = temp_a0;
    func_802A54A4(temp_a0);
    temp_v1_2 = *temp_a0;
    var_t2 = temp_v1_2;
    if (temp_v1_2 == 0)
    {
      sp30 = temp_v1_2; temp_v1_2 = 0;
      var_t2 = sp30;
      func_80231A24(D_80324EA0, 4, arg4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return var_t2;
}

