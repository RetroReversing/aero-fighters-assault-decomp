extern u8 D_80348B9A;
f32 func_803096D8(f32 arg0, s32 arg1, volatile unsigned int arg2)
{
  f32 var_fv1;
  s32 temp_t6;
  temp_t6 = arg2;
  var_fv1 = 1.0f;
  switch (D_80348B9A)
  {
    default:
      return arg0 * 1.0f;

    case 1:
      if (((arg1 == 2) || (arg1 == 4)) || (arg1 == 3))
    {
      if (temp_t6 != 0)
      {
        return arg0 * 12.0f;
      }
      return arg0 * 25.0f;
    }
      if (arg1 == 5)
    {
      return arg0 * 8.0f;
    }
      if (arg1 == 1)
    {
      if (temp_t6 != 0)
      {
        return arg0 * 8.0f;
      }
      return arg0 * 7.0f;
    }
      return arg0 * var_fv1;

    case 2:
      if (((arg1 == 2) || (arg1 == 4)) || (arg1 == 3))
    {
      if (temp_t6 != 0)
      {
        return arg0 * 10.0f;
      }
      return arg0 * 20.0f;
    }
      if (arg1 == 5)
    {
      return arg0 * 10.0f;
    }
      if (arg1 == 1)
    {
      if (temp_t6 != 0)
      {
        return arg0 * 10.0f;
      }
      return arg0 * 10.0f;
    }
      return arg0 * var_fv1;

    case 3:
      if (((arg1 == 2) || (arg1 == 4)) || (arg1 == 3))
    {
      if (temp_t6 != 0)
      {
        return arg0 * 9.0f;
      }
      return arg0 * 10.0f;
    }
      if (arg1 == 5)
    {
      return arg0 * 11.0f;
    }
      if (arg1 == 1)
    {
      if (temp_t6 != 0)
      {
        return arg0 * 11.0f;
      }
      var_fv1 = 13.0f;
      return arg0 * var_fv1;
    }
      return arg0 * var_fv1;

  }

}

