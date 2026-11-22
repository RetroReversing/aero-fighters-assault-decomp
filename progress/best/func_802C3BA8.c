s32 math_mtx4Identity(s32 *);
s32 func_802AAE40(s32, s32 *, s32, s32, f32, f32, s32, s32, s32);
s32 func_802AD4E8(s32, void *, s32 *, f32 *, f32 *, s32, f32, f32, f32, f32);
s32 func_802C47B8(void *);
s32 func_802C5150(void *, s32 *);
s32 func_802D0154(s32 *, f32, s32);
s32 func_802E93A0(s32, s32, s32, s32, f32, f32, f32);
s32 func_802E97AC(s32, s32);
void func_802C3BA8(void *arg0, f32 arg1)
{
  int __repair_literal;
  f32 sp90;
  char spA0[0x8];
  f32 sp7C[3];
  char sp4C[0x30];
  f32 sp98;
  f32 sp3C[3];
  s32 temp_v0;
  __repair_literal = 0;
  if (func_802AD4E8(*((s32 *) (((char *) arg0) + 0)), arg0, spA0, &sp98, &sp90, 2, *((f32 *) (((char *) arg0) + 0x154)), *((f32 *) (((char *) arg0) + 0x15C)), *((f32 *) (((char *) arg0) + 0x160)), *((f32 *) (((char *) arg0) + 0x164))) > __repair_literal)
  {
    func_802C5150(arg0, sp4C);
    sp3C[2] = sp7C[0];
    sp3C[1] = sp7C[1];
    sp3C[0] = sp7C[2];
    math_mtx4Identity(sp4C);
    sp7C[0] = sp3C[2];
    sp7C[1] = sp3C[1];
    sp7C[2] = sp3C[0];
    func_802C47B8(arg0);
    func_802D0154(sp4C, sp98 + (*((f32 *) (((char *) arg0) + 0x104))), 0x7A);
    func_802D0154(sp4C, sp90 + (*((f32 *) (((char *) arg0) + 0x108))), 0x78);
    temp_v0 = func_802AAE40(*((s32 *) (((char *) arg0) + 0)), (int) sp4C, 0x447A0000, 0x40400000, 100.0f, 1.0f, *((s32 *) (((char *) arg0) + 0x8C)), 0x1A, 1);
    if (((s32) temp_v0) != 0)
    {
      if (__repair_literal)
      {
        if (__repair_literal)
        {
          func_802E93A0(temp_v0, 0x3F800000, 0x3F800000, 0x3F800000, 1.0f, 0.0f * 1.0f, 0.0f);
        }
        else
        {
          func_802E93A0(temp_v0, 0x3F800000, 0x3F800000, 0x3F800000, 1.0f, 0.0f, 0.0f);
        }
      }
      else
      {
        func_802E93A0(temp_v0, 0x3F800000, 0x3F800000, 0x3F800000, 1.0f, 0.0f, 0.0f);
      }
      func_802E97AC(temp_v0, 0x3EE66666);
    }
    *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
  }
}

