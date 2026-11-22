s32 math_mtx4Identity(void *);
s32 func_8022A0D0(void *, s32, s32, s32);
f32 func_8022AA40(f32);
f32 func_8022ADA8(f32, f32);
f32 func_8022AE1C(f32, f32);
s32 func_802D0154(void *, f32, s32);
f32 func_802D054C(f32, f32, f32);
extern f32 D_80342A54;
extern f32 D_80342A58;
extern f32 D_80342A5C;
void func_802CFC28(void *arg0, void *arg1, void *arg2)
{
  f32 var_ft5;
  f32 var_fv1;
  f32 sp64;
  f32 sp60;
  f32 sp5C;
  f32 temp_fv1;
  f32 sp30;
  register f32 temp_fv0;
  register f32 sp28;
  f32 sp68;
  f32 sp6C;
  f32 sp24;
  f32 sp20;
  f32 temp_ft0;
  f32 sp34;
  register f32 temp_fv1_2;
  register f32 sp2C;
  register f32 temp_fa0;
  register f32 temp_fa1;
  temp_fv0 = *((f32 *) (((char *) arg1) + 0x10));
  temp_fv1 = *((f32 *) (((char *) arg1) + 0x14));
  sp2C = func_8022AA40((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1));
  func_8022AE1C(-(*((f32 *) (((char *) arg1) + 0x10))), *((f32 *) (((char *) arg1) + 0x14)));
  func_8022AE1C(*((f32 *) (((char *) arg1) + 0x18)), sp2C);
  func_8022AE1C(-(*((f32 *) (((char *) arg1) + 8))), *((f32 *) (((char *) arg1) + 0x28)));
  sp64 = *((f32 *) (((char *) arg1) + 0x30));
  sp60 = *((f32 *) (((char *) arg1) + 0x34));
  sp5C = *((f32 *) (((char *) arg1) + 0x38));
  temp_fa1 = -((*((f32 *) (((char *) arg1) + 0x34))) - (*((f32 *) (((char *) arg2) + 0x34))));
  temp_ft0 = sp5C - (*((f32 *) (((char *) arg2) + 0x38)));
  temp_fa0 = (*((f32 *) (((char *) arg1) + 0x30))) - (*((f32 *) (((char *) arg2) + 0x30)));
  sp20 = temp_ft0;
  sp24 = temp_fa1;
  sp28 = temp_fa0;
  sp34 = func_802D054C(temp_fa0, temp_fa1, temp_ft0);
  temp_fv1_2 = func_8022ADA8(temp_fa0, temp_fa1);
  if ((sp24 == 0.0f) && (sp28 >= 0.0f))
  {
    var_ft5 = 0.0f;
  }
  else
    if (sp24 == 0.0f)
  {
    var_ft5 = D_80342A54;
  }
  else
  {
    sp30 = temp_fv1_2;
    var_ft5 = func_8022AE1C(sp28 / temp_fv1_2, sp24 / temp_fv1_2);
  }
  if ((temp_fv1_2 == 0.0f) && (sp20 >= 0.0f))
  {
    var_fv1 = D_80342A58;
  }
  else
    if (temp_fv1_2 == 0.0f)
  {
    var_fv1 = D_80342A5C;
 dummy_label_785561: ;
  }
  else
  {
    var_fv1 = -func_8022AE1C(sp20 / sp34, temp_fv1_2 / sp34);
    sp6C = var_ft5;
  }
  sp68 = var_fv1;
  sp6C = var_ft5;
  math_mtx4Identity(arg0);
  *((f32 *) (((char *) arg0) + 0x30)) = sp64;
  *((f32 *) (((char *) arg0) + 0x34)) = sp60;
  *((f32 *) (((char *) arg0) + 0x38)) = sp5C;
  func_802D0154(arg0, var_ft5, 0x7A);
  func_802D0154(arg0, var_fv1, 0x78);
  func_8022A0D0(arg0, 0, 0xC2C80000, 0x41700000);
  func_802D0154(arg0, -0.0872665f, 0x78);
}
