s32 func_80211B08(s32, f32, f32, void *);
s32 func_802129F4(s32, s32, f32, f32, void *, void *);
s32 func_80231A24();
s32 func_80308728();
extern char D_803265D0[];
f32 func_802AEE88(void *arg0, f32 arg1, f32 arg2)
{
  f32 sp74;
  register s32 temp_v0_2;
  s32 sp6C;
  register f32 var_fs0;
  s32 temp_a1;
  register s32 temp_v0;
  s32 sp5C;
  register s32 var_s0;
  s32 var_s1;
  temp_a1 = *((s32 *) (((char *) arg0) + 0x65FC));
  var_fs0 = 0.0f;
  if (!temp_a1)
  {
    func_80231A24(D_803265D0);
    return 0.0f;
  }
  temp_v0 = func_80308728(temp_a1);
  if (temp_v0 != (-1))
  {
    temp_v0_2 = func_80211B08(temp_v0, arg1, arg2, &sp6C);
    temp_a1 = temp_v0_2 & 0xFF;
    if ((((s32) (temp_a1 ^ 0)) & 0xFFu) != 0)
    {
      var_s1 = 0;
      if (temp_a1 > 0)
      {
        var_s0 = 0;
        do
        {
          func_802129F4(temp_v0, *((s32 *) (sp6C + var_s0)), arg1, arg2, &sp74, &sp5C);
          ++var_s1;
          if (var_fs0 < sp74)
          {
            var_fs0 = sp74;
          }
          var_s0 += 4;
        }
        while (var_s1 != (temp_v0_2 & 0xFF));
      }
    }
  }
  return var_fs0;
}

