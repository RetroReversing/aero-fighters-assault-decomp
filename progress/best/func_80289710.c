s32 func_802C676C(s32);
s32 func_802C68B0(s32, s32, s32, s32 *);
s32 func_8031C530(s32);
s32 func_8031C8A0(s32);
s32 func_8031DC5C(s32);
extern s32 func_8028A440;
extern s32 func_8031C9C8;
extern s32 func_8031FD00;
s32 func_80289710(s32 arg0)
{
  s32 *sp24;
  s32 temp_v0;
  s32 var_s0;
  var_s0 = arg0;
  if ((arg0 != (temp_v0 * 0)) || ((temp_v0 = func_802C676C(0x18A8), var_s0 = temp_v0, temp_v0 != 0)))
  {
    func_8031C8A0(var_s0);
    func_802C68B0(var_s0 + 0xF0, 5, 0x258, &func_8031C9C8);
    func_8031C530(var_s0 + 0xCA8);
    func_802C68B0(var_s0 + 0xD98, 5, 0x1DC, &func_8031FD00);
    func_8031DC5C(var_s0 + 0x16E4);
    sp24 = &func_8028A440;
    func_802C68B0(var_s0 + 0x17D4, 5, 0xC, &func_8028A440);
    func_802C68B0(var_s0 + 0x1810, 5, 0xC, &func_8028A440);
    func_802C68B0(var_s0 + 0x184C, 5, 0xC, &func_8028A440);
  }
  return var_s0;
}

