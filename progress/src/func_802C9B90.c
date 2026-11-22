s32 func_8022BD80();
s32 func_80230D70(s32);
s32 func_80230F60(s32);
s32 func_80231D58(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_802A9F70(s32 *);
s32 func_802AA120(s32 *, s32);
s32 func_802AC5BC(s32 *);
s32 func_802AF8D8(s32 *);
extern s32 *D_8032AA74;
void func_802C9B90(void)
{
  u8 spA0[0x71E8];
  func_80231D58((char) 0x18, 0xFF, 0x19, 0x30, 0x17, 0x960, 0x20, 0x14, 0x16, 2, 0x23, (0, 0x64), 0x24, 0x20D, 0xF, 0x1F4, 0xE, 0x2336, 0x10, 0xFB2, 0x1F, 0x32, 0x11, 0x6E, 0x12, 0x2D, 0x13, 0x1F4, 0x15, 0x3C, 0x14, 0x41, 0x21, 5, 0);
  func_80230D70(0);
  func_8022BD80();
  func_802A9F70(spA0);
  D_8032AA74 = spA0;
  func_802AC5BC(spA0);
  func_802AF8D8(spA0);
  func_80230F60(0);
  func_802AA120(spA0, 2);
}

