s32 func_802C679C();
s32 func_8031C5B8();
s32 func_8031CF4C();
s32 func_8031DCE0();
s32 func_8031FB4C();
void func_802BD278(s32 arg0, s32 arg1)
{
  if (arg0 != 0)
  {
    do
    {
      func_8031DCE0(arg0 + 0x850, 2);
    }
    while (0);
    func_8031C5B8(arg0 + 0x760);
    func_8031FB4C(arg0 + 0x52C, 2);
    func_8031DCE0(arg0 + 0x43C, 2);
    func_8031CF4C(arg0 + 0x21C, 2);
    func_8031CF4C(arg0, 0);
    if ((arg1 & 1) & 0xFFu)
    {
      func_802C679C(arg0);
    }
  }
}

