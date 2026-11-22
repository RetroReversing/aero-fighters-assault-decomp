s32 func_80231A24();
s32 func_802A58B8();
extern char D_80325108[];
extern char D_80325128[];
s32 func_802A3AF0(s32 arg0, u8 *arg1, volatile unsigned short arg2, u8 *arg3, s32 arg4)
{
  s32 sp30;
  u8 sp2F;
  s32 *sp24;
  s32 *temp_a0;
  s32 temp_t6;
  u32 var_t2;
  u8 temp_t1;
  u8 var_t0;
  void *temp_v1;
  temp_t1 = ((((((((*arg1) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & (0xFFFFFFFFFFFFFFFF & 0xFFFFFFFFu)) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF;
  temp_t6 = arg2 & 0xFF;
  goto dummy_label_903667;
  dummy_label_903667:
  ;

  ;
  ;
  var_t0 = 0;
  var_t2 = 0;
  if (((s32) (*arg1)) > 0)
  {
    loop_1:
    temp_v1 = *((s32 *) (arg0 + (((u32) var_t0) * 4)));

    if ((temp_v1 != NULL) && ((*((u8 *) (((char *) temp_v1) + 0x1B5))) == 0))
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
    var_t2 = 0;
    func_80231A24(D_80325108, arg4, temp_t1 + 1);
    *arg3 += 1;
  }
  else
  {
    temp_a0 = (void *) arg0; temp_a0 = (void *) (((char *) temp_a0) + ((s32) (var_t0 * 4)));
    sp24 = temp_a0;
    func_802A58B8(temp_a0);
    temp_t6 = ((((((*temp_a0) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF;
    var_t2 = temp_t6;
    if (temp_t6 == 0)
    {
      func_80231A24(D_80325128, 4, arg4);
      sp30 = temp_t6;
      var_t2 = sp30;
    }
    else
    {
      *arg1 = (*arg1) + 1;
    }
  }
  return var_t2;
}

