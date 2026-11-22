s32 func_8022A0D0();
s32 func_802D0154(void *arg0, f32, f32);
extern f32 D_803435C8;
extern f32 D_803435CC;
extern f32 D_803435D0;
void func_802D916C(void *arg0, f32 arg1, f32 arg2)
{
  f32 temp_fv0;
  f32 sp1C;
  temp_fv0 = *((f32 *) (((char *) arg0) + 0x20));
  sp1C = temp_fv0 * temp_fv0;
  func_8022A0D0(arg2);
  func_802D0154(arg0, arg1, sp1C * D_803435C8);
  func_8022A0D0((int) arg1, 0, sp1C * D_803435CC, (0, sp1C * D_803435D0));
}

