s32 func_80200B20(s32, s32, s32, f32);
s32 func_8021B4B0(s32, s32, s32);
s32 func_80228DE0(s32 *, s32);
s32 func_8022A0D0(s32 *, f32, f32, f32);
f32 func_8023499C();
s32 func_802AAA80(s32, s32 *);
f32 func_802AED10(s32);
f32 func_802AED5C(s32);
s32 func_8030596C(void *, s32, s32);
s32 func_80317114(void *, s32, s32, s32, s32);
extern s32 D_8032AA74;
extern s32 D_8032B734;
extern f32 D_803460F0;
extern f32 D_803460F4;
extern f64 D_803460F8;
void func_803052CC(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  f32 sp84;
  f32 sp80;
  char sp3C[0x44];
  f32 sp38;
  f32 sp34;
  f32 temp_fv0;
  sp84 = func_802AED10(D_8032AA74);
  sp80 = func_802AED5C(D_8032AA74);
  func_8021B4B0(*((s32 *) (((char *) arg0) + 4)), 0, arg1);
  func_80317114(arg0, 0x24, 0x3F800000, 0xFF, 0xFF);
  if ((((*((u8 *) (((char *) arg0) + 0xC55))) == 0) && (sp84 > 110.0f)) && (sp84 < 120.0f))
  {
    temp_fv0 = (120.0f - sp84) * D_803460F0;
    *((f32 *) (((char *) arg0) + 0xC3C)) = temp_fv0;
    func_80200B20(0x42F00000, *((s32 *) (((char *) arg0) + 4)), 0x37, temp_fv0);
    func_8030596C(arg0, 1, arg1);
    if ((*((f32 *) (((char *) arg0) + 0xC3C))) < D_803460F4)
    {
      *((u8 *) (((char *) arg0) + 0xC55)) = 1U;
    }
  }
  else
  {
    func_8030596C(arg0, 0, arg1);
  }
  if ((*((u8 *) (((char *) arg0) + 0xC56))) != 0)
  {
    *((f32 *) (((char *) arg0) + 0xC58)) = (f32) ((*((f32 *) (((char *) arg0) + 0xC58))) + sp80);
    if (((*((f32 *) (((char *) arg0) + 0xC58))) > 5.0f) && (((f64) func_8023499C()) < D_803460F8))
    {
      func_80228DE0(sp3C, arg1);
      sp38 = ((func_8023499C() - 0.5f) * 2) * 75.0f;
      sp34 = func_8023499C() * 50.0f;
      func_8022A0D0(sp3C, sp38, sp34, func_8023499C() * 15.0f);
      func_802AAA80(D_8032B734, sp3C);
      *((f32 *) (((char *) arg0) + 0xC58)) = 0.0f;
    }
  }
}

