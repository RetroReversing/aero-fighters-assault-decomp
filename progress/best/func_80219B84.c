s32 func_80219B84(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6, f32 *arg7, s32 arg8, s16 *arg9, s32 arg10)
{
  int sp60;
  f32 temp_fv0_9;
  f32 var_fa0_4;
  s16 *sp54;
  f32 sp10;
  register f32 sp40;
  s16 *temp_t8;
  f32 temp_fv0_16;
  f32 sp18;
  f32 temp_fv0_6;
  f32 temp_fv0_8;
  f32 *temp_t7;
  f32 temp_fv0_2;
  register f32 temp_fa0;
  f32 temp_ft5;
  register f32 temp_fa1_2;
  f32 temp_ft4;
  f32 temp_ft4_2;
  f32 temp_fa1;
  f32 temp_ft5_2;
  f32 temp_fv0;
  f32 temp_fv0_11;
  f32 temp_fv0_12;
  f32 temp_fv0_13;
  f32 temp_fv0_14;
  f32 temp_fv0_15;
  f32 sp44;
  register f32 temp_fv0_10;
  f32 sp14;
  f32 var_fa1;
  register f32 temp_fv0_3;
  f32 sp38;
  f32 temp_fv0_5;
  f32 temp_fv0_17;
  f32 temp_fv0_7;
  f32 temp_fv1;
  f32 *sp5C;
  register f32 temp_fv1_4;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 sp34;
  f32 var_fa0;
  f32 var_fa0_2;
  s16 **temp_t9;
  s16 *temp_t5;
  f32 var_fa0_5;
  f32 var_fa0_6;
  f32 temp_fv0_18;
  f32 var_fv1;
  f32 var_fa0_3;
  s16 *temp_t0;
  s16 *temp_t3;
  u32 sp58;
  f32 temp_fv0_4;
  s32 var_v1;
  var_v1 = 0;
  sp5C = arg7;
  sp60 = arg8;
  sp54 = arg9;
  sp58 = arg10;
  if (arg3 < arg0)
  {
    sp44 = arg0;
    sp38 = arg3;
  }
  else
  {
    sp44 = arg3;
    sp38 = arg0;
  }
  if (arg1 > arg4)
  {
    sp40 = arg1;
    sp34 = arg4;
  }
  else
  {
    sp34 = arg1;
    sp40 = arg4;
  }
  var_fa1 = arg5;
  var_fv1 = arg2;
  if (arg5 < arg2)
  {
    var_fa1 = arg2;
    var_fv1 = arg5;
  }
  temp_ft5 = *((f32 *) (((char *) arg6) + 0));
  if (sp44 < temp_ft5)
  {
    *sp54 = -1;
    return 0;
  }
  temp_fa0 = *((f32 *) (((char *) arg6) + 0xC));
  if ((*((f32 *) (((char *) arg6) + 0xC))) < sp38)
  {
    *sp54 = 1;
    return 0;
  }
  temp_fv0 = *((f32 *) (((char *) arg6) + 4));
  if (sp40 < temp_fv0)
  {
    *sp54 = -2;
    return 0;
  }
  temp_ft4 = *((f32 *) (((char *) arg6) + 0x10));
  sp14 = temp_fv0;
  sp10 = temp_ft4;
  if (temp_ft4 < sp34)
  {
    *sp54 = 2;
    return 0;
  }
  temp_ft4_2 = *((f32 *) (((char *) arg6) + 8));
  if (var_fa1 < temp_ft4_2)
  {
    *sp54 = -3;
    return 0;
  }
  temp_fv0_2 = *((f32 *) (((char *) arg6) + 0x14));
  if (temp_fv0_2 < var_fv1)
  {
    *sp54 = 3;
    return 0;
  }
  if ((((((sp44 <= (*((f32 *) (((char *) arg6) + 0xC)))) && (temp_ft5 <= sp38)) && (sp40 <= sp10)) && (sp14 <= sp34)) && (var_fa1 <= temp_fv0_2)) && (temp_ft4_2 <= var_fv1))
  {
    *sp54 = -1;
    return 3;
  }
  sp18 = *((f32 *) (((char *) arg6) + 0xC));
  if (var_fv1 <= temp_ft4_2)
  {
    temp_fv1 = arg5 - arg2;
    if (temp_fv1 == 0.0f)
    {
      var_fa0 = 0.0f;
    }
    else
    {
      var_fa0 = (temp_ft4_2 - arg2) / temp_fv1;
    }
    temp_fv0_3 = (var_fa0 * (arg3 - arg0)) + arg0;
    if ((temp_ft5 <= temp_fv0_3) && (temp_fv0_3 <= sp18))
    {
      temp_fv0_4 = (var_fa0 * (arg4 - arg1)) + arg1;
      if ((sp14 <= temp_fv0_4) && (temp_fv0_4 <= sp10))
      {
        *sp5C = var_fa0;
        var_v1 = 1;
        *sp54 = -3;
        if (1 == 2)
        {
          return 2;
        }
      }
    }
    goto block_37;
  }
  block_37:
  temp_fv0_5 = *((f32 *) (((char *) arg6) + 0x14));

  if (var_fa1 >= temp_fv0_5)
  {
    temp_fv1_2 = arg5 - arg2;
    if (temp_fv1_2 == 0.0f)
    {
      var_fa0_2 = 0.0f;
    }
    else
    {
      var_fa0_2 = (temp_fv0_5 - arg2) / temp_fv1_2;
    }
    temp_fv0_6 = (var_fa0_2 * (arg3 - arg0)) + arg0;
    if (((*((f32 *) (((char *) arg6) + 0))) <= temp_fv0_6) && (temp_fv0_6 <= (*((f32 *) (((char *) arg6) + 0xC)))))
    {
      temp_fv0_7 = (var_fa0_2 * (arg4 - arg1)) + arg1;
      if (((*((f32 *) (((char *) arg6) + 4))) <= temp_fv0_7) && (temp_fv0_7 <= (*((f32 *) (((char *) arg6) + 0x10)))))
      {
        *(&sp5C)[var_v1] = var_fa0_2;
        temp_t0 = (&sp54)[var_v1];
        *temp_t0 = 3;
        var_v1 += 1;
        if (var_v1 == 2)
        {
          return 2;
        }
      }
    }
    goto block_47;
  }
  block_47:
  temp_fv1_3 = *((f32 *) (((char *) arg6) + 4));

  if (sp34 <= temp_fv1_3)
  {
    temp_fv0_8 = arg4 - arg1;
    if (temp_fv0_8 == 0.0f)
    {
      var_fa0_3 = 0.0f;
    }
    else
    {
      var_fa0_3 = (temp_fv1_3 - arg1) / temp_fv0_8;
    }
    temp_fv0_9 = (var_fa0_3 * (arg3 - arg0)) + arg0;
    if (((*((f32 *) (((char *) arg6) + 0))) <= temp_fv0_9) && (temp_fv0_9 <= (*((f32 *) (((char *) arg6) + 0xC)))))
    {
      temp_fv0_10 = (var_fa0_3 * (arg5 - arg2)) + arg2;
      if (((*((f32 *) (((char *) arg6) + 8))) <= temp_fv0_10) && (temp_fv0_10 <= (*((f32 *) (((char *) arg6) + 0x14)))))
      {
        *(&sp5C)[var_v1] = var_fa0_3;
        temp_t5 = (&sp54)[var_v1];
        *temp_t5 = -2;
        var_v1 += 1;
        if (var_v1 == 2)
        {
          return 2;
        }
      }
    }
    goto block_57;
  }
  block_57:
  temp_fv1_4 = *((f32 *) (((char *) arg6) + 0x10));

  if (temp_fv1_4 <= sp40)
  {
    temp_fv0_11 = arg4 - arg1;
    if (temp_fv0_11 == 0.0f)
    {
      var_fa0_4 = 0.0f;
    }
    else
    {
      var_fa0_4 = (temp_fv1_4 - arg1) / temp_fv0_11;
    }
    temp_fv0_12 = (var_fa0_4 * (arg3 - arg0)) + arg0;
    if (((*((f32 *) (((char *) arg6) + 0))) <= temp_fv0_12) && (temp_fv0_12 <= (*((f32 *) (((char *) arg6) + 0xC)))))
    {
      temp_fv0_13 = (var_fa0_4 * (arg5 - arg2)) + arg2;
      if (((*((f32 *) (((char *) arg6) + 8))) <= temp_fv0_13) && (temp_fv0_13 <= (*((f32 *) (((char *) arg6) + 0x14)))))
      {
        temp_t9 = &(&sp54)[var_v1];
        temp_t7 = (&sp5C)[var_v1];
        var_v1 += 1;
        *temp_t7 = var_fa0_4;
        *(*temp_t9) = 2;
        if (((int) var_v1) == 2)
        {
          return 2;
        }
      }
    }
    goto block_67;
  }
  block_67:
  temp_ft5_2 = *((f32 *) (((char *) arg6) + 0));

  if (sp38 <= temp_ft5_2)
  {
    temp_fa1 = arg3 - arg0;
    if (temp_fa1 == 0.0)
    {
      var_fa0_5 = 0.0f;
    }
    else
    {
      var_fa0_5 = (temp_ft5_2 - arg0) / temp_fa1;
    }
    temp_fv0_14 = (var_fa0_5 * (arg5 - arg2)) + arg2;
    if (((*((f32 *) (((char *) arg6) + 8))) <= temp_fv0_14) && (temp_fv0_14 <= (*((f32 *) (((char *) arg6) + 0x14)))))
    {
      temp_fv0_15 = (var_fa0_5 * (arg4 - arg1)) + arg1;
      if (((*((f32 *) (((char *) arg6) + 4))) <= temp_fv0_15) && (temp_fv0_15 <= (*((f32 *) (((char *) arg6) + 0x10)))))
      {
        *(&sp5C)[var_v1] = var_fa0_5;
        temp_t3 = (&sp54)[var_v1];
        do
        {
          do
          {
            do
            {
              var_v1 += 1;
            }
            while (0);
          }
          while (0);
        }
        while (0);
        *temp_t3 = -1;
        if (var_v1 == 2)
        {
          return 2;
        }
      }
    }
    goto block_77;
  }
  block_77:
  temp_fv0_16 = *((f32 *) (((char *) arg6) + 0xC));

  if (sp44 >= temp_fv0_16)
  {
    temp_fa1_2 = arg3 - arg0;
    if (temp_fa1_2 == 0.0f)
    {
      var_fa0_6 = 0.0f;
    }
    else
    {
      var_fa0_6 = ((*((f32 *) (((char *) arg6) + 0xC))) - arg0) / temp_fa1_2;
    }
    temp_fv0_17 = (var_fa0_6 * (arg5 - arg2)) + arg2;
    if (((*((f32 *) (((char *) arg6) + 8))) <= temp_fv0_17) && (temp_fv0_17 <= (*((f32 *) (((char *) arg6) + 0x14)))))
    {
      temp_fv0_18 = (var_fa0_6 * (arg4 - arg1)) + arg1;
      if (((*((f32 *) (((char *) arg6) + 4))) <= temp_fv0_18) && (temp_fv0_18 <= (*((f32 *) (((char *) arg6) + 0x10)))))
      {
        *(&sp5C)[var_v1] = var_fa0_6;
        temp_t8 = (&sp54)[var_v1];
        *temp_t8 = 1;
        var_v1 += 1;
        if (var_v1 == 2)
        {
          return 2;
        }
      }
    }
    goto block_87;
  }
  block_87:
  return var_v1 & 0xFF;

}

