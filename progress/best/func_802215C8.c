f32 func_8023CE00();
extern f64 D_80253940;
void func_802215C8(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9)
{
  f32 sp58;
  f32 sp2C;
  f32 __repair_sp2C_1;
  f32 temp_fv0_4;
  f32 sp4C;
  f32 sp48;
  f32 sp44;
  f32 __repair_sp44_1;
  f32 sp34;
  f32 sp30;
  f32 temp_ft1;
  f32 temp_fv0_5;
  f32 sp20;
  register f32 temp_ft4_2;
  f32 temp_fa1_2;
  f32 temp_fs0;
  register f32 temp_fs0_2;
  f32 temp_ft0;
  f32 sp54;
  f32 temp_ft2;
  f32 temp_ft3;
  register f32 temp_ft4;
  f64 temp_fv1_2;
  f64 temp_fv1_4;
  f32 temp_ft5_2;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 sp50;
  f64 temp_fv1_6;
  f32 temp_fv0_6;
  register f32 temp_fv1;
  register f32 var_fv1;
  f64 temp_fv1_5;
  f32 var_fv1_3;
  f32 sp24;
  f32 temp_fa1;
  f64 temp_fa1_3;
  f32 temp_ft5;
  f32 var_fv1_2;
  f64 temp_fv1_3;
  f64 var_fv0_3;
  f64 var_fv0_2;
  f64 var_fv0;
  f64 var_fv0_4;
  f64 var_fv0_5;
  f64 var_fv0_6;
  temp_ft5 = arg4 - arg1;
  temp_fv0 = arg5 - arg2;
  sp30 = temp_fv0;
  temp_fv1 = arg6 - arg3;
  sp34 = temp_ft5;
  sp50 = temp_fv1;
  sp2C = temp_fv1;
  temp_fv0_2 = func_8023CE00(arg0, ((temp_ft5 * temp_ft5) + (temp_fv0 * temp_fv0)) + (temp_fv1 * temp_fv1));
  if (temp_fv0_2 != 0.0f)
  {
    var_fv1 = (-1.0f) / temp_fv0_2;
  }
  else
  {
    var_fv1 = -255.0;
  }
  temp_ft5 = temp_ft5 * var_fv1;
  temp_ft2 = sp30 * var_fv1;
  temp_ft0 = sp2C * var_fv1;
  sp24 = arg8;
  sp58 = temp_ft5;
  sp20 = temp_ft2;
  sp54 = (s32) temp_ft2;
  temp_ft3 = sp20;
  sp50 = temp_ft0;
  sp20 = temp_ft0;
  temp_fv0_3 = (arg8 * temp_ft0) - (arg9 * temp_ft3);
  sp4C = temp_fv0_3;
  temp_fa1 = (arg9 * temp_ft5) - (arg7 * temp_ft0);
  sp48 = temp_fa1;
 temp_ft4 = (arg7 * temp_ft3) - (sp24 * temp_ft5); sp44 = temp_ft4; temp_fv0_4 = func_8023CE00(((temp_fv0_3 * temp_fv0_3) + (temp_fa1 * temp_fa1)) + (temp_ft4 * temp_ft4)); if (temp_fv0_4 != 0.0f) { var_fv1_2 = 1.0f / temp_fv0_4; } else { var_fv1_2 = 255.0f; } temp_fa1_2 = sp4C * var_fv1_2; temp_fs0_2 = sp48 * var_fv1_2; sp24 = sp54; temp_ft1 = sp44 * var_fv1_2; sp4C = temp_fa1_2; sp48 = temp_fs0_2; temp_ft4_2 = (sp54 * temp_ft1) - (sp50 * temp_fs0_2); __repair_sp44_1 = temp_ft1; sp34 = temp_ft4_2; temp_ft5_2 = (sp50 * temp_fa1_2) - (temp_ft5 * temp_ft1); sp30 = temp_ft5_2; temp_fv0_5 = (sp58 * temp_fs0_2) - (sp24 * temp_fa1_2); __repair_sp2C_1 = (sp58 * temp_fs0_2) - (sp24 * temp_fa1_2); temp_fv0_6 = func_8023CE00(((temp_ft4_2 * temp_ft4_2) + (temp_ft5_2 * temp_ft5_2)) + (temp_fv0_5 * temp_fv0_5)); if (temp_fv0_6 != 0.0f) { var_fv1_3 = 1.0f / temp_fv0_6; } else { var_fv1_3 = 255.0f; } arg7 = temp_ft4_2 * var_fv1_3; arg8 = temp_ft5_2 * var_fv1_3; temp_fa1_3 = ((f64) sp4C) * 128.0; arg9 = __repair_sp2C_1 * var_fv1_3; if (D_80253940 > temp_fa1_3) { var_fv0 = temp_fa1_3; } else { var_fv0 = D_80253940;
  }
  *((s8 *) (((char *) arg0) + 8)) = (s8) ((s32) var_fv0);
  temp_fv1_2 = ((f64) sp48) * 128.0;
  if (temp_fv1_2 < D_80253940)
  {
    var_fv0_2 = temp_fv1_2;
  }
  else
  {
    var_fv0_2 = D_80253940;
  }
  *((s8 *) (((char *) arg0) + 9)) = (s8) var_fv0_2;
  temp_fv1_3 = ((f64) __repair_sp44_1) * 128.0;
  if (temp_fv1_3 < D_80253940)
  {
    var_fv0_3 = temp_fv1_3;
  }
  else
  {
    var_fv0_3 = D_80253940;
  }
  *((s8 *) (((char *) arg0) + 0xA)) = (s8) ((s32) var_fv0_3);
  temp_fv1_4 = ((f64) arg7) * 128.0;
  if (temp_fv1_4 < D_80253940)
  {
    var_fv0_4 = temp_fv1_4;
  }
  else
  {
    var_fv0_4 = D_80253940;
  }
  *((s8 *) (((char *) arg0) + 0x18)) = (s8) ((s32) var_fv0_4);
  temp_fv1_5 = ((f64) arg8) * 128.0;
  if (D_80253940 > temp_fv1_5)
  {
    var_fv0_5 = temp_fv1_5;
  }
  else
  {
    var_fv0_5 = D_80253940;
  }
  *((s8 *) (((char *) arg0) + 0x19)) = (s8) ((s32) var_fv0_5);
  temp_fv1_6 = ((f64) arg9) * 128.0;
  if (D_80253940 > temp_fv1_6)
  {
    var_fv0_6 = temp_fv1_6;
  }
  else
  {
    var_fv0_6 = D_80253940;
  }
  do
  {
    *((s8 *) (((char *) arg0) + 0)) = 0;
    *((s8 *) (((char *) arg0) + 1)) = 0;
    *((s8 *) (((char *) arg0) + 2)) = 0;
    *((s8 *) (((char *) arg0) + 3)) = 0;
    *((s8 *) (((char *) arg0) + 4)) = 0;
    *((s8 *) (((char *) arg0) + 5)) = 0;
    *((s8 *) (((char *) arg0) + 6)) = 0;
    *((s8 *) (((char *) arg0) + 7)) = 0;
    *((s8 *) (((char *) arg0) + 0x10)) = 0;
    *((u8 *) (((char *) arg0) + 0x11)) = 0x80;
    *((s8 *) (((char *) arg0) + 0x12)) = 0;
    *((s8 *) (((char *) arg0) + 0x13)) = 0;
    *((s8 *) (((char *) arg0) + 0x14)) = 0;
    *((u8 *) (((char *) arg0) + 0x15)) = 0x80;
    *((s8 *) (((char *) arg0) + 0x16)) = 0;
    *((s8 *) (((char *) arg0) + 0x17)) = 0;
    *((s8 *) (((char *) arg0) + 0x1A)) = (s8) var_fv0_6;
  }
  while (0);
}
