s32 func_80231A24();
s32 func_802A4EC0();
extern char D_80324AD8[];
extern char D_80324AF8[];
s32 func_802A2030(s32 arg0, u8 *arg1, s32 arg2, u8 *arg3, s32 arg4)
{
  int __repair_literal;
  register long temp_t6;
  int *__repair_home2 = &arg2;
  register s32 *sp24;
  u8 sp2F;
  s32 sp30;
  s32 *temp_a0;
  s32 var_t2;
  s32 temp_t1;
  u8 var_t0;
  void *temp_v1;
  temp_t1 = *arg1;
  temp_t6 = (*__repair_home2) & 0xFF;
  var_t2 = 0;
  var_t0 = 0;
  if (0)
  {
  }
  __repair_literal = 0;
  if (((s32) temp_t1) > __repair_literal)
  {
    loop_1:
    temp_v1 = *((s32 *) (arg0 + (var_t0 * 4)));

    if ((temp_v1 != NULL) && ((*((u8 *) (((char *) temp_v1) + 0x1591))) == 0))
    {
      sp2F = var_t0 & 0xFFFF;
      var_t2 = 1;
    }
    else
    {
      sp30 = (var_t0 + 1) & 0xFF;
      var_t0 = (u8) sp30;
      if (sp30 < ((0, *arg1)))
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
    if (var_t0 >= temp_t6)
  {
    sp30 = 0;
    do
    {
      func_80231A24(D_80324AD8, arg4, temp_t1 + 1);
    }
    while (0);
    var_t2 = 0;
    *arg3 += 1;
  }
  else
  {
    ;
    sp24 = temp_a0;
    func_802A4EC0(arg0 + (var_t0 * 4));
    var_t2 = (u32) temp_t6;
    temp_t6 = *temp_a0;
    if (temp_t6 == 0)
    {
      sp30 = temp_t6; temp_t6 = 0;
      var_t2 = (int) sp30;
      func_80231A24(D_80324AF8, 4, arg4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return var_t2;
}

