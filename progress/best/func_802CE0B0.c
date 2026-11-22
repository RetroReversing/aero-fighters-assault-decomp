s32 func_8022A0D0(s32 *, s32, s32, s32);
s32 func_802C5364(void *, s32, s32, s32 *, f32);
s32 func_802C53E8(void *, s32, s32);
s32 func_802D0154(s32 *, s32, s32);
f32 func_80318340(s32);
s32 math_mtx4Identity(s32 *);
void func_802CE0B0(void *arg0, s32 arg1, s32 arg2)
{
  void *sp28;
  void *temp_a0;
  char sp30[0x40];
  void *temp_a0_2;
  if ((*((s16 *) (((char *) arg0) + 0x284))) == 4)
  {
    do
    {
      math_mtx4Identity(sp30);
    }
    while (0);
    func_8022A0D0(sp30, 0xC54B1800, 0x43AB199A, 0);
    func_802D0154(sp30, 0x4096CBE8, 0x7A);
    func_802D0154(sp30, 0xBD860A95, 0x78);
    func_8022A0D0(sp30, 0xC2480000, 0x43960000, 0x43200000);
    temp_a0 = ((unsigned char *) arg0) + 0x294;
    sp28 = temp_a0;
    func_802C5364(temp_a0, arg1, arg2, sp30, 0.0f);
    func_802C53E8(sp28, arg1, arg2);
    math_mtx4Identity(sp30);
    func_8022A0D0(sp30, 0xC54B1800, 0x43AB199A, 0);
    func_802D0154(sp30, 0x4096CBE8, 0x7A);
    func_802D0154(sp30, 0xBD860A95, 0x78);
    func_8022A0D0(sp30, 0x42480000, 0x43960000, 0x43200000);
    temp_a0_2 = ((unsigned char *) arg0) + 0x428;
    sp28 = temp_a0_2;
    func_802C5364(temp_a0_2, arg1, arg2, sp30, 0.0f);
    func_802C53E8(sp28, arg1, arg2);
    if (func_80318340(*((s32 *) (((char *) arg0) + 0x280))) <= 5.0f)
    {
      *((s16 *) (((char *) arg0) + 0x284)) = 5;
    }
  }
}

