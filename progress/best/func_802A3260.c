s32 func_80231A24();
s32 func_802A558C();
s32 func_80320CE0();
extern char D_80324F10[];
extern char D_80324F30[];
s32 func_802A3260(s32 arg0, u8 *arg1, u8 arg2, u8 *arg3, s32 arg4)
{
  int __repair_literal;
  s32 *temp_a1;
  s32 *sp2C;
  u32 sp38;
  register u8 sp37;
  u8 sp36;
  char temp_t0;
  u8 var_s0;
  s32 temp_a0;
  sp38 = 0;
  sp36 = 0;
  var_s0 = 0;
  __repair_literal = 0;
  if (((s32) (*arg1)) > __repair_literal)
  {
    loop_1:
    temp_a0 = *((s32 *) (arg0 + (((unsigned) var_s0) * 4)));

    if (temp_a0 && (func_80320CE0(temp_a0) == 0))
    {
      sp37 = var_s0;
      sp36 = 1;
    }
    else
    {
      temp_t0 = (((unsigned) var_s0) + 1) & 0xFF;
      var_s0 = (u8) temp_t0;
      if (temp_t0 < ((s32) (*arg1)))
      {
        goto loop_1;
      }
    }
  }
  if (sp36)
  {
    sp38 = *((s32 *) (arg0 + (sp37 * 4)));
  }
  else
    if (var_s0 >= arg2)
  {
    func_80231A24(D_80324F10, arg4, (*arg1) + 1);
    *arg3 += 1;
  }
  else
  {
    temp_a1 = arg0 + (((u32) var_s0) * 4);
    sp2C = temp_a1;
    func_802A558C(temp_a1);
    temp_a0 = *temp_a1;
    sp38 = (s32) temp_a0;
    if (temp_a0 == 0)
    {
      func_80231A24(D_80324F30, 4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return sp38;
}

