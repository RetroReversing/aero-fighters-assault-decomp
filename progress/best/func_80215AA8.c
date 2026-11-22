s32 func_80215578(f32, f32, s32, u16, s32, s32, f32);
s32 func_802156FC(f32, f32, s32, u16, s32, s32, f32);
s32 func_80215880(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_80234C78(f32 arg0, f32 arg1, f32);
s32 func_80234D30(f32 *, f32 *);
s32 func_80215AA8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, u16 arg7, s32 arg8, s32 arg9, f32 arg10, f32 *arg11)
{
  union 
  {
    unsigned char bytes[232];
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
      unsigned char pad[96];
      f32 value;
    } view_sp60;
    struct 
    {
      unsigned char pad[120];
      f32 value;
    } view_sp78;
    struct 
    {
      unsigned char pad[136];
      f32 value;
    } view_sp88;
    struct 
    {
      unsigned char pad[140];
      f32 value;
    } view_sp8C;
    struct 
    {
      unsigned char pad[144];
      f32 value;
    } view_sp90;
    struct 
    {
      unsigned char pad[148];
      f32 value;
    } view_sp94;
    struct 
    {
      unsigned char pad[152];
      f32 value;
    } view_sp98;
    struct 
    {
      unsigned char pad[156];
      f32 value;
    } view_sp9C;
    struct 
    {
      unsigned char pad[160];
      f32 value;
    } view_spA0;
    struct 
    {
      unsigned char pad[164];
      f32 value;
    } view_spA4;
    struct 
    {
      unsigned char pad[168];
      f32 value;
    } view_spA8;
    struct 
    {
      unsigned char pad[172];
      f32 value;
    } view_spAC;
    struct 
    {
      unsigned char pad[176];
      f32 value;
    } view_spB0;
    struct 
    {
      unsigned char pad[180];
      f32 value;
    } view_spB4;
    struct 
    {
      unsigned char pad[184];
      f32 value;
    } view_spB8;
    struct 
    {
      unsigned char pad[188];
      f32 value;
    } view_spBC;
    struct 
    {
      unsigned char pad[192];
      f32 value;
    } view_spC0;
    struct 
    {
      unsigned char pad[196];
      f32 value;
    } view_spC4;
    struct 
    {
      unsigned char pad[200];
      f32 value;
    } view_spC8;
    struct 
    {
      unsigned char pad[204];
      f32 value;
    } view_spCC;
    struct 
    {
      unsigned char pad[220];
      f32 value;
    } view_spDC;
    struct 
    {
      unsigned char pad[224];
      f32 value;
    } view_spE0;
  } m2c_initial_frame;
  f32 temp_fa0;
  f32 temp_ft5_2;
  f32 temp_fa1_2;
  f32 temp_fa1;
  f32 temp_ft4;
  f32 var_fa0;
  f32 temp_ft5;
  f32 temp_fa0_2;
  f32 temp_fv0;
  f32 temp_fv1;
  f32 temp_fv1_2;
  register f32 temp_ft4_2;
  f32 var_fa1;
  f32 var_ft4;
  f32 var_ft5;
  register f32 var_fv0;
  f32 var_fv1;
  register void *temp_a0;
  register void *temp_v0;
  void *temp_v1;
  temp_v0 = arg6 + (arg7 * 0x10);
  temp_v1 = arg6 + (arg8 * 0x10);
  temp_fv1 = (f32) (*((s16 *) (((char *) temp_v0) + 0)));
  temp_a0 = arg6 + (arg9 * 0x10);
  m2c_initial_frame.view_spC0.value = (f32) (*((s16 *) (((char *) temp_v1) + 0)));
  temp_ft4 = (f32) (*((s16 *) (((char *) temp_v0) + 2)));
  m2c_initial_frame.view_spBC.value = (f32) (*((s16 *) (((char *) temp_v1) + 2)));
  temp_ft5 = (f32) (*((s16 *) (((char *) temp_v0) + 4)));
  m2c_initial_frame.view_spB4.value = (f32) (*((s16 *) (((char *) temp_a0) + 0)));
  m2c_initial_frame.view_spB8.value = (f32) (*((s16 *) (((char *) temp_v1) + 4)));
  m2c_initial_frame.view_spB0.value = (f32) (*((s16 *) (((char *) temp_a0) + 2)));
  m2c_initial_frame.view_spC4.value = (f32) (*((s16 *) (((char *) temp_v0) + 4)));
  m2c_initial_frame.view_spC8.value = (f32) (*((s16 *) (((char *) temp_v0) + 2)));
  m2c_initial_frame.view_spAC.value = (f32) (*((s16 *) (((char *) temp_a0) + 4)));
  m2c_initial_frame.view_spCC.value = temp_fv1;
  if (arg10 != 1.0f)
  {
    temp_fv0 = 1.0f / arg10;
    m2c_initial_frame.view_spCC.value = ((f32) (*((s16 *) (((char *) temp_v0) + 0)))) * temp_fv0;
    m2c_initial_frame.view_spC8.value = temp_ft4 * temp_fv0;
    m2c_initial_frame.view_spC0.value *= temp_fv0;
    m2c_initial_frame.view_spC4.value = ((f32) (*((s16 *) (((char *) temp_v0) + 4)))) * temp_fv0;
    m2c_initial_frame.view_spBC.value *= temp_fv0;
    m2c_initial_frame.view_spB8.value *= temp_fv0;
    m2c_initial_frame.view_spB4.value *= temp_fv0;
    m2c_initial_frame.view_spB0.value *= temp_fv0;
    m2c_initial_frame.view_spAC.value *= temp_fv0;
  }
  var_ft4 = arg0;
  var_fa0 = arg1;
  var_fv0 = arg2;
  m2c_initial_frame.view_sp78.value = var_ft4;
  var_fa1 = var_fa0;
  var_fv1 = var_fv0;
  if (arg3 >= var_ft4)
  {
    var_ft5 = arg3;
  }
  else
  {
    var_ft4 = arg3;
    var_ft5 = m2c_initial_frame.view_sp78.value;
  }
  if (arg1 > arg4)
  {
    var_fa0 = arg4;
  }
  else
  {
    var_fa1 = arg4;
  }
  if (arg5 < arg2)
  {
    var_fv0 = arg5;
  }
  else
  {
    var_fv1 = arg5;
  }
  if ((((((((m2c_initial_frame.view_spC4.value < var_fv0) && (m2c_initial_frame.view_spB8.value < var_fv0)) && (m2c_initial_frame.view_spAC.value < var_fv0)) || (((var_fv1 < m2c_initial_frame.view_spC4.value) && (var_fv1 < m2c_initial_frame.view_spB8.value)) && (var_fv1 < m2c_initial_frame.view_spAC.value))) || (((m2c_initial_frame.view_spC8.value < var_fa0) && (m2c_initial_frame.view_spBC.value < var_fa0)) && (m2c_initial_frame.view_spB0.value < var_fa0))) || (((var_fa1 < m2c_initial_frame.view_spC8.value) && (var_fa1 < m2c_initial_frame.view_spBC.value)) && (var_fa1 < m2c_initial_frame.view_spB0.value))) || (((m2c_initial_frame.view_spCC.value < var_ft4) && (m2c_initial_frame.view_spC0.value < var_ft4)) && (m2c_initial_frame.view_spB4.value < var_ft4))) || (((var_ft5 < m2c_initial_frame.view_spCC.value) && (var_ft5 < m2c_initial_frame.view_spC0.value)) && (var_ft5 < m2c_initial_frame.view_spB4.value)))
  {
    return 0;
  }
  m2c_initial_frame.view_spA0.value = m2c_initial_frame.view_spC0.value - m2c_initial_frame.view_spCC.value;
  temp_fa1 = m2c_initial_frame.view_spB0.value - m2c_initial_frame.view_spC8.value;
  m2c_initial_frame.view_sp94.value = m2c_initial_frame.view_spB4.value - m2c_initial_frame.view_spCC.value;
  m2c_initial_frame.view_spA4.value = m2c_initial_frame.view_spBC.value - m2c_initial_frame.view_spC8.value;
  m2c_initial_frame.view_sp98.value = temp_fa1;
  m2c_initial_frame.view_spA8.value = m2c_initial_frame.view_spB8.value - m2c_initial_frame.view_spC4.value;
  m2c_initial_frame.view_sp9C.value = m2c_initial_frame.view_spAC.value - m2c_initial_frame.view_spC4.value;
  {
    func_80234C78(arg0, arg1, m2c_initial_frame.view_spB4.value);
  }
  func_80234D30(&m2c_initial_frame.view_sp88.value, &m2c_initial_frame.view_sp88.value);
  m2c_initial_frame.view_sp48.value = arg0;
  m2c_initial_frame.view_sp4C.value = m2c_initial_frame.view_sp88.value;
  m2c_initial_frame.view_sp50.value = arg1;
  temp_fa1_2 = ((m2c_initial_frame.view_spC4.value - arg2) * m2c_initial_frame.view_sp90.value) + (((m2c_initial_frame.view_spCC.value - arg0) * m2c_initial_frame.view_sp88.value) + ((m2c_initial_frame.view_spC8.value - ((s32) arg1)) * m2c_initial_frame.view_sp8C.value));
  m2c_initial_frame.view_spDC.value = temp_fa1_2;
  temp_ft4_2 = arg3 - m2c_initial_frame.view_sp48.value;
  temp_fa0 = arg5 - arg2;
  temp_ft5_2 = arg4 - m2c_initial_frame.view_sp50.value;
  m2c_initial_frame.view_sp60.value = temp_fa0;
  temp_fv1_2 = ((temp_ft4_2 * m2c_initial_frame.view_sp4C.value) + (temp_ft5_2 * m2c_initial_frame.view_sp8C.value)) + (temp_fa0 * m2c_initial_frame.view_sp90.value);
  m2c_initial_frame.view_spE0.value = temp_fv1_2;
  if (temp_fv1_2 != 0.0f)
  {
    goto __repair_guard_body;
  }
  return 0;
  __repair_guard_body:
  {
    temp_fa0_2 = temp_fa1_2 / temp_fv1_2;
    if ((temp_fa0_2 < 0.0f) || (temp_fa0_2 > 1.0f))
    {
      return 0;
    }
    if (m2c_initial_frame.view_sp90.value == .0f)
    {
      if (func_80215880((temp_ft4_2 * temp_fa0_2) + arg0, (temp_ft5_2 * temp_fa0_2) + arg1, (m2c_initial_frame.view_sp60.value * temp_fa0_2) + arg2, m2c_initial_frame.view_sp88.value, m2c_initial_frame.view_sp8C.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_spCC.value, m2c_initial_frame.view_spC8.value, m2c_initial_frame.view_spC4.value, m2c_initial_frame.view_spC0.value, m2c_initial_frame.view_spBC.value, m2c_initial_frame.view_spB8.value, m2c_initial_frame.view_spB4.value, m2c_initial_frame.view_spB0.value, m2c_initial_frame.view_spAC.value) != 0)
      {
        *arg11 = m2c_initial_frame.view_spDC.value / m2c_initial_frame.view_spE0.value;
        return 1;
      }
      *arg11 = 0.0f;
      return 0;
    }
    if (m2c_initial_frame.view_sp90.value > 0.0f)
    {
      if (func_80215578((temp_ft4_2 * temp_fa0_2) + arg0, (temp_ft5_2 * temp_fa0_2) + arg1, arg6, arg7, arg8, arg9, arg10) != 0)
      {
        *arg11 = m2c_initial_frame.view_spDC.value / m2c_initial_frame.view_spE0.value;
        return 1;
      }
      *arg11 = 0.0f;
      return (temp_fa0_2 < 0.0f) * 0;
    }
    if (func_802156FC((temp_ft4_2 * temp_fa0_2) + arg0, (temp_ft5_2 * temp_fa0_2) + arg1, arg6, arg7, arg8, arg9, arg10) != 0)
    {
      *arg11 = m2c_initial_frame.view_spDC.value / m2c_initial_frame.view_spE0.value;
      return 1;
    }
    *arg11 = 0.0f;
    return 0;
  }

}

