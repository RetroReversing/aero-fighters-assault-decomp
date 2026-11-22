void func_8022A590(void *arg0, void *arg1, void *arg2)
{
  f32 temp_fa0;
  f32 temp_fv0;
  f32 temp_fv1;
  temp_fv0 = *((f32 *) (((char *) arg2) + 0));
  temp_fv1 = *((f32 *) (((char *) arg2) + 4));
  temp_fa0 = *((f32 *) (((char *) arg2) + 8));
  *((f32 *) (((char *) arg1) + 0)) = (f32) ((((temp_fv0 * 1.0f) * (*((f32 *) (((char *) arg0) + 0)))) + (temp_fv1 * (*((f32 *) (((char *) arg0) + 0x10))))) + ((*((f32 *) (((char *) arg0) + 0x20))) * temp_fa0));
  *((f32 *) (((char *) arg1) + 4)) = (f32) (((*((f32 *) (((char *) arg0) + 0x24))) * temp_fa0) + ((temp_fv1 * (*((f32 *) (((char *) arg0) + 0x14)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 4))))));
  *((f32 *) (((char *) arg1) + 8)) = (f32) (((temp_fv0 * (*((f32 *) (((char *) arg0) + 8)))) + (temp_fv1 * (*((f32 *) (((char *) arg0) + 0x18))))) + ((*((f32 *) (((char *) arg0) + 0x28))) * temp_fa0));
}

