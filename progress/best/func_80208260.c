unsigned long long func_80208230();
s32 func_80239120();
s32 func_802392C0();
s32 func_80239650();
extern char D_8024E6F0[];
extern char D_8024E700[];
extern s32 D_8024E704;
extern char D_8025C320[];
void func_80208260(s32 arg0, s32 arg1, u32 arg2, u32 *arg3)
{
  s32 *__base_D_8024E6F0;
  u32 sp4C;
  u32 sp2C;
  s32 sp28;
  u32 *var_s0;
  var_s0 = arg3;
  if (arg3 == NULL)
  {
    sp4C = 0;
    var_s0 = &sp4C;
  }
  if (func_80208230() != 0)
  {
    do
    {
      *var_s0 = 0;
    }
    while (0);
    return;
  }
  __base_D_8024E6F0 = D_8024E6F0;
  func_80239120(D_8025C320, 0x1000, D_8024E704, __base_D_8024E6F0, D_8024E700, &sp28);
  func_802392C0(D_8025C320, sp28, &sp2C);
  do
  {
    if (arg2 < sp2C)
    {
      *var_s0 = arg2;
    }
    else
    {
      *var_s0 = sp2C;
    }
  }
  while (0 & 0xFFFFFFFFFFFFFFFF);
  dummy_label_978357:
  ;

  ;
  ;
  func_80239650(D_8025C320, sp28, 0, 0, *var_s0, arg1);
}

