/* identical to func_80227CAC (matched), with its names changed by decompdecomp */
s32 func_80223840();
s32 func_802238F0();
s32 func_8022393C();
s32 func_80225EFC();
extern s16 D_80275210;
s32 func_802279FC(s32 arg0)
{
  s32 var_s1;
  s32 temp_v0;
  s32 sp3C;
  s32 sp38;
  s32 var_v0;
  var_s1 = 0;
  temp_v0 = func_80223840(*((s32 *) ((*((s32 *) (&D_80275210))) + (arg0 * 4))));
  var_v0 = func_8022393C(temp_v0, &sp3C, &sp38, 1);
  if (var_v0 != 0)
  {
    do
    {
      if (var_v0 == 0x434F4D4D)
      {
        var_s1 = func_80225EFC(sp38);
      }
      if (1)
      {
      }
      var_v0 = func_8022393C(temp_v0, &sp3C, &sp38, 1);
    }
    while (var_v0 != 0);
  }
  func_802238F0(temp_v0);
  return var_s1;
}

