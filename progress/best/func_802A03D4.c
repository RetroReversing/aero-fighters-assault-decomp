s32 func_802C679C();
s32 func_802C4950();
s32 func_802C4950();
s32 func_8031F9C0();
void func_802A03D4(s32 arg0, s32 arg1)
{
  if (arg0 != 0)
  {
    func_802C4950(arg0 + 0x5A0);
    func_802C4950(arg0 + 0x3C0);
    func_802C4950(arg0 + 0x1E0);
    func_8031F9C0(arg0 + 4, 2);
    if ((arg1 & 0xFF) & 1)
    {
      func_802C679C(arg0);
    }
  }
}

