s32 func_80231A24();
s32 func_802A56E8();
extern char D_80324FE8[];
extern char D_80325008[];
s32 func_802A3610(s32 arg0, u8 *arg1, u8 arg2, u8 *arg3, s32 arg4)
{
  register s32 sp30;
  s32 *temp_a0;
  s32 *sp24;
  u8 sp2F;
  register s32 temp_t6;
  s32 var_t2;
  u8 temp_t1;
  u8 var_t0;
  s32 var_t3;
  void *temp_v1;
  temp_t1 = *arg1;
  temp_t6 = (arg2 & 0xFF) & 0xFF;
  var_t2 = 0;
  var_t0 = 0;
  if (((s32) (*arg1)) > 0)
  {
    for (;;)
    {
      temp_v1 = *((s32 *) (arg0 + (var_t0 * 4)));
      if ((temp_v1 != NULL) && (((*((u8 *) (((char *) temp_v1) + 4))) & 0xFFFF) == 0))
      {
        sp2F = var_t0;
        var_t2 = 1;
      }
      else
      {
        sp30 = (((unsigned) var_t0) + 1) & 0xFF;
        var_t0 = (u8) sp30;
        if (sp30 < ((s32) (*arg1)))
        {
          continue;
        }
      }
      break;
    }

  }
  if (var_t2 != 0)
  {
    var_t3 = *((s32 *) (arg0 + (sp2F * 4)));
  }
  else
    if (((s32) var_t0) >= ((temp_t6 & 0xFFFFFFFFu) & 0xFFFFFFFFu))
  {
    sp30 = 0;
    var_t3 = 0;
    func_80231A24(D_80324FE8, arg4, temp_t1 + 1);
    *arg3 += 1;
  }
  else
  {
    temp_a0 = ((unsigned) arg0) + (var_t0 * 4);
    sp24 = temp_a0;
    func_802A56E8(temp_a0);
    temp_t6 = *temp_a0;
    var_t3 = temp_t6;
    if (temp_t6 == 0)
    {
      sp30 = temp_t6; temp_t6 = 0;
      var_t3 = sp30;
      func_80231A24(D_80325008, 4, arg4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return var_t3;
}

