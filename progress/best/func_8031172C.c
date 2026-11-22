s32 func_8021ACB0(s32, s32);
s32 func_8021B4B0(s32, s32, s32 *);
s32 func_8021B838(s32, s32);
s32 func_8021BA90();
s32 func_8022A0D0(s32 *, s32, s32, s32);
s32 func_80231A24(s32 *, s32 *, s32 *, s32);
s32 func_802AA424(s32, s32, s32, s32);
f32 func_803096D8(s32, s32, s32);
s32 math_mtx4Identity(s32 *);
extern s32 D_8032B314;
extern s32 D_8032B328;
extern s32 D_8032B348;
extern s32 D_8032B354;
extern s32 D_8032B368;
extern s32 D_8032B388;
extern s32 D_8032B394;
extern s32 D_8032B3A8;
extern s32 D_8032B3C8;
extern s32 D_8032B3D4;
extern s32 D_8032B3E8;
extern s32 D_8032B408;
extern s32 D_8032B734;
void func_8031172C(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5, s32 arg6)
{
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 var_s3;
  void *var_s0;
  s32 sp3C;
  void *var_s0_2;
  void *var_s1;
  void *var_s1_2;
  temp_v0 = func_8021BA90();
  *((s32 *) (((char *) arg0) + 4)) = temp_v0;
  if (temp_v0 == 0xFFFF)
  {
    func_80231A24(&D_8032B314, &D_8032B328, &D_8032B348, 0x147);
  }
  func_8021ACB0(*((s32 *) (((char *) arg0) + 4)), arg6);
  func_8021B838(*((s32 *) (((char *) arg0) + 4)), 2);
  var_s3 = 0;
  var_s1 = arg1;
  if ((*((s32 *) (((char *) arg0) + 0x300))) > 0)
  {
    var_s0 = arg0;
    do
    {
      temp_v0_2 = func_8021BA90();
      *((s32 *) (((char *) var_s0) + 0x290)) = temp_v0_2;
      if (temp_v0_2 == 0xFFFF)
      {
        func_80231A24(&D_8032B354, &D_8032B368, &D_8032B388, 0x153);
      }
      func_8021ACB0(*((s32 *) (((char *) var_s0) + 0x290)), 0xC5);
      func_8021B838(*((s32 *) (((char *) var_s0) + 0x290)), 3);
      math_mtx4Identity(&sp3C);
      func_8022A0D0(&sp3C, *((s32 *) (((char *) var_s1) + 0)), *((s32 *) (((char *) var_s1) + 4)), *((s32 *) (((char *) var_s1) + 8)));
      func_8021B4B0(*((s32 *) (((char *) var_s0) + 0x290)), 0, &sp3C);
      *((f32 *) (((char *) var_s0) + 0x2AC)) = func_803096D8(0x43800000, *((s32 *) (((char *) arg0) + 0x14)), 1);
      *((f32 *) (((char *) var_s0) + 0x2C8)) = 5.0f;
      *((s32 *) (((char *) var_s0) + 0x2E4)) = func_802AA424(D_8032B734, *((s32 *) (((char *) var_s0) + 0x290)), 1, 1 ^ 0);
      var_s3 += 1;
      var_s0 = ((unsigned char *) var_s0) + 4;
      var_s1 = ((unsigned char *) var_s1) + 0xC;
    }
    while (var_s3 < (*((s32 *) (((char *) arg0) + 0x300))));
    var_s3 = 0;
  }
  temp_v0_3 = func_8021BA90();
  *((s32 *) (((char *) arg0) + 0x280)) = temp_v0_3;
  if (temp_v0_3 == 0xFFFF)
  {
    func_80231A24(&D_8032B394, &D_8032B3A8, &D_8032B3C8, 0x16A);
  }
  func_8021ACB0(*((s32 *) (((char *) arg0) + 0x280)), 0xC4);
  func_8021B838(*((s32 *) (((char *) arg0) + 0x280)), 3);
  math_mtx4Identity(&sp3C);
  func_8022A0D0(&sp3C, arg2, arg3, arg4);
  func_8021B4B0(*((s32 *) (((char *) arg0) + 0x280)), 0, &sp3C);
  *((f32 *) (((char *) arg0) + 0x284)) = func_803096D8(0x44000000, *((s32 *) (((char *) arg0) + 0x14)), 1);
  *((f32 *) (((char *) arg0) + 0x288)) = 5.0f;
  *((s32 *) (((char *) arg0) + 0x28C)) = func_802AA424(D_8032B734, *((s32 *) (((char *) arg0) + 0x280)), 1, 1);
  var_s1_2 = arg5;
  var_s0_2 = arg0;
  if ((*((s32 *) (((char *) arg0) + 0x370))) > 0)
  {
    do
    {
      temp_v0_4 = func_8021BA90();
      *((s32 *) (((char *) var_s0_2) + 0x304)) = temp_v0_4;
      if (temp_v0_4 == 0xFFFF)
      {
        func_80231A24(&D_8032B3D4, &D_8032B3E8, &D_8032B408, 0x182);
      }
      func_8021ACB0(*((s32 *) (((char *) var_s0_2) + 0x304)), 0xC6);
      func_8021B838(*((s32 *) (((char *) var_s0_2) + 0x304)), 3);
      math_mtx4Identity(&sp3C);
      func_8022A0D0(&sp3C, *((s32 *) (((char *) var_s1_2) + 0)), *((s32 *) (((char *) var_s1_2) + 4)), *((s32 *) (((char *) var_s1_2) + 8)));
      func_8021B4B0(*((s32 *) (((char *) var_s0_2) + 0x304)), 0, &sp3C);
      var_s3 += 1;
      var_s0_2 = ((unsigned char *) var_s0_2) + 4;
      var_s1_2 = ((unsigned char *) var_s1_2) + 0xC;
    }
    while (var_s3 < (*((s32 *) (((char *) arg0) + 0x370))));
  }
  *((s32 *) (((char *) arg0) + 0x378)) = 0x1E;
  *((void **) (((char *) arg0) + 0x37C)) = arg5;
}

