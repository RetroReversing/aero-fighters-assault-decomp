s32 func_80211DA4(s32, s32, s32, s32, s32, f32, f32, s32 *, s32 *);
short func_802141C8(s32, s32, s32, s32, s32, f32, f32, s32 *, s32 *, s32 *);
s32 func_802151B8(s32, s32, s32, s32, f32, f32, s32 *, s32 *, s32 *);
s32 func_8021B838(s32, s32);
s32 func_8021BA1C(s32, s32);
s32 func_802A93AC(void *, s32, s32, s32, f32, s32, s32);
s32 func_802A9928(void *, s32, s32, void *, s32, s32);
s32 func_802B09E0(void *, s32, s32, void *);
s32 func_80308728(s32);
f32 func_80318340(s32);
s32 func_803183A0(s32);
extern s8 D_80324964;
extern u8 D_8032AA80;
s32 func_802AF29C(void *arg0, void *arg1, void *arg2, s32 arg3, f32 arg4, s32 arg5, u8 arg6)
{
  s32 sp6C;
  s32 sp68;
  s32 sp64;
  s32 sp60;
  s32 sp5C;
  s32 sp58;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  sp68 = 0;
  temp_v0 = func_80308728(*((s32 *) (((char *) arg0) + 0x65FC)));
  sp58 = temp_v0;
  if (((((*((u8 *) (((char *) arg0) + 0x3DED))) != 0) || ((*((u8 *) (((char *) arg0) + 0x3DEE))) != 0)) || ((*((u8 *) (((char *) arg0) + 0x3DEF))) != ((*((u8 *) (((char *) arg0) + 0x3DEE))) * 0))) || ((*((u8 *) (((char *) arg0) + 0x3DF0))) != 0))
  {
    D_80324964 = 1;
  }
  if (((temp_v0 != (-1)) && ((temp_v0_2 = func_802141C8(sp58, *((s32 *) (((char *) arg1) + 0x30)), *((s32 *) (((char *) arg1) + 0x34)), *((s32 *) (((char *) arg1) + 0x38)), *((s32 *) (((char *) arg2) + 0x30)), *((f32 *) (((char *) arg2) + 0x34)), *((f32 *) (((char *) arg2) + 0x38)), &sp64, &sp60, &sp5C), temp_v0_2 > 0))) && ((temp_v0_3 = func_802A9928(arg0, temp_v0_2, sp64, arg1, arg5, (s32) arg6), sp68 = temp_v0_3, temp_v0_3 != 0)))
  {
    func_802B09E0(arg0, temp_v0_3, arg5, arg1);
  }
  else
  {
    if (arg5 == 1)
    {
      temp_a0 = *((s32 *) (((char *) arg0) + 0x6FBC));
      if ((temp_a0 != 0) && (func_80318340(temp_a0) > 2.0f))
      {
        func_8021BA1C(func_803183A0(*((s32 *) (((char *) arg0) + 0x6FBC))), 1);
      }
    }
    sp6C = func_802151B8(*((s32 *) (((char *) arg1) + 0x30)), *((s32 *) (((char *) arg1) + 0x34)), *((s32 *) (((char *) arg1) + 0x38)), *((s32 *) (((char *) arg2) + 0x30)), *((f32 *) (((char *) arg2) + 0x34)), *((f32 *) (((char *) arg2) + 0x38)), &sp64, &sp60, &sp5C);
    if (arg5 == 1)
    {
      temp_a0_2 = *((s32 *) (((char *) arg0) + 0x6FBC));
      if ((temp_a0_2 != 0) && (func_80318340(temp_a0_2) > 2.0f))
      {
        func_8021B838(func_803183A0(*((s32 *) (((char *) arg0) + 0x6FBC))), 3);
      }
    }
    if ((sp6C > 0) && ((temp_v0_4 = func_802A93AC(arg0, sp6C, sp64, arg3, arg4, arg5, (s32) arg6), sp68 = temp_v0_4, temp_v0_4 != 0)))
    {
      func_802B09E0(arg0, temp_v0_4 ^ 0, arg5, arg1);
    }
    else
    {
      if ((sp68 == 0) && ((D_8032AA80 == 7) || ((*((s32 *) (((char *) arg0) + 0x7168))) == 5)))
      {
        sp68 = func_80211DA4(sp58, *((s32 *) (((char *) arg1) + 0x30)), *((s32 *) (((char *) arg1) - (-0x34))), *((s32 *) (((char *) arg1) + 0x38)), *((s32 *) (((char *) arg2) + 0x30)), *((f32 *) (((char *) arg2) + 0x34)), *((f32 *) (((char *) arg2) + 0x38)), &sp64, &sp60);
      }
      func_802B09E0(arg0, sp68, arg5, arg1);
    }
  }
  return sp68;
}

