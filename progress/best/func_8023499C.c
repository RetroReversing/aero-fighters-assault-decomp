s32 ldiv(s32 *, s32, s32, s32 *);
extern short D_80250904;
extern volatile int D_80250908;
extern f32 D_802553B0;
f32 func_8023499C(void)
{
  s32 *__base_D_80250904;
  union 
  {
    unsigned char bytes[40];
    struct 
    {
      unsigned char pad[32];
      s32 value;
    } view_sp20;
    struct 
    {
      unsigned char pad[36];
      s32 value;
    } view_sp24;
  } m2c_initial_frame;
  s32 temp_t0;
  s32 temp_t6;
  s32 var_v0;
  __base_D_80250904 = &D_80250904;
  ldiv(&m2c_initial_frame.view_sp20.value, *__base_D_80250904, 0xD1A4, __base_D_80250904);
  temp_t0 = (m2c_initial_frame.view_sp24.value * 0x9C4E) - (m2c_initial_frame.view_sp20.value * 0x2FB3);
  *(&D_80250904) = temp_t0 & 0xFFFFu;
  if (temp_t0 < 0)
  {
    do
    {
      *__base_D_80250904 = temp_t0 + 0x7FFFFFAB;
    }
    while (0);
  }
  ldiv(&m2c_initial_frame.view_sp20.value, D_80250908, 0xCE26, __base_D_80250904);
  temp_t6 = (m2c_initial_frame.view_sp24.value * 0x9EF4) - (m2c_initial_frame.view_sp20.value * 0xECF);
  D_80250908 = temp_t6;
  var_v0 = temp_t6;
  if (temp_t6 < 0)
  {
    var_v0 = ((((0, m2c_initial_frame.view_sp24)).value * 0x9EF4) - (m2c_initial_frame.view_sp20.value * 0xECF)) + 0x7FFFFF07;
    D_80250908 = var_v0;
  }
  temp_t0 = (*__base_D_80250904) - var_v0;
  if (temp_t0 <= 0)
  {
    temp_t0 += 0x7FFFFFAA;
  }
  return ((f32) (temp_t0 - 1)) / D_802553B0;
}

