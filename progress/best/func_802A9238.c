s32 func_80317D90(void);
s32 func_803183A0(s32);
s32 func_802A9238(void *arg0, s32 arg1)
{
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 var_s1;
  s32 var_s2;
  s32 var_s5;
  void *var_s0;
  void *var_s0_2;
  void *var_s0_3;
  var_s5 = 0;
  var_s1 = 0;
  if (((s32) (*((u8 *) (((char *) arg0) + 0x6EFC)))) > 0)
  {
    var_s0 = arg0;
    loop_2:
    temp_a0 = *((s32 *) (((char *) var_s0) + 0x6EEC));

    if (((temp_a0 != 0) && (func_80317D90() != 0)) && (func_803183A0(*((s32 *) (((char *) var_s0) + 0x6EEC))) == arg1))
    {
      var_s5 = *((s32 *) (((char *) var_s0) + 0x6EEC));
    }
    else
    {
      var_s1 += 1;
      var_s0 = ((unsigned char *) var_s0) + 4;
      if (var_s1 < ((s32) (*((u8 *) (((char *) arg0) + 0x6EFC)))))
      {
        goto loop_2;
      }
    }
  }
  if (var_s5 != 0)
  {
    return var_s5;
  }
  temp_a0 = 0;
  var_s0_2 = arg0;
  if (((s32) (*((u8 *) (((char *) arg0) + 0x6FB8)))) > 0)
  {
    loop_10:
    temp_a0_2 = *((s32 *) (((char *) var_s0_2) + 0x6F94));

    if (((temp_a0_2 != 0) && (func_80317D90() != 0)) && (func_803183A0(*((s32 *) (((char *) var_s0_2) + 0x6F94))) == arg1))
    {
      var_s5 = *((s32 *) (((char *) var_s0_2) + 0x6F94));
    }
    else
    {
      do
      {
        temp_a0 += 1;
      }
      while (0);
      var_s0_2 = ((unsigned char *) var_s0_2) + 4;
      if (temp_a0 < ((s32) (*((u8 *) (((char *) arg0) + 0x6FB8)))))
      {
        goto loop_10;
      }
    }
  }
  var_s2 = 0;
  if (var_s5 != 0)
  {
    return var_s5;
  }
  var_s0_3 = arg0;
  loop_18:
  temp_a0_2 = *((s32 *) (((char *) var_s0_3) + 0x7050));

  if ((temp_a0_2 != 0) && (func_803183A0(temp_a0_2) == arg1))
  {
    if (1)
    {
      var_s5 = *((s32 *) (((char *) var_s0_3) + 0x7050));
    }
  }
  else
  {
    var_s2 += 4;
    var_s0_3 = ((unsigned char *) var_s0_3) + 4;
    if (0xA0 != (var_s2 ^ 0))
    {
      if (1)
      {
        goto loop_18;
      }
    }
  }
  if (var_s5 != 0)
  {
  }
  return var_s5;
}

