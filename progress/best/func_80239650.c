s32 func_80239570(void *, s8 *, s32 *, u8 *);
s32 func_802452EC(void *);
s32 func_802456A0(void *);
s32 func_80245710(s32, s32, s32, s32 *);
s32 func_80246660(s32, s32, s32, s32 *, s32);
s32 func_80239650(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, s32 *arg5)
{
  union 
  {
    unsigned char bytes[376];
    struct 
    {
      unsigned char pad[340];
      s32 value;
    } view_sp154;
    struct 
    {
      unsigned char pad[346];
      u16 value;
    } view_sp15A;
    struct 
    {
      unsigned char pad[348];
      u8 value;
    } view_sp15C;
    struct 
    {
      unsigned char pad[60];
      s32 value;
    } view_sp3C;
    struct 
    {
      unsigned char pad[67];
      s8 value;
    } view_sp43;
    struct 
    {
      unsigned char pad[80];
      u8 value;
    } view_sp50;
    struct 
    {
      unsigned char pad[81];
      u8 value;
    } view_sp51;
    struct 
    {
      unsigned char pad[84];
      s32 value;
    } view_sp54;
    struct 
    {
      unsigned char pad[347];
      u8 value;
    } view_unksp15B;
  } m2c_initial_frame;
  s32 *var_s1;
  s32 temp_s0;
  s32 temp_t4;
  s32 temp_t9;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_8;
  unsigned long temp_v0_5;
  s32 temp_v0_6;
  int temp_v0_7;
  s32 temp_v0_4;
  s32 var_s0;
  s32 var_s3;
  s32 var_v0;
  temp_s0 = arg2 & 0xFF;
  if ((arg1 >= (*((s32 *) (((char *) arg0) + 0x50)))) || (arg1 < 0))
  {
    return 5;
  }
  if ((arg4 <= 0) || ((unsigned short) (arg4 & 0x1F)))
  {
    return 5;
  }
  if ((arg3 < 0) || (arg3 & 0x1F))
  {
    return 5;
  }
  if (!((*((s32 *) (((char *) arg0) + 0))) & 1))
  {
    return 5;
  }
  if (func_802452EC(arg0) == 2)
  {
    return 2;
  }
  if ((*((u8 *) (((char *) arg0) + 0x65))) != 0)
  {
    temp_v0_7 = func_802456A0(arg0);
    *((u8 *) (((char *) arg0) + 0x65)) = 0U;
    if (temp_v0_7 != 0)
    {
      return temp_v0_7;
    }
  }
  temp_v0_6 = func_80245710(*((s32 *) (((char *) arg0) + 4)), (0, *((s32 *) (((char *) arg0) + 8))), (((unsigned short) (*((s32 *) (((char *) arg0) + 0x5C)))) + arg1) & 0xFFFF, &m2c_initial_frame.view_sp154.value);
  if (temp_v0_6 != 0)
  {
    return temp_v0_6;
  }
  if ((((s32) m2c_initial_frame.view_sp15A.value) >= (*((s32 *) (((char *) arg0) + 0x60)))) && (((s32) ((u8) m2c_initial_frame.view_sp15A.value)) < ((s32) ((*((u8 *) (((char *) arg0) + 0x64))) & 0xFFFF))))
  {
    if ((((s32) m2c_initial_frame.view_unksp15B.value) <= 0) || (((s32) m2c_initial_frame.view_unksp15B.value) >= 0x80))
    {
      if (m2c_initial_frame.view_sp15A.value == 1)
      {
        return 5;
      }
      __shared_return_3:
      return 3;

    }
    m2c_initial_frame.view_sp3C.value = temp_s0;
    if (temp_s0 == 0)
    {
      if (!(m2c_initial_frame.view_sp15C.value & 2))
      {
        return 6;
      }
      goto block_32;
    }
    block_32:
    temp_v0_8 = arg3 / 32;

    var_s0 = temp_v0_8;
    m2c_initial_frame.view_sp43.value = 0xFF;
    m2c_initial_frame.view_sp50.value = (u16) m2c_initial_frame.view_sp15A.value;
    if (temp_v0_8 >= 8)
    {
      loop_33:
      temp_v0_5 = func_80239570(arg0, &m2c_initial_frame.view_sp43.value, &m2c_initial_frame.view_sp54.value, &m2c_initial_frame.view_sp50.value);

      var_s0 -= 8;
      if (temp_v0_5 != 0)
      {
        return temp_v0_5;
      }
      if (var_s0 < 8)
      {
        goto block_36;
      }
      goto loop_33;
    }
    block_36:
    var_s1 = arg5;

    temp_t9 = arg4 / 32;
    var_s3 = temp_t9;
    if (temp_t9 > 0)
    {
      loop_37:
      if (var_s0 == 8)
      {
        temp_v0_4 = func_80239570(arg0, &m2c_initial_frame.view_sp43.value, &m2c_initial_frame.view_sp54.value, &m2c_initial_frame.view_sp50.value);
        var_s0 = 0;
        if (temp_v0_4 != 0)
        {
          return temp_v0_4;
        }
      }

      if (m2c_initial_frame.view_sp50.value != (*((u8 *) (((char *) arg0) + 0x65))))
      {
        *((u8 *) (((char *) arg0) + 0x65)) = m2c_initial_frame.view_sp50.value;
        temp_v0_3 = func_802456A0(arg0);
        if (temp_v0_3 != 0)
        {
          return temp_v0_3;
        }
      }
      temp_t4 = ((m2c_initial_frame.view_sp51.value * 8) + var_s0) & 0xFFFF;
      if (m2c_initial_frame.view_sp3C.value == 0)
      {
        var_v0 = func_80245710(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), temp_t4, var_s1);
      }
      else
      {
        var_v0 = func_80246660(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), temp_t4, var_s1, 0);
      }
      var_s1 += 8;
      if (var_v0 != 0)
      {
        return var_v0;
      }
      var_s3 -= 1;
      var_s0 += 1;
      if (((u32) var_s3) == 0)
      {
        goto block_50;
      }
      goto loop_37;
    }
    block_50:
    if (m2c_initial_frame.view_sp3C.value == 1)
    {
      if (!(m2c_initial_frame.view_sp15C.value & 2))
      {
        m2c_initial_frame.view_sp15C.value |= 2;
        *((u8 *) (((char *) arg0) + 0x65)) = 0U;
        temp_v0_2 = func_802456A0(arg0);
        if (temp_v0_2 != 0)
        {
          return temp_v0_2;
        }
        temp_v0 = func_80246660(*((s32 *) (((char *) arg0) + 4)), (0, *((s32 *) (((char *) arg0) + 8))), ((*((s32 *) (((char *) arg0) + 0x5C))) + arg1) & 0xFFFF, &m2c_initial_frame.view_sp154.value, 0);
        if (temp_v0 != 0)
        {
          return temp_v0;
        }
        goto block_56;
      }
      block_56:
      goto __shared_return_0;

    }

    __shared_return_0:
    return 0;

  }
  if (m2c_initial_frame.view_sp15A.value == 1)
  {
    return 5;
  }
  goto __shared_return_3;
}

