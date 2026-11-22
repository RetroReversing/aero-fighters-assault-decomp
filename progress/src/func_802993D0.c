s32 func_8021ACB0(s32, s32);
s32 func_8021B4B0(s32, s32, s32 *);
s32 func_8021B838(s32, s32);
s32 func_8021BA90();
s32 func_80224CA8(s32);
s32 func_8028D268(void *, s32, s32, void *, s32 *, s32);
s32 func_8028DB0C(void *, s32 *);
s32 func_8028DD58(void *, s32, s32, s32 *);
s32 math_mtx4Identity(s32 *);
extern s32 D_803243C4;
extern s32 D_803243E0;
extern s32 D_80324400;
extern s32 D_8032440C;
extern s32 D_8032445C;
s32 func_802993D0(void *arg0, s32 arg1, s32 arg2)
{
  void *temp_s0;
  f32 sp60[3];
  char sp30[0x30];
  s32 temp_v0;
  *((s32 *) (((char *) arg0) + 0x14)) = arg1;
  func_80224CA8(0x41);
  func_80224CA8(0x2E);
  func_80224CA8(0x22);
  func_80224CA8(0x20);
  temp_s0 = ((unsigned char *) arg0) + 0x70;
  func_8028D268(temp_s0, 7, 4, arg0, &D_8032445C, 4);
  func_8028DD58(temp_s0, 1, 7, &D_803243C4);
  func_8028DD58(temp_s0, 2, 8, &D_803243E0);
  func_8028DD58(temp_s0, 3, 3, &D_80324400);
  func_8028DB0C(temp_s0, &D_8032440C);
  temp_v0 = func_8021BA90();
  *((s32 *) (((char *) arg0) + 0x2A8)) = temp_v0;
  func_8021ACB0(temp_v0, 0x89);
  func_8021B838(*((s32 *) (((char *) arg0) + 0x2A8)), 2);
  math_mtx4Identity(sp30);
  sp60[0] = 0.0f;
  sp60[1] = 0.0f;
  sp60[2] = 500.0f;
  func_8021B4B0(*((s32 *) (((char *) arg0) + 0x2A8)), 0, sp30);
  return 1;
}

