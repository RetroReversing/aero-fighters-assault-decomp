s32 func_80231A24(s32, s32 *, s32);
s32 func_802CF1FC(f32, f32, s32, f32, f32, f32, s32);
s32 func_80304BCC(s32, void *, f32 *, s32, s32);
extern s32 D_8032A8F4;
extern f32 D_80345FC0;
extern u8 D_803482A0[];
void func_80304B04(volatile unsigned int arg0, s32 arg1, s32 arg2)
{
  union 
  {
    unsigned char bytes[96];
    struct 
    {
      unsigned char pad[68];
      f32 value;
    } view_sp44;
    struct 
    {
      unsigned char pad[72];
      f32 value;
    } view_sp48;
    struct 
    {
      unsigned char pad[76];
      s32 value;
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
  } m2c_initial_frame;
  if ((arg1 < 0) || (arg1 >= 2))
  {
    func_80231A24(arg2, &D_8032A8F4, arg1);
    return;
  }
  func_80304BCC(arg2, (arg1 * 0x354) + D_803482A0, &m2c_initial_frame.view_sp44.value, arg2, arg1);
  func_802CF1FC(m2c_initial_frame.view_sp44.value, m2c_initial_frame.view_sp48.value, m2c_initial_frame.view_sp4C.value, D_80345FC0 * m2c_initial_frame.view_sp50.value, D_80345FC0 * m2c_initial_frame.view_sp54.value, D_80345FC0 * m2c_initial_frame.view_sp58.value, arg0);
}

