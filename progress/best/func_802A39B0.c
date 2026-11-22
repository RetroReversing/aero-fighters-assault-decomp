s32 func_80231A24();
s32 func_802A5844();
s32 func_80320CE0();
extern char D_803250C0[];
extern char D_803250E0[];
s32 func_802A39B0(s32 arg0, u8 *arg1, u8 arg2, u8 *arg3, s32 arg4)
{
  unsigned int temp_a0;
  s32 *sp2C;
  s32 *temp_a1;
  s32 sp38;
  u8 sp37;
  register u8 sp36;
  register char temp_t0;
  unsigned int var_s0;
  sp38 = 0;
  sp36 = 0;
  var_s0 = 0;
  if (((s32) (*arg1)) > 0)
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
      temp_t0 = (var_s0 + 1) & 0xFF;
      var_s0 = (u8) ((unsigned) temp_t0);
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
    if (((s32) var_s0) >= arg2)
  {
    func_80231A24(D_803250C0, arg4, (*arg1) + 1);
    *arg3 += 1;
  }
  else
  {
    temp_a1 = (void *) arg0; temp_a1 = (void *) (((char *) temp_a1) + ((s32) (var_s0 * 4)));
    sp2C = temp_a1;
    func_802A5844(temp_a1);
    temp_a0 = *temp_a1;
    sp38 = (int) temp_a0;
    if (temp_a0 == 0)
    {
      func_80231A24(D_803250E0, 4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return sp38;
}

