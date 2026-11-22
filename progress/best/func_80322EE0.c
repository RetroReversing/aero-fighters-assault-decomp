s32 func_80228DE0(s32 *);
s32 func_8022A0D0(s32, s32, f32, f32);
s32 func_802D0154(s32, f32, s32);
extern f32 D_80347ADC;
extern f32 D_80347AE0;
extern f32 D_80347AE4;
void func_80322EE0(void *arg0, s32 arg1, f32 arg2)
{
  int *__repair_home1 = &arg1;
  f32 sp1C;
  f32 temp_fv0;
  f32 temp_fv1;
  char sp20[0x40];
  func_80228DE0(sp20);
  temp_fv0 = *((f32 *) (((char *) arg0) + 0x20));
  temp_fv1 = temp_fv0 * temp_fv0;
  sp1C = temp_fv0 * temp_fv0;
  func_8022A0D0(*__repair_home1, 0, (arg2 * 1.0f) + ((temp_fv0 * temp_fv0) * D_80347ADC), 8.0f);
  func_802D0154(*__repair_home1, (temp_fv0 * temp_fv0) * D_80347AE0, 0x7A);
  func_8022A0D0(*__repair_home1, 0, (temp_fv0 * temp_fv0) * D_80347AE4, (temp_fv0 * temp_fv0) * (-5.0f));
}

