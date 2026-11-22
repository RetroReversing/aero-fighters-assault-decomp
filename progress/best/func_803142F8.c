s32 func_8021B4B0(s32, s16, s32 *);
s32 func_8021B6D4(s32, s16, s32 *);
s32 math_mtx4Identity(s32 *);
s32 func_802AD4E8(s32, void *, s32 *, f32 *, f32 *, s32, f32, f32, f32, f32);
s32 func_802C5150(void *, s32 *);
s32 func_802C53E8(f32, unsigned short, void *);
s32 func_802CF148(s32 *, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
s32 func_802CF1FC(f32, f32, s32, f32, f32, f32, s32 *);
f32 func_802CF450(f32, f32);
s32 func_802D0154(s32 *, f32, s32);
extern f32 D_803471B0;
s32 func_803142F8(void *arg0, s32 arg1, f32 arg2)
{
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 var_fa0;
  f32 var_fv1;
  f32 var_fv1_2;
  union 
  {
    unsigned char bytes[400];
    struct 
    {
      unsigned char pad[288];
      f32 value;
    } view_sp120;
    struct 
    {
      unsigned char pad[292];
      f32 value;
    } view_sp124;
    struct 
    {
      unsigned char pad[296];
      f32 value;
    } view_sp128;
    struct 
    {
      unsigned char pad[304];
      s32 value;
    } view_sp130;
    struct 
    {
      unsigned char pad[372];
      f32 value;
    } view_sp174;
    struct 
    {
      unsigned char pad[380];
      f32 value;
    } view_sp17C;
    struct 
    {
      unsigned char pad[388];
      s32 value;
    } view_sp184;
    struct 
    {
      unsigned char pad[68];
      s32 value;
    } view_sp44;
    struct 
    {
      unsigned char pad[72];
      f32 value;
    } view_sp48;
    struct 
    {
      unsigned char pad[76];
      f32 value;
    } view_sp4C;
    struct 
    {
      unsigned char pad[80];
      f32 value;
    } view_sp50;
    struct 
    {
      unsigned char pad[84];
      f32 value;
    } view_sp54;
    struct 
    {
      unsigned char pad[88];
      f32 value;
    } view_sp58;
    struct 
    {
      unsigned char pad[92];
      f32 value;
    } view_sp5C;
    struct 
    {
      unsigned char pad[96];
      f32 value;
    } view_sp60;
    struct 
    {
      unsigned char pad[100];
      f32 value;
    } view_sp64;
    struct 
    {
      unsigned char pad[104];
      f32 value;
    } view_sp68;
    struct 
    {
      unsigned char pad[108];
      f32 value;
    } view_sp6C;
    struct 
    {
      unsigned char pad[112];
      s32 value;
    } view_sp70;
    struct 
    {
      unsigned char pad[176];
      s32 value;
    } view_spB0;
    struct 
    {
      unsigned char pad[240];
      s32 value;
    } view_spF0;
  } m2c_initial_frame;
  s16 temp_a1;
  s16 temp_a1_2;
  if (func_802AD4E8(*((s32 *) (((char *) arg0) + 0)), arg0, &m2c_initial_frame.view_sp184.value, &m2c_initial_frame.view_sp17C.value, &m2c_initial_frame.view_sp174.value, 2, *((f32 *) (((char *) arg0) + 0x154)), *((f32 *) (((char *) arg0) + 0x15C)), *((f32 *) (((char *) arg0) + 0x160)), *((f32 *) (((char *) arg0) + 0x164))) > 0)
  {
    func_802C5150(arg0, &m2c_initial_frame.view_sp130.value);
    func_802CF148(&m2c_initial_frame.view_sp130.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp68.value, &m2c_initial_frame.view_sp64.value, &m2c_initial_frame.view_sp60.value);
    func_8021B6D4(*((s32 *) (((char *) arg0) + 0x194)), *((s16 *) (((char *) arg0) + 0x198)), &m2c_initial_frame.view_spF0.value);
    func_802CF148(&m2c_initial_frame.view_spF0.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp5C.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp6C.value);
    m2c_initial_frame.view_sp54.value = func_802CF450((m2c_initial_frame.view_sp68.value + m2c_initial_frame.view_sp5C.value) - (*((f32 *) (((char *) arg0) + 0x88))), m2c_initial_frame.view_sp17C.value);
    m2c_initial_frame.view_sp4C.value = m2c_initial_frame.view_sp120.value;
    m2c_initial_frame.view_sp48.value = m2c_initial_frame.view_sp124.value;
    m2c_initial_frame.view_sp44.value = m2c_initial_frame.view_sp128.value;
    math_mtx4Identity(&m2c_initial_frame.view_spF0.value);
    func_802CF1FC(m2c_initial_frame.view_sp4C.value, m2c_initial_frame.view_sp48.value, m2c_initial_frame.view_sp44.value, m2c_initial_frame.view_sp5C.value, 0.0f, 0.0f, &m2c_initial_frame.view_spF0.value);
    if (arg2 < m2c_initial_frame.view_sp54.value)
    {
      m2c_initial_frame.view_sp54.value = arg2;
    }
    else
    {
      temp_fv1 = -arg2;
      if (m2c_initial_frame.view_sp54.value < temp_fv1)
      {
        m2c_initial_frame.view_sp54.value = temp_fv1;
      }
    }
    temp_a1 = *((s16 *) (((char *) arg0) + 0x19A));
    if (temp_a1 != 0)
    {
      func_8021B6D4(*((s32 *) (((char *) arg0) + 0x194)), temp_a1, &m2c_initial_frame.view_spB0.value);
      func_802CF148(&m2c_initial_frame.view_spB0.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp6C.value, &m2c_initial_frame.view_sp58.value, &m2c_initial_frame.view_sp6C.value);
      temp_fv0 = func_802CF450(m2c_initial_frame.view_sp64.value + m2c_initial_frame.view_sp58.value, m2c_initial_frame.view_sp174.value);
      var_fa0 = temp_fv0;
      if (arg2 < temp_fv0)
      {
        var_fa0 = arg2;
      }
      else
      {
        temp_fv1_2 = -arg2;
        if (temp_fv0 < temp_fv1_2)
        {
          var_fa0 = temp_fv1_2;
        }
      }
      m2c_initial_frame.view_sp50.value = var_fa0;
    }
    else
    {
      m2c_initial_frame.view_sp50.value = 0.0f;
    }
    func_802D0154(&m2c_initial_frame.view_spF0.value, m2c_initial_frame.view_sp54.value, 0x7A);
    func_8021B4B0(*((s32 *) (((char *) arg0) + 0x194)), *((s16 *) (((char *) arg0) + 0x198)), &m2c_initial_frame.view_spF0.value);
    if ((*((s16 *) (((char *) arg0) + 0x19A))) != 0)
    {
      func_802D0154(&m2c_initial_frame.view_spB0.value, m2c_initial_frame.view_sp50.value, 0x78);
      func_8021B4B0(*((s32 *) (((char *) arg0) + 0x194)), *((s16 *) (((char *) arg0) + 0x19A)), &m2c_initial_frame.view_spB0.value);
    }
    temp_a1_2 = *((s16 *) (((char *) arg0) + 0x19C));
    if (temp_a1_2 != 0)
    {
      func_8021B6D4(*((s32 *) (((char *) arg0) + 0x194)), temp_a1_2, &m2c_initial_frame.view_sp70.value);
      func_802D0154(&m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp50.value, 0x78);
      func_8021B4B0(*((s32 *) (((char *) arg0) + 0x194)), *((s16 *) (((char *) arg0) + 0x19C)), &m2c_initial_frame.view_sp70.value);
    }
    temp_fv0_2 = D_803471B0 * m2c_initial_frame.view_sp54.value;
    if (temp_fv0_2 > 0.0f)
    {
      var_fv1 = temp_fv0_2;
    }
    else
    {
      var_fv1 = -temp_fv0_2;
    }
    if (var_fv1 < 2.0f)
    {
      temp_fv0_3 = D_803471B0 * m2c_initial_frame.view_sp50.value;
      if (temp_fv0_3 > 0.0f)
      {
        var_fv1_2 = temp_fv0_3;
      }
      else
      {
        var_fv1_2 = -temp_fv0_3;
      }
      if (var_fv1_2 < 2.0f)
      {
        return func_802C53E8(D_803471B0, 0x40000000, arg0);
      }
      goto block_25;
    }
    goto block_25;
  }
  block_25:
  return 0;

}

