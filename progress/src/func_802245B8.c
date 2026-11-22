s32 func_80223840();
s32 func_802238F0();
s32 func_8022393C();
s32 func_8022B460();
extern char D_802751E8[];
extern s32 D_80275208;
void func_802245B8(void)
{
  s32 var_v0;
  s32 temp_v0;
  s32 sp34;
  s32 sp30;
  temp_v0 = func_80223840(D_80275208);
  var_v0 = func_8022393C(temp_v0, &sp34, &sp30, 0);
  if (var_v0 != 0)
  {
    do
    {
      if (1)
      {
        if (var_v0 == 0x434F4D4D)
        {
          func_8022B460(D_802751E8, sp30, 0x20);
        }
        var_v0 = func_8022393C(temp_v0, &sp34, &sp30, 0);
      }
    }
    while (var_v0 != 0);
  }
  func_802238F0(temp_v0);
}

