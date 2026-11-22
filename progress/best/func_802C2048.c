s32 func_8022A0D0(s32 *, s32, s32, s32);
s32 func_8029F9FC(s32, s32, s32, s32, f32, f32, f32);
s32 func_8029FAB4(s32, s32);
s32 func_802AB448(s32, s32 *, s32, s32, f32, f32, f32, s32, s32);
s32 func_802C5150(void *arg0, s32 *);
extern f32 D_80341AF4;
void func_802C2048(void *arg0, f32 arg1, s32 arg2)
{
  char sp40[0x40];
  s32 temp_t9;
  func_802C5150(arg0, sp40);
  func_8022A0D0(sp40, 0, 0xC1F00000, 0xC0000000);
  temp_t9 = func_802AB448(*((s32 *) (((char *) arg0) + 0)), (u32) sp40, *((s32 *) (((char *) arg0) + 0xE0)), 0x44DAC000, 9.0f, 400.0f, 1.0f, *((s32 *) (((char *) arg0) + 0x8C)), 1);
  if (temp_t9 != 0)
  {
    func_8029FAB4(temp_t9, 0x40D00000);
    func_8029F9FC(temp_t9, 0x3F59999A, 0x3EE66666, 0x3D4CCCCD, 1.0f, 1.0f, D_80341AF4);
  }
  temp_t9 = ((((((((((*((s32 *) (((char *) arg0) + 0xF8))) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) + 1;
  *((s32 *) (((char *) arg0) + 0xF8)) = temp_t9;
  if (0 < temp_t9)
  {
    *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
    *((s32 *) (((char *) arg0) + 0xF8)) = 0;
  }
}

