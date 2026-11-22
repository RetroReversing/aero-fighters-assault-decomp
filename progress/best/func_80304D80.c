void func_80304D80(f32 arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5)
{
  f32 sp48[4];
  f64 temp_fv1;
  f64 temp_fs0;
  f32 temp_fa1;
  f64 temp_fv0;
  f64 temp_ft5;
  f32 sp3C;
  f32 temp_fs4;
  f32 temp_fs5;
  register f32 temp_ft3;
  f64 temp_ft4;
  f32 temp_fs3;
  f32 temp_fs2;
  f32 sp40;
  sp40 = arg0 * arg0;
  temp_ft3 = sp40 * arg0;
  sp3C = temp_ft3;
  temp_fa1 = (f32) ((((0, 1.0)) - ((f64) 0.0f)) / ((long) 2.0));
  temp_fv0 = (f64) temp_fa1;
  temp_ft4 = 2.0 * temp_fv0;
  temp_ft5 = (f64) (temp_fa1 * arg0);
  temp_fs2 = (f32) ((((f64) ((-temp_fa1) * temp_ft3)) + (temp_ft4 * temp_fv1)) - temp_ft5);
  sp48[3] = temp_fs2;
  temp_fs0 = (f64) temp_ft3;
  temp_fs3 = (f32) ((((2.0 - temp_fv0) * temp_fs0) + ((temp_fv0 - 3.0) * temp_fv1)) + 1.0);
  sp48[2] = temp_fs3;
  ;
  sp48[1] = (f32) ((((temp_fv0 - 2.0) * temp_fs0) + ((3.0 - temp_ft4) * ((f64) sp40))) + temp_ft5);
  temp_fs5 = (temp_fa1 * temp_ft3) - (temp_fa1 * sp40);
  sp48[0] = temp_fs5;
  *((f32 *) (((char *) arg5) + 0)) = (f32) (((((*((f32 *) (((char *) arg1) + 0))) * temp_fs2) + ((*((f32 *) (((char *) arg2) + 0))) * temp_fs3)) + ((*((f32 *) (((char *) arg3) + 0))) * ((f32) ((((temp_fv0 - 2.0) * temp_fs0) + ((3.0 - temp_ft4) * ((f64) sp40))) + temp_ft5)))) + ((*((f32 *) (((char *) arg4) + 0))) * temp_fs5));
  *((f32 *) (((char *) arg5) + 4)) = (f32) (((((*((f32 *) (((char *) arg1) + 4))) * temp_fs2) + ((*((f32 *) (((char *) arg2) + 4))) * temp_fs3)) + ((*((f32 *) (((char *) arg3) + 4))) * ((f32) ((((temp_fv0 - 2.0) * temp_fs0) + ((3.0 - temp_ft4) * ((f64) sp40))) + temp_ft5)))) + ((*((f32 *) (((char *) arg4) + 4))) * temp_fs5));
  *((f32 *) (((char *) arg5) + 8)) = (f32) (((((*((f32 *) (((char *) arg1) + 8))) * temp_fs2) + ((*((f32 *) (((char *) arg2) + 8))) * temp_fs3)) + ((*((f32 *) (((char *) arg3) + 8))) * ((f32) ((((temp_fv0 - 2.0) * temp_fs0) + ((3.0 - temp_ft4) * ((f64) sp40))) + temp_ft5)))) + ((*((f32 *) (((char *) arg4) + 8))) * temp_fs5));
  *((f32 *) (((char *) arg5) + 0xC)) = (f32) (((((*((f32 *) (((char *) arg1) + 0xC))) * sp48[3]) + ((*((f32 *) (((char *) arg2) + 0xC))) * sp48[2])) + ((*((f32 *) (((char *) arg3) + 0xC))) * sp48[1])) + ((*((f32 *) (((char *) arg4) + 0xC))) * sp48[0]));
  *((f32 *) (((char *) arg5) + 0x10)) = (f32) (((((*((f32 *) (((char *) arg1) + 0x10))) * sp48[3]) + ((*((f32 *) (((char *) arg2) + 0x10))) * sp48[2])) + ((*((f32 *) (((char *) arg3) + 0x10))) * sp48[1])) + ((*((f32 *) (((char *) arg4) + 0x10))) * sp48[0]));
  *((f32 *) (((char *) arg5) + 0x14)) = (f32) (((((*((f32 *) (((char *) arg1) + 0x14))) * sp48[3]) + ((*((f32 *) (((char *) arg2) + 0x14))) * sp48[2])) + ((*((f32 *) (((char *) arg3) + 0x14))) * sp48[1])) + ((*((f32 *) (((char *) arg4) + 0x14))) * sp48[0]));
}

