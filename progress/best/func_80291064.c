s32 func_80231A24(s32 *);
s32 func_803021B8(s32, void *, s32, s32, s32);
s32 func_803025AC(s32, void *, s32);
s32 func_803025E4(s32, void *, f32);
s32 func_80305E10(s32, s32);
extern s32 D_803237B4;
extern s32 D_8032AA74;
extern f32 D_8033F0F4;
extern f32 D_8033F0F8;
void func_80291064(void *arg0)
{
  void *sp28;
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v0_2;
  void *temp_a1;
  void *temp_a1_2;
  s32 sp34;
  void *temp_a1_3;
  void *temp_a1_4;
  sp34 = D_8032AA74;
  func_80231A24(&D_803237B4);
  temp_v0 = func_80305E10(0x1388, 0);
  temp_a1 = ((unsigned char *) arg0) + 0x33C;
  sp28 = temp_a1;
  temp_s0 = sp34 + 0x8F4;
  func_803021B8(temp_s0, temp_a1, 0x35, temp_v0, 0);
  func_803025AC(temp_s0, temp_a1, 0x3F333333);
  func_803025E4(temp_s0, temp_a1, 0.6f);
  temp_v0_2 = func_80305E10(0x1388, 0);
  temp_a1_2 = ((unsigned char *) arg0) + 0x344;
  sp28 = temp_a1_2;
  func_803021B8(temp_s0, temp_a1_2, 0x39, temp_v0_2, 0x30);
  func_803025AC(temp_s0, temp_a1_2, 0x3F800000);
  func_803025E4(temp_s0, temp_a1_2, 0.75f);
  temp_a1_3 = ((unsigned char *) arg0) + 0x32C;
  *((f32 *) (((char *) arg0) + 0x350)) = (f32) D_8033F0F4;
  sp28 = temp_a1_3;
  func_803025AC(temp_s0, temp_a1_3, 0x3F800000);
  func_803025E4(temp_s0, temp_a1_3, *((f32 *) (((char *) arg0) + 0x350)));
  temp_a1_4 = ((unsigned char *) arg0) + 0x334;
  sp28 = temp_a1_4;
  func_803025AC(temp_s0, temp_a1_4, 0x3F800000);
  func_803025E4(temp_s0, temp_a1_4, (*((f32 *) (((char *) arg0) + 0x350))) - D_8033F0F8);
}

