void func_803205B4(void *arg0, f32 arg1, f32 arg2, f32 arg3)
{
  f32 temp_fv0;
  f32 temp_fv1;
  *((f32 *) (((char *) arg0) + 0x44)) = arg1;
  *((f32 *) (((char *) arg0) + 0x48)) = arg2;
  temp_fv0 = 2 * arg3;
  *((f32 *) (((char *) arg0) + 0x4C)) = temp_fv0;
  *((f32 *) (((char *) arg0) + 0x13C)) = temp_fv0;
  temp_fv1 = arg3 * 100.0f;
  *((f32 *) (((char *) arg0) + 0x6C)) = temp_fv1;
  *((f32 *) (((char *) arg0) + 0x15C)) = temp_fv1 * 1.0f;
  *((f32 *) (((char *) arg0) + 0x134)) = (f32) (((long) 2.0f) * arg1);
  *((f32 *) (((char *) arg0) + 0x138)) = (f32) (2 * arg2);
}

