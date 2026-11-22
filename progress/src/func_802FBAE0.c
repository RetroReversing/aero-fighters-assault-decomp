s32 func_80223FC4(s32, s32);
s32 func_802B183C(s32);
s32 func_802D00F8(s16, s32, s32, s32, s32);
u8 func_802FBAE0(void *arg0, s32 arg1, s16 *arg2, s16 *arg3)
{
  u8 sp27;
  s16 temp_v0;
  register s16 temp_v0_2;
  sp27 = 1;
  if ((func_80223FC4(arg1, 0x1000) != 0) || (func_80223FC4(arg1, 0x8000) != 0))
  {
    if (!arg1)
    {
      func_802B183C(*((s32 *) (((char *) arg0) + 0)));
    }
    else
    {
      func_802B183C(*((s32 *) (((char *) arg0) + 0)));
    }
    do
    {
      temp_v0 = *arg2;
    }
    while (0);
    if (((u32) temp_v0) == 1)
    {
      *arg2 = 2;
 ;
      func_802D00F8(2, 0, 1, arg1, 1);
    }
    else
      if (((unsigned) temp_v0) == 2)
    {
      *arg2 = 3;
      if ((*arg3) == 3)
      {
        sp27 = 0;
        *((s32 *) (((char *) arg0) + 8)) = 1;
      }
    }
 dummy_label_349242: ;
  }
  if (func_80223FC4(arg1, 0x4000) != 0)
  {
    do { func_802B183C(*((s32 *) (((char *) arg0) + 0))); } while (0);
    temp_v0_2 = *arg2;
    if (temp_v0_2 == 3)
    {
      *arg2 = 2;
      func_802D00F8(2, 0, 1, arg1, 1);
    }
    else
      if (temp_v0_2 == 2)
    {
      *arg2 = 1;
      func_802D00F8(*((s16 *) (((char *) arg0) + 0xB6)), 0, 1, arg1, 1);
    }
    else
      if (temp_v0_2 == 1)
    {
      sp27 = 0;
      *((s32 *) (((char *) arg0) + 8)) = 0;
    }
  }
  return sp27;
}
