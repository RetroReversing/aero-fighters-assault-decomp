s32 func_80231A24();
unsigned short func_802A4C7C();
extern char D_80324970[];
extern char D_80324990[];
s32 func_802A1A30(s32 arg0, u8 *arg1, volatile unsigned char arg2, u8 *arg3, s32 arg4)
{
  s32 *sp24;
  register u8 sp2F;
  s32 sp30;
  s32 __repair_phase_sp30;
  s32 *temp_a0;
  int temp_t6;
  int __repair_phase_temp_t6;
  s32 __repair_phase_temp_v1_2;
  long var_t2;
  u8 var_t0;
  void *temp_v1;
  __repair_phase_temp_t6 = arg2 & 0xFF;
  __repair_phase_temp_v1_2 = *arg1;
  var_t0 = 0;
  var_t2 = 0;
  if (((s32) (__repair_phase_temp_v1_2 & 0xFF)) > 0)
  {
    loop_1:
    temp_v1 = *((s32 *) (arg0 + (((u32) var_t0) * 4)));

    if ((temp_v1 != NULL) && ((*((u8 *) (((char *) temp_v1) + 0x18))) == 0))
    {
      sp2F = var_t0;
      var_t2 = 1;
    }
    else
    {
      sp30 = (((int) var_t0) + 1) & 0xFF;
      var_t0 = (u8) sp30;
      if (sp30 < ((s32) (*arg1)))
      {
        goto loop_1;
      }
    }
  }
  if (var_t2 != 0)
  {
    sp30 = *((s32 *) (arg0 + ((sp2F * 2) * 2)));
  }
  else
    if (((s32) var_t0) >= __repair_phase_temp_t6)
  {
    sp30 = 0;
    sp30 = 0;
    func_80231A24(D_80324970, arg4, __repair_phase_temp_v1_2 + 1);
    *arg3 += 1;
  }
  else
  {
    temp_a0 = (void *) arg0;
    goto dummy_label_856947;
    dummy_label_856947:
    ;

    ;
    ;
    temp_a0 = (void *) (((char *) temp_a0) + ((s32) (var_t0 * 4)));
    sp24 = temp_a0;
    func_802A4C7C(temp_a0);
    __repair_phase_temp_v1_2 = *temp_a0;
    sp30 = __repair_phase_temp_v1_2;
    if (__repair_phase_temp_v1_2 == 0)
    {
      __repair_phase_sp30 = __repair_phase_temp_v1_2; temp_t6 = 0;
      sp30 = __repair_phase_sp30;
      func_80231A24(D_80324990, 4, arg4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return sp30;
}

