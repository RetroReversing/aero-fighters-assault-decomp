s32 func_8021ACB0(s32, s32);
s32 func_8021B4B0(s32, s32, s32 *);
s32 func_8021B838(s32, s32);
s32 func_8021BA90();
s32 func_80224CA8(s32);
s32 math_mtx4Identity(s32 *);
s32 func_8022A0D0(s32 *, s32, s32, s32);
s32 func_80233CE8();
s32 func_80233D58(s32);
s32 func_802344F4(s32, s32, s32, s32, s32, s32, s32);
s32 func_802D0154(s32 *, f32, s32);
s32 func_80309B08(s32, s32, s32);
s8 func_8030A0C8();
extern s32 D_80327008;
extern s32 D_80327050;
extern s32 D_80327098;
extern s8 D_80348B98;
void func_802C9D00(void *arg0)
{
  s32 temp_v0_2;
  s8 temp_v0;
  s32 temp_a0;
  s32 sp38;
  register s32 var_v1;
  s32 temp_v0_3;
  temp_v0 = func_8030A0C8();
  var_v1 = temp_v0;
  if (temp_v0 <= 0)
  {
    var_v1 = 1;
  }
  if (5 <= var_v1)
  {
    var_v1 = 4;
  }
  temp_a0 = *((s32 *) (((char *) arg0) + 0x14));
  *((s8 *) (((char *) arg0) + 0x18)) = 5;
  *((s8 *) (((char *) arg0) + 0x19)) = var_v1;
  *((s8 *) (((char *) arg0) + 0x1B)) = 0;
  *((s32 **) (((char *) arg0) + 0x20)) = &D_80327008;
  *((s32 **) (((char *) arg0) + 0x28)) = &D_80327050;
  *((s32 **) (((char *) arg0) + 0x2C)) = &D_80327098;
  *((s8 *) (((char *) arg0) + 0x30)) = 0;
  *((s8 *) (((char *) arg0) + 0x32)) = (s8) (((unsigned char) var_v1) - 1);
  if (temp_a0 != (-1))
  {
    func_80233D58(temp_a0);
    *((s32 *) (((char *) arg0) + 0x14)) = -1;
  }
  temp_v0_2 = func_80233CE8();
  *((s32 *) (((char *) arg0) + 0x14)) = temp_v0_2;
  func_802344F4(temp_v0_2, 9, 0x15, 2, 0x10, 0xE0, 0);
  func_80224CA8(3);
  func_80224CA8(0x3D);
  func_80224CA8(0x29);
  func_80224CA8(0x4B);
  temp_v0_3 = func_8021BA90();
  *((s32 *) (((char *) arg0) + 0x78)) = temp_v0_3;
  func_8021ACB0(temp_v0_3, 0x10);
  func_8021B838(*((s32 *) (((char *) arg0) + 0x78)), 2);
  *((s32 *) (((char *) arg0) + 0x80)) = 0xC1F00000;
  math_mtx4Identity(&sp38);
  func_8022A0D0(&sp38, 0, 0x43C80000, *((s32 *) (((char *) arg0) + 0x80)));
  func_802D0154(&sp38, (*((f32 *) (((char *) arg0) + 0))) / 2, 0x7A);
  func_8021B4B0(*((s32 *) (((char *) arg0) + 0x78)), 0, &sp38);
  D_80348B98 = 0;
  func_80309B08(0, 0, 0);
  *((s8 *) (((char *) arg0) + 0x34)) = 1;
}

