s32 func_802C676C(s32);
s32 func_802C68B0(s32, s32, s32, s32 *);
s32 func_8031E188(s32);
extern s32 func_8028A440;
extern s32 func_8031FA08;
s32 func_8028A8E0(s32 arg0)
{
  s32 *sp24;
  s32 temp_v0;
  s32 var_s0;
  var_s0 = arg0;
  if ((arg0 != (temp_v0 * 0)) || ((temp_v0 = func_802C676C(0x1308), var_s0 = temp_v0, temp_v0 != 0)))
  {
    func_8031E188(var_s0);
    func_802C68B0(var_s0 + 0xF0, 0xF, 0x11C, &func_8031FA08);
    sp24 = &func_8028A440;
    func_802C68B0(var_s0 + 0x1194, 0xF, 0xC, &func_8028A440);
    func_802C68B0(var_s0 + 0x1248, 0xF, 0xC, &func_8028A440);
  }
  return var_s0;
}

