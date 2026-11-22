void func_802D70FC(void *arg0, f32 arg1)
{
  f32 temp_fv0;
  *((f32 *) (((char *) arg0) + 0x29C)) = arg1;
  temp_fv0 = arg1 * 2;
  *((f32 *) (((char *) arg0) + 0x2A0)) = arg1;
  *((f32 *) (((char *) arg0) + 0x2A4)) = arg1;
  *((f32 *) (((char *) arg0) + 0x44)) = temp_fv0;
  *((f32 *) (((char *) arg0) + 0x48)) = temp_fv0;
  *((f32 *) (((char *) arg0) + 0x4C)) = temp_fv0;
}

