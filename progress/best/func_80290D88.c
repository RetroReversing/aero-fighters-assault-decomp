s32 func_80231A24(s32 *);
s32 func_803021B8(s32, s32, s32, s32, s32);
s32 func_803025AC(s32, s32, s32);
s32 func_803025E4(s32, s32, s32);
s32 func_80305E10(s32, s32);
extern s32 D_80323758;
extern s32 D_8032AA74;
void func_80290D88(s32 arg0)
{
  s32 sp34;
  int *__repair_home0 = &arg0;
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v0_2;
  sp34 = D_8032AA74;
  func_80231A24(&D_80323758);
  temp_v0 = func_80305E10(0x1388, 0);
  temp_s0 = sp34 + 0x8F4;
  temp_a1 = (*__repair_home0) + 0x32C;
  sp34 = temp_a1;
  func_803021B8(temp_s0, temp_a1, 0x39, temp_v0, 0x20);
  func_803025AC(temp_s0, temp_a1, 0x3F800000);
  func_803025E4(temp_s0, temp_a1, 0x3F19999A);
  temp_v0_2 = func_80305E10(0x1388, 0);
  temp_a1_2 = (*__repair_home0) + 0x334;
  sp34 = temp_a1_2;
  func_803021B8(temp_s0, temp_a1_2, 0x29, temp_v0_2, 0x20);
  func_803025AC(temp_s0, temp_a1_2, 0x3F4CCCCD);
  func_803025E4(temp_s0, temp_a1_2, 0x3EB33333);
}

