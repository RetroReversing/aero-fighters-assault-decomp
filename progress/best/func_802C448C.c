s32 math_mtx4Identity(s32 *);
s32 func_802AAF98(s32, s32 *, s32, s32, f32, f32, f32, f32, s32, s32, s32, s32);
s32 func_802AD4E8(s32, void *, s32 *, s32 *, s32 *, s32, f32, f32, f32, f32);
s32 func_802C47CC(void *, s32, s32 *, s32 *, f32);
s32 func_802C5150(void *, s32 *);
s32 func_802D0154(s32 *, s32, s32);
s32 func_802D0C40(s32, s32);
extern f32 D_80341B20;
void func_802C448C(void *arg0, f32 arg1)
{
  char sp70[0x30];
  s32 sp60;
  s32 sp68;
  s32 sp64;
  f32 spA0[3];
  f32 sp48[4];
  register unsigned long temp_v0;
  if (func_802AD4E8(*((s32 *) (((char *) arg0) + 0)), arg0, &sp68, &sp64, &sp60, 1, *((f32 *) (((char *) arg0) + 0x154)), *((f32 *) (((char *) arg0) + 0x15C)), *((f32 *) (((char *) arg0) + 0x160)), *((f32 *) (((char *) arg0) + 0x164))) > 0)
  {
    temp_v0 = *((s32 *) (((char *) arg0) + 0x8C));
    if ((((int) temp_v0) == 1) || (((u32) temp_v0) == 5))
    {
      sp48[3] = 200.0f;
    }
    else
    {
      sp48[3] = 800.0f;
    }
    func_802C5150(arg0, sp70);
    sp48[2] = spA0[0];
    sp48[1] = spA0[1];
    sp48[0] = spA0[2];
    math_mtx4Identity(sp70);
    spA0[0] = sp48[2];
    spA0[1] = sp48[1];
    spA0[2] = sp48[0];
    func_802C47CC(arg0, sp68, &sp64, &sp60, 600.0f);
    func_802D0154(sp70, sp64, 0x7A);
    func_802D0154(sp70, sp60, 0x78);
    func_802D0C40(func_802AAF98(*((s32 *) (((char *) arg0) + 0)), sp70, 0x58, 0x41200000, D_80341B20, 2.0f, sp48[3], 6.0f, *((s32 *) (((char *) arg0) + 0x8C)), 5, 1, 0), sp68);
    *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
  }
}

