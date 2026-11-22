s32 func_8028E184();
s32 func_8028F07C();
s32 func_8028FA98();
s32 func_80290414();
s32 func_802F8470();
s32 func_802F87E8();
s32 func_802F87F0();
s32 func_802F8BB8();
extern void *D_8032AA74;
void func_802F9470(void *arg0)
{
  void *sp24;
  void *temp_a0;
  void *sp2C;
  sp2C = D_8032AA74;
  if ((*((u8 *) (((char *) arg0) + 0x1C))) != 0)
  {
    func_802F87F0();
  }
  if ((*((u8 *) (((char *) arg0) + 0xB))) != 0)
  {
    func_802F87E8(arg0);
  }
  if ((*((u8 *) (((char *) arg0) + 0x14))) != 0)
  {
    func_802F8470(arg0);
  }
  temp_a0 = ((unsigned char *) sp2C) + 0x78;
  sp24 = temp_a0;
  if (func_8028FA98(temp_a0) != 0)
  {
    func_802F8BB8(arg0);
  }
  if ((*((u8 *) (((char *) arg0) + 0x34))) != 0)
  {
    func_80290414(sp24, (long) ((0, *((f32 *) (((char *) sp2C) + 0x32A8)))));
    if (func_8028E184(sp24) != 0)
    {
      func_8028F07C(sp24);
    }
  }
}

