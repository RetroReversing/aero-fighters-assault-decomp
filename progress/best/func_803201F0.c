void func_803201F0(void *arg0, void *arg1, void *arg2)
{
  f32 sp24;
  f32 temp_fa0;
  f32 sp0[2];
  f32 temp_fa1;
  f32 temp_ft4;
  f32 temp_fv1;
  temp_fa1 = *((f32 *) (((char *) arg1) + 8));
  temp_fv1 = *((f32 *) (((char *) arg1) + 4));
  temp_fa0 = *((f32 *) (((char *) arg2) + 8));
  temp_ft4 = *((f32 *) (((char *) arg2) + 4));
  sp0[1] = *((f32 *) (((char *) arg2) + 0));
  sp0[0] = *((f32 *) (((char *) arg1) + 0));
  *((f32 *) (((char *) arg0) + 0)) = (f32) ((temp_fv1 * temp_fa0) - (temp_fa1 * temp_ft4));
  *((f32 *) (((char *) arg0) + 4)) = (f32) ((temp_fa1 * sp0[1]) - (sp0[0] * temp_fa0));
  sp24 = (sp0[0] * temp_ft4) - (temp_fv1 * sp0[1]);
  *((f32 *) (((char *) arg0) + 8)) = sp24;
}

