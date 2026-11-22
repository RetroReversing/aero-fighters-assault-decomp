s32 func_80218C74(f32, f32, u8);
s32 func_802160EC(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5, f32 *arg6, u16 *arg7, s16 *arg8, u8 arg9)
{
  int __repair_constant = 3;
  char *__repair_addr;
  f32 sp40[2];
  u8 sp27;
  register f32 sp20;
  register f32 sp1C;
  register f32 temp_fa0;
  s32 var_v0;
  s32 var_a2;
  f32 temp_fv0;
  s32 temp_lo_2;
  f32 temp_fv0_2;
  f32 var_ft0;
  f32 var_ft2;
  s32 temp_lo;
  f32 temp_fv1;
  s32 temp_t9;
  f32 temp_ft4;
  f32 temp_fa1;
  u8 temp_a1;
  u8 var_v0_2;
  *arg4 = arg1;
  *arg5 = arg2;
  *arg6 = arg3;
  sp40[1] = *((f32 *) (((char *) arg0) + 0x1C));
  sp40[0] = *((f32 *) (((char *) arg0) + 0x20));
  temp_ft4 = *((f32 *) (((char *) arg0) + 0));
  do
  {
    temp_lo = ((s32) (arg1 - temp_ft4)) / ((s32) sp40[1]);
  }
  while (0);
  var_a2 = temp_lo & 0xFFFF;
  if (arg9 & 1)
  {
    var_a2 = (temp_lo - 1) & 0xFFFF;
  }
  temp_fv0 = *((f32 *) (((char *) arg0) + 4));
  temp_lo_2 = ((s32) (arg2 - temp_fv0)) / ((s32) sp40[0]);
  var_v0 = temp_lo_2 & 0xFFFF;
  if (arg9 & 2)
  {
    var_v0 = (temp_lo_2 - 1) & 0xFFFF;
  }
  temp_a1 = *((u8 *) (((char *) arg0) + 0x18));
  if ((var_a2 >= ((s32) temp_a1)) || (var_v0 >= ((s32) (*((u8 *) (((char *) arg0) + 0x19))))))
  {
    return 0;
  }
  var_ft0 = (f32) var_a2;
  *arg7 = (var_a2 + (var_v0 * temp_a1)) & 0xFFFF;
  temp_fa0 = (*((f32 *) (((char *) arg0) + 0x1C))) * 0.5f;
  if (var_a2 < 0)
  {
    var_ft0 += 4294967296.0f;
  }
  *arg4 = ((arg1 - (var_ft0 * sp40[1])) - temp_ft4) - temp_fa0;
  var_ft2 = (f32) var_v0;
  temp_fa1 = sp40[0] * 0.5f;
  if (var_v0 < 0)
  {
    var_ft2 += 4294967296.0f;
  }
  *arg5 = ((arg2 - (var_ft2 * sp40[0])) - (*((f32 *) (((char *) arg0) + 4)))) - temp_fa1;
  temp_fv1 = *arg4;
  if (temp_fv1 < (-temp_fa0))
  {
    var_v0_2 = 1;
  }
  else
    if (temp_fv1 >= temp_fa0)
  {
    var_v0_2 = 1;
  }
  else
  {
    temp_fv0_2 = *arg5;
    if (temp_fv0_2 < (-temp_fa1))
    {
      var_v0_2 = 1;
    }
    else
      if (temp_fa1 <= temp_fv0_2)
    {
      var_v0_2 = 1;
    }
    else
    {
      var_v0_2 = 0;
    }
  }
  sp1C = temp_fa1;
  sp20 = temp_fa0;
  sp27 = var_v0_2;
  __repair_addr = (char *) ((*((s32 *) (((char *) arg0) + 0x28))) + ((*arg7) * 0x4C));
  func_80218C74(temp_fa0, temp_fa1, *((u8 *) (((char *) __repair_addr) + 0x48)));
  if (var_v0_2 != 0)
  {
    *arg8 = 0;
  }
  else
  {
    var_v0 = ((s32) ((((*arg4) + temp_fa0) * 4.0f) / sp40[1])) & 0xFFFF;
    temp_t9 = ((s32) ((((*arg5) + temp_fa1) * 4.0f) / sp40[0])) & 0xFFFF;
    if (var_v0 == 4)
    {
      var_v0 = __repair_constant;
    }
    var_a2 = temp_t9;
    if ((temp_t9 ^ 0) == 4)
    {
      var_a2 = __repair_constant;
    }
    *arg8 = (s16) (0x8000 >> ((var_a2 * 4) + (var_v0 % 4)));
  }
  return 1;
}

