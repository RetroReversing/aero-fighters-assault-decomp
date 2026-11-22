s32 func_802C679C();
s32 func_8031C5B8();
s32 func_8031CF4C();
s32 func_8031DCE0();
s32 func_8031FB4C();
void func_8030573C(s32 arg0, s32 arg1)
{
  if (arg0 != 0)
  {
    func_8031DCE0(arg0 + 0xA98, 2 & 0xFFFFFFFFFFFFFFFF);
    func_8031C5B8(arg0 + 0x904, 2);
    func_8031FB4C(arg0 + 0x770, 2);
    func_8031DCE0(arg0 + 0x5DC, 2);
    func_8031CF4C(arg0 + 0x448, 2);
    func_8031CF4C(arg0);
    if ((unsigned char) (arg1 & 1))
    {
      func_802C679C(arg0);
    }
  }
}

