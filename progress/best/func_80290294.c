void func_80290294(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  s16 temp_t1;
  s32 temp_t9;
  s32 temp_a0_2;
  s32 var_v1;
  s32 __repair_phase_temp_a0_2;
  unsigned long temp_at;
  s32 temp_t2;
  s32 temp_t4;
  s32 var_a1;
  s32 var_a1_2;
  s32 var_t0;
  register void *temp_a0;
  void *temp_t9_2;
  register void *temp_v0;
  temp_v0 = (void *) arg0; temp_v0 = (void *) (((char *) temp_v0) + ((s32) (arg2 * 0x3A)));
  *((s8 *) (((char *) temp_v0) + 0x1DA)) = arg1;
  temp_a0_2 = arg3 & 0xFF;
  if ((arg1 & 0xFFFF) & 0xFF)
  {
    var_v1 = (temp_a0_2 * 2) & 0xFF;
    var_a1 = 0;
    if (var_v1 > 0)
    {
      temp_a0_2 = arg0 + ((arg2 ^ 0) * 0x3A);
      var_t0 = 0;
      do
      {
        temp_a0 = arg4 + ((var_t0 / 2) * 2);
        *((s16 *) (((char *) (temp_a0_2 + (var_a1 * 2))) + 0x1A8)) = (s16) (((s16) (*((s16 *) (((char *) temp_a0) + 0)))) >> 8);
        temp_t4 = var_t0 * 2;
        var_t0 = (var_t0 + 2) & 0xFF;
        *((s16 *) (((char *) (temp_a0_2 + temp_t4)) + 0x1AA)) = (s16) (*((u8 *) (((char *) temp_a0) + 1)));
        var_a1 = var_t0;
      }
      while (var_t0 < var_v1);
    }
  }
  else
  {
    var_a1_2 = 0;
    var_v1 = temp_a0_2;
    if (temp_a0_2 > 0)
    {
      do
      {
        __repair_phase_temp_a0_2 = var_a1_2 * 2;
        temp_t2 = (var_a1_2 + 1) & 0xFF;
        temp_t1 = *((s16 *) (arg4 + __repair_phase_temp_a0_2));
        temp_t9_2 = (arg0 + (((char) arg2) * 0x3A)) + __repair_phase_temp_a0_2;
        temp_at = temp_t2 < var_v1;
        var_a1_2 = temp_t2;
        *((s16 *) (((char *) temp_t9_2) + 0x1A8)) = temp_t1;
      }
      while (temp_at);
    }
  }
  *((s16 *) (((char *) temp_v0) + 0x1A2)) = var_v1;
  *((s16 *) (((char *) temp_v0) + 0x1D8)) = 0;
}

