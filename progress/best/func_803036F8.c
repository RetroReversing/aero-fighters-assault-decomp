s32 func_802057FC();
u8 func_8030361C();
s32 func_8030363C();
s32 func_80303894();
extern char D_8032A4F8[];
extern s32 D_8032AA8C;
u8 func_803036F8(s32 *arg0, s32 arg1, s32 arg2)
{
  u8 sp27;
  int *__repair_home2 = &arg2;
  u8 temp_v0;
  *arg0 = arg1;
  if (arg1 == 0x1E)
  {
    __repair_rows:
    {
      func_802057FC(arg0, arg1);
    }

    if (0)
    {
      goto __repair_rows;
    }
    func_8030363C(arg0, 0);
    func_80303894(arg0);
    return 1U;
  }
  if (arg1 >= 0x1F)
  {
    func_802057FC((s32) arg0);
    func_8030363C(arg0);
    func_80303894(arg0);
    return 2U;
  }
  func_8030363C(arg0, *__repair_home2);
  temp_v0 = func_8030361C(arg0, *(D_8032A4F8 + (arg1 * 0xC)), arg1);
  sp27 = temp_v0;
  if (temp_v0 != 0)
  {
    D_8032AA8C = *arg0;
    func_80303894(arg0);
    func_8030363C(arg0, *__repair_home2);
  }
  return sp27;
}

