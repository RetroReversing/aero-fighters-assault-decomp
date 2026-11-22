s32 math_mtx4Identity(s32 *);
s32 func_8029F9FC(s32, s32, s32, s32, f32, f32, f32);
s32 func_8029FAB4(s32, s32);
s32 func_802AB448(s32, s32 *, s32, s32, f32, f32, f32, s32, s32);
s32 func_802AD4E8(s32, void *, s32 *, f32 *, f32 *, s32, f32, f32, f32, f32);
s32 func_802C47B8(void *);
s32 func_802C47CC(void *, s32, f32 *, f32 *, f32);
s32 func_802C5150(void *, s32 *);
s32 func_802D0154(s32 *, f32, s32);
extern f32 D_80341B14;
void func_802C403C(void *arg0, f32 arg1)
{
  f32 sp98;
  unsigned long spA0;
  f32 sp7C[3];
  f32 sp90;
  u8 sp4C[0x44];
  f32 sp3C[4];
  s32 temp_v0;
  if (func_802AD4E8(*((s32 *) (((char *) arg0) + 0)), arg0, &spA0, &sp98, &sp90, 2, *((f32 *) (((char *) arg0) + 0x154)), *((f32 *) (((char *) arg0) + 0x15C)), *((f32 *) (((char *) arg0) + 0x160)), *((f32 *) (((char *) arg0) + 0x164))) > 0)
  {
    func_802C5150(arg0, sp4C);
    sp3C[2] = sp7C[0];
    sp3C[1] = sp7C[1];
    sp3C[0] = sp7C[2];
    math_mtx4Identity(sp4C);
    sp7C[0] = sp3C[2];
    sp7C[1] = sp3C[1];
    sp7C[2] = sp3C[0];
    func_802C47CC(arg0, spA0, &sp98, &sp90, 600.0f);
    func_802C47B8(arg0);
    func_802D0154(sp4C, sp98 + (*((f32 *) (((char *) arg0) + 0x104))), 0x7A);
    func_802D0154(sp4C, sp90 + (*((f32 *) (((char *) arg0) + 0x108))), 0x78);
    temp_v0 = func_802AB448(*((s32 *) (((char *) arg0) + 0)), sp4C, *((s32 *) (((char *) arg0) + 0xE0)), 0x44160000, 3.0f, 100.0f, 5.0f, *((s32 *) (((char *) arg0) + 0x8C)), 0x11);
    if (temp_v0)
    {
      sp3C[3] = temp_v0;
      func_8029FAB4(temp_v0, 0x41200000);
      func_8029F9FC(sp3C[3], 0x3F800000, 0x3F800000, 0x3F800000, 0.5f, D_80341B14, D_80341B14);
    }
    *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
    *((s32 *) (((char *) arg0) + 0x18C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x18C))) - 1);
  }
}

