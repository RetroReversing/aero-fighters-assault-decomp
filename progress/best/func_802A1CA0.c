s32 func_80231A24();
s32 func_802A4D64();
extern char D_80324A00[];
extern char D_80324A20[];
s32 func_802A1CA0(s32 arg0, u8 *arg1, s32 arg2, u8 *arg3, s32 arg4)
{
  int *__repair_home2 = &arg2;
  s32 sp30;
  s32 __repair_phase_sp30;
  s32 *sp24;
  register u8 sp2F;
  s32 *temp_a0;
  s32 temp_t6;
  u32 var_t2;
  u8 temp_t1;
  u8 var_t0;
  void *temp_v1;
  __repair_rows:
  {
    temp_t1 = (unsigned long long) ((*arg1) & 0xFFu);
  }

  if (0)
  {
    goto __repair_rows;
  }
  temp_t6 = (*__repair_home2) & 0xFF;
  var_t0 = 0;
  var_t2 = 0;
  if (((s32) temp_t1) > 0)
  {
    for (;;)
    {
      temp_v1 = *((s32 *) (arg0 + (var_t0 * 4)));
      if ((temp_v1 != NULL) && ((*((u8 *) (((char *) temp_v1) + 0x1891))) == 0))
      {
        sp2F = var_t0;
        var_t2 = 1;
      }
      else
      {
        sp30 = (((u32) var_t0) + 1) & 0xFF;
        var_t0 = (u8) sp30;
        if (sp30 < ((s32) temp_t1))
        {
          continue;
        }
      }
      break;
    }

  }
  if (var_t2 != 0)
  {
    var_t2 = *((s32 *) ((arg0 ^ 0) + (sp2F * 4)));
  }
  else
    if (((s32) var_t0) >= temp_t6)
  {
    var_t2 = 0;
    func_80231A24((sp30 = 0, D_80324A00), arg4, temp_t1 + 1);
    *arg3 += 1;
  }
  else
  {
    temp_a0 = arg0 + (var_t0 * 4);
    sp24 = temp_a0;
    func_802A4D64(temp_a0);
    temp_t6 = *temp_a0;
    var_t2 = temp_t6;
    if (temp_t6 == 0)
    {
      __repair_phase_sp30 = temp_t6; temp_t6 = 0;
      var_t2 = __repair_phase_sp30;
      func_80231A24(D_80324A20, 4, arg4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return var_t2;
}

