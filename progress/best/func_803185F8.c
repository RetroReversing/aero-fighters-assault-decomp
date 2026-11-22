f32 func_8022ADA8(f32, f32);
s32 func_80231A24();
s32 func_80318418();
extern char D_8032BB10[];
extern f32 D_8032BB24;
extern char D_8032BB3C[];
f32 func_803185F8(s32 arg0, s32 arg1)
{
  f32 sp30;
  f32 sp2C;
  unsigned int sp34;
  volatile unsigned long long sp28;
  f32 sp38;
  f32 sp3C;
  f32 *__base_D_8032BB24;
  __base_D_8032BB24 = &D_8032BB24;
  if (arg1 == 0)
  {
    func_80231A24(D_8032BB10, __base_D_8032BB24);
    *((s32 *) NULL) = 0x29A;
  }
  if (!arg1)
  {
    do
    {
      func_80231A24(D_8032BB3C, &sp30, &sp2C);
      return 1.0f;
    }
    while (0);
  }
  func_80318418(arg1, &sp30, &sp2C, &sp28);
  func_80318418(arg0, &sp3C, &sp38, &sp34);
  return func_8022ADA8(sp3C - sp30, sp38 - sp2C);
}

