s32 func_802AEDD4();
f32 func_80318340();
f32 func_80318348();
extern f32 D_8032AA74;
extern f32 D_8032AA7C;
extern u8 D_8032AA80;
extern f32 D_803465C0;
extern f32 D_803465C4;
extern f32 D_803465C8;
extern u8 D_80348B9A;
void func_80309964(void)
{
  f32 __repair_fzero = 0.0f;
  f32 sp40;
  f32 *__base_D_8032AA74;
  s32 sp30;
  f32 sp1C;
  f32 temp_fa1;
  f32 var_fv1;
  u8 var_v0;
  f32 sp24;
  var_v0 = D_8032AA80;
  do
  {
    if (1)
    {
      if (((s32) D_8032AA80) >= 7)
      {
        var_v0 = 6;
      }
      temp_fa1 = ((f32) (D_80348B9A - 1)) * ((0, 0.5f));
    }
    sp1C = ((f32) (var_v0 - 1)) * D_803465C0;
  }
  while (0);
  if (((s32) D_8032AA80) < 0xF)
  {
    s32 __repair_branch_sp30_0;
    sp40 = temp_fa1;
    __base_D_8032AA74 = &D_8032AA74;
    __repair_branch_sp30_0 = func_802AEDD4(temp_fa1, *__base_D_8032AA74, 1);
    sp24 = func_80318348(func_802AEDD4(*((s32 *) __base_D_8032AA74), 1e-45f));
    var_fv1 = ((func_80318340(__repair_branch_sp30_0) / sp24) - D_803465C4) * D_803465C8;
  }
  else
  {
    var_fv1 = 1.0f;
  }
  if (var_fv1 < 0.0f)
  {
    var_fv1 = __repair_fzero;
  }
  D_8032AA7C = ((double) ((var_fv1 * 20.0f) + (((0, sp1C * 40.f)) + (temp_fa1 * 40.0f)))) / 100.0f;
}

