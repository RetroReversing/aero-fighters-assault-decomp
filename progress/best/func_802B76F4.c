s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E83C();
s32 func_8021E87C();
s32 func_8021F6F8();
s32 func_80221F44();
s32 func_8022331C();
s32 func_8022337C(void);
s32 func_802233EC();
s32 func_8022342C();
s32 func_80223468();
s32 func_80228DE0();
s32 func_8023072C();
s32 func_8023413C();
s32 func_802344F4();
f32 func_80234B48();
extern char D_80326834[];
extern u8 D_8032AA80;
extern f64 D_803416F8;
extern f32 D_80341700;
extern f32 D_80341704;
void func_802B76F4(void *arg0, f32 arg1)
{
  union 
  {
    unsigned char bytes[240];
    struct 
    {
      unsigned char pad[76];
      s32 value;
    } view_sp4C;
    struct 
    {
      unsigned char pad[100];
      f32 value;
    } view_sp64;
    struct 
    {
      unsigned char pad[120];
      f32 value;
    } view_sp78;
    struct 
    {
      unsigned char pad[124];
      f32 value;
    } view_sp7C;
    struct 
    {
      unsigned char pad[144];
      f32 value;
    } view_sp90;
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
      unsigned char pad[204];
      s32 value;
    } view_spCC;
  } m2c_initial_frame;
  f32 temp_ft2;
  f32 temp_fv0;
  f32 var_fs0;
  f32 var_fs1;
  f32 var_fs1_2;
  volatile unsigned int temp_ft0;
  s32 temp_ft3;
  s32 var_a2;
  s32 var_s0;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  volatile short temp_v0;
  if ((*((s32 *) (((char *) arg0) + 0x78))) & 0x80)
  {
    func_8022331C();
    func_80228DE0(&m2c_initial_frame.view_sp7C.value, (*((s32 *) (((char *) arg0) + 0))) + 0x7174);
    arg1 = (f32) (((f64) arg1) * D_803416F8);
    if (D_8032AA80 == 0xC)
    {
      var_v0 = 1;
    }
    else
    {
      var_v0 = 0;
    }
    if (var_v0 != 0)
    {
      var_fs0 = 110.0f;
      if ((*((s32 *) (((char *) arg0) + 0xC))) == 0)
      {
        var_fs1 = 154.0f;
        m2c_initial_frame.view_sp64.value = 194.0f;
      }
      else
      {
        var_fs1 = 50.0f;
        m2c_initial_frame.view_sp64.value = 90.0f;
      }
    }
    else
    {
      var_fs0 = 68.0f;
      var_fs1 = 84.0f;
      m2c_initial_frame.view_sp64.value = 164.0f;
      do
      {
        func_8022342C(0x400000);
      }
      while (0);
    }
    temp_ft3 = (s32) arg1;
    temp_fv0 = (f32) ((s32) (((f32) ((s32) ((((f32) temp_ft3) * 8.0f) / 99.0f))) + 1.5f));
    temp_ft2 = 4.0f + temp_fv0;
    m2c_initial_frame.view_spC0.value = 44.0f + temp_fv0;
    m2c_initial_frame.view_spBC.value = temp_ft2;
    func_80223468(0x7B);
    func_80221F44(0, 0x3F800000);
    do
    {
      func_8021F6F8((s32) var_fs0, (s32) (var_fs0 + 8.0f), (s32) var_fs1, (s32) m2c_initial_frame.view_sp64.value, 1.0f * 0.125f, ((0, 9.0f)) * 0.125f, temp_ft2 * 0.125f, m2c_initial_frame.view_spC0.value * 0.125f);
    }
    while (0);
    temp_v0 = D_8032AA80;
    if ((temp_v0 != 0xC) && ((*((s32 *) (((char *) arg0) + 0x78))) & 0x100))
    {
      func_8023413C(*((s32 *) (((char *) arg0) + 0x10)));
    }
    var_fs1_2 = m2c_initial_frame.view_sp90.value;
    m2c_initial_frame.view_sp78.value = m2c_initial_frame.view_sp7C.value;
    var_a2 = (temp_ft0 = (s32) (((41.0f * m2c_initial_frame.view_sp7C.value) + m2c_initial_frame.view_spAC.value) - 8.0f));
    switch (temp_v0)
    {
      case 0xC:
      {
        var_v0_2 = 1;
      }
        break;

      default:
      {
        var_v0_2 = 0;
      }
        break;

    }

    if (var_v0_2 != 0)
    {
      var_a2 = temp_ft0 - 0xA;
    }
    func_802344F4(*((s32 *) (((char *) arg0) + 0x20)), 2, var_a2, (s32) ((126.0f * var_fs1_2) + m2c_initial_frame.view_spB0.value), 0);
    func_8023413C(*((s32 *) (((char *) arg0) + 0x20)));
    func_802233EC(0x400000);
    if (D_8032AA80 == 0xC)
    {
    }
    var_v0_3 = 0;
    if (func_80234B48() < D_80341700)
    {
      var_fs1_2 = D_80341700;
    }
    if (D_8032AA80 == 0xC)
    {
      var_v0_3 = 1;
    }
    if (var_v0_3 != 0)
    {
      func_8021E66C(5);
    }
    else
    {
      func_8021E66C(4);
    }
    func_8021E708(0xFF, 0xFF, 0xFF, 0x64);
    m2c_initial_frame.view_sp4C.value = temp_ft3 - 0xD5;
    var_s0 = 0;
    do
    {
      if ((var_s0 >= m2c_initial_frame.view_sp4C.value) && ((temp_ft3 + 0xE1) >= var_s0))
      {
        func_8023072C(&m2c_initial_frame.view_spCC.value, D_80326834, var_s0);
        func_8021E87C((s32) ((((f32) (0x43 - ((s32) (((f32) func_8021E83C(&m2c_initial_frame.view_spCC.value)) * (1.0f / var_fs1_2))))) * m2c_initial_frame.view_sp78.value) + m2c_initial_frame.view_spAC.value), (s32) (((119.0f + ((((f32) (var_s0 - temp_ft3)) * 16.0f) * D_80341704)) * var_fs1_2) + m2c_initial_frame.view_spB0.value), &m2c_initial_frame.view_spCC.value);
      }
      var_s0 += 0x64;
    }
    while (var_s0 != 0xBB8);
    func_8022337C();
  }
}

