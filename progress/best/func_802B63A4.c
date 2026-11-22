s32 func_8021E708();
s16 func_8021E83C();
s32 func_8021E87C();
s32 func_8022331C();
s32 func_8022337C();
s32 func_80228DE0();
s32 func_8022A4F4();
s32 func_8023072C();
extern char D_80326830[];
void func_802B63A4(s32 *arg0, s32 arg1, s16 arg2, s32 arg3, f32 arg4)
{
  f32 temp_fs0;
  union 
  {
    unsigned char bytes[224];
    struct 
    {
      unsigned char pad[108];
      s32 value;
    } view_sp6C;
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
      unsigned char pad[192];
      s32 value;
    } view_spC0;
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
      unsigned char pad[212];
      f32 value;
    } view_spD4;
    struct 
    {
      unsigned char pad[216];
      f32 value;
    } view_spD8;
    struct 
    {
      unsigned char pad[220];
      f32 value;
    } view_spDC;
  } m2c_initial_frame;
  register f32 temp_fv0;
  s16 temp_v0;
  s16 *temp_s0;
  f32 temp_fv1;
  register s32 temp_ft1;
  s32 temp_s1;
  int var_s0;
  func_8022331C();
  func_80228DE0(&m2c_initial_frame.view_sp6C.value, (*arg0) - -0x7174);
  temp_s1 = arg2 << 5;
  if (0)
  {
  }
  temp_ft1 = arg4;
  temp_s0 = (void *) arg3;
  temp_s0 = (void *) (((char *) temp_s0) + ((s32) (((s16) (((s32) ((((s32) (((s32) (temp_ft1 + (((s32) ((char) (temp_s1 + 0x50))) % 96))) % 96)) / 32) + 1)) % 3)) * 2)));
  if (((*temp_s0) + 1) <= 0)
  {
    func_8021E708(0xFF, 0, 0, 0x64);
  }
  else
  {
    func_8021E708(0xFF, 0xFF, 0xFF, 0x64);
  }
  temp_v0 = *temp_s0;
  func_8023072C(&m2c_initial_frame.view_spC0.value, D_80326830, (temp_v0 > 0) ? ((s16) temp_v0) : ((s16) (-temp_v0)));
  temp_fs0 = (f32) (func_8021E83C(&m2c_initial_frame.view_spC0.value) / 2);
  var_s0 = -1;
  do
  {
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
    m2c_initial_frame.view_spD8.value = (f32) (0x33 - (((s32) ((temp_ft1 + temp_s1) + 0x10)) % 96));
    m2c_initial_frame.view_spD4.value = 54.0f * ((f32) var_s0);
    m2c_initial_frame.view_spDC.value = 1.0f;
    func_8022A4F4(arg1, &m2c_initial_frame.view_spC8.value, &m2c_initial_frame.view_spD4.value);
    temp_fv1 = m2c_initial_frame.view_spCC.value + m2c_initial_frame.view_spA0.value;
    temp_fv0 = m2c_initial_frame.view_spC8.value + m2c_initial_frame.view_sp9C.value;
    m2c_initial_frame.view_spC8.value = temp_fv0;
    m2c_initial_frame.view_spCC.value = temp_fv1;
    func_8021E87C((s32) (temp_fv0 - temp_fs0), (s32) (((0, temp_fv1)) - 5.0f), &m2c_initial_frame.view_spC0.value);
    var_s0 += 2;
  }
  while (var_s0 != 3);
  func_8022337C();
}
