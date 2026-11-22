s32 func_8021ACB0(s32, s32);
s32 func_8021B240(s32, s32, s32, s32);
s32 func_8021B4B0(s32, s32, s32 *);
s32 func_8021BA90();
s32 func_80224CA8(s32);
s32 func_8028D268(void *, s32, s32, void *, s32 *, s32);
s32 func_8028DB0C(void *, s32 *);
s32 func_8028DD58(void *, s32, s32, s32 *);
s32 func_8028DE50(void *, s32, s32 *);
s32 math_mtx4Identity(s32 *);
extern s32 D_80329214;
extern s32 D_80329244;
extern s32 D_8032926C;
extern s32 D_80329288;
extern s32 D_803292D8;
extern s32 D_803292FC;
s32 func_802FF660(void *arg0, s32 arg1, s32 arg2)
{
  void *temp_s0;
  f32 sp60[3];
  u8 sp30[0x30];
  s32 temp_v0;
  *((s32 *) (((char *) arg0) + 0x14)) = arg1;
  func_80224CA8(0x46);
  func_80224CA8(0x31);
  func_80224CA8(0x20);
  func_80224CA8(0x1F);
  temp_s0 = ((unsigned char *) arg0) + 0x70;
  func_8028D268(temp_s0, 0xB, 7, arg0, &D_803292FC, 4);
  func_8028DD58(temp_s0, 1, 0xC, &D_80329214);
  func_8028DD58(temp_s0, 2, 0xA, &D_80329244);
  func_8028DD58(temp_s0, 3, 7, &D_8032926C);
  func_8028DB0C(temp_s0, &D_80329288);
  func_8028DE50(temp_s0, 3, &D_803292D8);
  temp_v0 = func_8021BA90();
  *((s32 *) (((char *) arg0) + 0x2A8)) = temp_v0;
  func_8021ACB0(temp_v0, 0xD9);
  math_mtx4Identity(sp30);
  sp60[0] = -200.0f;
  sp60[1] = -270.0f;
  sp60[2] = 100.0f;
  func_8021B4B0(*((s32 *) (((char *) arg0) + 0x2A8)), 0, sp30);
  func_8021B240(*((s32 *) (((char *) arg0) + 0x2A8)), 3, 0, 0);
  *((s32 *) (((char *) arg0) + 0x29C)) = (s32) (*((s32 *) (((char *) arg0) + 0x2A8)));
  return 1;
}

