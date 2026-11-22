extern s32 D_8024E8C0;
u16 func_802326D0(s32 arg0, s32 arg1, s32 arg2, u8 arg3)
{
  s16 temp_a1_2;
  s16 temp_a1;
  s16 temp_a1_3;
  s16 temp_a2;
  s16 temp_v0_2;
  u16 temp_v0_3;
  s16 var_a1;
  s32 var_a1_2;
  s16 var_a2;
  s16 var_a2_2;
  s32 temp_v0;
  arg3 &= 0xFF;
  temp_v0 = arg0 * 0x10;
  temp_a1 = arg1 - temp_v0;
  temp_a2 = arg2 - temp_v0;
  if (arg3 & 0xFF)
  {
    temp_v0_2 = temp_a2 - temp_a1;
    if (((temp_v0_2 == 1) || (temp_v0_2 == 0)) || ((temp_a1_2 = temp_a1 + 1, temp_v0_2 == (-0x3F))))
    {
      return 0xFFFFU;
    }
    var_a1_2 = temp_a1_2;
    var_a2_2 = temp_a2 - 1;
    if (temp_a1_2 >= 0x40)
    {
      var_a1_2 = temp_a1_2 - 0x40;
    }
    else
      if ((((((((var_a1_2 & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) < 0)
    {
      var_a1_2 += 0x40;
    }
    if ((var_a2_2 + 1) > 0x40)
    {
      var_a2_2 -= 0x40;
    }
    else
      if (var_a2_2 < 0)
    {
      var_a2_2 += 0x40;
    }
    return *((u16 *) (((s8 *) (&D_8024E8C0)) + (((var_a1_2 << 1) << 6) + (var_a2_2 * 2))));
  }
  temp_v0_3 = temp_a2 - temp_a1;
  if (((temp_v0_3 == (-1)) || (temp_v0_3 == 0)) || ((temp_a1_3 = (arg1 - temp_v0) - 1, temp_v0_3 == 0x3F)))
  {
    return 0xFFFFU;
  }
  var_a1 = temp_a1_3;
  temp_a2 = temp_a2 + 1;
  if (temp_a1_3 >= 0x40)
  {
    var_a1 = temp_a1_3 - 0x40;
  }
  else
    if (var_a1 < 0)
  {
    var_a1 += 0x40;
  }
  if (temp_a2 >= 0x40)
  {
    temp_a2 -= 0x40;
  }
  else
    if (temp_a2 < 0)
  {
    temp_a2 += 0x40;
  }
  return *((u16 *) (((s8 *) (&D_8024E8C0)) + (((temp_a2 << 2) << 5) + (var_a1 * 2))));
}

