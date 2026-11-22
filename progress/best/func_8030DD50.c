s32 func_803025AC(f32, f32, s32, s32, f32, s32);
s32 func_803025E4(s32, s32, f32);
extern f32 D_80346990;
void func_8030DD50(s32 arg0, volatile long long arg1, f32 arg2, f32 arg3, f32 arg4)
{
  int *__repair_home1 = &arg1;
  f32 __repair_arg4_var_fa0;
  f32 temp_fa1;
  int *__repair_home0 = &arg0;
  f32 sp20;
  s32 sp1C;
  f32 temp_fv0;
  f32 var_fa0;
  s32 temp_a0;
  f32 __repair_var_ft4_1;
  f32 __repair_var_fa0_1;
  f32 var_ft4;
  f32 var_fv1;
  temp_fv0 = var_fa0 * 2.0f;
  __repair_arg4_var_fa0 = arg4 * var_fa0;
  var_fa0 = arg2;
  temp_fa1 = arg3 + __repair_arg4_var_fa0;
  var_fv1 = temp_fv0;
  temp_a0 = (*__repair_home0) + 0x8F4;
  var_ft4 = arg3 + __repair_arg4_var_fa0;
  if (temp_fv0 < 0.0f)
  {
    var_fv1 = 0.0f;
  }
  else
  {
    __repair_var_fa0_1 = 1.0f;
    if (temp_fv0 > 1.0f)
    {
      var_fv1 = 1.0f;
    }
  }
  if ((arg3 + __repair_arg4_var_fa0) < D_80346990)
  {
    __repair_var_ft4_1 = D_80346990;
  }
  else
    if ((arg3 + __repair_arg4_var_fa0) > 2.0f)
  {
    var_ft4 = 2.0f;
  }
  sp1C = (s32) temp_a0;
  sp20 = var_ft4;
  do
  {
    func_803025AC(__repair_var_fa0_1, arg3 + __repair_arg4_var_fa0, temp_a0, *__repair_home1, var_fv1, *__repair_home0);
  }
  while (0);
  func_803025E4(temp_a0, *__repair_home1, var_ft4);
}

