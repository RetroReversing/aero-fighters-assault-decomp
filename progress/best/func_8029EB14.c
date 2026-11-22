s32 func_8021F35C(s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_8021F4E4();
s32 func_8021FCD0();
s32 func_80222E98(void *, s32);
s32 func_8022331C();
s32 func_8022337C();
s32 func_802233EC(void *arg0, s32);
s32 func_8022342C(s32);
s32 func_80223468(s32);
s32 func_8022A210(f32, f32, void *, f32, f32, s32);
s32 math_mtx4Identity(f32, f32, void *);
s32 func_8029EB14(void *arg0, f32 arg1, f32 arg2, f32 arg3)
{
  f32 temp_fv0;
  f32 temp_fv1;
  s32 temp_ft0;
  s32 temp_ft5;
  s32 temp_s2;
  void *temp_s1;
  *((f32 *) (((char *) arg0) + 0x2E4)) = (f32) (255.0f / arg1);
  if (arg1 < arg2)
  {
    return 0;
  }
  temp_s1 = ((unsigned char *) arg0) + 0xC0;
  temp_s2 = (s32) (255.0f - (arg2 * (*((f32 *) (((char *) arg0) + 0x2E4)))));
  math_mtx4Identity(arg1, arg2, temp_s1);
  temp_fv0 = 1.0f / arg1;
  *((f32 *) (((char *) arg0) + 0xF0)) = (f32) (*((f32 *) (((char *) arg0) + 0xB0)));
  *((f32 *) (((char *) arg0) + 0xF4)) = (f32) (*((f32 *) (((char *) arg0) + 0xB4)));
  *((f32 *) (((char *) arg0) + 0xF8)) = (f32) (*((f32 *) (((char *) arg0) + 0xB8)));
  temp_fv1 = arg2 * temp_fv0;
  *((f32 *) (((char *) arg0) + 0x2E8)) = temp_fv0;
  func_8022A210(arg1, arg2, temp_s1, temp_fv1, temp_fv1, ((((((0x3F800000 & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu);
  func_8022331C();
  func_802233EC(arg0, 0x04F20000);
  func_8022342C(0x100000);
  func_80223468(0x1CD);
  func_80222E98(temp_s1, 0);
  func_8021F4E4();
  temp_ft5 = (s32) (-arg3);
  func_8021F35C(temp_ft5, temp_ft5, 0, -0x400, -0x400, 0xFF, 0xFF, 0xFF, temp_s2);
  temp_ft0 = (s32) arg3;
  func_8021F35C(temp_ft5, temp_ft0, 0, -0x400, 0x3E0, 0xFF, 0xFF, 0xFF, temp_s2);
  func_8021F35C(temp_ft0, temp_ft0, 0, 0x3E0, 0x3E0, 0xFF, 0xFF, 0xFF, temp_s2);
  func_8021F35C(temp_ft0, temp_ft5, 0, 0x3E0, -0x400, 0xFF, 0xFF, 0xFF, temp_s2);
  func_8021FCD0();
  func_8022337C();
  return 1;
}

