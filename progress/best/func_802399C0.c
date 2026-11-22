s32 func_80239120();
s32 func_80239C40();
s32 func_802452EC();
s32 func_80245404();
s32 func_802456A0();
s32 func_80245710();
s32 func_80246660();
s32 func_802399C0(void *arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  unsigned long ret;
  union 
  {
    unsigned char bytes[384];
    struct 
    {
      unsigned char pad[380];
      s32 value;
    } view_sp17C;
    struct 
    {
      unsigned char pad[80];
      s32 value;
    } view_sp50;
    struct 
    {
      unsigned char pad[82];
      s16 value;
    } view_sp52;
    struct 
    {
      unsigned char pad[84];
      s32 value;
    } view_sp54;
    struct 
    {
      unsigned char pad[88];
      s16 value;
    } view_sp58;
    struct 
    {
      unsigned char pad[90];
      u8 value;
    } view_sp5A;
    struct 
    {
      unsigned char pad[91];
      u8 value;
    } view_sp5B;
    struct 
    {
      unsigned char pad[92];
      s8 value;
    } view_sp5C;
    struct 
    {
      unsigned char pad[94];
      s16 value;
    } view_sp5E;
    struct 
    {
      unsigned char pad[96];
      s8 value;
    } view_sp60;
    struct 
    {
      unsigned char pad[97];
      s8 value;
    } view_sp61;
    struct 
    {
      unsigned char pad[98];
      s8 value;
    } view_sp62;
    struct 
    {
      unsigned char pad[99];
      s8 value;
    } view_sp63;
    struct 
    {
      unsigned char pad[100];
      s32 value;
    } view_sp64;
    struct 
    {
      unsigned char pad[116];
      s32 value;
    } view_sp74;
    struct 
    {
      unsigned char pad[81];
      u8 value;
    } view_unksp51;
  } m2c_initial_frame;
  char *var_v0;
  u32 temp_s0;
  u32 temp_v0;
  s32 temp_v0_2;
  int temp_v0_3;
  unsigned temp_v0_4;
  u32 temp_v0_5;
  s32 temp_v0_6;
  u8 var_s0;
  u8 var_s2;
  u8 var_s4;
  temp_s0 = arg1 & 0xFFFF;
  m2c_initial_frame.view_sp52.value = 0;
  if ((((s32) temp_s0) == 0) || (arg2 == 0))
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
    *((u8 *) (((char *) arg0) + 0x65)) = 0U;
    temp_v0_6 = func_802456A0(arg0);
    if (temp_v0_6 != 0)
    {
      return temp_v0_6;
    }
  }
  temp_v0_5 = func_80239120(arg0, temp_s0 & 0xFFFF, arg2, arg3, arg4, &m2c_initial_frame.view_sp17C.value);
  if (temp_v0_5 != 0)
  {
    return temp_v0_5;
  }
  if (m2c_initial_frame.view_sp17C.value == (-1))
  {
    return 5;
  }
  temp_v0_4 = func_80245710(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), ((*((s32 *) (((char *) arg0) + 0x5C))) + m2c_initial_frame.view_sp17C.value) & 0xFFFF, &m2c_initial_frame.view_sp54.value);
  var_s0 = m2c_initial_frame.view_sp5A.value;
  if (temp_v0_4)
  {
    return temp_v0_4;
  }
  var_s2 = m2c_initial_frame.view_sp5B.value;
  var_s4 = var_s0 ^ 0;
  if (((s32) var_s0) < ((s32) (*((u8 *) (((char *) arg0) + 0x64)))))
  {
    loop_21:
    temp_v0_3 = func_80245404(arg0, &m2c_initial_frame.view_sp74.value, 0, ((unsigned) var_s0) & 0xFF);

    if (temp_v0_3 != 0)
    {
      return temp_v0_3;
    }
    temp_v0_2 = func_80239C40(arg0, &m2c_initial_frame.view_sp74.value, var_s2 & 0xFF, &m2c_initial_frame.view_sp52.value, var_s0, &m2c_initial_frame.view_sp50.value, 1);
    if ((temp_v0_2 & 0xFFFFFFFF) != 0)
    {
      return temp_v0_2;
    }
    temp_v0 = func_80245404(arg0, &m2c_initial_frame.view_sp74.value, 1, var_s0 & 0xFF);
    if (((u32) temp_v0) != 0)
    {
      return temp_v0;
    }
    if (m2c_initial_frame.view_sp50.value == 1)
    {
      goto block_31;
    }
    var_s0 = (u8) m2c_initial_frame.view_sp50.value;
    var_s2 = m2c_initial_frame.view_unksp51.value;
    var_s4 = (s32) var_s0;
    if ((((s32) ((int) var_s0)) - 1) >= (((s32) (*((u8 *) (((char *) arg0) + 0x64)))) - 1))
    {
      goto block_31;
    }
    goto loop_21;
  }
  block_31:
  var_v0 = &m2c_initial_frame.view_sp54.value;

  if (((s32) var_s4) >= ((s32) (*((u8 *) (((char *) arg0) + 0x64)))))
  {
    ret = 3;
  }
  else
  {
    m2c_initial_frame.view_sp54.value = 0;
    m2c_initial_frame.view_sp58.value = 0;
    m2c_initial_frame.view_sp5A.value = (((unsigned) var_s0) & 0xFF) * 0;
    m2c_initial_frame.view_sp5E.value = 0;
    do
    {
      var_v0 += 1;
      *((s8 *) (((char *) var_v0) + 0xF)) = 0;
    }
    while (((u32) var_v0) < ((u32) (&m2c_initial_frame.view_sp64.value)));
    m2c_initial_frame.view_sp61.value = 0;
    m2c_initial_frame.view_sp62.value = 0;
    m2c_initial_frame.view_sp63.value = 0;
    m2c_initial_frame.view_sp5C.value = 0;
    m2c_initial_frame.view_sp60.value = 0;
    ret = func_80246660(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), ((*((s32 *) (((char *) arg0) + 0x5C))) + m2c_initial_frame.view_sp17C.value) & 0xFFFF);
  }
  return ret;
}

