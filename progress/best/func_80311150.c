s32 func_8021ACB0(s32, s32);
s32 func_8021B240(s32, s32, s32, s32);
s32 func_8021B4B0(s32, s32, s32 *);
s32 func_8021BA90();
s32 func_80224CA8(s32);
s32 func_8022A0D0(s32 *, s32, s32, s32);
s32 func_8028D268(void *, s32, s32, void *, s32 *, s32);
s32 func_8028DB0C(void *, s32 *);
s32 func_8028DD58(void *, s32, s32, s32 *);
s32 func_8028DE50(void *, s32, s32 *);
s32 func_802D0154(s32 *, s32, s32);
s32 math_mtx4Identity(s32 *);
extern s32 D_8032AC44;
extern s32 D_8032AC74;
extern s32 D_8032ACA0;
extern s32 D_8032ACD4;
extern s32 D_8032AD24;
extern s32 D_8032AD60;
s32 func_80311150(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_v0;
  s32 sp30;
  void *temp_s0;
  *((s32 *) (((char *) arg0) + 0x14)) = arg1;
  func_80224CA8(1);
  func_80224CA8(0x16);
  func_80224CA8(0x20);
  temp_s0 = ((unsigned char *) arg0) + 0x70;
  func_8028D268(temp_s0, 0, 3, arg0, &D_8032AD60, 4);
  func_8028DD58(temp_s0, 1, 0xC, &D_8032AC44);
  func_8028DD58(temp_s0, 2, 0xB, &D_8032AC74);
  func_8028DD58(temp_s0, 3, 0xD, &D_8032ACA0);
  func_8028DB0C(temp_s0, &D_8032ACD4);
  func_8028DE50(temp_s0, 5, &D_8032AD24);
  temp_v0 = func_8021BA90();
  *((s32 *) (((char *) arg0) + 0x2A8)) = temp_v0;
  func_8021ACB0(temp_v0, 0x11);
  math_mtx4Identity(&sp30);
  func_8022A0D0(&sp30, 0xC54B1800, 0x43AB199A, 0x41C80000);
  func_802D0154(&sp30, 0x4096CBE8, 0x7A);
  func_8021B4B0(*((s32 *) (((char *) arg0) + 0x2A8)), 0, &sp30);
  func_8021B240(*((s32 *) (((char *) arg0) + 0x2A8)), 3, 0, 0);
  *((s32 *) (((char *) arg0) + 0x29C)) = (s32) (*((s32 *) (((char *) arg0) + 0x2A8)));
  return 1;
}

