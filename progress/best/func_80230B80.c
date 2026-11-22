s32 func_80231A24();
s32 func_8023E0B0();
extern char D_80254BB0[];
extern char D_80254BD4[];
extern char D_80254C04[];
extern char D_80254C38[];
extern char D_80254C6C[];
extern char D_80280C58[];
extern s32 D_80283520;
s32 func_80230B80(s32 arg0, s32 arg1, s32 arg2)
{
  if (D_80283520 == 0)
  {
    func_80231A24(D_80254BB0);
    return 0;
  }
  if (arg1 & 7)
  {
    func_80231A24(D_80254BD4);
    return 0;
  }
  if (arg2 & 7)
  {
    func_80231A24(D_80254C04);
    return 0;
  }
  if ((arg1 + arg2) >= 0x209)
  {
    func_80231A24(D_80254C38, arg1, arg2, 0x208);
    return 0;
  }
  if (func_8023E0B0(D_80280C58, (arg1 / 8) & 0xFF, arg0, arg2) != (arg1 * 0))
  {
    func_80231A24(D_80254C6C);
    return 0;
  }
  return arg2;
}

