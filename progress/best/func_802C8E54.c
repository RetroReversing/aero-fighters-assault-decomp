s32 func_80205C7C(s32, s32, f32, f32, f32, f32, f32, f32);
s32 func_80228DE0();
s32 func_8022A0D0();
f32 func_802CF808();
s32 func_802D0154();
extern f32 D_80341FA4;
extern f32 D_80341FA8;
extern f32 D_80341FAC;
extern f32 D_80341FB0;
extern f32 D_80341FB4;
extern f32 D_80341FB8;
void func_802C8E54(void *arg0, s32 arg1, s32 arg2)
{
  char sp40[0x40];
  f32 temp_fv0;
  int *__repair_home2 = &arg2;
  f32 temp_fv1;
  func_80228DE0(sp40);
  func_8022A0D0(arg1, 0, (0, *__repair_home2), (unsigned int) 8.0f);
  temp_fv1 = *((f32 *) (((char *) arg0) + 0x20));
  temp_fv0 = temp_fv1 * temp_fv1;
  do
  {
    func_8022A0D0(0x41200000, arg1, 0, (long) ((temp_fv1 * temp_fv1) * (-100)), temp_fv0 * 10.0f);
  }
  while (0);
  func_802D0154(arg1, (0, func_802CF808(sp40) + D_80341FA4));
  if (((*((u8 *) (((char *) arg0) + ((0x95B4 & 0xFFu) & 0xFFu)))) == 0) && ((*((f32 *) (((char *) arg0) + 0x20))) < D_80341FA8))
  {
    *((u8 *) (((char *) arg0) + 0x95B4)) = 1U;
    func_80205C7C(0x41200000, 0, D_80341FAC * 10.0f, D_80341FB0 * 10.0f, D_80341FB4 * 10.0f, D_80341FB8 * 10.0f, 10.0f, 2000.0f);
  }
}

