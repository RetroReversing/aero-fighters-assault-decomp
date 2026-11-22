s32 func_80211DA4(s32, s32, volatile unsigned char, s32, s32, f32, f32, s32 *, s32 *);
s32 func_802141C8(s32, s32, s32, s32, s32, f32, f32, s32 *, s32 *, s32 *);
s32 func_802151B8(s32, s32, s32, s32, f32, f32, s32 *, s32 *, s32 *);
s32 func_80308728(s32);
extern u8 D_8032AA80;
s32 func_802B1884(void *arg0, void *arg1, void *arg2)
{
  s32 temp_v0;
  s32 sp50;
  s32 sp54;
  s32 sp48;
  unsigned sp44;
  s32 sp40;
  s32 sp4C;
  sp54 = 0;
  temp_v0 = func_80308728(*((s32 *) (((char *) arg0) + 0x65FC)));
  temp_v0 = sp54;
  sp50 = temp_v0;
  sp54 = func_802141C8(temp_v0, *((s32 *) (((char *) arg1) + 0x30)), *((s32 *) (((char *) arg1) + 0x34)), *((s32 *) (((char *) arg1) + 0x38)), *((s32 *) (((char *) arg2) + 0x30)), *((f32 *) (((char *) arg2) + 0x34)), *((f32 *) (((char *) arg2) + 0x38)), &sp48, &sp44, &sp40);
  if (sp54 > 0)
  {
    temp_v0 = 5;
  }
  if ((!temp_v0) && ((((unsigned) D_8032AA80) == 7) || ((*((s32 *) (((char *) arg0) + 0x7168))) == 5)))
  {
    sp4C = sp54;
    temp_v0 = func_80211DA4(sp50, *((s32 *) (((char *) arg1) + 0x30)), *((s32 *) (((char *) arg1) + 0x34)), *((s32 *) (((char *) arg1) + 0x38)), *((s32 *) (((char *) arg2) + 0x30)), *((f32 *) (((char *) arg2) + 0x34)), *((f32 *) (((char *) arg2) + 0x38)), &sp48, &sp44);
    if (sp4C > 0)
    {
      temp_v0 = 5;
    }
  }
  if ((((unsigned) temp_v0) == 0) && (((unsigned) D_8032AA80) == 3))
  {
    sp54 = temp_v0;
    temp_v0 = sp54;
    if (func_802151B8(*((s32 *) (((char *) arg1) + 0x30)), *((s32 *) (((char *) arg1) + 0x34)), *((s32 *) (((char *) arg1) + 0x38)), *((s32 *) (((char *) arg2) + 0x30)), *((f32 *) (((char *) arg2) + 0x34)), *((f32 *) (((char *) arg2) + 0x38)), &sp48, &sp44, &sp40) > 0)
    {
      temp_v0 = 5;
    }
  }
  return temp_v0;
}

