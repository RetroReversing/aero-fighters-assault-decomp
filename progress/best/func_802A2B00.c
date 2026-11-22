s32 func_80231A24();
s32 func_802A52D4();
extern char D_80324D60[];
extern char D_80324D80[];
s32 func_802A2B00(s32 arg0, u8 *arg1, u8 arg2, u8 *arg3, s32 arg4)
{
  s32 __repair_phase_sp30;
  s32 __repair_phase___repair_phase_sp30;
  u8 sp2F;
  s32 *sp24;
  s32 *temp_a0;
  register u32 temp_t6;
  u8 *temp_v1;
  unsigned int var_t3;
  register u8 temp_t1;
  register u8 var_t0;
  temp_t1 = *arg1;
  temp_t6 = arg2;
  var_t0 = 0;
  __repair_phase_sp30 = 0;
  if (((s32) (*arg1)) > 0)
  {
    for (;;)
    {
      temp_v1 = *((s32 *) (arg0 + (((u32) var_t0) * 4)));
      if ((temp_v1 != NULL) && ((*temp_v1) == 0))
      {
        sp2F = var_t0;
        __repair_phase_sp30 = 1;
      }
      else
      {
        __repair_phase___repair_phase_sp30 = (var_t0 + 1) & 0xFF;
        var_t0 = (u8) __repair_phase___repair_phase_sp30;
        if (__repair_phase___repair_phase_sp30 < ((s32) (*arg1)))
        {
          continue;
        }
      }
      break;
    }

  }
  if (__repair_phase_sp30 != 0)
  {
    var_t3 = *((s32 *) (arg0 + (sp2F * 4)));
  }
  else
    if (((s32) var_t0) >= temp_t6)
  {
    __repair_phase___repair_phase_sp30 = 0;
    var_t3 = 0;
    func_80231A24(D_80324D60, arg4, temp_t1 + 1);
    *arg3 += 1;
  }
  else
  {
    temp_a0 = arg0 + ((var_t0 * 4) & 0xFFFFFFFFFFFFFFFF);
    func_802A52D4(temp_a0);
    sp24 = temp_a0;
    temp_t6 = *temp_a0;
    var_t3 = temp_t6;
    if (!temp_t6)
    {
      __repair_phase___repair_phase_sp30 = temp_t6; temp_t6 = 0;
      var_t3 = __repair_phase___repair_phase_sp30;
      func_80231A24(D_80324D80, 4, arg4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return var_t3;
}

