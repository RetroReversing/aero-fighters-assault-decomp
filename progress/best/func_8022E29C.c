s32 func_80228DE0(s32, s32);
s32 func_80231A24(s32 *, s32, s32);
extern s32 D_80254880;
extern u16 D_80280C06;
void func_8022E29C(s32 arg0)
{
  if ((arg0 < 0) || (arg0 >= ((s32) D_80280C06)))
  {
    func_80231A24(&D_80254880, arg0, arg0);
    return;
  }
  func_80228DE0((((0, *((s32 *) 0x802508D0))) + (arg0 * 0x78)) + 0x30, arg0);
}

