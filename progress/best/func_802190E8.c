s32 func_802326D0(u8, s16, s16, s32);
s32 func_8023288C(s16 *, s16 *, u16 *, f32, f32, f32, f32, f32, f32, f32, s32, f32, f32);
u16 func_802190E8(f32 arg0, f32 arg1, void *arg2, f32 arg3, f32 arg4)
{
  s16 sp50;
  f32 temp_fv1;
  s16 sp4E;
  f32 temp_ft2;
  f32 temp_ft4;
  f32 temp_ft5;
  f32 sp58[4];
  f32 temp_fv0;
  u16 sp52;
  sp52 = 0xFFFF;
  temp_fv0 = *((f32 *) (((char *) arg2) + 0x30));
  temp_fv1 = 0.5f * arg0;
  temp_ft2 = temp_fv1 + temp_fv0;
  sp58[3] = temp_fv0 - temp_fv1;
  sp58[2] = temp_ft2;
  temp_ft5 = 0.5f * arg1;
  temp_ft4 = *((f32 *) (((char *) arg2) + 0x34));
  sp58[1] = temp_ft5 + temp_ft4;
  sp58[0] = temp_ft4 - temp_ft5;
  func_8023288C(&sp50, &sp4E, &sp52, sp58[3], temp_ft2, sp58[1], sp58[0 & 0xFFFFFFFFFFFFFFFF], arg4, (double) arg3, 1.0f / arg3, 0, 15.0f / arg0, 15.0f / arg1);
  if (sp50 >= 0)
  {
    if (1)
    {
      sp52 &= (0, func_802326D0(*((u8 *) (((char *) arg2) + 0x48)), sp50, sp4E, 0));
      sp52 &= func_802326D0(*((u8 *) (((char *) arg2) + 0x48)), sp50, sp4E, 1);
    }
  }
  return sp52;
}

