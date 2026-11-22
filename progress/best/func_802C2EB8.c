s32 func_8022A0D0(s32 *, s32, s32, s32);
s32 func_802AA75C(s32, s32 *, f32, s32, f32, f32, s32);
s32 func_802C5150(f32, s32 *);
s32 func_802CF948(s32 *);
extern f32 D_80341B10;
s32 func_802C2EB8(void *arg0, f32 arg1, s32 arg2)
{
  char sp3C[0x44];
  f32 sp38;
  sp38 = (*((f32 *) (((char *) arg0) + 0xE0))) + 350.0f;
  *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
  *((s32 *) (((char *) arg0) + 0x18C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x18C))) - 1);
  func_802C5150(arg1, sp3C);
  func_802CF948(sp3C);
  func_8022A0D0(sp3C, 0, 0x41700000, 0xBF800000);
  func_802AA75C(*((s32 *) (((0, (char *) arg0)) + 0)), sp3C, sp38, 0x40000000, D_80341B10, 2.5f, *((s32 *) (((char *) arg0) + 0x8C)));
  return 1;
}

