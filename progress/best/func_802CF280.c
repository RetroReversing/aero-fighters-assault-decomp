f32 func_803003A4();
extern f32 D_80342A18;
extern f32 D_80342A1C;
extern f32 D_80342A20;
void func_802CF280(f32 arg0, f32 arg1, f32 arg2, void *arg3)
{
  f32 __repair_fzero = 0.0f;
  f32 var_fv1;
  register f32 sp40;
  f32 sp4C;
  register f32 var_ft4;
  f32 var_fs1;
  register f32 var_ft5;
  f32 var_fa0;
  register f32 var_fa1;
  f32 var_fs3;
  f32 temp_fv0;
  f32 var_fs2;
  if (arg0 == 0.0f)
  {
    var_fs2 = 1.0f;
    var_fs3 = __repair_fzero;
  }
  else
  {
    var_fs3 = func_803003A4();
    var_fs2 = func_803003A4(arg0 + D_80342A18);
  }
  if (arg1 == 0.0f)
  {
    var_fs1 = __repair_fzero;
    var_fa1 = 1.0f;
  }
  else
  {
    var_fa1 = func_803003A4(((unsigned long long) arg1) + D_80342A1C);
    var_fs1 = func_803003A4(arg1);
  }
  if (arg2 == 0.0f)
  {
    var_fv1 = __repair_fzero;
    var_fa0 = 1.0f;
    var_ft4 = __repair_fzero;
    var_ft5 = var_fs1;
  }
  else
  {
    sp4C = var_fa1;
    sp40 = func_803003A4(arg2);
    temp_fv0 = func_803003A4(arg2 + D_80342A20);
    var_fv1 = sp40;
    var_fa0 = temp_fv0;
    var_ft4 = var_fv1 * var_fs1;
    var_ft5 = temp_fv0 * var_fs1;
  }
  *((f32 *) (((char *) arg3) + 0x30)) = __repair_fzero;
  *((f32 *) (((char *) arg3) + 0x34)) = __repair_fzero;
  *((f32 *) (((char *) arg3) + 0x18)) = var_fs1;
  *((f32 *) (((char *) arg3) + 0x38)) = __repair_fzero;
  *((f32 *) (((char *) arg3) + 0xC)) = __repair_fzero;
  *((f32 *) (((char *) arg3) + 0x1C)) = __repair_fzero;
  *((f32 *) (((char *) arg3) + 0x2C)) = __repair_fzero;
  *((f32 *) (((char *) arg3) + 0)) = (f32) ((var_fa0 * var_fs2) - (var_ft4 * var_fs3));
  *((f32 *) (((char *) arg3) + 0x10)) = (f32) ((-var_fa1) * var_fs3);
  *((f32 *) (((char *) arg3) + 0x20)) = (f32) ((var_fv1 * var_fs2) + (var_ft5 * var_fs3));
  *((f32 *) (((char *) arg3) + 4)) = (f32) ((var_fa0 * var_fs3) + (var_ft4 * var_fs2));
  *((f32 *) (((char *) arg3) + 0x14)) = (f32) (var_fa1 * var_fs2);
  *((f32 *) (((char *) arg3) + 0x24)) = (f32) ((var_fv1 * var_fs3) - (var_ft5 * var_fs2));
  *((f32 *) (((char *) arg3) + 8)) = (f32) ((-var_fv1) * var_fa1);
  *((f32 *) (((char *) arg3) + 0x28)) = (f32) (var_fa0 * var_fa1);
  *((f32 *) (((char *) arg3) + 0x3C)) = 1.0f;
}

